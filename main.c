#include <stdio.h>

int main()
{
    float marks[5];
    int i;

    printf("=================================\n");
    printf("      STUDENT MARKS ANALYZER\n");
    printf("=================================\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    printf("\n=================================\n");
    printf("         ENTERED MARKS\n");
    printf("=================================\n");

    for (i = 0; i < 5; i++)
    {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }

    return 0;
}
