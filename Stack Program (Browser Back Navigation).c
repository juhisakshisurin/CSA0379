#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int page)
{
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = page;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("No previous page\n");
    }
    else
    {
        printf("Going back from Page %d\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("No pages visited\n");
        return;
    }

    printf("Visited Pages:\n");

    for(i = top; i >= 0; i--)
    {
        printf("Page %d\n", stack[i]);
    }
}

int main()
{
    push(1);   // Google
    push(2);   // YouTube
    push(3);   // Wikipedia

    display();

    pop();

    display();

    return 0;
}
