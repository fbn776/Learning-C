#include <stdio.h>
#include <math.h>

float a, b,c;

int main()
{
    printf("Enter a,b,c of ax^2 + bx + c = 0\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    printf("\n");

    float d = (b*b) - (4*a*c);

    if(d >= 0){
        float root1, root2;
        float dSqrt = sqrt(d);

        if(d == 0){
            printf("Roots are equal and real\n");
        }else {
            printf("Roots are real and distinct\n");
        }

        root1 = (a + dSqrt)/2;
        root2 = (a - dSqrt)/2;

        printf("Roots are:\n\tx = %f\n\tx = %f", root1, root2);
    }else {
        float dSqrt = sqrt(-d);
        float real = a/2;
        float img = dSqrt/2;

        printf("Roots are complex\n");
        printf("\tReal: %f\n\tImginary: %f", real, img);

    }


    printf("\n");
}
