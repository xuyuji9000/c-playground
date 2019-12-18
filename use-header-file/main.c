#include <stdio.h>
#include "rad2area.h"

int main(void) {
    double radius = 2.0, area;
    area = radius2Area(radius);

    printf("The area of the circle is %f.\n", area);
    return 0;

}

