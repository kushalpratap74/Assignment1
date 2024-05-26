#include <stdio.h>
#include <math.h>

int main() {
    double radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    volume = 4.0 / 3.0 * M_PI * pow(radius, 3);

    printf("The volume of sphere is %.6lf.\n", volume);

    return 0;
}
