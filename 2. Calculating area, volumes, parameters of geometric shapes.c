#include <stdio.h>

int main() {
    float radius, length, breadth, height;

    // Calculate area of a circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Area of circle = %.2f\n", 3.14 * radius * radius);

    // Calculate area of a rectangle
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area of rectangle = %.2f\n", length * breadth);

    // Calculate volume of a cube
    printf("Enter side length of cube: ");
    scanf("%f", &length);
    printf("Volume of cube = %.2f\n", length * length * length);

    // Calculate volume of a cylinder
    printf("Enter radius and height of cylinder: ");
    scanf("%f %f", &radius, &height);
    printf("Volume of cylinder = %.2f\n", 3.14 * radius * radius * height);

    return 0;
}
