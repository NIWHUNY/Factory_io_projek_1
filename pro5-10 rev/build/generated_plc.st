PROGRAM part1
  VAR_EXTERNAL
    start : BOOL;
    stop : BOOL;
  END_VAR
  VAR
    senxyz1 AT %IX102.1 : BOOL;
    senxyz2 AT %IX102.2 : BOOL;
    senxyz3 AT %IX102.3 : BOOL;
    conveyor1 AT %QX103.2 : BOOL;
    conveyor2 AT %QX103.3 : BOOL;
    grap AT %QX103.4 : BOOL;
    X AT %IW100 : INT;
    SPX AT %QW100 : INT;
    SPY AT %QW101 : INT;
    SPZ AT %QW102 : INT;
    DIGRED AT %QW103 : INT;
    VIR1 AT %QX1.4 : BOOL;
    VIR2 AT %QX1.5 : BOOL;
    VIR3 AT %QX1.6 : BOOL;
    VIR4 AT %QX1.7 : BOOL;
    VIR5 AT %QX2.0 : BOOL;
    VIR6 AT %QX2.1 : BOOL;
    VIR7 AT %QX2.2 : BOOL;
    VIR8 AT %QX2.3 : BOOL;
    VIR9 AT %QX2.4 : BOOL;
    State1 AT %QX2.5 : BOOL;
    State2 AT %QX2.6 : BOOL;
    State3 AT %QX2.7 : BOOL;
    State4 AT %QX3.0 : BOOL;
    Virtualgrap1 AT %QX3.1 : BOOL;
    Virtualgrap2 AT %QX3.2 : BOOL;
    Virtualgrap3 AT %QX3.3 : BOOL;
    Virtualgrap4 AT %QX3.4 : BOOL;
  END_VAR
  VAR
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    TON4 : TON;
    TON5 : TON;
    TON6 : TON;
    TON7 : TON;
    TON8 : TON;
    TON0 : TON;
    TON9 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    TON14 : TON;
    TON15 : TON;
    TON16 : TON;
    TON17 : TON;
    TON18 : TON;
    TON19 : TON;
    TOF0 : TOF;
    _TMP_MOVE77_ENO : BOOL;
    _TMP_MOVE77_OUT : INT;
    _TMP_MOVE8_ENO : BOOL;
    _TMP_MOVE8_OUT : INT;
    _TMP_MOVE12_ENO : BOOL;
    _TMP_MOVE12_OUT : INT;
    _TMP_MOVE16_ENO : BOOL;
    _TMP_MOVE16_OUT : INT;
    _TMP_MOVE20_ENO : BOOL;
    _TMP_MOVE20_OUT : INT;
    _TMP_MOVE29_ENO : BOOL;
    _TMP_MOVE29_OUT : INT;
    _TMP_MOVE69_ENO : BOOL;
    _TMP_MOVE69_OUT : INT;
    _TMP_MOVE40_ENO : BOOL;
    _TMP_MOVE40_OUT : INT;
    _TMP_MOVE44_ENO : BOOL;
    _TMP_MOVE44_OUT : INT;
    _TMP_MOVE48_ENO : BOOL;
    _TMP_MOVE48_OUT : INT;
    _TMP_MOVE52_ENO : BOOL;
    _TMP_MOVE52_OUT : INT;
    _TMP_MOVE61_ENO : BOOL;
    _TMP_MOVE61_OUT : INT;
    _TMP_MOVE139_ENO : BOOL;
    _TMP_MOVE139_OUT : INT;
    _TMP_MOVE186_ENO : BOOL;
    _TMP_MOVE186_OUT : INT;
    _TMP_MOVE110_ENO : BOOL;
    _TMP_MOVE110_OUT : INT;
    _TMP_MOVE152_ENO : BOOL;
    _TMP_MOVE152_OUT : INT;
    _TMP_MOVE114_ENO : BOOL;
    _TMP_MOVE114_OUT : INT;
    _TMP_MOVE157_ENO : BOOL;
    _TMP_MOVE157_OUT : INT;
    _TMP_MOVE199_ENO : BOOL;
    _TMP_MOVE199_OUT : INT;
    _TMP_MOVE161_ENO : BOOL;
    _TMP_MOVE161_OUT : INT;
    _TMP_MOVE118_ENO : BOOL;
    _TMP_MOVE118_OUT : INT;
    _TMP_MOVE122_ENO : BOOL;
    _TMP_MOVE122_OUT : INT;
    _TMP_MOVE165_ENO : BOOL;
    _TMP_MOVE165_OUT : INT;
    _TMP_MOVE169_ENO : BOOL;
    _TMP_MOVE169_OUT : INT;
    _TMP_MOVE131_ENO : BOOL;
    _TMP_MOVE131_OUT : INT;
    _TMP_MOVE178_ENO : BOOL;
    _TMP_MOVE178_OUT : INT;
  END_VAR

  _TMP_MOVE77_OUT := MOVE(EN := NOT(State1) AND (senxyz1 OR senxyz1), IN := 810, ENO => _TMP_MOVE77_ENO);
  TON0(IN := _TMP_MOVE77_ENO, PT := T#1300ms);
  IF TON0.Q THEN
    Virtualgrap1 := TRUE; (*set*)
  END_IF;
  IF start THEN
    conveyor1 := TRUE; (*set*)
  END_IF;
  IF start THEN
    conveyor2 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE77_ENO THEN
      SPZ := _TMP_MOVE77_OUT;
  END_IF;
  IF NOT(stop) THEN
    conveyor1 := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    conveyor2 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE8_OUT := MOVE(EN := Virtualgrap1, IN := 0, ENO => _TMP_MOVE8_ENO);
  TON3(IN := _TMP_MOVE8_ENO, PT := T#1000ms);
  _TMP_MOVE12_OUT := MOVE(EN := TON3.Q, IN := 730, ENO => _TMP_MOVE12_ENO);
  VIR1 := _TMP_MOVE12_ENO;
  IF _TMP_MOVE8_ENO THEN
      SPZ := _TMP_MOVE8_OUT;
  END_IF;
  IF _TMP_MOVE12_ENO THEN
      SPX := _TMP_MOVE12_OUT;
  END_IF;
  IF senxyz1 THEN
    conveyor1 := FALSE; (*reset*)
  END_IF;
  IF NOT(VIR9) AND senxyz2 THEN
    conveyor2 := FALSE; (*reset*)
  END_IF;
  TON4(IN := VIR1, PT := T#1000ms);
  _TMP_MOVE16_OUT := MOVE(EN := TON4.Q, IN := 550, ENO => _TMP_MOVE16_ENO);
  TON1(IN := _TMP_MOVE16_ENO, PT := T#1000ms);
  IF TON1.Q THEN
    grap := FALSE; (*reset*)
  END_IF;
  IF TON1.Q THEN
    Virtualgrap1 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE20_OUT := MOVE(EN := TON1.Q, IN := 0, ENO => _TMP_MOVE20_ENO);
  IF _TMP_MOVE20_ENO THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  IF senxyz3 THEN
    conveyor1 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE16_ENO THEN
      SPZ := _TMP_MOVE16_OUT;
  END_IF;
  IF _TMP_MOVE20_ENO THEN
      SPZ := _TMP_MOVE20_OUT;
  END_IF;
  TON2(IN := VIR2, PT := T#1000ms);
  _TMP_MOVE29_OUT := MOVE(EN := TON2.Q, IN := 0, ENO => _TMP_MOVE29_ENO);
  IF _TMP_MOVE29_ENO THEN
    VIR2 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE29_ENO THEN
    State1 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE29_ENO THEN
    State2 := TRUE; (*set*)
  END_IF;
  IF Virtualgrap1 THEN
    GRAP := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE29_ENO THEN
      SPX := _TMP_MOVE29_OUT;
  END_IF;
  IF Virtualgrap2 THEN
    GRAP := TRUE; (*set*)
  END_IF;
  IF Virtualgrap3 THEN
    GRAP := TRUE; (*set*)
  END_IF;
  IF Virtualgrap4 THEN
    GRAP := TRUE; (*set*)
  END_IF;
  _TMP_MOVE69_OUT := MOVE(EN := State2 AND senxyz1 AND TRUE, IN := 810, ENO => _TMP_MOVE69_ENO);
  TON9(IN := _TMP_MOVE69_ENO, PT := T#1300ms);
  IF TON9.Q THEN
    Virtualgrap2 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE69_ENO THEN
      SPZ := _TMP_MOVE69_OUT;
  END_IF;
  _TMP_MOVE40_OUT := MOVE(EN := Virtualgrap2, IN := 0, ENO => _TMP_MOVE40_ENO);
  TON7(IN := _TMP_MOVE40_ENO, PT := T#1000ms);
  _TMP_MOVE44_OUT := MOVE(EN := TON7.Q, IN := 920, ENO => _TMP_MOVE44_ENO);
  VIR3 := _TMP_MOVE44_ENO;
  IF _TMP_MOVE40_ENO THEN
      SPZ := _TMP_MOVE40_OUT;
  END_IF;
  IF _TMP_MOVE44_ENO THEN
      SPX := _TMP_MOVE44_OUT;
  END_IF;
  TON8(IN := VIR3, PT := T#1500ms);
  _TMP_MOVE48_OUT := MOVE(EN := TON8.Q, IN := 550, ENO => _TMP_MOVE48_ENO);
  TON5(IN := _TMP_MOVE48_ENO, PT := T#1000ms);
  IF TON5.Q THEN
    grap := FALSE; (*reset*)
  END_IF;
  IF TON5.Q THEN
    Virtualgrap2 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE52_OUT := MOVE(EN := TON5.Q, IN := 0, ENO => _TMP_MOVE52_ENO);
  IF _TMP_MOVE52_ENO THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE48_ENO THEN
      SPZ := _TMP_MOVE48_OUT;
  END_IF;
  IF _TMP_MOVE52_ENO THEN
      SPZ := _TMP_MOVE52_OUT;
  END_IF;
  TON6(IN := VIR4, PT := T#1000ms);
  _TMP_MOVE61_OUT := MOVE(EN := TON6.Q, IN := 0, ENO => _TMP_MOVE61_ENO);
  IF _TMP_MOVE61_ENO THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE61_ENO THEN
    State2 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE61_ENO THEN
    State3 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE61_ENO THEN
      SPX := _TMP_MOVE61_OUT;
  END_IF;
  _TMP_MOVE139_OUT := MOVE(EN := State3 AND senxyz1, IN := 810, ENO => _TMP_MOVE139_ENO);
  TON14(IN := _TMP_MOVE139_ENO, PT := T#1300ms);
  IF TON14.Q THEN
    Virtualgrap3 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE186_OUT := MOVE(EN := State4 AND senxyz1, IN := 810, ENO => _TMP_MOVE186_ENO);
  TON19(IN := _TMP_MOVE186_ENO, PT := T#1300ms);
  IF TON19.Q THEN
    Virtualgrap4 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE139_ENO THEN
      SPZ := _TMP_MOVE139_OUT;
  END_IF;
  IF _TMP_MOVE186_ENO THEN
      SPZ := _TMP_MOVE186_OUT;
  END_IF;
  _TMP_MOVE110_OUT := MOVE(EN := Virtualgrap3, IN := 0, ENO => _TMP_MOVE110_ENO);
  TON12(IN := _TMP_MOVE110_ENO, PT := T#1000ms);
  _TMP_MOVE152_OUT := MOVE(EN := TON12.Q, IN := 325, ENO => _TMP_MOVE152_ENO);
  _TMP_MOVE114_OUT := MOVE(EN := _TMP_MOVE152_ENO, IN := 730, ENO => _TMP_MOVE114_ENO);
  VIR5 := _TMP_MOVE114_ENO;
  _TMP_MOVE157_OUT := MOVE(EN := Virtualgrap4, IN := 0, ENO => _TMP_MOVE157_ENO);
  TON17(IN := _TMP_MOVE157_ENO, PT := T#1000ms);
  _TMP_MOVE199_OUT := MOVE(EN := TON17.Q, IN := 325, ENO => _TMP_MOVE199_ENO);
  _TMP_MOVE161_OUT := MOVE(EN := _TMP_MOVE199_ENO, IN := 920, ENO => _TMP_MOVE161_ENO);
  VIR7 := _TMP_MOVE161_ENO;
  IF _TMP_MOVE110_ENO THEN
      SPZ := _TMP_MOVE110_OUT;
  END_IF;
  IF _TMP_MOVE157_ENO THEN
      SPZ := _TMP_MOVE157_OUT;
  END_IF;
  IF _TMP_MOVE152_ENO THEN
      SPY := _TMP_MOVE152_OUT;
  END_IF;
  IF _TMP_MOVE199_ENO THEN
      SPY := _TMP_MOVE199_OUT;
  END_IF;
  IF _TMP_MOVE114_ENO THEN
      SPX := _TMP_MOVE114_OUT;
  END_IF;
  IF _TMP_MOVE161_ENO THEN
      SPX := _TMP_MOVE161_OUT;
  END_IF;
  TON13(IN := VIR5, PT := T#1000ms);
  _TMP_MOVE118_OUT := MOVE(EN := TON13.Q, IN := 550, ENO => _TMP_MOVE118_ENO);
  TON10(IN := _TMP_MOVE118_ENO, PT := T#1000ms);
  IF TON10.Q THEN
    grap := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    Virtualgrap3 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE122_OUT := MOVE(EN := TON10.Q, IN := 0, ENO => _TMP_MOVE122_ENO);
  IF _TMP_MOVE122_ENO THEN
    VIR6 := TRUE; (*set*)
  END_IF;
  TON18(IN := VIR7, PT := T#1500ms);
  _TMP_MOVE165_OUT := MOVE(EN := TON18.Q, IN := 550, ENO => _TMP_MOVE165_ENO);
  TON15(IN := _TMP_MOVE165_ENO, PT := T#1000ms);
  IF TON15.Q THEN
    grap := FALSE; (*reset*)
  END_IF;
  IF TON15.Q THEN
    Virtualgrap4 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE169_OUT := MOVE(EN := TON15.Q, IN := 0, ENO => _TMP_MOVE169_ENO);
  IF _TMP_MOVE169_ENO THEN
    VIR8 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE118_ENO THEN
      SPZ := _TMP_MOVE118_OUT;
  END_IF;
  IF _TMP_MOVE165_ENO THEN
      SPZ := _TMP_MOVE165_OUT;
  END_IF;
  IF _TMP_MOVE122_ENO THEN
      SPZ := _TMP_MOVE122_OUT;
  END_IF;
  IF _TMP_MOVE169_ENO THEN
      SPZ := _TMP_MOVE169_OUT;
  END_IF;
  TON11(IN := VIR6, PT := T#1000ms);
  _TMP_MOVE131_OUT := MOVE(EN := TON11.Q, IN := 0, ENO => _TMP_MOVE131_ENO);
  IF _TMP_MOVE131_ENO THEN
    VIR6 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE131_ENO THEN
    State3 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE131_ENO THEN
    State4 := TRUE; (*set*)
  END_IF;
  TON16(IN := VIR8, PT := T#1200ms);
  _TMP_MOVE178_OUT := MOVE(EN := TON16.Q, IN := 0, ENO => _TMP_MOVE178_ENO);
  IF _TMP_MOVE178_ENO THEN
    VIR8 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE178_ENO THEN
    State4 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE178_ENO THEN
    State1 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE178_ENO THEN
    conveyor2 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE131_ENO THEN
      SPX := _TMP_MOVE131_OUT;
  END_IF;
  IF _TMP_MOVE178_ENO THEN
      SPX := _TMP_MOVE178_OUT;
  END_IF;
  IF _TMP_MOVE131_ENO THEN
      SPY := _TMP_MOVE131_OUT;
  END_IF;
  IF _TMP_MOVE178_ENO THEN
      SPY := _TMP_MOVE178_OUT;
  END_IF;
  TOF0(IN := _TMP_MOVE178_ENO, PT := T#3000ms);
  VIR9 := TOF0.Q;
END_PROGRAM

PROGRAM part2
  VAR_EXTERNAL
    start : BOOL;
    stop : BOOL;
  END_VAR
  VAR
    senxyz11 AT %IX102.4 : BOOL;
    senxyz22 AT %IX102.5 : BOOL;
    senxyz33 AT %IX102.6 : BOOL;
    conveyor11 AT %QX103.5 : BOOL;
    conveyor22 AT %QX103.6 : BOOL;
    grap1 AT %QX103.7 : BOOL;
    X1 AT %IW101 : INT;
    SPX1 AT %QW104 : INT;
    SPY1 AT %QW105 : INT;
    SPZ1 AT %QW106 : INT;
    DIGRED1 AT %QW107 : INT;
    VIR1 AT %QX3.5 : BOOL;
    VIR2 AT %QX3.6 : BOOL;
    VIR3 AT %QX3.7 : BOOL;
    VIR4 AT %QX4.0 : BOOL;
    VIR5 AT %QX4.1 : BOOL;
    VIR6 AT %QX4.2 : BOOL;
    VIR7 AT %QX4.3 : BOOL;
    VIR8 AT %QX4.4 : BOOL;
    VIR9 AT %QX4.5 : BOOL;
    State1 AT %QX4.6 : BOOL;
    State2 AT %QX4.7 : BOOL;
    State3 AT %QX5.0 : BOOL;
    State4 AT %QX5.1 : BOOL;
    Virtualgrap1 AT %QX5.2 : BOOL;
    Virtualgrap2 AT %QX5.3 : BOOL;
    Virtualgrap3 AT %QX5.4 : BOOL;
    Virtualgrap4 AT %QX5.5 : BOOL;
  END_VAR
  VAR
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    TON4 : TON;
    TON5 : TON;
    TON6 : TON;
    TON7 : TON;
    TON8 : TON;
    TON0 : TON;
    TON9 : TON;
    TON10 : TON;
    TON11 : TON;
    TON12 : TON;
    TON13 : TON;
    TON14 : TON;
    TON15 : TON;
    TON16 : TON;
    TON17 : TON;
    TON18 : TON;
    TON19 : TON;
    TOF0 : TOF;
    _TMP_MOVE77_ENO : BOOL;
    _TMP_MOVE77_OUT : INT;
    _TMP_MOVE8_ENO : BOOL;
    _TMP_MOVE8_OUT : INT;
    _TMP_MOVE12_ENO : BOOL;
    _TMP_MOVE12_OUT : INT;
    _TMP_MOVE16_ENO : BOOL;
    _TMP_MOVE16_OUT : INT;
    _TMP_MOVE20_ENO : BOOL;
    _TMP_MOVE20_OUT : INT;
    _TMP_MOVE29_ENO : BOOL;
    _TMP_MOVE29_OUT : INT;
    _TMP_MOVE69_ENO : BOOL;
    _TMP_MOVE69_OUT : INT;
    _TMP_MOVE40_ENO : BOOL;
    _TMP_MOVE40_OUT : INT;
    _TMP_MOVE44_ENO : BOOL;
    _TMP_MOVE44_OUT : INT;
    _TMP_MOVE48_ENO : BOOL;
    _TMP_MOVE48_OUT : INT;
    _TMP_MOVE52_ENO : BOOL;
    _TMP_MOVE52_OUT : INT;
    _TMP_MOVE61_ENO : BOOL;
    _TMP_MOVE61_OUT : INT;
    _TMP_MOVE139_ENO : BOOL;
    _TMP_MOVE139_OUT : INT;
    _TMP_MOVE186_ENO : BOOL;
    _TMP_MOVE186_OUT : INT;
    _TMP_MOVE110_ENO : BOOL;
    _TMP_MOVE110_OUT : INT;
    _TMP_MOVE152_ENO : BOOL;
    _TMP_MOVE152_OUT : INT;
    _TMP_MOVE114_ENO : BOOL;
    _TMP_MOVE114_OUT : INT;
    _TMP_MOVE157_ENO : BOOL;
    _TMP_MOVE157_OUT : INT;
    _TMP_MOVE199_ENO : BOOL;
    _TMP_MOVE199_OUT : INT;
    _TMP_MOVE161_ENO : BOOL;
    _TMP_MOVE161_OUT : INT;
    _TMP_MOVE118_ENO : BOOL;
    _TMP_MOVE118_OUT : INT;
    _TMP_MOVE122_ENO : BOOL;
    _TMP_MOVE122_OUT : INT;
    _TMP_MOVE165_ENO : BOOL;
    _TMP_MOVE165_OUT : INT;
    _TMP_MOVE169_ENO : BOOL;
    _TMP_MOVE169_OUT : INT;
    _TMP_MOVE131_ENO : BOOL;
    _TMP_MOVE131_OUT : INT;
    _TMP_MOVE178_ENO : BOOL;
    _TMP_MOVE178_OUT : INT;
  END_VAR

  _TMP_MOVE77_OUT := MOVE(EN := NOT(State1) AND (senxyz11 OR senxyz11), IN := 810, ENO => _TMP_MOVE77_ENO);
  TON0(IN := _TMP_MOVE77_ENO, PT := T#1300ms);
  IF TON0.Q THEN
    Virtualgrap1 := TRUE; (*set*)
  END_IF;
  IF start THEN
    conveyor11 := TRUE; (*set*)
  END_IF;
  IF start THEN
    conveyor22 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE77_ENO THEN
      SPZ1 := _TMP_MOVE77_OUT;
  END_IF;
  IF NOT(stop) THEN
    conveyor11 := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    conveyor22 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE8_OUT := MOVE(EN := Virtualgrap1, IN := 0, ENO => _TMP_MOVE8_ENO);
  TON3(IN := _TMP_MOVE8_ENO, PT := T#1000ms);
  _TMP_MOVE12_OUT := MOVE(EN := TON3.Q, IN := 730, ENO => _TMP_MOVE12_ENO);
  VIR1 := _TMP_MOVE12_ENO;
  IF _TMP_MOVE8_ENO THEN
      SPZ1 := _TMP_MOVE8_OUT;
  END_IF;
  IF _TMP_MOVE12_ENO THEN
      SPX1 := _TMP_MOVE12_OUT;
  END_IF;
  IF senxyz11 THEN
    conveyor11 := FALSE; (*reset*)
  END_IF;
  IF NOT(VIR9) AND senxyz22 THEN
    conveyor22 := FALSE; (*reset*)
  END_IF;
  TON4(IN := VIR1, PT := T#1000ms);
  _TMP_MOVE16_OUT := MOVE(EN := TON4.Q, IN := 550, ENO => _TMP_MOVE16_ENO);
  TON1(IN := _TMP_MOVE16_ENO, PT := T#1000ms);
  IF TON1.Q THEN
    grap1 := FALSE; (*reset*)
  END_IF;
  IF TON1.Q THEN
    Virtualgrap1 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE20_OUT := MOVE(EN := TON1.Q, IN := 0, ENO => _TMP_MOVE20_ENO);
  IF _TMP_MOVE20_ENO THEN
    VIR2 := TRUE; (*set*)
  END_IF;
  IF senxyz33 THEN
    conveyor11 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE16_ENO THEN
      SPZ1 := _TMP_MOVE16_OUT;
  END_IF;
  IF _TMP_MOVE20_ENO THEN
      SPZ1 := _TMP_MOVE20_OUT;
  END_IF;
  TON2(IN := VIR2, PT := T#1000ms);
  _TMP_MOVE29_OUT := MOVE(EN := TON2.Q, IN := 0, ENO => _TMP_MOVE29_ENO);
  IF _TMP_MOVE29_ENO THEN
    VIR2 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE29_ENO THEN
    State1 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE29_ENO THEN
    State2 := TRUE; (*set*)
  END_IF;
  IF Virtualgrap1 THEN
    grap1 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE29_ENO THEN
      SPX1 := _TMP_MOVE29_OUT;
  END_IF;
  IF Virtualgrap2 THEN
    grap1 := TRUE; (*set*)
  END_IF;
  IF Virtualgrap3 THEN
    grap1 := TRUE; (*set*)
  END_IF;
  IF Virtualgrap4 THEN
    grap1 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE69_OUT := MOVE(EN := State2 AND senxyz11 AND TRUE, IN := 810, ENO => _TMP_MOVE69_ENO);
  TON9(IN := _TMP_MOVE69_ENO, PT := T#1300ms);
  IF TON9.Q THEN
    Virtualgrap2 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE69_ENO THEN
      SPZ1 := _TMP_MOVE69_OUT;
  END_IF;
  _TMP_MOVE40_OUT := MOVE(EN := Virtualgrap2, IN := 0, ENO => _TMP_MOVE40_ENO);
  TON7(IN := _TMP_MOVE40_ENO, PT := T#1000ms);
  _TMP_MOVE44_OUT := MOVE(EN := TON7.Q, IN := 920, ENO => _TMP_MOVE44_ENO);
  VIR3 := _TMP_MOVE44_ENO;
  IF _TMP_MOVE40_ENO THEN
      SPZ1 := _TMP_MOVE40_OUT;
  END_IF;
  IF _TMP_MOVE44_ENO THEN
      SPX1 := _TMP_MOVE44_OUT;
  END_IF;
  TON8(IN := VIR3, PT := T#1500ms);
  _TMP_MOVE48_OUT := MOVE(EN := TON8.Q, IN := 550, ENO => _TMP_MOVE48_ENO);
  TON5(IN := _TMP_MOVE48_ENO, PT := T#1000ms);
  IF TON5.Q THEN
    grap1 := FALSE; (*reset*)
  END_IF;
  IF TON5.Q THEN
    Virtualgrap2 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE52_OUT := MOVE(EN := TON5.Q, IN := 0, ENO => _TMP_MOVE52_ENO);
  IF _TMP_MOVE52_ENO THEN
    VIR4 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE48_ENO THEN
      SPZ1 := _TMP_MOVE48_OUT;
  END_IF;
  IF _TMP_MOVE52_ENO THEN
      SPZ1 := _TMP_MOVE52_OUT;
  END_IF;
  TON6(IN := VIR4, PT := T#1000ms);
  _TMP_MOVE61_OUT := MOVE(EN := TON6.Q, IN := 0, ENO => _TMP_MOVE61_ENO);
  IF _TMP_MOVE61_ENO THEN
    VIR4 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE61_ENO THEN
    State2 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE61_ENO THEN
    State3 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE61_ENO THEN
      SPX1 := _TMP_MOVE61_OUT;
  END_IF;
  _TMP_MOVE139_OUT := MOVE(EN := State3 AND senxyz11, IN := 810, ENO => _TMP_MOVE139_ENO);
  TON14(IN := _TMP_MOVE139_ENO, PT := T#1300ms);
  IF TON14.Q THEN
    Virtualgrap3 := TRUE; (*set*)
  END_IF;
  _TMP_MOVE186_OUT := MOVE(EN := State4 AND senxyz11, IN := 810, ENO => _TMP_MOVE186_ENO);
  TON19(IN := _TMP_MOVE186_ENO, PT := T#1300ms);
  IF TON19.Q THEN
    Virtualgrap4 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE139_ENO THEN
      SPZ1 := _TMP_MOVE139_OUT;
  END_IF;
  IF _TMP_MOVE186_ENO THEN
      SPZ1 := _TMP_MOVE186_OUT;
  END_IF;
  _TMP_MOVE110_OUT := MOVE(EN := Virtualgrap3, IN := 0, ENO => _TMP_MOVE110_ENO);
  TON12(IN := _TMP_MOVE110_ENO, PT := T#1000ms);
  _TMP_MOVE152_OUT := MOVE(EN := TON12.Q, IN := 325, ENO => _TMP_MOVE152_ENO);
  _TMP_MOVE114_OUT := MOVE(EN := _TMP_MOVE152_ENO, IN := 730, ENO => _TMP_MOVE114_ENO);
  VIR5 := _TMP_MOVE114_ENO;
  _TMP_MOVE157_OUT := MOVE(EN := Virtualgrap4, IN := 0, ENO => _TMP_MOVE157_ENO);
  TON17(IN := _TMP_MOVE157_ENO, PT := T#1000ms);
  _TMP_MOVE199_OUT := MOVE(EN := TON17.Q, IN := 325, ENO => _TMP_MOVE199_ENO);
  _TMP_MOVE161_OUT := MOVE(EN := _TMP_MOVE199_ENO, IN := 920, ENO => _TMP_MOVE161_ENO);
  VIR7 := _TMP_MOVE161_ENO;
  IF _TMP_MOVE110_ENO THEN
      SPZ1 := _TMP_MOVE110_OUT;
  END_IF;
  IF _TMP_MOVE157_ENO THEN
      SPZ1 := _TMP_MOVE157_OUT;
  END_IF;
  IF _TMP_MOVE152_ENO THEN
      SPY1 := _TMP_MOVE152_OUT;
  END_IF;
  IF _TMP_MOVE199_ENO THEN
      SPY1 := _TMP_MOVE199_OUT;
  END_IF;
  IF _TMP_MOVE114_ENO THEN
      SPX1 := _TMP_MOVE114_OUT;
  END_IF;
  IF _TMP_MOVE161_ENO THEN
      SPX1 := _TMP_MOVE161_OUT;
  END_IF;
  TON13(IN := VIR5, PT := T#1000ms);
  _TMP_MOVE118_OUT := MOVE(EN := TON13.Q, IN := 550, ENO => _TMP_MOVE118_ENO);
  TON10(IN := _TMP_MOVE118_ENO, PT := T#1000ms);
  IF TON10.Q THEN
    grap1 := FALSE; (*reset*)
  END_IF;
  IF TON10.Q THEN
    Virtualgrap3 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE122_OUT := MOVE(EN := TON10.Q, IN := 0, ENO => _TMP_MOVE122_ENO);
  IF _TMP_MOVE122_ENO THEN
    VIR6 := TRUE; (*set*)
  END_IF;
  TON18(IN := VIR7, PT := T#1500ms);
  _TMP_MOVE165_OUT := MOVE(EN := TON18.Q, IN := 550, ENO => _TMP_MOVE165_ENO);
  TON15(IN := _TMP_MOVE165_ENO, PT := T#1000ms);
  IF TON15.Q THEN
    grap1 := FALSE; (*reset*)
  END_IF;
  IF TON15.Q THEN
    Virtualgrap4 := FALSE; (*reset*)
  END_IF;
  _TMP_MOVE169_OUT := MOVE(EN := TON15.Q, IN := 0, ENO => _TMP_MOVE169_ENO);
  IF _TMP_MOVE169_ENO THEN
    VIR8 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE118_ENO THEN
      SPZ1 := _TMP_MOVE118_OUT;
  END_IF;
  IF _TMP_MOVE165_ENO THEN
      SPZ1 := _TMP_MOVE165_OUT;
  END_IF;
  IF _TMP_MOVE122_ENO THEN
      SPZ1 := _TMP_MOVE122_OUT;
  END_IF;
  IF _TMP_MOVE169_ENO THEN
      SPZ1 := _TMP_MOVE169_OUT;
  END_IF;
  TON11(IN := VIR6, PT := T#1000ms);
  _TMP_MOVE131_OUT := MOVE(EN := TON11.Q, IN := 0, ENO => _TMP_MOVE131_ENO);
  IF _TMP_MOVE131_ENO THEN
    VIR6 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE131_ENO THEN
    State3 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE131_ENO THEN
    State4 := TRUE; (*set*)
  END_IF;
  TON16(IN := VIR8, PT := T#1200ms);
  _TMP_MOVE178_OUT := MOVE(EN := TON16.Q, IN := 0, ENO => _TMP_MOVE178_ENO);
  IF _TMP_MOVE178_ENO THEN
    VIR8 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE178_ENO THEN
    State4 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE178_ENO THEN
    State1 := FALSE; (*reset*)
  END_IF;
  IF _TMP_MOVE178_ENO THEN
    conveyor22 := TRUE; (*set*)
  END_IF;
  IF _TMP_MOVE131_ENO THEN
      SPX1 := _TMP_MOVE131_OUT;
  END_IF;
  IF _TMP_MOVE178_ENO THEN
      SPX1 := _TMP_MOVE178_OUT;
  END_IF;
  IF _TMP_MOVE131_ENO THEN
      SPY1 := _TMP_MOVE131_OUT;
  END_IF;
  IF _TMP_MOVE178_ENO THEN
      SPY1 := _TMP_MOVE178_OUT;
  END_IF;
  TOF0(IN := _TMP_MOVE178_ENO, PT := T#3000ms);
  VIR9 := TOF0.Q;
END_PROGRAM

PROGRAM program0
  VAR_EXTERNAL
    start : BOOL;
    stop : BOOL;
  END_VAR
  VAR
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
    sensor2bluebase AT %IX101.7 : BOOL;
    clmpsts1 AT %IX102.0 : BOOL;
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
  IF NOT(stop) THEN
    picker1G := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    picker1z := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    picker1x := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    clampgreenbase := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    clampgreenlid := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
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
  IF NOT(stop) THEN
    picker2g := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    picker2x := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    picker2z := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    clampbaseblue := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    clampbluerise := FALSE; (*reset*)
  END_IF;
  IF NOT(stop) THEN
    clamplidblue := FALSE; (*reset*)
  END_IF;
  IF sensor2bluebase THEN
    clampbaseblue := TRUE; (*set*)
  END_IF;
  IF sensor2bluebase THEN
    VIR11 := TRUE; (*set*)
  END_IF;
  IF sensor1bluelid THEN
    clamplidblue := TRUE; (*set*)
  END_IF;
  IF sensor1bluelid THEN
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
    VAR_GLOBAL
      start AT %IX100.0 : BOOL;
      stop AT %IX100.1 : BOOL;
    END_VAR
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task1(INTERVAL := T#20ms,PRIORITY := 0);
    TASK task2(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
    PROGRAM instance1 WITH task1 : part1;
    PROGRAM instance2 WITH task2 : part2;
  END_RESOURCE
END_CONFIGURATION
