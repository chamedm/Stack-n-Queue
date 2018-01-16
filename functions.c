/*
 * neomonjas.c
 *
 *  Created on: 27 mar. 2017
 *      Author: Chavez
 */
#include "stackqueue.h"
#include <stdio.h>
#include <stdlib.h>

struct stack{
	int arr[MAX];
	unsigned int top;
};

Stack stack_create(){
	Stack stack1 = (Stack) malloc(sizeof(struct stack));
	stack1->top= -1;
	return stack1;
}

void stack_destroy(Stack s){
	free(s);
}

void push(Stack s, int i){

	if(s->top == MAX-1){
		printf("STACK OVERFLOW\n");
	}
	else{
		s->top++ ;
		s->arr[s->top] = i;
	}
}

int top(Stack s){
	if(s->top == -1)
		return -1;
	else
		return s->arr[s->top];
}

int pop(Stack s){
	if(s->top == -1){
		return -1;
	}
	else{
		s->top--;
		return s->arr[s->top+1];

	}
}

struct queue {
	int arr[MAX];
	int head;
	int size;
};

Queue queue_create(){
	Queue queue1= (Queue) malloc(sizeof(struct queue));
	queue1->head=0;
	queue1->size=0;
	return queue1;
}

void queue_destroy(Queue q){
	free(q);
}

void enqueue(Queue q, int i ){
	if((q->head+q->size+1)%MAX == q->head){
		printf("QUEUE OVERFLOW\n");
	}
	else
		q->size++;
	q->arr[(q->head + q->size - 1)%MAX] = i;

}

int peek(Queue q){
	if(q->size==0)
		return -1;
	else
		return q->arr[(q->head)%MAX];
}

int dequeue(Queue q){
	q->head++;
	q->size--;
	if((q->head + q->size+1)%MAX == q->head)
		return -1;
	else
		return q->arr[(q->head-1)%MAX];
}

