/*
EXP NO : 9
Title :- Design a structure student_record to contain name, roll_number, and total marks
obtained. Write a program to read 5 students data from the user and then display the
topper on the screen.
Name MANSINGH CHAUHAN
Division. :-F.E.(ECS) - E
Roll No :- 17
UIN :- 241S018
*/
#include <stdio.h>
#include <string.h>
struct student_record {
char name[50];
int roll_number;
float total_marks;
};
int main() {
struct student_record students[5];
int topperIndex = 0;
for (int i = 0; i < 5; i++) {
printf("Enter details for student %d:\n", i + 1);
printf("Name: ");
scanf(" %[^\n]", students[i].name);
printf("Roll Number: ");
scanf("%d", &students[i].roll_number);
printf("Total Marks: ");
scanf("%f", &students[i].total_marks);
if (students[i].total_marks > students[topperIndex].total_marks) {

topperIndex = i;
} } printf("\nTopper:\n"); printf("Name: %s\n",
students[topperIndex].name); printf("Roll Number: %d\n",
students[topperIndex].roll_number); printf("Total Marks: %.2f\n",
students[topperIndex].total_marks); return 0;
}
/* OUTPUT : Enter details for student 1:
Name: Divyansh
Roll Number: 11
Total Marks: 98
Enter details for student 2:
Name: Arnav
Roll Number: 1
Total Marks: 80
Enter details for student 3:
Name: Mansingh
Roll Number: 17
Total Marks: 82
Enter details for student 4:
Name: Yash
Roll Number: 20
Total Marks: 69
Enter details for student 5:
Name: Suresh
Roll Number: 21
Total Marks: 67

  Topper:
Name: Divyansh
Roll Number: 11
Total Marks: 98.00 */
