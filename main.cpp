#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
    srand(argc == 3 ? atoi(argv[2]):time(NULL));
	int n=atoi(argv[1]);
	drawCharSquare(charSquare(n), n);
}

char **charSquare(int n)
{
	char **square = new char *[n];
    for ( int i = 0; i < n; ++i )
        square[i] = new char [n];

    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            square[j][i]=rand()%25+97;
        }
    }
	return square;
}

void drawCharSquare(char **square, int n)
{
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            printf("%c ",square[j][i]);
        }
        printf("\n");
    }

    for ( int i(0); i < n; ++i )
    delete [] square[i];
    delete [] square;
}