#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {

                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
}
