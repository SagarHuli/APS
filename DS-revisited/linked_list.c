#include<stdio.h>
#include<stdlib.h>
#define SS 5

struct node{
 int data;
 struct node *next;
};

typedef struct node NODE;

NODE * insert_start(NODE *start)
{
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    if(newnode==NULL){
        printf("Memory allocation failed");
        return start;
    }
    printf("Enter node data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
        return newnode;
    else{
        newnode->next=start;
        return newnode;
    }

}

NODE * insert_end(NODE *start)
{
    NODE *newnode,*temp;
    temp = start;
    newnode = (NODE *)malloc(sizeof(NODE));
    if(newnode==NULL){
        printf("Memory allocation failed");
        return start;
    }
    printf("Enter node data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
        return newnode;
    else{
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
        return start;
    }

}

NODE * delete_end(NODE *start)
{
    if(start==NULL)
        return start;
    if(start->next==NULL)
    {
        free(start);
        return NULL;
    }
    NODE *curr=start, *prev=NULL;
    while(curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
    prev->next=NULL;
    free(curr);
    return start;
}

NODE *delete_start(NODE *start)
{
    if(start==NULL)
        return start;
    else
    {
        NODE *temp=start;
        start=temp->next;
        free(temp);
        return start;
    }
}

void print(NODE *start)
{
    if(start==NULL)
        printf("List empty\n");
    else{
        NODE * temp=start;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    NODE *start;
    start=NULL;
    while(1)
    {
        printf("1.Insert at start\n2.Insert at end\n3.Delete from end\n4.Delete from start\n");
        int t;
        scanf("%d",&t);
        switch(t)
        {
            case 1:start=insert_start(start);
                    print(start);
                    break;
            case 2:start=insert_end(start);
                    print(start);
                    break;
            case 3:start = delete_end(start);
                    print(start);
                    break;
            case 4:start=delete_start(start);
                    print(start);
                    break;
        }

    }
    return 0;
}
