#include <stdio.h>
#include <math.h>

long double factorial(int n)
{
    long double result = 1.0;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

double taylor_sin(double x, int n)
{
    double sin_x = 0.0;
    for (int i = 0; i < n; i++)
    {

        // Calculate the term: (-1)^i * x^(2i + 1) / (2i + 1)!
        double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sin_x += term;
    }
    return sin_x;
}

int main()
{
    double x;
    int n;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    x = fmod(x + M_PI, 2 * M_PI) - M_PI; // Normalizing x to be within the range [-pi, pi]

    double sine_taylor = taylor_sin(x, n);

    double sine_builtin = sin(x);

    printf("Taylor series approximation of sin(%.2f) using %d terms: %.10f\n", x, n, sine_taylor);
    printf("Built-in sin(%.2f): %.10f\n", x, sine_builtin);

    return 0;
}