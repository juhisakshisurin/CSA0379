#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value);
int pop();
int peek();
bool isEmpty();
void display();

int main() {
    push(10);
    push(20);
    push(30);

    display();

    printf("Popped element: %d\n", pop());
    printf("Top element is: %d\n", peek());

    display();

    return 0;
}

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory Overflow\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("Pushed %d to stack\n", value);
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow: Stack is empty\n");
        return -1;
    }

    struct Node* temp = top;
    int poppedValue = temp->data;

    top = top->next;   // Move top to next node
    free(temp);        // Delete old top node

    return poppedValue;
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    }

    return top->data;
}

bool isEmpty() {
    return top == NULL;
}

void display() {
    struct Node* temp = top;

    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
