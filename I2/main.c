#include <stdio.h>
#include <stdlib.h>

FILE *f;
void Display(FILE *f);

int main()
{
    f = fopen("C:\\Users\\Cora\\Desktop\\fisiere\\teme.txt", "r");

    if(f==NULL)
    {
        printf("Error!");
        return 0;
    }

    while(feof(f)==0)
    {
        Display(f);
    }

    fclose(f);
    return 0;
}

void Display(FILE *f)
{
    char c = 0;

    while(c != 10)
    {
        c=fgetc(f);

        if(c==EOF)
            return;

        printf("%c", c);
    }
}
