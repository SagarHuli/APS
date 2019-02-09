#include<stdio.h>
#include<math.h>
int main()
{
    char str[] ={'a','b','c','d'};
    int set_size = 4;
    unsigned int size = pow(2,set_size);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<set_size;j++)
        {
            if(i & (1<<j))
                printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
