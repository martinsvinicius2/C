#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double resultado;

    printf(" x1 y1\n ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("x2 y2\n");
    scanf("%lf %lf", &x2, &y2);

    resultado = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%.4lf\n", resultado);

    return 0;
}
