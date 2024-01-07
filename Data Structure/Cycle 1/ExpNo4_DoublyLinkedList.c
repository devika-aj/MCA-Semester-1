#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
        int data;
        struct node * next;
        struct node * pre;
}node;

node * head=NULL;
int count=0;

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
                newnode->pre=NULL;
                printf("\nNode inserted..\n");

        }
        else
        {
                newnode->pre=NULL;
                newnode->next=head;
                head=newnode;
                printf("\nNode inserted..\n");
        }
         ++count;
}
void in_end()
{
        node * newnode , * temp=head;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data :");
        scanf("%d",&newnode->data);

        while(temp->next!=NULL)
        {
                temp=temp->next;
        }
        newnode->pre=temp;
        temp->next=newnode;
        newnode->next=NULL;
        printf("\nNode inserted..\n");
         ++count;
}
void in_pos()
{
        int pos;
        node * newnode , * temp=head;
        newnode=(struct node *)malloc(sizeof(struct node));

        printf("Enter the position at which the data is to be inserted:");
        scanf("%d",&pos);

        if(pos==1)
                in_beg();
        else if(count+1==pos)
                in_end();
        else
        {
                printf("\nEnter the data :");
                scanf("%d",&newnode->data);

                for(int i=2;i<pos;i++)
                {
                        temp=temp->next;
                }
                newnode->pre=temp;
                newnode->next=temp->next;
                temp->next->pre=newnode;
                temp->next=newnode;
                printf("\nNode inserted..\n");
        }
         ++count;
}
void del_in()
{
        if(count==0)
                printf("Empty linked list");
        else
        {
                node * temp=head;
                head=head->next;
                free(temp);
                printf("\nNode deleted ..\n");
                --count;
        }
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
        --count;
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
        else if(count==pos)
        {
                del_end();
        }
        else
        {
                for(int i=2;i<pos;i++)
                {
                        temp=temp->next;
                }
                ptr=temp->next->next;
                node *del=temp->next;
                free(del);
                ptr->pre=temp;
                temp->next=ptr;
        }
        --count;

}
int search()
{
        node * temp=head;
        int val,pos=0;
        printf("Enter the value you want to serach :");
        scanf("%d",&val);

        while(temp!=NULL)
        {
                pos++;
                if (temp->data==val)
                {
                    return pos;
                }

            temp=temp->next;
        }
}

void main()
{
        int ch,s;
        do
        {
                printf("\n*****LINKED LIST*****\n");
                printf("\n1.Display");
                printf("\n2.Insert at beginning");
                printf("\n3.Insert at end");
                printf("\n4.Insert at a position");
                printf("\n5.Deletion at beginning");
                printf("\n6.Deletion from end");
                printf("\n7.Deletion from a position");
	    printf("\n8.Search");

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
			 break;
		 case 8:s=search();
		            if (s)
		                 printf("Value found at pos %d",s);
		            else
                     printf("Value not found ");
                }
        }while(ch!=9);
}
