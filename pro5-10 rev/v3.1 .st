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
    sensor1greenlid AT %IX101.4 : BOOL;
    sensor2greenbase AT %IX101.5 : BOOL;
    sensor1bluelid AT %IX101.6 : BOOL;
    sensor1bluebase AT %IX101.7 : BOOL;
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
    clampgreenlid AT %QX101.6 : BOOL;
    clampgreenbase AT %QX101.7 : BOOL;
    clampgreenrise AT %QX102.0 : BOOL;
    clamplidblue AT %QX102.1 : BOOL;
    clampbaseblue AT %QX102.2 : BOOL;
    clampbluerise AT %QX102.3 : BOOL;
    picker1z AT %QX102.4 : BOOL;
    picker1x AT %QX102.5 : BOOL;
    picker1G AT %QX102.6 : BOOL;
    picker2z AT %QX102.7 : BOOL;
    picker2x AT %QX103.0 : BOOL;
    picker2g AT %QX103.1 : BOOL;
    VIR1 AT %QX0.0 : BOOL;
    VIR2 AT %QX0.1 : BOOL;
    VIR3 AT %QX0.2 : BOOL;
    VIR4 AT %QX0.3 : BOOL;
    VIR5 AT %QX0.4 : BOOL;
    VIR6 AT %QX0.5 : BOOL;
    VIR7 AT %QX0.6 : BOOL;
    VIR8 AT %QX0.7 : BOOL;
    VIR9 AT %QX1.0 : BOOL;
    VIR10 AT %QX1.1 : BOOL;
    VIR11 AT %QX1.2 : BOOL;
    VIR12 AT %QX1.3 : BOOL;
  END_VAR
  VAR
    cncton1 : TON;
    cncton2 : TON;
    cncton3 : TON;
    cncton4 : TON;
    cncton5 : TON;
    cncton6 : TON;
    cncton7 : TON;
    cncton8 : TON;
    cncton9 : TON;
    cncton10 : TON;
    cncton11 : TON;
    cncton12 : TON;
    cncton13 : TON;
    cncton14 : TON;
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
  IF stop THEN
    picker1G := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    picker1z := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    picker1x := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    clampgreenbase := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    clampgreenlid := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    clampgreenrise := FALSE; (*reset*)
  END_IF;
  IF sensor2greenbase THEN
    clampgreenbase := TRUE; (*set*)
  END_IF;
  IF sensor2greenbase THEN
    VIR7 := TRUE; (*set*)
  END_IF;
  IF sensor1greenlid THEN
    clampgreenlid := TRUE; (*set*)
  END_IF;
  IF sensor1greenlid THEN
    VIR8 := TRUE; (*set*)
  END_IF;
  cncton3(IN := VIR7, PT := T#1s);
  IF cncton3.Q THEN
    picker1z := TRUE; (*set*)
  END_IF;
  cncton4(IN := cncton3.Q, PT := T#1s);
  IF cncton4.Q THEN
    picker1G := TRUE; (*set*)
  END_IF;
  IF cncton4.Q THEN
    picker1z := FALSE; (*reset*)
  END_IF;
  IF cncton4.Q THEN
    clampgreenlid := FALSE; (*reset*)
  END_IF;
  IF cncton4.Q THEN
    VIR5 := TRUE; (*set*)
  END_IF;
  IF VIR5 THEN
    VIR7 := FALSE; (*reset*)
  END_IF;
  cncton5(IN := VIR5, PT := T#1s);
  IF cncton5.Q THEN
    picker1x := TRUE; (*set*)
  END_IF;
  cncton6(IN := VIR8 AND cncton5.Q, PT := T#1s);
  IF cncton6.Q THEN
    picker1z := TRUE; (*set*)
  END_IF;
  cncton7(IN := cncton6.Q, PT := T#1s);
  IF cncton7.Q THEN
    VIR6 := TRUE; (*set*)
  END_IF;
  IF VIR6 THEN
    VIR5 := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    VIR8 := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    picker1G := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    picker1z := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    clampgreenbase := FALSE; (*reset*)
  END_IF;
  IF VIR6 THEN
    clampgreenrise := TRUE; (*set*)
  END_IF;
  cncton8(IN := VIR6, PT := T#1s);
  IF cncton8.Q THEN
    picker1x := FALSE; (*reset*)
  END_IF;
  IF cncton8.Q THEN
    clampgreenrise := FALSE; (*reset*)
  END_IF;
  IF cncton8.Q THEN
    VIR6 := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    picker2g := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    picker2x := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    picker2z := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    clampbaseblue := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    clampbluerise := FALSE; (*reset*)
  END_IF;
  IF stop THEN
    clamplidblue := FALSE; (*reset*)
  END_IF;
  IF sensor1greenlid THEN
    clampbaseblue := TRUE; (*set*)
  END_IF;
  IF sensor1greenlid THEN
    VIR11 := TRUE; (*set*)
  END_IF;
  IF sensor2greenbase THEN
    clamplidblue := TRUE; (*set*)
  END_IF;
  IF sensor2greenbase THEN
    VIR12 := TRUE; (*set*)
  END_IF;
  cncton9(IN := VIR11, PT := T#1s);
  IF cncton9.Q THEN
    picker2z := TRUE; (*set*)
  END_IF;
  cncton10(IN := cncton9.Q, PT := T#1s);
  IF cncton10.Q THEN
    picker2g := TRUE; (*set*)
  END_IF;
  IF cncton10.Q THEN
    picker2z := FALSE; (*reset*)
  END_IF;
  IF cncton10.Q THEN
    clamplidblue := FALSE; (*reset*)
  END_IF;
  IF cncton10.Q THEN
    VIR9 := TRUE; (*set*)
  END_IF;
  IF VIR9 THEN
    VIR11 := FALSE; (*reset*)
  END_IF;
  cncton11(IN := VIR9, PT := T#1s);
  IF cncton11.Q THEN
    picker2x := TRUE; (*set*)
  END_IF;
  cncton12(IN := VIR12 AND cncton11.Q, PT := T#1s);
  IF cncton12.Q THEN
    picker2z := TRUE; (*set*)
  END_IF;
  cncton13(IN := cncton12.Q, PT := T#1s);
  IF cncton13.Q THEN
    VIR10 := TRUE; (*set*)
  END_IF;
  IF VIR10 THEN
    VIR9 := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    VIR12 := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    picker2g := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    picker2z := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    clampbaseblue := FALSE; (*reset*)
  END_IF;
  IF VIR10 THEN
    clampbluerise := TRUE; (*set*)
  END_IF;
  cncton14(IN := VIR10, PT := T#1s);
  IF cncton14.Q THEN
    picker2x := FALSE; (*reset*)
  END_IF;
  IF cncton14.Q THEN
    clampbluerise := FALSE; (*reset*)
  END_IF;
  IF cncton14.Q THEN
    VIR10 := FALSE; (*reset*)
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION
