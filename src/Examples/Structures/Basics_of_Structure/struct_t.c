#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
} pt;

// Nested structures
struct rect {
    struct point pt1;
    struct point pt2;
};
struct rect screen;
screen.pt1.x    /* Refers to the 'x' coordinate of the 'pt1' member of screen */

int main() {
    pt.x = 1;
    pt.y = 2;

    double dist, sqrt(double);
    dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);

    printf("%d, %d, %d", pt.x, pt.y, dist);



    return 0;
}