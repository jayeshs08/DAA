#include<iostream>
#define inf 999
using namespace std;

void
printmatrix (int matrix[4][4], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (matrix[i][j] == inf)
	    cout << " inf ";
	  else
	    cout << matrix[i][j];
	}
      cout << endl;
    }
}

void
floydwarshal (int graph[4][4], int n)
{
  int matrix[4][4];
  int i, j, k;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  matrix[i][j] = graph[i][j];
	}
    }

  for (k = 0; k < n; k++)
    {
      for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      if (matrix[i][k] + matrix[k][j] < matrix[i][j])
		matrix[i][j] = matrix[i][k] + matrix[k][j];
	    }
	}
    }
  printmatrix (matrix, n);
}

int
main ()
{
  int nodes = 4;

  int graph[4][4] = {
    {0, 3, inf, 5},
    {2, 0, inf, 4},
    {inf, 1, 0, inf},
    {inf, inf, 2, 0}
  };
  floydwarshal (graph, nodes);
}
