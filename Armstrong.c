#include <stdio.h>
#include <math.h>

int main() {
    int i, count, temp, rem, sum;

    for(i = 1; i < 10000; i++) {
        count = 0;
        temp = i;

        // Count number of digits
        while(temp != 0) {
            count++;
            temp /= 10;
        }

        sum = 0;
        temp = i;

        // Calculate sum of digits raised to the power of 'count'
        while(temp != 0) {
            rem = temp % 10;
            sum += pow(rem, count);
            temp /= 10;
        }

        // Check if number is equal to sum
        if(sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
