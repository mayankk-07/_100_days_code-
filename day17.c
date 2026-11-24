#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = (b * b) - (4 * a * c);


    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);
    }
  
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }

    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
