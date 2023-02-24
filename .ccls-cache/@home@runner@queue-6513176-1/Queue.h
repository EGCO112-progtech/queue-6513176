#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->data = x;
  new_node->nextPtr = NULL;
  if(q->headPtr == NULL){
    q->headPtr = new_node;
  }
  else q->tailPtr ->nextPtr = new_node;
}
  q->tailPtr = new_node;
  q->size++;
  /*Finish enqueue */
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
     q->headPtr=q->headPtr->nextPtr;
       /*Finish dequeue */
     if(t==NULL)q->tailPtr=NULL;
   return value;
     q->size--;
   }
   printf("Empty queue");
   return 0;
}

