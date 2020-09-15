#include <stdlib.h>
#include <stdio.h>

#include "stackconfig.h"
#include "stack.h"


void push(Stack* stack, stackType data) {
    if (top == )
}

stackType pop(Stack* stack) {
    if(stack->top == NULL) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    Node* next = stack->top->next;
    stackType data = stack->top->data;
    free(stack->top);
    stack->top = next;
    return data;
}

stackType peek(Stack* stack) {
    if(stack->top == NULL) {
        printf("Stack underflow while pop\n");
        return -1;
    }
    stackType data = stack->top->data;
    return data;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

int isFull(Stack* stack) {
    Node* newNode = malloc(sizeof(Node));
    if(newNode == NULL) {
        return 1;
    }
    free(newNode);
    return 0;
}

void print(Stack* stack) {
    Node* current = stack->top;
    while(current != NULL) {
        printf(TYPE_FMT" ", current->data);
        current = current->next;
    }
    printf("\n");
}
