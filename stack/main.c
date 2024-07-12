#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

typedef struct Stack {
    int top;
    int a[MAX]; // Maximum size of Stack
} Stack;

// Function to initialize the stack
void initializeStack(Stack* stack) {
    stack->top = -1;
}

// Function to push an element onto the stack
bool push(Stack* stack, int x) {
    if (stack->top >= (MAX - 1)) {
        printf("Stack Overflow\n");
        return false;
    } else {
        stack->a[++(stack->top)] = x;
        printf("%d dimasukkan ke dalam stack\n", x);
        return true;
    }
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (stack->top < 0) {
        printf("Stack Underflow\n");
        return 0;
    } else {
        int x = stack->a[(stack->top)--];
        return x;
    }
}

// Function to peek the top element of the stack
int peek(Stack* stack) {
    if (stack->top < 0) {
        printf("Tumpukan Kosong\n");
        return 0;
    } else {
        int x = stack->a[stack->top];
        return x;
    }
}

// Function to check if the stack is empty
bool isEmpty(Stack* stack) {
    return (stack->top < 0);
}

int main(void) {
    Stack s;
    initializeStack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printf("%d Dikeluarkan dari tumpukan\n", pop(&s));
    return 0;
}
