#include "stack.h"

void initialize(stack* s){
  //implement initialize here
  s->head=NULL;
}

void push(int x, stack* s){
    //implement push here
    node* element=(node*)malloc(sizeof(node));
    element->next=s->head;
    element->data=x;
    s->head=element;
}

int pop(stack* s){
    // implement pop here
    
  return pop;
}

bool empty(stack* s)
{
  //implement empty here
  return false;
}

bool full(stack* s) {
    //implement full here
  return false;
}
