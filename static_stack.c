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

void init( stack *s) 
{
   s->head = -1; 
}

bool empty( stack *s) 
{
   return s->head == -1;
}


int main()
{
   stack s; 
   init(&s); 

   push(&s, 10);
   push(&s, 2); 
   push(&s, 1); 
   
   while(!empty(&s))
   {
      printf("%d ",pop(&s));
      printf("\n"); 
   }

   return 0;
}



















