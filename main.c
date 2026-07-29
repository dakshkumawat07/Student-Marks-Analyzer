#include <stdio.h>

int main()
{
    float marks[5];
    float total = 0;
    float average;
    float highest;
    float lowest;
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

    highest = marks[0];
    lowest = marks[0];


    for (i = 0; i < 5; i++)
    {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
        total += marks[i];
       
       if (marks[i] > highest)
      {
       highest = marks[i];
      }

       if (marks[i] < lowest)
      {
       lowest = marks[i];
      }
      if (marks[i] >= 90)
      {
      printf("  Grade : A\n");
      }
      else if (marks[i] >= 80)
      {
      printf("  Grade : B\n");
      }
      else if (marks[i] >= 70)
      {
      printf("  Grade : C\n");
      }
      else if (marks[i] >= 60)
      {
      printf("  Grade : D\n");
      }
      else
      {
      printf("  Grade : F\n");
      }
     
    }

       average = total / 5;

      printf("\n=================================\n");
      printf("        MARKS SUMMARY\n");
      printf("=================================\n");
      printf("Total Marks   : %.2f\n", total);
        printf("Average Marks : %.2f\n", average);
      printf("Highest Marks : %.2f\n", highest);
      printf("Lowest Marks  : %.2f\n", lowest);


    return 0;
}
