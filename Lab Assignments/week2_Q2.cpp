#include<iostream>
using namespace std;
void search(int ar[],int size);
int main()
{
    int test,size,i,j;
    cout<<"enter number of test cases - ";
    cin>>test;
    for (i=0;i<test;i++)
    {
        cout<<"enter size of array - ";
        cin>>size;
        int ar[size];
        cout<<"enter elements of array\n";
        
        for (j=0;j<size;j++)
        {
            cin>>ar[j];
        }
        
        search(ar,size);
    }
}
void search(int ar[],int size)
{
    int i,j,k,sum=0,flag=0;
    i=0;
    j=i+1;
    
    for (i=0;i<size-1;i++)
    {
        sum=ar[i]+ar[j];
        for (k=j+1;k<size;k++)
        {
            if (ar[k]==sum)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
        {
            break;
        }
        j++;
    }
    cout<<"the indices are - \n"<<i<<" "<<j<<" "<<k<<endl;
}
