#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct stack
{
   int arr[100];
   int head;
};


typedef struct stack stack; 


void push( stack * s, int value)
{
   s->arr[++s->head] = value; 
}

int pop( stack *s) 
{
   return s->arr[s->head--];
}















