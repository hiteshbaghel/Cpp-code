#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node 
{
    int data;
    stuct node *next;
};
struct node *root=NULL;
void insert_at_beg(int x)
{
    struct node *p;
    p=(struct node *)malloc (sizeof (struct node));
    p->data=x;
    if(root== NULL;)
    {
        root=p;
        p->next=NULL;
    }
    else
    {
        p->next=root;
        root=p;
    }
    printf("Element Inserted");
}
void del_at_beg()
{
    struct node *temp;
    if (root==NULL)
    {
        printf("\n Linked list is impossible deletion impossible");
    }
    else 
    {
        temp=root;
        printf("\nDeleted element=%d",root->data);
        if(root->next==NULL)
        root=NULL;
        free(temp);
        else
        {
            root=root->next;
            free(temp);
        }
    }
}
int insert_at_end(int x)
{
    struct node *p,*temp;
    p=(struct node *)malloc (sizeof (struct node));
    p->data=x;
    p->next=NULL;
    if(root== NULL;)
    {
        root=p;
    }
    else
    {
        temp=root;
        while(temp->next!==NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
    }
    printf("Element Inserted");
}
void del_at_end()
{
    struct node *temp,*t;
     if (root==NULL)
    {
        printf("\n Linked list is impossible deletion impossible");
    }
     else 
    {
        temp=root;
        if(root->next==NULL)
        {
             printf("\nDeleted element=%d",root->data);
             root=NULL;
             free(temp);
        }
    }
    else
    {
        t=root->next;
        while(t->next!=NULL)
        {
            t=t->next;
            temp=temp->next;
        }
        printf("\nDeleted element=%d",root->data);
        temp->next=NULL;
        free(temp);
    } 
}
void insert_at_pos(int x, int pos)
{
    struct node *temp,*p; int i ;
    temp=root;
    for(i=1;i<=pos-1;i++)
    {
        if(temp==NULL)
        {
            printf("Insufficient elements available in linked list , insertion at given position is not impossible");
            return ;
        } 
        temp = temp->next;
    }
    p=(struct node*)malloc(sizeof(sruct node));
    p->data = x;
    p->next=temp->next;
    temp->next=p;
    printf("Element Inserted");
}
void del_at_pos(int pos)
{
    struct node*temp,*p; int i;
    temp=root;
    for(i=1;i<=pos-1;i++)
    {
        if(temp==NULL)
        {
            printf("Insufficient elements available in linked list , deletion at given position is not impossible");
            return ;
        } 
        temp = temp->next;
    }
    p=temp->next;
    printf("\n Deleted element =%d",p->data);
    temp->next=p->next;
    free(p);
}
void traverse()
{
    struct node *temp;
    if (root==NULL)
    {
        printf("\n Linked list is empty");
    }
    else
    {
        temp=root;
        printf("\n Elements of linked list = ");
        while (temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main ()
{
    int x,ch,pos;
    do{
        printf("\n Enter 1 for Insertion at begining");
        printf("\n Enter 2 for Insertion at End");
        printf("\n Enter 3 for Insertion at Position");
        printf("\n Enter 4 for Deletion at begining");
        printf("\n Enter 5 for Deletion at End");
        printf("\n Enter 6 for Deletion at Position");
        printf("\n Enter 7 for Traversal");
        printf("\n Enter 8 for exit");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n Enter any element");
            scanf("%d",&x);
            insert_at_beg(x);
            break;
            case 2:
            printf("\n Enter any element");
            scanf("%d",&x);
            insert_at_end(x);
            break;
            case 3:
            printf("\n Enter any element");
            scanf("%d",&x);
            printf("\n Enter the position of element");
            scanf("%d",&pos);
            insert_at_pos(x,pos);
            break;
            case 4:
            del_at_beg();
            break;
            case 5:
            del_at_end();
            break;
            case 6:
            printf("\n Enter the position of element");
            scanf("%d",&pos);
            del_at_pos(pos);
            break;
            case 7:
            traverse();
            break;
            case 8:
            exit(0);
            deafault:
             printf("\n Enter correct choice");
        }
    } while(1); 
}