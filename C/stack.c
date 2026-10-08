#include <stdio.h>
#define MAXSIZE 4

char *stack[MAXSIZE];
int top = -1;

int isFull() {
    return top == MAXSIZE - 1;
}

int isEmpty() {
    return top == -1;
}

void push(char *data) {
    if (!isFull()) {
        top++;
        stack[top] = data;
    } else {
        printf("Stack is full.\n");
    }
}

char *peek() {
    if (!isEmpty()) {
        return stack[top];
    } else {
        return NULL;
    }
}

char *pop() {
    if (!isEmpty()) {
        return stack[top--];
    } else {
        return NULL;
    }
}

int main() {
    push("Ana");
    push("Ben");
    push("Carlo");
    push("Diana");

    printf("Stack from TOP to BOTTOM:\n");

    for (int i = top; i >= 0; i--) {
        printf("%s\n", stack[i]);
    }

    printf("\nPeek: %s\n", peek());

    printf("Pop: %s\n", pop());

    printf("\nStack after pop:\n");

    for (int i = top; i >= 0; i--) {
        printf("%s\n", stack[i]);
    }

    return 0;
}