#include <iostream>
using namespace std;
void selection(int ar[],int size);
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
    selection(ar,size);
    }
}
void selection(int ar[],int size)
{
    int i,j,comp=0,swap=0,min,temp=0,in;
    for (i=0;i<size-1;i++)
    {
        min=ar[i];
        for (j=i+1 ; j<size ; j++)
        {
            comp++;
            if (ar[j]<min)
            {
                min=ar[j];
                in=j;
            }
        }
        swap++;
        temp=ar[i];
        ar[i]=ar[in];
        ar[in]=temp;
    }
    cout<<"\n\n";
    for (i=0;i<size;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl<<"Comparisons = "<<comp<<endl<<"Swaps = "<<swap<<endl;
}
