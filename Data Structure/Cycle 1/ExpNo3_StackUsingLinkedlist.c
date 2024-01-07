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
                printf("Empty Stack ...");
        }
        else
        {

                while(temp!=NULL)
                {
                        printf("%d-->\n",temp->data);
                        temp=temp->next;
                }
        }

}void push()
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
        printf("\n Data inserted ...\n");


}
void pop()
{
        node * temp=head;
        head=head->next;
        free(temp);
        printf("\nData deleted ..\n");
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
        }
}

void main()
{
        int ch,s;
        do
        {
                printf("\n**** STACK ****\n");
                printf("\n1.Push");
                printf("\n2.Pop");
                printf("\n3.Display");
                printf("\n4.Search");


                printf("\nEnter tour choise :");
                scanf("%d",&ch);

                switch(ch)
                {
                        case 1:push();
                        break;
                        case 2:pop();
                        break;
                        case 3:display();
                        break;
                        case 4:s=search();
                                if(s)
                                        printf("Value found at position %d\n",s);
                                else
                                        printf("value not found\n");
                        break;
                }
        }while(ch!=4);

}





