#include <stdio.h>
#include <stdlib.h>

FILE *f;
int LongestLineLength(FILE *f);

int main()
{
    f = fopen("C:\\Users\\Cora\\Desktop\\fisiere\\pb5.txt", "r");

    if(f==NULL)
    {
        printf("Error!");
        return 0;
    }

    printf("\n%d\n" , LongestLineLength(f));
    fclose(f);
    return 0;
}

int LongestLineLength(FILE *f)
{
    int longLineLength = -1;
    int lineLength = -1;
    char c;

    while(feof(f)==0)
    {
        c = fgetc(f);
        lineLength++;

        if(c!=EOF && c!='\n')
        {
            if( lineLength > longLineLength )
                longLineLength = lineLength;

            lineLength = -1;
        }

    }
    return longLineLength;
}
