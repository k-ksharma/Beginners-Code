#include<iostream>
using namespace std;
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
    int n,i;
    cin>>n;
    int *arr=new int(n);
    for (i=0;i<n;i++)
        cin>>arr[i];
    insertsort(arr,n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<' ';
    return 0;
}
