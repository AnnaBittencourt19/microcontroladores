//
// Created by Anna Bittencourt on 11/03/26.
//
#include <stdio.h>

int main() {
    int num = 10;

    // 1. Add 5 to num using the += operator and print the result
    num += 5; // num = num + 5 (10 + 5)
    printf("After += 5: %d\n", num);
    // 2. Subtract 3 from num using the -= operator and print the result
    num -= 3; //num = num - 3
    printf("After -= 3: %d\n", num);
    // 3. Multiply num by 2 using the *= operator and print the result
    num *= 2; // num = num * 2
    printf("After *= 2: %d\n", num);
    // 4. Divide num by 3 using the /= operator and print the result
    num /= 3; // num = num /3
    printf("After /= 3: %d\n", num);
    // 5. Get the remainder of num divided by 4 using the %= operator and print the result
    // Remember to use %% in your printf statement to display the % symbol!
    num %= 4; //num = num % 4
    printf("After %%= 4: %d", num);
    return 0;
}