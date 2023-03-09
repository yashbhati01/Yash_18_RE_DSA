#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int arr[20];
    int size;
    int tos;
};
struct stack sta;


int isfull(void)
{
    if (sta.tos == sta.size)
        return 1;
    else
        return 0;
}
  
int isempty()
{
    if(sta.tos == -1)
        return 1;
    else
        return 0;
}

void display()
{
    int i = 0;
    if(!isempty())
    {
        for (int i = 0; i <= sta.tos; i++)
        {
            printf("Element at pos %d is %d\n", i,sta.arr[i]);
        }   
    }
    else
        printf("Stack is empty\n");
}

void push(int ele)
{
    if(!isfull())
    {
        sta.tos++;
        sta.arr[sta.tos] = ele;
    }
    else
        printf("Stack full\n");
}

int pop()
{
    int x = -1;
    if(!isempty())
    {
        x = sta.arr[sta.tos];
        sta.tos--;
    }
    else
        printf("Stack empty\n");

    return x;
}
 
int peek()
{
    int a = -1;
    if(!isempty())
    {
        a = sta.arr[sta.tos];
        printf("\n%d\n",a);
    }
    else
        printf("Stack empty\n");

    return a;
}

int sort_stack(int array[10])
{
    int a[10], i=0,j=0;

    while(array[10] != '\0')
    {
        a[i] = array[j];
        i++;
        j++;
    }
    a[i] = '\0';

    return arr[10];
}

int main(void)
{
    int opt=0,a=0;
    sta.tos = -1;
    sta.size = 20;

    while(1)
    {
        printf("Select choice: \n\t1. Enter element\n\t2. Pop element\n\t3.");
        printf(" Peek element\n\t4. Display stack\n\t5. Sorted Stack\n\t6. Exit\n --> ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d",&a);
            push(a);
            break;
        
        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            sort_stack(sta.arr[20]);
            printf("The array is sorted.\n");
            break;

        case 6:
            exit(1);
            break;
        }
    }
    return 0;
}