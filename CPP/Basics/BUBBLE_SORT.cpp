#include<iostream>
using namespace std;
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
    int n,i;
    cin>>n;
    int *arr=new int(n);
    for (i=0;i<n;i++)
        cin>>arr[i];
    bubble(arr,n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<' ';
    return 0;
}
