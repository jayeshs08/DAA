#include <iostream>
using namespace std;
void countar(char ar[],int size);
int main()
{
    int size,i;
    cout<<"enter size of char array - ";
    cin>>size;
    char ar[size];
    cout <<"enter elements\n";
    
    for (i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    countar(ar,size);
}
void countar(char ar[],int size)
{
    char max=ar[0];
    
    int auxsize,i,j,temp=0;
    for (i=0;i<size;i++)
    {
        if (ar[i]>max)
        max=ar[i];
    }
    cout<<"max element = "<<max<<endl;
    auxsize=(max-97);
    cout<<"size of auxiliary array = "<<auxsize+1;
    
    int aux[auxsize+1]={0};
    
    for (i=0;i<size;i++)
    {
        temp=ar[i]-97;
        for (j=0;j<auxsize+1;j++)
        {
            if (j==temp)
            {
                aux[j]++;
            }
        }
    }
    int large = aux[0],index=0;
    for (i=1;i<auxsize+1;i++)
    {
        if (aux[i]>large)
        {
            large=aux[i];
            index=i;
        }
    }
    char lar = index+97;
    cout<<endl<<"most occuring = "<<lar;
}
