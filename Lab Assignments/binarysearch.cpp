#include<iostream>
using namespace std;
int main()
{
    int i,j,size,mid,lower,upper,test,key,f=0,comp;
    cout<<"Enter total test cases\n";
    cin>>test;
    
    for (i=0;i<test;i++)
    {
        f=0;
        comp=0;
        cout<<"Enter size of sorted array - ";
        cin>>size;
        int ar[size];
        cout<<"input sorted array\n";
        for (j=0;j<size;j++)
        {
            scanf("%d",&ar[j]);
        }
        lower=0;
        upper=size-1;
        cout<<"\nenter key - ";
        cin>>key;
        while (lower<=upper)
        {
            comp++;
            mid=(lower+upper)/2;
            
            if (key == ar[mid])
            {
                f=1;
                break;
            }
            else if(key>ar[mid])
            {
                lower=mid+1;
            }
            else
            {
                upper=mid-1;
            }
        }
        if (f==1)
        {
            cout<<"Number found after "<<comp<<" comparisons\n\n";
        }
        else
        {
            cout<<"Number not found. Total comparisons = "<<comp<<endl;
        }
    }
}
