PROGRAM program0
  VAR
    start AT %IX100.0 : BOOL;
    stop AT %IX100.1 : BOOL;
    cncsen1 AT %IX100.2 : BOOL;
    cncsen2 AT %IX100.3 : BOOL;
    cncsen1B AT %IX100.4 : BOOL;
    cncsen2B AT %IX100.5 : BOOL;
    lids AT %QX100.0 : BOOL;
    cnccon1 AT %QX100.1 : BOOL;
    cnccon2 AT %QX100.2 : BOOL;
    cnccon3 AT %QX100.3 : BOOL;
    cnccon4 AT %QX100.4 : BOOL;
    VIR1 AT %QX0.0 : BOOL;
    VIR2 AT %QX0.1 : BOOL;
    VIR3 AT %QX0.2 : BOOL;
    VIR4 AT %QX0.3 : BOOL;
  END_VAR
  VAR
    cncton1 : TON;
    cncton2 : TON;
    R_TRIG1 : R_TRIG;
    R_TRIG2 : R_TRIG;
    R_TRIG3 : R_TRIG;
    R_TRIG4 : R_TRIG;
  END_VAR

  R_TRIG1(CLK := VIR1);
  cnccon1 := NOT(VIR1) AND (R_TRIG1.Q AND cncsen2 OR cnccon1 OR start) AND stop;
  R_TRIG2(CLK := VIR1);
  cnccon2 := NOT(VIR1) AND (R_TRIG2.Q AND cncsen2 OR cnccon1 OR start) AND stop;
  cncton1(IN := VIR2, PT := T#500ms);
  IF cncton1.Q THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF cncton1.Q THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  IF cncsen1 THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  lids := TRUE;
  R_TRIG3(CLK := VIR3);
  cnccon3 := NOT(VIR3) AND (R_TRIG3.Q AND cncsen2B OR cnccon3 OR start) AND stop;
  R_TRIG4(CLK := VIR3);
  cnccon4 := NOT(VIR3) AND (R_TRIG4.Q AND cncsen2B OR cnccon3 OR start) AND stop;
  cncton2(IN := VIR4, PT := T#500ms);
  IF cncton2.Q THEN
    VIR3 := TRUE; (*set*)
  END_IF;
  IF cncton2.Q THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  IF cncsen1B THEN
    VIR4 := TRUE; (*set*)
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
