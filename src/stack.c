#include "stack.h"
#include <assert.h>

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
    assert(s->head!=NULL);
    int pop = s->head->data;
    s->head=s->head->next;
  return pop;
}

bool empty(stack* s)
{
  if(s->head=NULL)
  return true; 
  /*stack is empty if head points at NULL because head points add*/
  else
  return false;
}

bool full(stack* s) {
    /*if stack is full false is returned.
    as no more elements can be pushed.
    assertion should be added to decide max elements.*/
    
  return false;
}
