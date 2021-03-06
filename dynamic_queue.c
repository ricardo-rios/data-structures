#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct queue_node
{
   int value; 
   struct queue_node * next; 
}; 


typedef struct queue_node queue_node;


struct queue
{
   queue_node * front; 
   queue_node * back; 
   int size; 
};

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
   queue_node *qn = (queue_node *) malloc(sizeof(queue_node)); 
   qn->next = NULL; 
   qn->value = value; 

   if (empty_queue(q))
   {
      q->front = qn;
      q->back = qn;
       
   }

   else
   {
      q->back->next = qn; 
      q->back = qn;
   }

   q->size ++; 

   
}


int pop_queue(queue * q)
{
   if (empty_queue(q))
   {
      printf("Error la cola esta vacía!\n"); 
      return 0; 
   }

   int value = q->front->value; 

   queue_node * qn = q->front; 
   q->front = q->front->next; 
   free(qn); 
   q->size --; 
   return value;
  
}

void print_queue(queue *q)
{  
   if (empty_queue)
      print("No hay nada que imprimir"); 

      
   temp_qn = q->front; 

   




}

int main()
{
   queue *q = create_queue(); 
   push_queue(q, 5); 
   push_queue(q, 10); 
   push_queue(q, 7); 
   
   while(!empty_queue(q))
      printf("%d\n", pop_queue(q)); 
  
   

   return 0; 
}












































