
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *stack;
int top = -1;
int max;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == max - 1;
}

void push() {
    int value;
    if (isFull()) {
        printf("Stack is full\n");
    } else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("%d is popped out\n", stack[top]);
        top--;
    }
}

void display() {
    if (!isEmpty()) {
        printf("\nStack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    } else {
        printf("Stack is empty\n");
    }
}

void peek() {
    if (!isEmpty()) {
        printf("Top element is: %d\n", stack[top]);
    } else {
        printf("Stack is empty\n");
    }
}

int main() {
    int choice;

    printf("Enter the max size of the stack: ");
    scanf("%d", &max);

    stack = (int *)malloc(max * sizeof(int));
    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    do {
        printf("\n-------------\n");
        printf("1) PUSH\n");
        printf("2) POP\n");
        printf("3) PEEK\n");
        printf("4) DISPLAY\n");
        printf("5) QUIT\n");
        printf("-------------\n");
        printf("Select your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5:
                free(stack);
                printf("Exiting program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid operation. Try again!\n");
        }
    } while (1);

    return 0;
}

				
			