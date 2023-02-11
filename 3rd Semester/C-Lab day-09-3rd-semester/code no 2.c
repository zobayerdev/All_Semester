#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
void displayList();
void insertfirst(int data);
void insertNodeAtEnd(int data);
void insertNodeAtMiddle(int data, int position);

int main()
{
    int n,c,data,position;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data Entered in the list : \n");
    displayList();

    do
    {
        printf("\n1 for FirstInsert Value \n2 for MiddleInsert Value\n3 for LastInsertValue\nTap For 4 for Display\n5 for Exit \n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("\nEnter position: ");
            scanf("%d",&position);
            printf("\nEnter value: ");
            scanf("%d",&data);
            insertfirst(data);
            break;
        case 2:
            printf("\nEnter position: ");
            scanf("%d",&position);
            printf("\nEnter value: ");
            scanf("%d",&data);
            insertNodeAtMiddle(data,position);
            break;
        case 3:
            printf("\nEnter value: ");
            scanf("%d",&data);
            insertNodeAtEnd(data);
            break;
        case 4:
        displayList();
        break;
        case 5:
        printf("Exit");
        break;
        default:
        printf("Wrong input");
            break;
        }
    } while (c!=5);
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {


        printf(" Input data for node 1 : ");
        scanf("%d", &num);

        stnode->num = num;
        stnode->nextptr = NULL;
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;
                fnNode->nextptr = NULL;

                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %x  %d  %x",tmp, tmp->num,tmp->nextptr);
            printf("\n");
            tmp = tmp->nextptr;
        }
    }
}


void insertfirst(int data)
{
    struct node *newnode, *tmp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode==NULL)
        printf("Memory can't be allocated");
    else
        newnode->num=data;
        newnode->nextptr=stnode;
        stnode=newnode;
        printf("\nInsert node Succesfully");
}



void insertNodeAtEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->num = data;
        newNode->nextptr = NULL;

        temp = stnode;

        // Traverse to the last node
        while(temp != NULL && temp->nextptr != NULL)
            temp = temp->nextptr;

        temp->nextptr = newNode;

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}





void insertNodeAtMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->num = data;
        newNode->nextptr = NULL;

        temp = stnode;


        for(i=2; i<=position-1; i++)
        {
            temp = temp->nextptr;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {

            newNode->nextptr = temp->nextptr;


            temp->nextptr = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}
