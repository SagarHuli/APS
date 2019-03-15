#include<stdio.h>
#include<stdlib.h>
#define SS 5

struct stack{
 int items[SS];
 int top;
};

typedef struct stack S;

void push(S *s)
{
    if(s->top==SS-1)
        printf("Stack full\n");
    else{
        int x;
        printf("Enter push item\n");
        scanf("%d",&x);
        s->items[++s->top] = x;
    }

}

void pop(S *s)
{
    if(s->top==-1)
        printf("Stack empty\n");
    else{
        int x;
        x=s->items[(s->top)--];
        printf("%d popped\n",x);
    }

}

void peek(S s)
{
    if(s.top==-1)
        printf("Stack empty\n");
    else{
        int x;
        x = s.items[s.top];
        printf("top of stack :%d\n",x);
    }
}
int main()
{
    S s;
    s.top =-1;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Peek\n");
        int t;
        scanf("%d",&t);
        switch(t)
        {
            case 1:push(&s);
                    break;
            case 2:pop(&s);
                    break;
            case 3:peek(s);
                    break;
        }

    }
    return 0;
}
