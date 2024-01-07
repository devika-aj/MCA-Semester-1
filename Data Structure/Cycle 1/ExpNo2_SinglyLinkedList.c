#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
        int data;
        struct node * next;
}node;

node * head=NULL;

void display()
{
        node * temp=head;
        if(temp==NULL)
        {
                printf("Empty Linked list");
        }
        else
        {

                while(temp!=NULL)
                {
                        printf("%d-->",temp->data);
                        temp=temp->next;
                }
        }

}
void in_beg()
{
        node * newnode , * temp=head;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data :");
        scanf("%d",&newnode->data);

        if(head==NULL)
        {
                head=newnode;
                newnode->next=NULL;
        }
        else
        {
                newnode->next=head;
                head=newnode;
        }
        printf("\nNode inserted..\n");

}void in_end()
{
        node * newnode , * temp=head;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data :");
        scanf("%d",&newnode->data);

        while(temp->next!=NULL)
        {
                temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        printf("\nNode inserted..\n");

}
void in_pos()
{
        int pos;
        node * newnode , * temp=head;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data :");
        scanf("%d",&newnode->data);

        printf("Enter the position at which the data is to be inserted:");
        scanf("%d",&pos);
        for(int i=2;i<pos;i++)
        {
                temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("\nNode inserted..\n");

}
void del_in()
{
        node * temp=head;
        head=head->next;
        free(temp);
        printf("\nNode deleted ..\n");

}
void del_end()
{
        node * temp=head;
        while(temp->next->next!=NULL)
        {
                temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
        printf("\nNode deleted ..\n");


}
void del_pos()
{
        node * temp=head, * ptr;
        int pos;
        printf("Enter the position at which the node has to be deleted:");
        scanf("%d",&pos);
        if(pos==0)
        {
                del_in();
        }
        else if(pos==1)
        {
                printf("Please enter option ");

        }
        else
        {
                for(int i=2;i<pos;i++)
                {
                        temp=temp->next;
                }
                ptr=temp->next->next;
                free(temp->next);
                temp->next=ptr;
        }
}

void main()
{
        int ch;
        do
        {
                printf("\n*****LINKED LIST*****\n");
                printf("\n1.Display");
                printf("\n2.Insert at beginning");
                printf("\n3.Insert at end");
                printf("\n4.Insert at a position");
                printf("\n5.Deletion at beginning");
                printf("\n6.Deletion from end");
                printf("\n7.Deletion fron a position");


                printf("\n\nEnter your choice :");
                scanf("%d",&ch);

                switch(ch)
                {
                        case 1:display();
                                break;
                        case 2:in_beg();
                                break;
                        case 3:in_end();
                                break;
                        case 4:in_pos();
                                break;
                        case 5:del_in();
                                break;
                        case 6:del_end();
                                break;
                        case 7:del_pos();


                }
        }while(ch!=8);
}







