#include <stdio.h>
#include <stdlib.h>

FILE *f;
FILE *fCopy;
char c;

int main()
{
    f = fopen("C:\\Users\\Cora\\Desktop\\fisiere\\teme.txt", "r");

    if(f==NULL)
    {
        printf("Error!");
        return 0;
    }

    fCopy = fopen("C:\\Users\\Cora\\Desktop\\fisiere\\temeCopy.txt", "w");

    while(feof(f)==0)
    {
        c = fgetc(f);

        if(c >= 'a' && c <= 'z')
            c += 'A' - 'a';

        fputc(c, fCopy);
    }

    fclose(f);
    fclose(fCopy);
    return 0;
}
