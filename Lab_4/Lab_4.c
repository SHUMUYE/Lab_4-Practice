#include<stdio.h>  //stack using an array 

int stack[100],choice,n,top=-1,data,i;

void push()
{
    if(top>=n-1)
    {
        printf("STACK is over flow\n\t");
    }
    else
    {
        printf(" Enter an ID of Book to be Stored:");
        scanf("%d",&data);
        top++;
        stack[top]=data;
        printf("%d is pushed to stack ",stack[top]);
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("Stack is under flow\n\t ");
    }
    else
    {
        printf("\n %d is popped from the stack ",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n\t%d",stack[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
    
}

int main(){

    printf("Enter the size of STACK:\n ");
    scanf("%d",&n);
    printf("Choose the following number to perform OPERATIONS USING ARRAY:\n");
    printf("\t 1 to PUSH data to a stack\n\t 2 to POP data from stack \n\t 3 for DISPLAY the stack\n\t 4 for EXIT\n");
    do
    {
        printf("\nEnter the Choice: ");
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
                printf("\n\t EXIT POINT ");
                break;
            }
			case 5:
            {
         	printf("the total Number of Books are = %d",count);
                break;
            }
            default:
            {
                printf ("Please Enter a Valid Choice(1/2/3/4):\n\t ");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
}

