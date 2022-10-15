#include<stdio.h>
#include<stdlib.h>

int stack[100],n,top,opt;
void push();
void pop();
void display();

int main()
{
    int i;	
    top = -1;
    printf("Enter the size of the stack (max = 100) : ");
    scanf("%d", &n);

    printf("\n\t1) To Push an element\n");
    printf("\n\t2) To Pop an element\n");
    printf("\n\t3) To Display all the elements\n");
    printf("\n\t4) To Exit out\n");
   do{
        printf("\nSelect your option : ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
            printf("\t!X!X!X!The Program Has ended!X!X!X!\n");
                break;
            default:
                printf("INVALID OPTION!!!, Select again\n"); 
        }
    } while(opt!= 4);
}
	
void push()
{
    if(top >= n-1)
    {
        printf("\tStack is in OVER FLOW condition\n");
    } 
    else 
    {
        top++;
        printf("Enter the value to push : ");
        scanf("%d", &stack[top]);
    }
}
void pop()
{
    if(top <= -1)
    {
        printf("Stack is in UNDER FLOW condition\n");
    } 
    else 
    {
        printf("%d is Popped\n", stack[top]);
        top--;
    }
}
void display()
{
    if(top >= 0)
    {
        printf("The elements in stack\n");
        for(int i=top; i>=0; i--)
        {
            printf("%d\n", stack[i]);
        }
    } 
    else 
    {
        printf("The stack is empty\n");
    }
}


