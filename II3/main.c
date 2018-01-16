#include <stdio.h>
#include <stdlib.h>

FILE *f;
int WordCounter(FILE *f);

int main()
{
    f = fopen("C:\\Users\\Cora\\Desktop\\fisiere\\2pb3.txt", "r");
    if(f==NULL)
    {
        printf("Error!");
        return 0;
    }

    printf("\n%d\n", WordCounter(f));
    return 0;
}

int WordCounter(FILE *f)
{
    char c[40];
    int counter = 0;

    while(feof(f) == 0)
    {
        fscanf(f, "%s", &c );
        counter++;
    }

    return counter;
}
