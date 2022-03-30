#include <iostream>
using namespace std;
void insertion(int ar[],int size);
int main()
{
    int size,i,j,test;
    cin>>test;
    for(i=0;i<test;i++)
    {
    cout<<"enter size of array - ";
    cin>>size;
    int ar[size];
    cout<<"enter elements of array\n";
    for (j=0;j<size;j++)
    {
        cin>>ar[j];
    }
    insertion(ar,size);
    }
}
void insertion(int ar[],int size)
{
    int i,j,comp=0,temp,shift=0;
    
    for (i=1;i<size;i++)
    {
        temp=ar[i];
        j=i-1;
        while (j>=0)
        {
            if (ar[j]>temp)
            {
                comp++;
                ar[j+1]=ar[j];
                shift++;
                j--;
            }
            else
            break;
        }
        shift++;
        ar[j+1]=temp;
    }
    cout<<"\n";
    for (i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<"shifts = "<<shift<<"\ncomparisons = "<<comp;
}
