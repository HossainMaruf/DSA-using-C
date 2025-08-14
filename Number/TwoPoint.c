#include <stdio.h>
#include <math.h>

struct Point {
    int x, y;
};

void printPoint(struct Point p) {
    printf("(%d, %d)\n", p.x, p.y);
}

float distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p1.x-p2.x,2) + pow(p1.y-p2.y, 2));
}

void main() {
    struct Point p1 = {1, 2};
    struct Point p2 = {3, 4};
    printPoint(p1);
    printPoint(p2);
    printf("Length = %f", distance(p1, p2));
}