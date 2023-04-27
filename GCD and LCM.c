#include <stdio.h>

void main() {
    //Eculids division lemma
    int a, b, r, LCM;
    printf("Enter numbers a and b: ");
    scanf("%d %d", &a, &b);

    LCM = a* b;
    r = a % b;

    while(r) {
        a = b;
        b = r;
        r = a % b;
    }

    printf("GCD is: %d\n", b);
    LCM /= b;
    printf("LCM is: %d", LCM);
}
