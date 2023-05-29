#include <stdio.h>
#define PI 3.14159

typedef struct {
    float width;
    float height;
} Rectangle;

typedef struct {
    float radius;
} Circle;

typedef enum {
    RECTANGLE,
    CIRCLE
} ShapeType;

typedef struct {
    ShapeType type;
    union {
        Rectangle rectangle;
        Circle circle;
    } shape;
} Figure;

float area(Figure f) {
    switch (f.type) {
        case RECTANGLE:
            return f.shape.rectangle.width * f.shape.rectangle.height;
        case CIRCLE:
            return PI * f.shape.circle.radius * f.shape.circle.radius;
        default:
            return 0.0;
    }
}

int main() {
    Figure f1 = {RECTANGLE, {.rectangle = {3.0, 4.0}}};
    Figure f2 = {CIRCLE, {.circle = {2.0}}};

    printf("Area of rectangle: %.2f\n", area(f1));
    printf("Area of circle: %.2f\n", area(f2));

    return 0;
}
