/** 2023 Hosung.Kim <hyongak516@mail.hongik.ac.kr>
 * 
 * Calculate Divisor Function.
 */

#include <stdio.h>
#include <math.h>

int divisorFunction(int num, double z) {
    int count = 0;
    for (int i=1; i<=num; i++) {
        if (num%i == 0) {
            // temp로 변수 안 설정하고 바로하면 가끔 버그뜸.(이유불명)
            double temp = pow((double) i, z);
            count += (int) temp;
        }
    }
    return count;
}

int main() {
    int num;
    double z;
    char sNum[32];
    char sDivisor[32];
    FILE * file = fopen("test.csv", "w");
    printf("This is a program that calculates Divisor Function up to the input integer.\nEnter the number. : ");
    scanf("%d", &num);
    printf("Enter the power of N. : ");
    scanf("%lf", &z);

    for (int i=1; i<=num; i++) {
        sprintf(sNum, "%d", i);
        sprintf(sDivisor, "%d", divisorFunction(i, z));
        fputs(sNum, file);
        fputs(",", file);
        fputs(sDivisor, file);
        fputs("\n", file);
        printf("%d :\t %s\n", i, sDivisor);
    }
    fclose(file);

    return 0;
}