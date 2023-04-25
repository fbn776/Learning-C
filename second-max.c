#include <stdio.h>

void main() {
    int n, i = 2, max, secondMax;
    //Get the number of items in the list;
    printf("Enter no of elements in the list: ");
    scanf(" %d", &n);
    //Get the first item and assign it to `max`;
    printf("\nEnter number %d: ", 1);
    scanf(" %d", &max);
    //Get the 2nd item and assign it to the `secondMax`;
    printf("Enter number %d: ", 2);
    scanf(" %d", &secondMax);

    //Swap secondMax and max if secondMax is larger than max;
    if(secondMax > max) {
        int a = max;
        max = secondMax;
        secondMax = a;
    }

    while(i < n) {
        i++;
        int num;
        //Get the remaining numbers;
        printf("Enter number %d: ", i);
        scanf(" %d", &num);

        if(num > max) {
            secondMax = max;
            max = num;
        }
    }
    //Display the results;
    printf("Max is %d\n", max);
    printf("Second max is %d", secondMax);
}
