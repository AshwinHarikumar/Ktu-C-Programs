#include<stdio.h>
 struct Address
    {
        char HouseNo[25];
        char  Pincode[20];
        char  city[20];
    } ;
struct Employee
{
    int id ;
    int age;
    float salary;
    struct Address Add;
};
void main()
{
    struct Employee E;
    printf("enter the employee id ");
    scanf("%d",&E.id);
    printf("enter the age");
    scanf("%d",&E.age);
    printf("Enter the salary");
    scanf("%f",&E.salary);
    printf("Enter the house No");
    scanf("%s",&E.Add.HouseNo);
    printf("Enter the pincode");
    scanf("%s",&E.Add.Pincode);
    printf("Enter the city");
    scanf("%s",&E.Add.city);
    printf("details of Employee\n");
    printf("\nage: %d\n",E.age);
    printf("\nsalary: %d\n",E.salary);
    printf("\nHouse No : %s\n",E.Add.HouseNo);
    printf("\ncity: %c\n",E.Add.city);
    printf("\npincode : %d\n",E.Add.Pincode);   
}
