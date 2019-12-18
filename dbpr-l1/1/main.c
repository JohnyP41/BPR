#include <stdio.h>
int main(int argc, char **argv)
{
    FILE *fp=fopen(argv[1],"r");
    char tmp[256];
    while(fp && fgets(tmp, sizeof(tmp), fp))
    {
        if (strstr(tmp, "mama")) printf("%s", "znalazlem\n");
    }
}
