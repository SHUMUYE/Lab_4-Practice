#include <stdio.h>      //stack using an linked list
#include <stdlib.h> 

struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;
  
  int count=0;
/* Create empty stack */
void create()
{
    top = NULL;
}
 
 /* Pop Operation on stack */
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
        printf("%d is pushed to the stack:",top->info);
    }
    else
    {
        temp =(struct node *)malloc(sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
        printf("%d is pushed to the stack:",top->info);
    }
    count++;
}

/* Pop Operation on stack */
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Error : Under Flow. means Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}

/* Display stack elements */
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("\t%d\n ", top1->info);
        top1 = top1->ptr;
    }
 }

int main(){
	
	int num, ch, e,case4=1;

    printf("Choose the following number to perform OPERATIONS USING ARRAY:\n");
    printf("\t 1 to PUSH data to a stack\n\t 2 to POP data from stack \n\t 3 for DISPLAY the stack\n\t 4 for EXIT \n\t 5 for Count the book\n");
   
  create();
 
    while (case4)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
		{
		printf(" Enter an ID of Book to be Stored: ");
            scanf("%d", &num);
            push(num);
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
            	case4=0;
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
        if(case4==0)
        case4=0;
    }
    return 0;
}

