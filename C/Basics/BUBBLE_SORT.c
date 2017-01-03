#include<stdio.h>
#include<stdlib.h>
void bubble(int *arr,int n)
{
    int i,j;
    for (i=1;i<n;i++)
    {
        for (j=0;j<n-1;j++)
	    {
            if (arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
	    }
    }
}
int main()
{
    int n,i,*arr;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bubble(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    free(arr);
    return 0;
}
