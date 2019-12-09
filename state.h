// Configuration for the DRIFTs
// Author: Fei

// This file is used to define the different state in protocol

#include "stm8l15x.h"

#ifndef ___STATE_H___
#define ___STATE_H___

/*----------------- System global var ---------------------*/
// --------------------------------------------------------

typedef enum
{
	STATE_1,
	STATE_2,
	STATE_3,
	STATE_4,
	STATE_5,
	STATE_6,
	STATE_7,
	#ifdef TEST_FUNC
	TEST,
	#endif
	
	NUM_STATE // Store the totale number of state
	
} StateType;

// --------------------------------------------------------




/*--------------- Transition information -------------------*/
// --------------------------------------------------------

// A data structure for state transition to reduce global var
// The count and info is pretty useless here
// The purpose is to reserve room for passing infomration between state
// 
// It maybe useful if more data processing and change needed to dynamically allocate

typedef struct
{
	
	StateType next_state;
	uint8_t next_frame_count;
	uint8_t next_frame_info;
	
} StateTransitionInfoType;

// --------------------------------------------------------




/*------------- State and function pointer -----------------*/
// --------------------------------------------------------

typedef struct
{
	
	StateType State;	// store current state
	StateTransitionInfoType (*func)(StateTransitionInfoType); // fucntion pointer to the desired state
	
} StateMachineType;

// --------------------------------------------------------




/*----------------- Function Prototype ---------------------*/
// --------------------------------------------------------

StateTransitionInfoType STATE_1_func(StateTransitionInfoType);
StateTransitionInfoType STATE_2_func(StateTransitionInfoType);
StateTransitionInfoType STATE_3_func(StateTransitionInfoType);
StateTransitionInfoType STATE_4_func(StateTransitionInfoType);
StateTransitionInfoType STATE_5_func(StateTransitionInfoType);
StateTransitionInfoType STATE_6_func(StateTransitionInfoType);
StateTransitionInfoType STATE_7_func(StateTransitionInfoType);

#ifdef TEST_FUNC
StateTransitionInfoType TEST_func(StateTransitionInfoType);
#endif

// --------------------------------------------------------

#endif
	