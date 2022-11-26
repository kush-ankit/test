#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    struct details
    {
        char name[100];
        char fathersname[100];
        int age[10];
        int class[10];
    };
    struct details stud[10];
    fp = fopen("student.txt", "w");
    if (fp == NULL)
    {
        puts("Can't open file\n");
        exit(1);
    }
    int a = 0;
    while (a < 2)
    {

        fgets(stud[a].age, 100, stdin);
        fprintf(fp, "The line is: %s\n", stud[a].name);
        a++;
        
    }
    /*printf("%d.\n", a);
    printf("Enter Name:\n");
    scanf("%c", &stud[a].name);
    fprintf(fp, "%c", stud[a].name);
    printf("Enter father's name:\n");
    scanf("%s", &stud[a].fathersname);
    fprintf(fp, "%s", stud[a].fathersname);
    printf("Enter age:\n");
    scanf("%d", &stud[a].age);
    fprintf(fp, "%d", stud[a].age);
    printf("Enter the class:\n");
    scanf("%d", &stud[a].class);
    fprintf(fp, "%d", stud[a].class);
    a++;*/

    return 0;
}