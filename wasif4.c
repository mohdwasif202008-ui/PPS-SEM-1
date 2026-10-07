#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, d, root1, root2, real, imag;
    printf("enter values of a,b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root1 = (-b - sqrt(d)) / (2 * a);
        printf("roots are real and different.\n");
        printf("root1 = %.2f\n", root1);
        printf("root2 = %.2f\n", root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);
        printf("roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else
    {
        root1 = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Roots are complex and equal.\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);

    }

    return 0;
}
