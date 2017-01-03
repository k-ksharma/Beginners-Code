#include<stdio.h>
#include<stdlib.h>
void selection(int *arr,int n)
{
    int i,j,min,pos;
    for (i=0;i<n;i++)
    {
        min=arr[i];
        pos=i;
        j=i+1;
        while(j<n)
        {
            if (arr[j]<min)
            {
                min=arr[j];
                pos=j;
            }
            j++;
        }
        arr[pos]=arr[i];
        arr[i]=min;
    }    
}
int main()
{
    int n,i,*arr;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    selection(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    free(arr);
    return 0;
}
