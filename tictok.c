#include <stdio.h>

int getPerson2Move();
int getPerson1Move();
void printBoard();
int check();

char a[] = {
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
};
char b[] = {'|', '-'};
int main()
{
    int P1, P2, c;
    printBoard(P1, P2);
    for (int i = 0; i < 9; i++)
    {
        P1 = getPerson1Move();
        printBoard(P1, P2);
        c = check();
        if (c == 1)
        {
            printf("GAME OVER.\n Player 1 wins...");
            break;
        }
        P2 = getPerson2Move();
        printBoard(P1, P2);
        c = check();
        if (c == 1)
        {
            printf("GAME OVER.\n Player 2 wins...");
            break;
        }
    }
    return 0;
}
int getPerson1Move()
{
    int p;
    printf("person 1:");
    scanf("%d", &p);
    return p;
}
int getPerson2Move()
{
    int q;
    printf("person 2:");
    scanf("%d", &q);
    return q;
}
void printBoard(int P1, int P2)
{
    a[P2 - 1] = 'X';
    a[P1 - 1] = 'O';
    printf("%c %c %c %c %c\n", a[0], b[0], a[1], b[0], a[2]);
    printf("%c %c %c %c %c \n", b[1], b[1], b[1], b[1], b[1]);
    printf("%c %c %c %c %c\n", a[3], b[0], a[4], b[0], a[5]);
    printf("%c %c %c %c %c \n", b[1], b[1], b[1], b[1], b[1]);
    printf("%c %c %c %c %c\n", a[6], b[0], a[7], b[0], a[8]);
}
int check()
{
    int y;
    int row1Check = (a[0] == a[1] && a[1] == a[2]);
    if (row1Check || (a[3] == a[4] && a[4] == a[5]) || (a[6] == a[7] && a[7] == a[8]) || (a[0] == a[4] && a[4] == a[8]) || (a[2] == a[4] && a[4] == a[6]) || (a[0] == a[3] && a[3] == a[6]) || (a[1] == a[4] && a[4] == a[7]) || (a[2] == a[5] && a[5] == a[8]))
    {
        y = 1;
    }
    else
    {
        y = 0;
    }
    return (y);
}
