#include <stdio.h>
#include <stdlib.h>

#define MAX 100

 struct Stack{
    int data[MAX];
    int top;
} ;

int main() {
    struct Stack stack;
    stack.top = -1;

    // Push function logic
    int value = 10;
    if (stack.top == MAX - 1) {
        printf("Stack overflow. Unable to push %d\n", value);
    } else {
        stack.data[++stack.top] = value;
        printf("Pushed %d\n", value);
    }

    value = 20;
    if (stack.top == MAX - 1) {
        printf("Stack overflow. Unable to push %d\n", value);
    } else {
        stack.data[++stack.top] = value;
        printf("Pushed %d\n", value);
    }

    value = 30;
    if (stack.top == MAX - 1) {
        printf("Stack overflow. Unable to push %d\n", value);
    } else {
        stack.data[++stack.top] = value;
        printf("Pushed %d\n", value);
    }

    // Display function logic
    if (stack.top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= stack.top; i++) {
            printf("%d ", stack.data[i]);
        }
        printf("\n");
    }

    // Pop function logic
    if (stack.top == -1) {
        printf("Stack underflow. No elements to pop\n");
    } else {
        value = stack.data[stack.top--];
        printf("Popped %d\n", value);
    }

    if (stack.top == -1) {
        printf("Stack underflow. No elements to pop\n");
    } else {
        value = stack.data[stack.top--];
        printf("Popped %d\n", value);
    }

    if (stack.top == -1) {
        printf("Stack underflow. No elements to pop\n");
    } else {
        value = stack.data[stack.top--];
        printf("Popped %d\n", value);
    }

    if (stack.top == -1) {
        printf("Stack underflow. No elements to pop\n");
    } else {
        value = stack.data[stack.top--];
        printf("Popped %d\n", value);
    }

    // Display function logic again
    if (stack.top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= stack.top; i++) {
            printf("%d ", stack.data[i]);
        }
        printf("\n");
    }

    return 0;
}
