#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct queue_node
{
   int value; 
   struct queue_node * next; 
}


typedef struct queue_node queue_node;


struct queue
{
   queue_node * front; 
   queue_node * back; 
   int size; 
}

typedef struct queue queue; 

queue * create_queue()
{
   queue * q = (queue *) malloc(sizeof(queue)); 
   q->back = NULL; 
   q->front = NULL; 
   q->size = 0; 
   return q; 
}

bool empty_queue(queue * q)
{
   return q->size == 0;
}

void push_queue(queue *q, int value)
{
   queue_node *qn = (queue *) malloc(sizeof(queue_node)); 
   qn->next = NULL; 
   qn->value = value; 

   if (empty_queue(q))
   {
      

   }   




}













































