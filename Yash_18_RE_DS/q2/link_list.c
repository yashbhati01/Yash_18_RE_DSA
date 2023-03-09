#include <stdio.h>  
#include <stdlib.h>  

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  

void beginsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted\n");  
    }  
      
} 

void begin_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}
  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print\n");  
    }  
    else  
    {  
        printf("\nPrinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d\n\n",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}

int main()
{
    int choice = 0;

    while(1)
    {
        printf("Enter the choice: \n\t1. Insert at begining\n\t2. Delete at begining\n\t3. Forward travese\n\t4. Exit program\n -->");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                    beginsert();
                    break;

            case 2: 
                    begin_delete();
                    break;

            case 3: 
                    display();
                    break;

            case 4: 
                    exit(1);
                    break;
        }
    }
    return 0;
}