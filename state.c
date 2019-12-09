// Author: feicccccccc

// This file is used to define the different state function in protocol

#include "stm8l15x.h"


/*------------------- State Machine -----------------------*/
// --------------------------------------------------------

__IO StateMachineType StateMachine[] = 
{
{STATE_1, 		STATE_1_func},
{STATE_2, 		STATE_2_func},
{STATE_3,		STATE_3_func},
{STATE_4,		STATE_4_func},
{STATE_5,		STATE_5_func},
{STATE_6,		STATE_6_func},
{STATE_7,		STATE_7_func}
#ifdef TEST_FUNC
,
{TEST,	TEST_func}
#endif
};

// --------------------------------------------------------




StateTransitionInfoType STATE_1_func(StateTransitionInfoType input_info)
{	
	input_info.next_state = STATE_1;
	input_info.next_frame_count = 0;
	input_info.next_frame_info = 0;
	return input_info;
}

StateTransitionInfoType STATE_2_func(StateTransitionInfoType input_info)
{	
	input_info.next_state = STATE_2;
	input_info.next_frame_count = 0;
	input_info.next_frame_info = 0;
	return input_info;
}

StateTransitionInfoType STATE_3_func(StateTransitionInfoType input_info)
{
	input_info.next_state = STATE_3;
	input_info.next_frame_count = FRAME_PREAMBLE_COUNT;
	input_info.next_frame_info = 0;
	return input_info;
}

StateTransitionInfoType STATE_4_func(StateTransitionInfoType input_info)
{
	input_info.next_state = STATE_4;
	input_info.next_frame_count = FRAME_PREAMBLE_COUNT;
	input_info.next_frame_info = 0;
	return input_info;
}

StateTransitionInfoType STATE_5_func(StateTransitionInfoType input_info)
{
	input_info.next_state = STATE_5;
	input_info.next_frame_count = FRAME_READ_COUNT;
	input_info.next_frame_info = addr_cache;
	return input_info;
}

StateTransitionInfoType STATE_6_func(StateTransitionInfoType input_info)
{
	input_info.next_state = STATE_6;
	input_info.next_frame_count = 0;
	input_info.next_frame_info = 0;
	return input_info;
}

StateTransitionInfoType STATE_7_func(StateTransitionInfoType input_info)
{
	input_info.next_state = STATE_7;
	input_info.next_frame_count = 0;
	input_info.next_frame_info = 0;
	return input_info;
}

#ifdef TEST_FUNC

StateTransitionInfoType TEST_func(StateTransitionInfoType input_info)
{
}

#endif
