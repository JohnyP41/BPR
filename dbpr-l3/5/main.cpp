#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int A[3][3],B[3][3],C[3][3],i,j,k,s;

  cout<<"Podaj dane dla macierzy A"<<endl;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j ++) cin >> A[i][j];

  cout<<"Podaj dane dla macierzy B"<<endl;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++) cin >> B[i][j];

  cout << endl;

  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    {
      s = 0;
      for(k = 0; k < 3; k++) s += A[i][k] * B[k][j];
      C[i][j] = s;
    }

  cout <<  "C = A x B:\n";
  
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++) cout << setw(6) << C[i][j];
    cout << endl;
  }

  return 0;
}
