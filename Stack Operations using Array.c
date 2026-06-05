#include <stdio.h>    
int stack[100],i,j,choice=0,n,top=-1;   
void push();   
void pop();   
void display();   
void main ()   
{   
    printf("Enter the number of elements in the stack ");    
    scanf("%d",&n);   
    printf("*********Stack operations using array\n*********");     
    while(choice != 4)   
{   
        printf("Chose one from the below options...\n");   
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");   
        printf("\n Enter your choice \n");         
        scanf("%d",&choice);   
        switch(choice)   
{   
case 1:   
{    
push();   
break;   
}   
case 2:   
{   
pop();   
break;   
}   
case 3:   
{   
display();   
break;   
}   
case 4:    
{   
printf("Exiting....");   
break;    
}   
default:   
{   
printf("Please Enter valid choice ");   
}    
        };   
}   
Downloaded by Dr.Kishore Verma S (kishore.saj3@gmail.com)
lOMoARcPSD|13574892
}    
{   
}    
{    
  void push ()   
    int val;       
    if (top == n )    
    printf("\n Stack Overflow");    
    else    
{   
        printf("Enter the value?");   
        scanf("%d",&val);          
        top = top +1;    
        stack[top] = val;    
}    
  void pop ()    
    if(top == -1)    
    printf("Stack Underflow");   
    else   
    top = top -1;    
}    
void display()   
{   
   if(top == -1)    
{   
        printf("Stack is empty");   
}   
    printf("stack elements are\n ") 
    for (i=top;i>=0;i--)   
{   
        printf(" %d ",stack[i]);   
}   
} 
OUTPUT:   
Enter the number of elements in the stack 5 
*********Stack operations using array********* ---------------------------------------------- 
Chose one from the below options... 
1.Push 
2.Pop 
3.Show 
4.Exit 
 Enter your choice  
5 
Downloaded by Dr.Kishore Verma S (kishore.saj3@gmail.com)
Please Enter valid choice Chose one from the below options... 
1.Push 
2.Pop 
3.Show 
4.Exit 
 Enter your choice  
1 
Enter the value?12 
Chose one from the below options... 
1.Push 
2.Pop 
3.Show 
4.Exit 
 Enter your choice  
3 
stack elements are 
 12 
Chose one from the below options... 
1.Push 
2.Pop 
3.Show 
4.Exit 
 Enter your choice  
1 
Enter the value?12 
Chose one from the below options... 
1.Push 
2.Pop 
3.Show 
4.Exit 
 Enter your choice  
3 
stack elements are 
 12 
12 
Chose one from the below options... 
1.Push 
2.Pop 
3.Show 
4.Exit 
 Enter your choice  
4 
Exiting....
