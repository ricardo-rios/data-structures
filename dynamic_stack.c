#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct stack_node
{ 
   int value; 
   struct stack_node *next; 
};

typedef struct stack_node stack_node; 

