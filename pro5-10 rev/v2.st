PROGRAM program0
  VAR
    start AT %IX100.0 : BOOL;
    stop AT %IX100.1 : BOOL;
    cncsen1 AT %IX100.2 : BOOL;
    cncsen2 AT %IX100.3 : BOOL;
    cncsen1B AT %IX100.4 : BOOL;
    cncsen2B AT %IX100.5 : BOOL;
    mchnsts AT %IX100.6 : BOOL;
    mchnsts2 AT %IX100.7 : BOOL;
    pshrsns1 AT %IX101.0 : BOOL;
    pshrsns2 AT %IX101.1 : BOOL;
    pshrsns3 AT %IX101.2 : BOOL;
    pshrsns4 AT %IX101.3 : BOOL;
    lids AT %QX100.0 : BOOL;
    lids0 AT %QX100.1 : BOOL;
    cnccon1 AT %QX100.2 : BOOL;
    cnccon2 AT %QX100.3 : BOOL;
    cnccon3 AT %QX100.4 : BOOL;
    cnccon4 AT %QX100.5 : BOOL;
    cnc4 AT %QX100.6 : BOOL;
    cnc1 AT %QX100.7 : BOOL;
    cnc2 AT %QX101.0 : BOOL;
    cnc3 AT %QX101.1 : BOOL;
    pshr1 AT %QX101.2 : BOOL;
    pshr2 AT %QX101.3 : BOOL;
    pshr3 AT %QX101.4 : BOOL;
    pshr4 AT %QX101.5 : BOOL;
    VIR1 AT %QX0.0 : BOOL;
    VIR2 AT %QX0.1 : BOOL;
    VIR3 AT %QX0.2 : BOOL;
    VIR4 AT %QX0.3 : BOOL;
  END_VAR
  VAR
    cncton1 : TON;
    cncton2 : TON;
  END_VAR

  IF cncsen2 AND stop THEN
    VIR1 := FALSE; (*reset*)
  END_IF;
  cnccon1 := NOT(VIR1) AND NOT(mchnsts) AND (cncsen2 AND stop OR start AND stop);
  cnccon2 := NOT(VIR1) AND NOT(mchnsts) AND (cncsen2 AND stop OR start AND stop);
  cncton1(IN := VIR2, PT := T#500ms);
  IF cncton1.Q THEN
    VIR1 := TRUE; (*set*)
  END_IF;
  IF cncton1.Q THEN
    VIR2 := FALSE; (*reset*)
  END_IF;
  IF cncsen1 THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  cnc4 := VIR1;
  cnc1 := VIR1;
  lids := TRUE;
  lids0 := TRUE;
  IF cncsen2B AND stop THEN
    VIR3 := FALSE; (*reset*)
  END_IF;
  cnccon3 := NOT(VIR3) AND NOT(mchnsts2) AND (cncsen2B AND stop OR start AND stop);
  cnccon4 := NOT(VIR3) AND NOT(mchnsts2) AND (cncsen2B AND stop OR start AND stop);
  cncton2(IN := VIR4, PT := T#500ms);
  IF cncton2.Q THEN
    VIR3 := TRUE; (*set*)
  END_IF;
  IF cncton2.Q THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  IF cncsen1B THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  cnc2 := VIR3;
  cnc3 := VIR3;
  pshr1 := pshrsns1;
  pshr2 := pshrsns2;
  pshr3 := pshrsns3;
  pshr4 := pshrsns4;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
