// State machine template
// Author: Fei

#include "stm8l15x.h"

/* state machine's state */
extern __IO StateMachineType StateMachine[];

int main(void)
{
	__IO StateTransitionInfoType next_state_info = {STATE_1 , 0 , 0};
	
	#ifdef TEST_FUNC
	next_state_info.next_state = TEST;
	#endif
	
	while(1)
	{
		/* State function main run-loop, state function can be find in state.h and state.c */
		
		if(next_state_info.next_state < NUM_STATE)
		{
			next_state_info = (*StateMachine[next_state_info.next_state].func)(next_state_info);
		}else
		{
			/* State error exception handler */
		}
		
	}

}
