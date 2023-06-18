#include <stdio.h>
#include <stdlib.h>

#define MAX 10

char stack[MAX];
int top = -1;

int is_full() {
    if (top >= MAX - 1)
        return 1;
    else
        return 0;
}

int is_empty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(char item) {
    if (is_full()) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

char pop() {
    if (is_empty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

char peek() {
    if (is_empty()) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

void display() {
    int i;
    if (is_empty())
        printf("Stack is empty\n");
    else {
        printf("Stack elements:\n");
        for (i = top; i >= 0; i--)
            printf("| %c |\n", stack[i]);
    }
}

int main() {
    int choice;
    char item;
    while (1) {
        printf("Enter choice:\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf(" %c", &item);
                push(item);
                break;
            case 2:
                item = pop();
                if (item != -1)
                    printf("Popped element: %c\n", item);
                break;
            case 3:
                item = peek();
                if (item != -1)
                    printf("Peeked element: %c\n", item);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}