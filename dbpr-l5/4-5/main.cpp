#include <stdint.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	mlockall(MCL_CURRENT);
    srand (time(NULL));
    char preKey[16];  
    for(int i = 1;i<=16; i++) {
        preKey[i] = rand() % 2;
        printf("%x\n",preKey[i]);
    }
	munlockall();
	return 0;	
}
