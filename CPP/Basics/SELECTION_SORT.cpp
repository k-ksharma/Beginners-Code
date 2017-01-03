#include<iostream>
using namespace std;
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
    int n,i;
    cin>>n;
    int *arr=new int(n);
    for (i=0;i<n;i++)
        cin>>arr[i];
    selection(arr,n);
    for(i=0;i<n;i++)
        cout<<arr[i]<<' ';
    return 0;
}
