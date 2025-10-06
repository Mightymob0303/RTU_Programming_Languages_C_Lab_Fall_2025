/*
 * week4_2_struct_student.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>


struct studentinfo{
char name[50];
int id;
float grade;
};
// TODO: Define struct Student with fields: name (char[]), id (int), grade (float)
// Example:
// struct Student {
//     char name[50];
//     int id;
//     float grade;
// };

int main(void) {
    // TODO: Declare one or more Student variables
struct studentinfo studentuno, studentduo;
    // TODO: Assign values (either manually or via scanf)
    strcpy(studentuno.name, "shamil Abdurahmanov");
    studentuno.id = 1001;
    studentuno.grade = 9.1;
    // TODO: Print struct contents using printf
    strcpy(studentduo.name, "Murad Hashimov");
    studentduo.id = 1002;
    studentduo.grade = 8.7;


printf("Student 1: %s, ID: %d, Grade: %.1f\n", studentuno.name, studentuno.id, studentuno.grade);
printf("Student 2: %s, ID: %d, Grade: %.1f\n", studentduo.name, studentduo.id, studentduo.grade);

    return 0;
}
