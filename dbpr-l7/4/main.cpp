#include <iostream>
#include <iomanip>
using namespace std;int main(){int rrrr[3][3],rrrr1[3][3],rrrr12[3][3],i,j,k,s;cout<<"Podaj dane dla macierzy A"<<endl;for(i = 0; i < 3; i++)for(j = 0; j < 3; j ++) cin >> rrrr[i][j];cout<<"Podaj dane dla macierzy B"<<endl;for(i = 0; i < 3; i++)for(j = 0; j < 3; j++) cin >> rrrr1[i][j];cout << endl;for(i = 0; i < 3; i++)for(j = 0; j < 3; j++){s = 0;for(k = 0; k < 3; k++) s += rrrr[i][k] *rrrr1[k][j];rrrr12[i][j] = s;}cout <<  "C = A x B:\n";for(i = 0; i < 3; i++){for(j = 0; j < 3; j++) cout << setw(6) << rrrr12[i][j];cout << endl;}return 0;}
