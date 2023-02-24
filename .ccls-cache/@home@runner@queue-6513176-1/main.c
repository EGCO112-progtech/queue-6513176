#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"


int main(int argc, char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
 /*For struct Queue*/
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
  q.round=0;

   int i,x,y,j;
  y=0;
   

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){

          
            x=dequeue_struct(&q);
            
        }
        else {
    
       enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
          printf("My order is %d\n",atoi(argv[i]));
          i++;
        }
 }
  if(q.size !=0&&q.size !=1)
  {printf("-------------------------------------------\nthere are %d ppl left in queue\n",q.size);}
  if(q.size ==1){
    printf("there is 1 ppl left in queue\n");
  }
  printf("clearing queue......");clearq(&q);
  
  return 0;
}
