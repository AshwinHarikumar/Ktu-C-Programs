#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
void main() {
    int choice;
    float area;
    printf("Choose the shape to find the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: {
            // Area of Circle
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        }
        case 2: {
            // Area of Rectangle
            float length, width;
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        }
        case 3: {
            // Area of Square
            float side;
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("The area of the square is: %.2f\n", area);
            break;
        }
        default: {
            printf("Invalid choice! Please select a valid option (1-3).\n");
            break;
        }
    }
}