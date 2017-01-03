#include<stdio.h>
#include<stdlib.h>
void insertsort(int *arr,int n)
{
    int i,j,key;
    for (i=1;i<n;i++)
    {
        key = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
            arr[j+1]=arr[j--];
        arr[j+1]=key;
    }
}
int main()
{
    int n,i,*arr;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    insertsort(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    free(arr);
    return 0;
}
