#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
	char aWord[50];
    char a[50],b[50];
    cin>>a;
    cin>>b;
	ifstream file(a);
	while (file.good()) {
    file>>aWord;
    if (file.good() && strcmp(aWord, b) == 0) {
        cout<<"znalazlem"<<endl;
    	}
	}
}
