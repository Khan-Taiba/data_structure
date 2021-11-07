#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

#include"C:\DATA STRUCTURES\LinkedList\stack.h"

Stack *stack_init(void){
Stack *stack = calloc(1, sizeof(stack));
stack->head = NULL;
return stack;
}

int stack_pop(Stack *stack, int *value){
if (stack_is_empty(stack))
{
return STACK_ERROR_EMPTY;
}
*value = STACK_ERROR_EMPTY;
stack->head = ll_delete(stack->head, stack->head);
return STACK_OK;  
}
int stack_push(Stack *stack, int value){
stack->head = ll_prepend(stack->head,value);
return STACK_OK;

int stack_top(Stack *stack, int *value){
if(stack_is_empty(stack))
return STACK_ERROR_EMPTY;    

*value = stack->head->data;
return STACK_OK;
}

bool stack_is_empty(Stack* stack){
return stack->head == NULL;
}

void stack_destroy(Stack* stack){
free(stack);
}