#include <stdio.h>
struct Person {
    char name[50];
    int age;
};
void displayPerson(struct Person p)
{
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}
void  main()
{
    struct Person person1;
    printf("Enter name: ");
    gets(person1.name);
    printf("Enter age: ");
    scanf("%d", &person1.age);
    displayPerson(person1);
}