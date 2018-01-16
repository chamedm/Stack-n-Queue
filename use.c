/*
 ============================================================================
 Name        : T5_PilasyColas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stackqueue.h"

int main(void) {
	Stack stack1 = stack_create();
	Queue queue1 = queue_create();
	int o, i, t;
	setbuf(stdout, NULL);
	while(1){
		scanf("%d %d", &o, &i);

		if(o==0 && i==0)
			return 0;

		switch(o){
		case 1:
			push(stack1, i);
			break;
		case 2:
			t= top(stack1);
			if(t==-1)
				printf("STACK UNDERFLOW\n");
			else
				printf("%i\n", t);
			break;
		case 3:
			t = pop(stack1);
			if(t==-1)
				printf("STACK UNDERFLOW\n");
			else
				printf("%i\n", t);
			break;
		case 4:
			enqueue(queue1, i);
			break;
		case 5:
			t = peek(queue1);
			if(t==-1)
				printf("QUEUE UNDERFLOW\n");
			else
				printf("%i\n", t);
			break;
		case 6:
			t= dequeue(queue1);
			if(t==-1)
				printf("QUEUE UNDERFLOW\n");
			else
				printf("%i\n", t);
			break;
		}
	}
	stack_destroy(stack1);
	queue_destroy(queue1);
	return 0;
}

