#include <iostream>
using namespace std;
void binary (int ar[],int size);
int main()
{
    int test,size,i,j;
    cout<<"enter number of test cases - ";
    cin>>test;
    
    for (i=0;i<test;i++)
    {
        cout<<endl<<"enter size of array - ";
        cin>>size;
        int ar[size];
        cout<<"input elements of sorted array"<<endl;
        
        for (j=0;j<size;j++)
        {
            cin>>ar[j];
        }
        
        //applying binary search
        
        binary(ar,size);
    }
}
void binary(int ar[],int size)
{
    int key,count=0,low=0,up=size-1,mid,tempL,tempF;
    cout<<"enter key to find - ";
    cin>>key;
    
    while (low <= up)
    {
        mid = low + (up-low)/2;
        
        if (ar[mid]<key)
        {
            low=mid+1;
        }
        else if (ar[mid]>key)
        {
            up=mid-1;
        }
        else
        {
           tempL=tempF=mid;
           while (ar[tempL] == ar[mid])
           {
               tempL++;
           }
           while (ar[tempF]==ar[mid])
           {
               tempF--;
           }
          
           
           break;
        }
    }
    count = tempL-tempF-1;
    cout<<"element "<<key<<" appears "<<count<<" times\n";
}
