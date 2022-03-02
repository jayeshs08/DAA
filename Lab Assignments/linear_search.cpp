#include<iostream>
using namespace std;
int main ()
{
  int i, j, key, comp, test, size, f;
  cout << "Enter the number of test cases" << endl;
  cin >> test;
  for (i = 0; i < test; i++)
    {
      comp = 0;
      cout << "enter size of array" << endl;
      cin >> size;
      int arr[size];
      cout << "Enter the elements" << endl;
      for (j = 0; j < size; j++)
	{
	  cin >> arr[j];
	}
      cout << endl << "Enter key value - ";
      cin >> key;
      //beginning search
      for (j = 0; j < size; j++)
	{
	  comp++;
	  if (key == arr[j])
	    {
	      f = 1;
	      break;
	    }
	  else
	    f = 0;
	}

      if (f == 1)
	{
	  cout << "Value present at " << comp << " position\n\n";
	}
      else
	{
	  cout << "value not present." << endl << "searched " << comp <<
	    " positions\n\n";
	}
    }
}

