#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dataReader();
void dataEntery();
void dataUpdate();
void dataReaderWithrollno();

int main()
{
    int a, t;
    while (1)
    {
        printf("STUDENT MANAGEMENT APP\n");
        printf("1.Add a new student.\n2.View the list of student\n");
        scanf("%d", &a);
        if (a == 1 || a == 2)
        {
            printf("Enter Roll no.");
            scanf("%d", &t);
        }
        if (a == 1)
        {
            // dataEntery(t);
             dataUpdate(t);
            //dataReader(t);
        }
        if (a == 2)
        {
            dataReaderWithrollno(t);
        }
        if (a == 3)
        {
            break;
        }
        printf("\n");
    }
    return 0;
}
void dataEntery(int a)
{
    FILE *fp;
    struct details
    {
        char name[100];
        char fathersname[100];
        int age;
        int class;
    };
    struct details stud[10];
    fp = fopen("student.txt", "a+");
    if (fp == NULL)
    {
        puts("Can't open file\n");
        exit(1);
    }

    printf("%d.\n", a);
    fflush(stdin);
    printf("Enter name:\n");
    fgets(stud[a].name, 100, stdin);
    fprintf(fp, "Name: %s", stud[a].name);
    printf("Enter father's name:\n");
    fgets(stud[a].fathersname, 100, stdin);
    fprintf(fp, "Father's name: %s", stud[a].fathersname);
    printf("Enter age:\n");
    scanf("%d", &stud[a].age);
    fprintf(fp, "Age: %d\n", stud[a].age);
    printf("Enter the class:\n");
    scanf("%d", &stud[a].class);
    fprintf(fp, "Class: %d\n", stud[a].class);

    fclose(fp);
}
void dataReaderWithrollno(int a)
{
    FILE *fp;

    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        puts("Can't open file\n");
        exit(1);
    }
    const unsigned max_length = 100;
    char buffer[max_length];
    int s = 1;
    int z = 1;
    while (fgets(buffer, max_length, fp))
    {
        if (s >= (((a - 1) * 4) + 1) && s <= (a * 4))
        {
            printf("%d. ", z);
            printf("%s", buffer);
            z++;
        }
        s++;
    }
    fclose(fp);
}
void dataReader(int a)
{
    FILE *fp;
    char ch[100];

    fp = fopen("student.txt", "r");
    if (fp == NULL)
    {
        puts("Can't open file\n");
        exit(1);
    }
    const unsigned max_length = 100;
    char buffer[max_length];
    while (fgets(buffer, max_length, fp))
    {

        printf("%s", buffer);
    }
    fclose(fp);
}
void dataUpdate(int a)
{
    FILE *fp;
    struct details
    {
        char name[100];
        char fathersname[100];
        int age;
        int class;
    };
    struct details stud[10];
    fp = fopen("student.txt", "r+");
    if (fp == NULL)
    {
        puts("Can't open file\n");
        exit(1);
    }
    int s = 1;
    int z = 1;
    const unsigned max_length = 100;
    char buffer[max_length];
    while (fgets(buffer, max_length, fp))
    {
        if (s >= (((a - 1) * 4) + 1) && s <= (a * 4))
        {
            printf("%d. ", z);
            printf("Enter name:\n");
            fgets(buffer[(((a - 1) * 4) + 1)], max_length, stdin);
            fprintf(fp, "Name: %s", buffer[(((a - 1) * 4) + 1)]);
            printf("Enter father's name:\n");
            fgets(buffer[(((a - 1) * 4) + 2)], max_length, stdin);
            fprintf(fp, "Father's name: %s", buffer[(((a - 1) * 4) + 2)]);
            printf("Enter age:\n");
            scanf("%d", &buffer[(((a - 1) * 4) + 3)]);
            fprintf(fp, "Age: %d\n", buffer[(((a - 1) * 4) + 3)]);
            printf("Enter the class:\n");
            scanf("%d", &buffer[(((a - 1) * 4) + 4)]);
            fprintf(fp, "Class: %d\n", buffer[(((a - 1) * 4) + 1)]);
            z++;
        }
        s++;
    }

    fclose(fp);
}