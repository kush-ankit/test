#include <stdio.h>

int main()
{
    int a;
    struct family
    {
        char name[20];
        int age;
        char gender[10];
        char maritalStatus[10];
    };
    struct family m[1];
    for (int i = 0; i < 1; i++)
    {
        printf("Enter The name:\n");
        scanf("%s", &m[i].name);
        printf("Enter Age:\n");
        scanf("%d",&m[i].age);
        printf("Enter gender:\n");
        scanf("%s", m[i].gender);
        printf("Enter marital status:\n");
        scanf("%s", m[i].maritalStatus);
    }
    int x = 0;
    while (x < 1)
    {
        printf("%s\n %d\n %s\n %s\n", m[x].name, m[x].age, m[x].gender, m[x].maritalStatus);
        x = x + 1;
    }
    return 0;
}