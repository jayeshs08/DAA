#include<iostream>
#include<math.h>
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
    int i,j,key,count=0,flag=0;
    cout<<"enter key value - ";
    cin>>key;
    
    for (i=0;i<size-1;i++)
    {
        for (j=i+1;j<size;j++)
        {
            if ( abs(ar[j]-ar[i]) == key )
            {
                flag=1;
                count++;
            }
        }
    }
  if (flag==0)
  {
    cout<<"Sequence not found\n";
  }
    cout<<"\ntotal - "<<count<<endl;
}
