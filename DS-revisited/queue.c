#include<stdio.h>
#include<stdlib.h>
#define SS 5

struct queue{
 int items[SS];
 int front;
 int rear;
};

typedef struct queue Q;

void enqueue(Q *q)
{
    if(q->rear==SS-1)
        printf("Queue full\n");
    else{
        int x;
        printf("Enter queue item\n");
        scanf("%d",&x);
        q->items[++q->rear] = x;
    }

}

void dequeue(Q *q)
{
    if(q->front>q->rear)
        printf("Queue empty\n");
    else if(q->rear>SS-1)
        printf("Queue full\n");
    else{
        int x;
        x=q->items[(q->front)--];
        printf("%d popped\n",x);
    }

}

void peek(Q *q)
{
    if(q->front>q->rear)
        printf("Queue empty\n");
    else{
        int x;
        x = q->items[q->front];
        printf("top of queue :%d\n",x);
    }
}
int main()
{
    Q q;
    q.front =0;
    q.rear=-1;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Peek\n");
        int t;
        scanf("%d",&t);
        switch(t)
        {
            case 1:enqueue(&q);
                    break;
            case 2:dequeue(&q);
                    break;
            case 3:peek(&q);
                    break;
        }

    }
    return 0;
}
