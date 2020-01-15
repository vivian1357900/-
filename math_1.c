#include <stdio.h>

int main()
{

    float x, a, b, c;
    while((scanf("%f %f %f",&a,&b,&c)) != EOF)
    {
        x = (a+b)*c/2;
        printf ("Trapezoid area:%f\n", x);
    }
    return 0;
}
