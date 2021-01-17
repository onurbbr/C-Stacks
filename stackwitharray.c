#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

typedef struct {
    int data[STACK_SIZE];
    int top;
} stack;

void reset (stack *stk) {
    stk->top = -1;
}

void push (stack *stk, int c) {
    if (stk->top == STACK_SIZE - 1)
        printf("Stack is full");
    else {
        stk->top++;
        stk->data[stk->top] = c;
    }
}

int pop (stack *stk) {
    if (stk->top = -1)
        printf("Stack is empty");
    else {
        int x = stk->data[stk->top];
        stk->top--;
        return x;
    }
}

int main () {
    stack n;
    reset(&n);
    push(&n, 4);
    push(&n, 41);
    push(&n, 15);
    push(&n, 50);
    printf("%d\n", pop(&n));
    printf("%d\n", pop(&n));
    printf("%d\n", pop(&n));
    printf("%d\n", pop(&n));
    return 0;
}