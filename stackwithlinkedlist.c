#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

typedef struct {
    struct node *top;
    int cnt;
} stack;

struct node {
    int data;
    struct node *next;
};

void initialize (stack *stk) {
    stk->top = NULL;
    stk->cnt = -1;
}

void push (stack *stk, int c) {
    if (stk->cnt == STACK_SIZE)
        printf("Stack is full");
    else {
        struct node *temp = malloc(sizeof(struct node));
        temp->data = c;
        temp->next = stk->top;
        stk->top = temp;
        stk->cnt++;
    }
}

void reset(stack *stk) {
    stk->cnt = -1;
}

int pop (stack *stk) {
    if (stk->cnt == -1)
        printf("Stack is empty\n");
    else {
        int x = stk->top->data;
        struct node *temp = stk->top;
        stk->top = stk->top->next;
        free(temp);
        stk->cnt--;
        return x;
    }
}

int main () {
    stack n;
    int x;
    reset(&n);
    push(&n, 17);
    push(&n, 8);
    push(&n, 6);
    push(&n, 3);
    push(&n, 1);
    push(&n, 2);
    x = pop(&n);
    printf("%d\n", x);
    x = pop(&n);
    printf("%d\n", x);
    x = pop(&n);
    printf("%d\n", x);
    x = pop(&n);
    printf("%d\n", x);
    x = pop(&n);
    printf("%d\n", x);
    x = pop(&n);
    printf("%d\n", x);
    x = pop(&n);
    printf("%d\n", x);
}