#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct list_node
{
   int value; 
   struct list_node * next; 
   struct list_node * previous; 
}; 


typedef struct list_node list_node; 


struct list
{
   list_node * head; 
   list_node * tail; 
   int size; 
}; 

typedef struct list list; 


list * create_list()
{
   list * l = (list *) malloc(sizeof(list)); 
   l->head = NULL; 
   l->tail = NULL; 
   l->size = 0; 

   return l;
}


bool empty_list(list * l) 
{

   return l->size == 0; 

}


void push_front_list(list *l, int value)
{
   list_node * ln = (list_node *) malloc(sizeof(list_node)); 

   ln->value = value; 

   ln->next = NULL; 
    
   ln->previous = NULL; 
  
   if (empty_list(l)) 
   {
      l->head = ln; 
      l->tail = ln; 
      l->size++;
      return; 
   }
  
   else
   {
      ln->next = l->head; 
      l->head = ln;
      l->size++;
      return; 
   }
   

}


void push_back_list(list * l, int value)
{

   list_node * ln = (list_node *) malloc(sizeof(list_node)); 

   ln->value = value; 
   ln->next = NULL; 
   ln->previous = NULL; 

   if(empty_list(l))
   {
      l->head = ln; 
      l->tail = ln;
      l->size++; 
      return; 
   }

   else
   {
      ln->previous = l->tail; 
      l->tail->next = ln; 
      l->tail = ln; 
      l->size++; 
      return;    
   }

}

int pop_front_list(list * l)
{
   if(empty_list(l))
   {
      printf("Error empty list \n"); 
      return 0; 
   }

   int value = l->head->value; 
   list_node * ln = l->head; 

   if (l->size == 1)
   {
      l->size--;
      l->head = NULL; 
      l->tail = NULL; 
      free(ln); 
      return value; 
   }

   else
   {
      l->head = l->head->next; 
      l->head->previous = NULL; 
      free(ln); 
      l->size--; 
      return value;    
   }


}

int pop_back_list(list * l)
{

   if(empty_list(l))
   {
      printf("Error empty list \n"); 
      return 0; 
   }

   int value = l->tail->value; 
   list_node * ln = l->tail; 

   if (l->size == 1)
   {
      l->size--;
      l->head = NULL; 
      l->tail = NULL; 
      free(ln); 
      return value; 
   }

   else
   {
      l->tail = l->tail->previous; 
      l->tail->next = NULL; 
      free(ln); 
      l->size--;
      return value;   
   }




}





int main()
{
  
   list * l = create_list(); 
   //push_front_list(l, 5); 
   //push_front_list(l, 3); 
   //push_front_list(l, 3); 


   push_back_list(l, 5); 
   push_back_list(l, 3); 
   push_back_list(l, 3); 



   //while( !empty_list(l) )
      //printf("%d\n", pop_front_list(l)); 
   //    printf("%d\n", pop_back_list(l)); 


   return 0; 
}












































