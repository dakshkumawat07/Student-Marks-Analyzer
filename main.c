#include <stdio.h>

int main()
{
    float marks[5];
    float total = 0;
    float average;
    float highest;
    float lowest;

    int passCount = 0;
    int failCount = 0;

    int gradeA = 0;
    int gradeB = 0;
    int gradeC = 0;
    int gradeD = 0;
    int gradeF = 0;

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
      printf("  Result: PASS\n");
      gradeA++;
      passCount++;
      }
      else if (marks[i] >= 80)
      {
      printf("  Grade : B\n");
      printf("  Result: PASS\n");
      gradeB++;
      passCount++;
      }
      else if (marks[i] >= 70)
      {
      printf("  Grade : C\n");
      printf("  Result: PASS\n");
      gradeC++;
      passCount++;
      }
      else if (marks[i] >= 60)
      {
      printf("  Grade : D\n");
      printf("  Result: PASS\n");
      gradeD++;
      passCount++;
      }
      else
      {
      printf("  Grade : F\n");
      printf("  Result: FAIL\n");
      gradeF++;
      failCount++;
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

      printf("\n=================================\n");
      printf("       RESULT SUMMARY\n");
      printf("=================================\n");
      printf("Passed Students : %d\n", passCount);
      printf("Failed Students : %d\n", failCount);


      printf("\n=================================\n");
      printf("      GRADE STATISTICS\n");
      printf("=================================\n");
      printf("Grade A : %d\n", gradeA);
      printf("Grade B : %d\n", gradeB);
      printf("Grade C : %d\n", gradeC);
      printf("Grade D : %d\n", gradeD);
      printf("Grade F : %d\n", gradeF);
      printf("=================================\n");

    return 0;
}
