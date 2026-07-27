#include <stdio.h>

int main()
{
    float marks[5];
    float total = 0;
    float average;
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
        total += marks[i];
    }

       average = total / 5;

      printf("\n=================================\n");
      printf("        MARKS SUMMARY\n");
      printf("=================================\n");
      printf("Total Marks   : %.2f\n", total);
      printf("Average Marks : %.2f\n", average);

    return 0;
}
