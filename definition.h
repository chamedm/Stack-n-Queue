/*
 * stackqueue.h
 *
 *  Created on: 27 mar. 2017
 *      Author: Chavez
 */

#define MAX 50
#ifndef STACKQUEUE_H_
#define STACKQUEUE_H_

typedef struct stack * Stack;

Stack stack_create();
void stack_destroy(Stack);

void push(Stack, int);
int top(Stack);
int pop(Stack);

typedef struct queue * Queue;

Queue queue_create();
void queue_destroy(Queue);

void enqueue(Queue, int);
int peek(Queue);
int dequeue(Queue);

#endif /* STACKQUEUE_H_ */
