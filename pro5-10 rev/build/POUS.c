void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





void PYTHON_EVAL_init__(PYTHON_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_EVAL_body__(PYTHON_EVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(0, data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_EVAL_body__() 





void PYTHON_POLL_init__(PYTHON_POLL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->STATE,0,retain)
  __INIT_VAR(data__->BUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->PREBUFFER,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->TRIGM1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TRIGGED,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_POLL_body__(PYTHON_POLL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __IL_DEFVAR_T __IL_DEFVAR;
  __IL_DEFVAR_T __IL_DEFVAR_BACK;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
extern void __PythonEvalFB(int, PYTHON_EVAL*);__PythonEvalFB(1,(PYTHON_EVAL*)(void*)data__);
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  return;
} // PYTHON_POLL_body__() 





void PYTHON_GEAR_init__(PYTHON_GEAR *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->N,0,retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CODE,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->ACK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RESULT,__STRING_LITERAL(0,""),retain)
  PYTHON_EVAL_init__(&data__->PY_EVAL,retain);
  __INIT_VAR(data__->COUNTER,0,retain)
  __INIT_VAR(data__->_TMP_ADD10_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ13_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_SEL15_OUT,0,retain)
  __INIT_VAR(data__->_TMP_AND7_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void PYTHON_GEAR_body__(PYTHON_GEAR *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_ADD10_OUT,,ADD__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->COUNTER,),
    (UINT)1));
  __SET_VAR(data__->,_TMP_EQ13_OUT,,EQ__BOOL__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (UINT)__GET_VAR(data__->N,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,)));
  __SET_VAR(data__->,_TMP_SEL15_OUT,,SEL__UINT__BOOL__UINT__UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (UINT)__GET_VAR(data__->_TMP_ADD10_OUT,),
    (UINT)0));
  __SET_VAR(data__->,COUNTER,,__GET_VAR(data__->_TMP_SEL15_OUT,));
  __SET_VAR(data__->,_TMP_AND7_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_VAR(data__->_TMP_EQ13_OUT,),
    (BOOL)__GET_VAR(data__->TRIG,)));
  __SET_VAR(data__->PY_EVAL.,TRIG,,__GET_VAR(data__->_TMP_AND7_OUT,));
  __SET_VAR(data__->PY_EVAL.,CODE,,__GET_VAR(data__->CODE,));
  PYTHON_EVAL_body__(&data__->PY_EVAL);
  __SET_VAR(data__->,ACK,,__GET_VAR(data__->PY_EVAL.ACK,));
  __SET_VAR(data__->,RESULT,,__GET_VAR(data__->PY_EVAL.RESULT,));

  goto __end;

__end:
  return;
} // PYTHON_GEAR_body__() 





static inline INT __PART1_MOVE__INT__INT1(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE77_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE77_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT2(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE8_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE8_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT3(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE12_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE12_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT4(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE16_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE16_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT5(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE20_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE20_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT6(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE29_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE29_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT7(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE69_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE69_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT8(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE40_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE40_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT9(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE44_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE44_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT10(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE48_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE48_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT11(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE52_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE52_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT12(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE61_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE61_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT13(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE139_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE139_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT14(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE186_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE186_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT15(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE110_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE110_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT16(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE152_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE152_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT17(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE114_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE114_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT18(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE157_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE157_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT19(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE199_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE199_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT20(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE161_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE161_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT21(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE118_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE118_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT22(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE122_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE122_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT23(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE165_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE165_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT24(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE169_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE169_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT25(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE131_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE131_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART1_MOVE__INT__INT26(BOOL EN,
  INT IN,
  PART1 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE178_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE178_ENO,,__TMP_ENO);
  return __res;
}

void PART1_init__(PART1 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->SENXYZ1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENXYZ2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENXYZ3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONVEYOR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONVEYOR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAP,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X,0,retain)
  __INIT_VAR(data__->SPX,0,retain)
  __INIT_VAR(data__->SPY,0,retain)
  __INIT_VAR(data__->SPZ,0,retain)
  __INIT_VAR(data__->DIGRED,0,retain)
  __INIT_VAR(data__->VIR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP4,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON9,retain);
  TON_init__(&data__->TON10,retain);
  TON_init__(&data__->TON11,retain);
  TON_init__(&data__->TON12,retain);
  TON_init__(&data__->TON13,retain);
  TON_init__(&data__->TON14,retain);
  TON_init__(&data__->TON15,retain);
  TON_init__(&data__->TON16,retain);
  TON_init__(&data__->TON17,retain);
  TON_init__(&data__->TON18,retain);
  TON_init__(&data__->TON19,retain);
  TOF_init__(&data__->TOF0,retain);
  __INIT_VAR(data__->_TMP_MOVE77_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE77_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE8_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE8_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE12_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE12_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE16_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE16_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE20_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE20_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE29_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE29_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE69_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE69_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE40_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE40_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE44_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE44_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE48_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE48_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE52_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE52_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE61_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE61_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE139_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE139_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE186_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE186_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE110_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE110_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE152_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE152_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE114_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE114_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE157_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE157_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE199_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE199_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE161_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE161_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE118_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE118_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE122_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE122_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE165_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE165_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE169_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE169_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE131_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE131_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE178_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE178_OUT,0,retain)
}

// Code part
void PART1_body__(PART1 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_MOVE77_OUT,,__PART1_MOVE__INT__INT1(
    (BOOL)(!(__GET_VAR(data__->STATE1,)) && (__GET_VAR(data__->SENXYZ1,) || __GET_VAR(data__->SENXYZ1,))),
    (INT)810,
    data__));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->_TMP_MOVE77_ENO,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONVEYOR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONVEYOR2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE77_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE77_OUT,));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONVEYOR1,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONVEYOR2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE8_OUT,,__PART1_MOVE__INT__INT2(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP1,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->_TMP_MOVE8_ENO,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->,_TMP_MOVE12_OUT,,__PART1_MOVE__INT__INT3(
    (BOOL)__GET_VAR(data__->TON3.Q,),
    (INT)730,
    data__));
  __SET_VAR(data__->,VIR1,,__GET_VAR(data__->_TMP_MOVE12_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE8_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE8_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE12_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE12_OUT,));
  };
  if (__GET_VAR(data__->SENXYZ1,)) {
    __SET_VAR(data__->,CONVEYOR1,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->VIR9,)) && __GET_VAR(data__->SENXYZ2,))) {
    __SET_VAR(data__->,CONVEYOR2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  __SET_VAR(data__->,_TMP_MOVE16_OUT,,__PART1_MOVE__INT__INT4(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->_TMP_MOVE16_ENO,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE20_OUT,,__PART1_MOVE__INT__INT5(
    (BOOL)__GET_VAR(data__->TON1.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE20_ENO,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENXYZ3,)) {
    __SET_VAR(data__->,CONVEYOR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE16_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE16_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE20_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE20_OUT,));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->VIR2,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->,_TMP_MOVE29_OUT,,__PART1_MOVE__INT__INT6(
    (BOOL)__GET_VAR(data__->TON2.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,STATE1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,STATE2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIRTUALGRAP1,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE29_OUT,));
  };
  if (__GET_VAR(data__->VIRTUALGRAP2,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIRTUALGRAP3,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIRTUALGRAP4,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE69_OUT,,__PART1_MOVE__INT__INT7(
    (BOOL)((__GET_VAR(data__->STATE2,) && __GET_VAR(data__->SENXYZ1,)) && __BOOL_LITERAL(TRUE)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->_TMP_MOVE69_ENO,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE69_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE69_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE40_OUT,,__PART1_MOVE__INT__INT8(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP2,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->_TMP_MOVE40_ENO,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  __SET_VAR(data__->,_TMP_MOVE44_OUT,,__PART1_MOVE__INT__INT9(
    (BOOL)__GET_VAR(data__->TON7.Q,),
    (INT)920,
    data__));
  __SET_VAR(data__->,VIR3,,__GET_VAR(data__->_TMP_MOVE44_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE40_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE40_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE44_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE44_OUT,));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  __SET_VAR(data__->,_TMP_MOVE48_OUT,,__PART1_MOVE__INT__INT10(
    (BOOL)__GET_VAR(data__->TON8.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->_TMP_MOVE48_ENO,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE52_OUT,,__PART1_MOVE__INT__INT11(
    (BOOL)__GET_VAR(data__->TON5.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE52_ENO,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE48_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE48_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE52_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE52_OUT,));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->VIR4,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_MOVE61_OUT,,__PART1_MOVE__INT__INT12(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,STATE2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,STATE3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE61_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE139_OUT,,__PART1_MOVE__INT__INT13(
    (BOOL)(__GET_VAR(data__->STATE3,) && __GET_VAR(data__->SENXYZ1,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->_TMP_MOVE139_ENO,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE186_OUT,,__PART1_MOVE__INT__INT14(
    (BOOL)(__GET_VAR(data__->STATE4,) && __GET_VAR(data__->SENXYZ1,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->_TMP_MOVE186_ENO,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON19);
  if (__GET_VAR(data__->TON19.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE139_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE139_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE186_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE186_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE110_OUT,,__PART1_MOVE__INT__INT15(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP3,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->_TMP_MOVE110_ENO,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON12);
  __SET_VAR(data__->,_TMP_MOVE152_OUT,,__PART1_MOVE__INT__INT16(
    (BOOL)__GET_VAR(data__->TON12.Q,),
    (INT)325,
    data__));
  __SET_VAR(data__->,_TMP_MOVE114_OUT,,__PART1_MOVE__INT__INT17(
    (BOOL)__GET_VAR(data__->_TMP_MOVE152_ENO,),
    (INT)730,
    data__));
  __SET_VAR(data__->,VIR5,,__GET_VAR(data__->_TMP_MOVE114_ENO,));
  __SET_VAR(data__->,_TMP_MOVE157_OUT,,__PART1_MOVE__INT__INT18(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP4,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->_TMP_MOVE157_ENO,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON17);
  __SET_VAR(data__->,_TMP_MOVE199_OUT,,__PART1_MOVE__INT__INT19(
    (BOOL)__GET_VAR(data__->TON17.Q,),
    (INT)325,
    data__));
  __SET_VAR(data__->,_TMP_MOVE161_OUT,,__PART1_MOVE__INT__INT20(
    (BOOL)__GET_VAR(data__->_TMP_MOVE199_ENO,),
    (INT)920,
    data__));
  __SET_VAR(data__->,VIR7,,__GET_VAR(data__->_TMP_MOVE161_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE110_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE110_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE157_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE157_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE152_ENO,)) {
    __SET_VAR(data__->,SPY,,__GET_VAR(data__->_TMP_MOVE152_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE199_ENO,)) {
    __SET_VAR(data__->,SPY,,__GET_VAR(data__->_TMP_MOVE199_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE114_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE114_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE161_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE161_OUT,));
  };
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->VIR5,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON13);
  __SET_VAR(data__->,_TMP_MOVE118_OUT,,__PART1_MOVE__INT__INT21(
    (BOOL)__GET_VAR(data__->TON13.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->_TMP_MOVE118_ENO,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE122_OUT,,__PART1_MOVE__INT__INT22(
    (BOOL)__GET_VAR(data__->TON10.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE122_ENO,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON18.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON18);
  __SET_VAR(data__->,_TMP_MOVE165_OUT,,__PART1_MOVE__INT__INT23(
    (BOOL)__GET_VAR(data__->TON18.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->_TMP_MOVE165_ENO,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,GRAP,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE169_OUT,,__PART1_MOVE__INT__INT24(
    (BOOL)__GET_VAR(data__->TON15.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE169_ENO,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE118_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE118_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE165_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE165_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE122_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE122_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE169_ENO,)) {
    __SET_VAR(data__->,SPZ,,__GET_VAR(data__->_TMP_MOVE169_OUT,));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->VIR6,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON11);
  __SET_VAR(data__->,_TMP_MOVE131_OUT,,__PART1_MOVE__INT__INT25(
    (BOOL)__GET_VAR(data__->TON11.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,STATE3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,STATE4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->VIR8,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 1200, 0, 0, 0, 0));
  TON_body__(&data__->TON16);
  __SET_VAR(data__->,_TMP_MOVE178_OUT,,__PART1_MOVE__INT__INT26(
    (BOOL)__GET_VAR(data__->TON16.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,STATE4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,STATE1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,CONVEYOR2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE131_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,SPX,,__GET_VAR(data__->_TMP_MOVE178_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,SPY,,__GET_VAR(data__->_TMP_MOVE131_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,SPY,,__GET_VAR(data__->_TMP_MOVE178_OUT,));
  };
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->_TMP_MOVE178_ENO,));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 3000, 0, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,VIR9,,__GET_VAR(data__->TOF0.Q,));

  goto __end;

__end:
  return;
} // PART1_body__() 





static inline INT __PART2_MOVE__INT__INT1(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE77_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE77_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT2(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE8_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE8_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT3(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE12_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE12_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT4(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE16_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE16_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT5(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE20_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE20_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT6(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE29_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE29_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT7(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE69_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE69_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT8(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE40_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE40_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT9(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE44_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE44_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT10(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE48_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE48_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT11(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE52_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE52_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT12(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE61_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE61_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT13(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE139_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE139_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT14(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE186_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE186_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT15(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE110_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE110_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT16(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE152_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE152_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT17(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE114_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE114_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT18(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE157_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE157_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT19(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE199_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE199_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT20(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE161_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE161_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT21(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE118_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE118_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT22(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE122_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE122_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT23(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE165_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE165_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT24(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE169_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE169_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT25(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE131_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE131_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PART2_MOVE__INT__INT26(BOOL EN,
  INT IN,
  PART2 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_MOVE178_ENO,);
  __res = MOVE__INT__INT(EN,
    &__TMP_ENO,
    IN);
  __SET_VAR(,data__->_TMP_MOVE178_ENO,,__TMP_ENO);
  return __res;
}

void PART2_init__(PART2 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->SENXYZ11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENXYZ22,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENXYZ33,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONVEYOR11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CONVEYOR22,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->GRAP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->X1,0,retain)
  __INIT_VAR(data__->SPX1,0,retain)
  __INIT_VAR(data__->SPY1,0,retain)
  __INIT_VAR(data__->SPZ1,0,retain)
  __INIT_VAR(data__->DIGRED1,0,retain)
  __INIT_VAR(data__->VIR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->STATE4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIRTUALGRAP4,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON6,retain);
  TON_init__(&data__->TON7,retain);
  TON_init__(&data__->TON8,retain);
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON9,retain);
  TON_init__(&data__->TON10,retain);
  TON_init__(&data__->TON11,retain);
  TON_init__(&data__->TON12,retain);
  TON_init__(&data__->TON13,retain);
  TON_init__(&data__->TON14,retain);
  TON_init__(&data__->TON15,retain);
  TON_init__(&data__->TON16,retain);
  TON_init__(&data__->TON17,retain);
  TON_init__(&data__->TON18,retain);
  TON_init__(&data__->TON19,retain);
  TOF_init__(&data__->TOF0,retain);
  __INIT_VAR(data__->_TMP_MOVE77_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE77_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE8_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE8_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE12_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE12_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE16_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE16_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE20_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE20_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE29_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE29_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE69_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE69_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE40_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE40_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE44_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE44_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE48_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE48_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE52_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE52_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE61_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE61_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE139_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE139_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE186_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE186_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE110_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE110_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE152_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE152_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE114_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE114_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE157_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE157_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE199_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE199_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE161_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE161_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE118_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE118_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE122_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE122_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE165_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE165_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE169_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE169_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE131_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE131_OUT,0,retain)
  __INIT_VAR(data__->_TMP_MOVE178_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_MOVE178_OUT,0,retain)
}

// Code part
void PART2_body__(PART2 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_MOVE77_OUT,,__PART2_MOVE__INT__INT1(
    (BOOL)(!(__GET_VAR(data__->STATE1,)) && (__GET_VAR(data__->SENXYZ11,) || __GET_VAR(data__->SENXYZ11,))),
    (INT)810,
    data__));
  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->_TMP_MOVE77_ENO,));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  if (__GET_VAR(data__->TON0.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONVEYOR11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_EXTERNAL(data__->START,)) {
    __SET_VAR(data__->,CONVEYOR22,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE77_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE77_OUT,));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONVEYOR11,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CONVEYOR22,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE8_OUT,,__PART2_MOVE__INT__INT2(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP1,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->_TMP_MOVE8_ENO,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->,_TMP_MOVE12_OUT,,__PART2_MOVE__INT__INT3(
    (BOOL)__GET_VAR(data__->TON3.Q,),
    (INT)730,
    data__));
  __SET_VAR(data__->,VIR1,,__GET_VAR(data__->_TMP_MOVE12_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE8_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE8_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE12_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE12_OUT,));
  };
  if (__GET_VAR(data__->SENXYZ11,)) {
    __SET_VAR(data__->,CONVEYOR11,,__BOOL_LITERAL(FALSE));
  };
  if ((!(__GET_VAR(data__->VIR9,)) && __GET_VAR(data__->SENXYZ22,))) {
    __SET_VAR(data__->,CONVEYOR22,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON4);
  __SET_VAR(data__->,_TMP_MOVE16_OUT,,__PART2_MOVE__INT__INT4(
    (BOOL)__GET_VAR(data__->TON4.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON1.,IN,,__GET_VAR(data__->_TMP_MOVE16_ENO,));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON1.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE20_OUT,,__PART2_MOVE__INT__INT5(
    (BOOL)__GET_VAR(data__->TON1.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE20_ENO,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENXYZ33,)) {
    __SET_VAR(data__->,CONVEYOR11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE16_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE16_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE20_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE20_OUT,));
  };
  __SET_VAR(data__->TON2.,IN,,__GET_VAR(data__->VIR2,));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->,_TMP_MOVE29_OUT,,__PART2_MOVE__INT__INT6(
    (BOOL)__GET_VAR(data__->TON2.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,STATE1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,STATE2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIRTUALGRAP1,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE29_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE29_OUT,));
  };
  if (__GET_VAR(data__->VIRTUALGRAP2,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIRTUALGRAP3,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIRTUALGRAP4,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE69_OUT,,__PART2_MOVE__INT__INT7(
    (BOOL)((__GET_VAR(data__->STATE2,) && __GET_VAR(data__->SENXYZ11,)) && __BOOL_LITERAL(TRUE)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON9.,IN,,__GET_VAR(data__->_TMP_MOVE69_ENO,));
  __SET_VAR(data__->TON9.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON9);
  if (__GET_VAR(data__->TON9.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE69_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE69_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE40_OUT,,__PART2_MOVE__INT__INT8(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP2,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON7.,IN,,__GET_VAR(data__->_TMP_MOVE40_ENO,));
  __SET_VAR(data__->TON7.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON7);
  __SET_VAR(data__->,_TMP_MOVE44_OUT,,__PART2_MOVE__INT__INT9(
    (BOOL)__GET_VAR(data__->TON7.Q,),
    (INT)920,
    data__));
  __SET_VAR(data__->,VIR3,,__GET_VAR(data__->_TMP_MOVE44_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE40_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE40_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE44_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE44_OUT,));
  };
  __SET_VAR(data__->TON8.,IN,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->TON8.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON8);
  __SET_VAR(data__->,_TMP_MOVE48_OUT,,__PART2_MOVE__INT__INT10(
    (BOOL)__GET_VAR(data__->TON8.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON5.,IN,,__GET_VAR(data__->_TMP_MOVE48_ENO,));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON5.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP2,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE52_OUT,,__PART2_MOVE__INT__INT11(
    (BOOL)__GET_VAR(data__->TON5.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE52_ENO,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE48_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE48_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE52_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE52_OUT,));
  };
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->VIR4,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_MOVE61_OUT,,__PART2_MOVE__INT__INT12(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,STATE2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,STATE3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE61_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE61_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE139_OUT,,__PART2_MOVE__INT__INT13(
    (BOOL)(__GET_VAR(data__->STATE3,) && __GET_VAR(data__->SENXYZ11,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON14.,IN,,__GET_VAR(data__->_TMP_MOVE139_ENO,));
  __SET_VAR(data__->TON14.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON14);
  if (__GET_VAR(data__->TON14.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP3,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_MOVE186_OUT,,__PART2_MOVE__INT__INT14(
    (BOOL)(__GET_VAR(data__->STATE4,) && __GET_VAR(data__->SENXYZ11,)),
    (INT)810,
    data__));
  __SET_VAR(data__->TON19.,IN,,__GET_VAR(data__->_TMP_MOVE186_ENO,));
  __SET_VAR(data__->TON19.,PT,,__time_to_timespec(1, 1300, 0, 0, 0, 0));
  TON_body__(&data__->TON19);
  if (__GET_VAR(data__->TON19.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP4,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE139_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE139_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE186_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE186_OUT,));
  };
  __SET_VAR(data__->,_TMP_MOVE110_OUT,,__PART2_MOVE__INT__INT15(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP3,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON12.,IN,,__GET_VAR(data__->_TMP_MOVE110_ENO,));
  __SET_VAR(data__->TON12.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON12);
  __SET_VAR(data__->,_TMP_MOVE152_OUT,,__PART2_MOVE__INT__INT16(
    (BOOL)__GET_VAR(data__->TON12.Q,),
    (INT)325,
    data__));
  __SET_VAR(data__->,_TMP_MOVE114_OUT,,__PART2_MOVE__INT__INT17(
    (BOOL)__GET_VAR(data__->_TMP_MOVE152_ENO,),
    (INT)730,
    data__));
  __SET_VAR(data__->,VIR5,,__GET_VAR(data__->_TMP_MOVE114_ENO,));
  __SET_VAR(data__->,_TMP_MOVE157_OUT,,__PART2_MOVE__INT__INT18(
    (BOOL)__GET_VAR(data__->VIRTUALGRAP4,),
    (INT)0,
    data__));
  __SET_VAR(data__->TON17.,IN,,__GET_VAR(data__->_TMP_MOVE157_ENO,));
  __SET_VAR(data__->TON17.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON17);
  __SET_VAR(data__->,_TMP_MOVE199_OUT,,__PART2_MOVE__INT__INT19(
    (BOOL)__GET_VAR(data__->TON17.Q,),
    (INT)325,
    data__));
  __SET_VAR(data__->,_TMP_MOVE161_OUT,,__PART2_MOVE__INT__INT20(
    (BOOL)__GET_VAR(data__->_TMP_MOVE199_ENO,),
    (INT)920,
    data__));
  __SET_VAR(data__->,VIR7,,__GET_VAR(data__->_TMP_MOVE161_ENO,));
  if (__GET_VAR(data__->_TMP_MOVE110_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE110_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE157_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE157_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE152_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE152_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE199_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE199_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE114_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE114_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE161_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE161_OUT,));
  };
  __SET_VAR(data__->TON13.,IN,,__GET_VAR(data__->VIR5,));
  __SET_VAR(data__->TON13.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON13);
  __SET_VAR(data__->,_TMP_MOVE118_OUT,,__PART2_MOVE__INT__INT21(
    (BOOL)__GET_VAR(data__->TON13.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON10.,IN,,__GET_VAR(data__->_TMP_MOVE118_ENO,));
  __SET_VAR(data__->TON10.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON10);
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON10.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE122_OUT,,__PART2_MOVE__INT__INT22(
    (BOOL)__GET_VAR(data__->TON10.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE122_ENO,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON18.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->TON18.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON18);
  __SET_VAR(data__->,_TMP_MOVE165_OUT,,__PART2_MOVE__INT__INT23(
    (BOOL)__GET_VAR(data__->TON18.Q,),
    (INT)550,
    data__));
  __SET_VAR(data__->TON15.,IN,,__GET_VAR(data__->_TMP_MOVE165_ENO,));
  __SET_VAR(data__->TON15.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON15);
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,GRAP1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON15.Q,)) {
    __SET_VAR(data__->,VIRTUALGRAP4,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_MOVE169_OUT,,__PART2_MOVE__INT__INT24(
    (BOOL)__GET_VAR(data__->TON15.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE169_ENO,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE118_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE118_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE165_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE165_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE122_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE122_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE169_ENO,)) {
    __SET_VAR(data__->,SPZ1,,__GET_VAR(data__->_TMP_MOVE169_OUT,));
  };
  __SET_VAR(data__->TON11.,IN,,__GET_VAR(data__->VIR6,));
  __SET_VAR(data__->TON11.,PT,,__time_to_timespec(1, 1000, 0, 0, 0, 0));
  TON_body__(&data__->TON11);
  __SET_VAR(data__->,_TMP_MOVE131_OUT,,__PART2_MOVE__INT__INT25(
    (BOOL)__GET_VAR(data__->TON11.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,STATE3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,STATE4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON16.,IN,,__GET_VAR(data__->VIR8,));
  __SET_VAR(data__->TON16.,PT,,__time_to_timespec(1, 1200, 0, 0, 0, 0));
  TON_body__(&data__->TON16);
  __SET_VAR(data__->,_TMP_MOVE178_OUT,,__PART2_MOVE__INT__INT26(
    (BOOL)__GET_VAR(data__->TON16.Q,),
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,STATE4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,STATE1,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,CONVEYOR22,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE131_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,SPX1,,__GET_VAR(data__->_TMP_MOVE178_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE131_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE131_OUT,));
  };
  if (__GET_VAR(data__->_TMP_MOVE178_ENO,)) {
    __SET_VAR(data__->,SPY1,,__GET_VAR(data__->_TMP_MOVE178_OUT,));
  };
  __SET_VAR(data__->TOF0.,IN,,__GET_VAR(data__->_TMP_MOVE178_ENO,));
  __SET_VAR(data__->TOF0.,PT,,__time_to_timespec(1, 3000, 0, 0, 0, 0));
  TOF_body__(&data__->TOF0);
  __SET_VAR(data__->,VIR9,,__GET_VAR(data__->TOF0.Q,));

  goto __end;

__end:
  return;
} // PART2_body__() 





void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,START,data__->START,retain)
  __INIT_EXTERNAL(BOOL,STOP,data__->STOP,retain)
  __INIT_VAR(data__->CNCSEN1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNCSEN2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNCSEN1B,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNCSEN2B,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCHNSTS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MCHNSTS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHRSNS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHRSNS2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHRSNS3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHRSNS4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENSOR1GREENLID,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENSOR2GREENBASE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENSOR1BLUELID,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENSOR2BLUEBASE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLMPSTS1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIDS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->LIDS0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNCCON1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNCCON2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNCCON3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNCCON4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNC4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNC1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNC2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CNC3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PSHR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPGREENLID,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPGREENBASE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPGREENRISE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPLIDBLUE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPBASEBLUE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CLAMPBLUERISE,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PICKER1Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PICKER1X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PICKER1G,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PICKER2Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PICKER2X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->PICKER2G,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR2,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR3,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR4,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR5,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR6,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR7,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR8,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR9,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR10,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR11,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->VIR12,__BOOL_LITERAL(FALSE),retain)
  TON_init__(&data__->CNCTON1,retain);
  TON_init__(&data__->CNCTON2,retain);
  TON_init__(&data__->CNCTON3,retain);
  TON_init__(&data__->CNCTON4,retain);
  TON_init__(&data__->CNCTON5,retain);
  TON_init__(&data__->CNCTON6,retain);
  TON_init__(&data__->CNCTON7,retain);
  TON_init__(&data__->CNCTON8,retain);
  TON_init__(&data__->CNCTON9,retain);
  TON_init__(&data__->CNCTON10,retain);
  TON_init__(&data__->CNCTON11,retain);
  TON_init__(&data__->CNCTON12,retain);
  TON_init__(&data__->CNCTON13,retain);
  TON_init__(&data__->CNCTON14,retain);
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  if ((__GET_VAR(data__->CNCSEN2,) && __GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,CNCCON1,,((!(__GET_VAR(data__->VIR1,)) && !(__GET_VAR(data__->MCHNSTS,))) && ((__GET_VAR(data__->CNCSEN2,) && __GET_EXTERNAL(data__->STOP,)) || (__GET_EXTERNAL(data__->START,) && __GET_EXTERNAL(data__->STOP,)))));
  __SET_VAR(data__->,CNCCON2,,((!(__GET_VAR(data__->VIR1,)) && !(__GET_VAR(data__->MCHNSTS,))) && ((__GET_VAR(data__->CNCSEN2,) && __GET_EXTERNAL(data__->STOP,)) || (__GET_EXTERNAL(data__->START,) && __GET_EXTERNAL(data__->STOP,)))));
  __SET_VAR(data__->CNCTON1.,IN,,__GET_VAR(data__->VIR2,));
  __SET_VAR(data__->CNCTON1.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->CNCTON1);
  if (__GET_VAR(data__->CNCTON1.Q,)) {
    __SET_VAR(data__->,VIR1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CNCTON1.Q,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCSEN1,)) {
    __SET_VAR(data__->,VIR2,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,CNC4,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->,CNC1,,__GET_VAR(data__->VIR1,));
  __SET_VAR(data__->,LIDS,,__BOOL_LITERAL(TRUE));
  __SET_VAR(data__->,LIDS0,,__BOOL_LITERAL(TRUE));
  if ((__GET_VAR(data__->CNCSEN2B,) && __GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,CNCCON3,,((!(__GET_VAR(data__->VIR3,)) && !(__GET_VAR(data__->MCHNSTS2,))) && ((__GET_VAR(data__->CNCSEN2B,) && __GET_EXTERNAL(data__->STOP,)) || (__GET_EXTERNAL(data__->START,) && __GET_EXTERNAL(data__->STOP,)))));
  __SET_VAR(data__->,CNCCON4,,((!(__GET_VAR(data__->VIR3,)) && !(__GET_VAR(data__->MCHNSTS2,))) && ((__GET_VAR(data__->CNCSEN2B,) && __GET_EXTERNAL(data__->STOP,)) || (__GET_EXTERNAL(data__->START,) && __GET_EXTERNAL(data__->STOP,)))));
  __SET_VAR(data__->CNCTON2.,IN,,__GET_VAR(data__->VIR4,));
  __SET_VAR(data__->CNCTON2.,PT,,__time_to_timespec(1, 500, 0, 0, 0, 0));
  TON_body__(&data__->CNCTON2);
  if (__GET_VAR(data__->CNCTON2.Q,)) {
    __SET_VAR(data__->,VIR3,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CNCTON2.Q,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCSEN1B,)) {
    __SET_VAR(data__->,VIR4,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,CNC2,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->,CNC3,,__GET_VAR(data__->VIR3,));
  __SET_VAR(data__->,PSHR1,,__GET_VAR(data__->PSHRSNS1,));
  __SET_VAR(data__->,PSHR2,,__GET_VAR(data__->PSHRSNS2,));
  __SET_VAR(data__->,PSHR3,,__GET_VAR(data__->PSHRSNS3,));
  __SET_VAR(data__->,PSHR4,,__GET_VAR(data__->PSHRSNS4,));
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,PICKER1G,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,PICKER1Z,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,PICKER1X,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMPGREENBASE,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMPGREENLID,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMPGREENRISE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENSOR2GREENBASE,)) {
    __SET_VAR(data__->,CLAMPGREENBASE,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENSOR2GREENBASE,)) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENSOR1GREENLID,)) {
    __SET_VAR(data__->,CLAMPGREENLID,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENSOR1GREENLID,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON3.,IN,,__GET_VAR(data__->VIR7,));
  __SET_VAR(data__->CNCTON3.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON3);
  if (__GET_VAR(data__->CNCTON3.Q,)) {
    __SET_VAR(data__->,PICKER1Z,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON4.,IN,,__GET_VAR(data__->CNCTON3.Q,));
  __SET_VAR(data__->CNCTON4.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON4);
  if (__GET_VAR(data__->CNCTON4.Q,)) {
    __SET_VAR(data__->,PICKER1G,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CNCTON4.Q,)) {
    __SET_VAR(data__->,PICKER1Z,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON4.Q,)) {
    __SET_VAR(data__->,CLAMPGREENLID,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON4.Q,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR5,)) {
    __SET_VAR(data__->,VIR7,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->CNCTON5.,IN,,__GET_VAR(data__->VIR5,));
  __SET_VAR(data__->CNCTON5.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON5);
  if (__GET_VAR(data__->CNCTON5.Q,)) {
    __SET_VAR(data__->,PICKER1X,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON6.,IN,,(__GET_VAR(data__->VIR8,) && __GET_VAR(data__->CNCTON5.Q,)));
  __SET_VAR(data__->CNCTON6.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON6);
  if (__GET_VAR(data__->CNCTON6.Q,)) {
    __SET_VAR(data__->,PICKER1Z,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON7.,IN,,__GET_VAR(data__->CNCTON6.Q,));
  __SET_VAR(data__->CNCTON7.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON7);
  if (__GET_VAR(data__->CNCTON7.Q,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,VIR5,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,VIR8,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,PICKER1G,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,PICKER1Z,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,CLAMPGREENBASE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR6,)) {
    __SET_VAR(data__->,CLAMPGREENRISE,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON8.,IN,,__GET_VAR(data__->VIR6,));
  __SET_VAR(data__->CNCTON8.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON8);
  if (__GET_VAR(data__->CNCTON8.Q,)) {
    __SET_VAR(data__->,PICKER1X,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON8.Q,)) {
    __SET_VAR(data__->,CLAMPGREENRISE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON8.Q,)) {
    __SET_VAR(data__->,VIR6,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,PICKER2G,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,PICKER2X,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,PICKER2Z,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMPBASEBLUE,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMPBLUERISE,,__BOOL_LITERAL(FALSE));
  };
  if (!(__GET_EXTERNAL(data__->STOP,))) {
    __SET_VAR(data__->,CLAMPLIDBLUE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->SENSOR2BLUEBASE,)) {
    __SET_VAR(data__->,CLAMPBASEBLUE,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENSOR2BLUEBASE,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENSOR1BLUELID,)) {
    __SET_VAR(data__->,CLAMPLIDBLUE,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->SENSOR1BLUELID,)) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON9.,IN,,__GET_VAR(data__->VIR11,));
  __SET_VAR(data__->CNCTON9.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON9);
  if (__GET_VAR(data__->CNCTON9.Q,)) {
    __SET_VAR(data__->,PICKER2Z,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON10.,IN,,__GET_VAR(data__->CNCTON9.Q,));
  __SET_VAR(data__->CNCTON10.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON10);
  if (__GET_VAR(data__->CNCTON10.Q,)) {
    __SET_VAR(data__->,PICKER2G,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->CNCTON10.Q,)) {
    __SET_VAR(data__->,PICKER2Z,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON10.Q,)) {
    __SET_VAR(data__->,CLAMPLIDBLUE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON10.Q,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR9,)) {
    __SET_VAR(data__->,VIR11,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->CNCTON11.,IN,,__GET_VAR(data__->VIR9,));
  __SET_VAR(data__->CNCTON11.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON11);
  if (__GET_VAR(data__->CNCTON11.Q,)) {
    __SET_VAR(data__->,PICKER2X,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON12.,IN,,(__GET_VAR(data__->VIR12,) && __GET_VAR(data__->CNCTON11.Q,)));
  __SET_VAR(data__->CNCTON12.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON12);
  if (__GET_VAR(data__->CNCTON12.Q,)) {
    __SET_VAR(data__->,PICKER2Z,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON13.,IN,,__GET_VAR(data__->CNCTON12.Q,));
  __SET_VAR(data__->CNCTON13.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON13);
  if (__GET_VAR(data__->CNCTON13.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,VIR9,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,VIR12,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,PICKER2G,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,PICKER2Z,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,CLAMPBASEBLUE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->VIR10,)) {
    __SET_VAR(data__->,CLAMPBLUERISE,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->CNCTON14.,IN,,__GET_VAR(data__->VIR10,));
  __SET_VAR(data__->CNCTON14.,PT,,__time_to_timespec(1, 0, 1, 0, 0, 0));
  TON_body__(&data__->CNCTON14);
  if (__GET_VAR(data__->CNCTON14.Q,)) {
    __SET_VAR(data__->,PICKER2X,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON14.Q,)) {
    __SET_VAR(data__->,CLAMPBLUERISE,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->CNCTON14.Q,)) {
    __SET_VAR(data__->,VIR10,,__BOOL_LITERAL(FALSE));
  };

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





