#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *arv[])
{

    int target; // for later processing, irrelevant here
    int m;      // m = #rows and #columns of array
    scanf("%d %d", &target, &m);
    int array[m][m];

    int i, k;
    for (i = 0; i < m; i++)
    {
        for (k = 0; k < m; k++)
        {
            scanf("%d", &(array[i][k])); // save value in array.
        }
    }
    // the problem occurs before this point.
    for (i = 0; i < m; i++)
    {
        for (k = 0; k < m; k++)
        {
            printf("%2d", array[i][k]); // print array.
        }
        printf("\n");
    }

    return 0;
}