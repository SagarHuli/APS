#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,sum,size;
    scanf("%d%d%d%d",&a,&b,&c,&sum);
    size = sum+1;
    int arr[size];
   // memset(arr,0,size);
    for(int i=0;i<size;i++)
    {
        arr[i] = 0;
       // printf("%d ",arr[i]);
    }
    for(int k=0;k<size;k++)
        printf("%d ",arr[k]);
        printf("\n");
    for(int i=1;i<size;i++)
    {
        if(i%a==0)
            arr[i]++;
       // printf("%d ",arr[i]);
    }
     for(int k=0;k<size;k++)
        printf("%d ",arr[k]);
        printf("\n");
    for(int i=0,j=b;i<(size-b);i++)
    {
        if(j==b)
            arr[j]++;
       if(j-i == b &&(i==a ||i==b||i==c))
        arr[j]++;
        j++;
    }
     for(int k=0;k<size;k++)
        printf("%d ",arr[k]);
        printf("\n");
    for(int i=0,j=c;i<(size-c);i++)
    {
        if(j==c)
            arr[c]++;
        if(j-i == c &&(i==a ||i==b||i==c))
        arr[j]++;
        j++;
    }
     for(int k=0;k<size;k++)
        printf("%d ",arr[k]);
        printf("\n");
    printf("Sum %d can obtained in %d ways",sum,arr[sum]);
    return 0;
}
