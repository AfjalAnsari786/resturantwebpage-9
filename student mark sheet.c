#include <stdio.h>

int main() {
    char name[50];
    int roll,e,h,p,c,m;
    float marks[5];
    float total = 0, average;
    char grade;

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks for  English:\n");
    scanf("%d",&e);

     printf("Enter marks for  Hindi:\n");
    scanf("%d",&h);

     printf("Enter marks for  Physics:\n");
    scanf("%d",&p);

     printf("Enter marks for  chemestry:\n");
    scanf("%d",&c);

     printf("Enter marks for  Mathematics:\n");
    scanf("%d",&m);

    total=e+h+p+c+m;


    average =total/5;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 28)
        grade = 'D';
    else
        grade = 'F';

    // Print mark sheet
    printf("\n-============================= Student Mark Sheet -==========================---++\n");
    printf("Name       : %s", name);
    printf("Roll No.   : %d\n", roll);

        printf("English      : %d\n ",e);
        printf("Hindi       : %d\n ",h);
        printf("Physics     : %d\n ",p);
        printf("Chemistry   : %d\n ",c);
        printf("Mathematics : %d\n ",m);


    printf("Total Marks: %.2f\n", total);
    printf("Average    : %.2f\n", average);
    printf("Grade      : %c\n", grade);

    return 0;
}
