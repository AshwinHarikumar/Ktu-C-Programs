#include <stdio.h>
#include <string.h>
struct student 
{
    char name[50];
    float marks;
    int roll_no;
};
int main() {
    struct student s[60];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name); 
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks); 
    }
    for(int i = 0; i < n; i++) 
    {
      
       printf("Name: %s\n", s[i].name);
       printf("Roll number %d\n", i + 1);
       printf("Marks: %f\n", s[i].marks);
       printf("\n");
    }
    return 0;
}