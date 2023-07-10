#include <stdio.h>
#include <math.h>

// Define a structure to represent different shapes
struct Shape {
    enum Type { Circle = 1, Rectangle } shapeType; // Enum for shape type
    union Dimensions {
        float radius; // Radius for Circle
        float width;  // Width for Rectangle
        float length; // Length for Rectangle
    } dimensions;
};

int main() {
    struct Shape s1; // Create an instance of the Shape struct
    float area;

    // Read the shape type from the user
    scanf("%d", &s1.shapeType);

    switch (s1.shapeType) {
        case 1: // Circle
            scanf("%f", &s1.dimensions.radius); // Read radius of the circle
            area = pow(s1.dimensions.radius, 2) * 3.14; // Calculate area
            printf("Area of the circle: %.4f units", area);
            break;

        case 2: // Rectangle
            scanf("%f %f", &s1.dimensions.length, &s1.dimensions.width); // Read length and width of the rectangle
            area = s1.dimensions.length * s1.dimensions.width; // Calculate area
            printf("Area of the rectangle: %.4f units", area);
            break;

        default:
            printf("Invalid choice!");
            break;
    }

    return 0;
}
