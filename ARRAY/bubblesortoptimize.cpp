#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[20];
    cin>>n;
    int flag;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {   flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(!flag)
        {
        break;
        }

    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
