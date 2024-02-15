#include<stdio.h>
double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n % 2 == 0) {
        double half_power = power(x, n / 2);
        return half_power * half_power;
    } else {
        double half_power = power(x, (n - 1) / 2);
        return half_power * half_power * x;
    }
}

int main() {
    double x;
    int n;

    printf("Enter the base (x): ");
    scanf("%lf", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    double result = power(x, n);
    printf("%.2lf^%d = %.2lf\n", x, n, result);

    return 0;
}

