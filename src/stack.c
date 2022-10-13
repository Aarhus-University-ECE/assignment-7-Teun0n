#include "stack.h"
#include <assert.h>

void initialize(stack* s){
  //implement initialize here
  s->head=NULL;
}

void push(int x, stack* s){
    //implement push here
    node* element=(node*)malloc(sizeof(node)); //new node is defined.
    element->next=s->head;//elements next points to head.
    element->data=x;//input of element node is set to user input x.
    s->head=element;//head points to element to redefine head to latest user input.
}

int pop(stack* s){
    // implement pop here
    assert(s->head!=NULL);//checks if stack is empty before trying to pop element.
    int pop = s->head->data;//int pop is defined to heads data.
    s->head=s->head->next;//head is set to point to its next, meaning next element in stack.
  return pop;//pop is returned.
}

bool empty(stack* s)
{
  if(s->head=NULL)
  /*stack is empty if head points at NULL.
  Because head is set points to NULL at initialization, meaning no number has been added yet.*/
  return true; 
  
  else
  return false;
}

bool full(stack* s) {
    /*stack can't be full unless we run out of memory.
    if a maximum amount of element in stack is desired, it should be asserted.*/
    
  return false;
}
