//author-akshat khatri//
//date-22-06-2023//
#include <stdio.h>
#include <math.h>

int main() {
    float x[10];
    float y[10];
    
    printf("Enter the x and y coordinates of 10 points:\n");
    for (int i = 0; i < 10; i++) {
        printf("Point %d: ", i + 1);
        scanf("%f %f", &x[i], &y[i]);
    }
    
    float sumDistances = 0;
    for (int i = 0; i < 9; i++) {
        float distance = sqrt(pow(x[i+1] - x[i], 2) + pow(y[i+1] - y[i], 2));
        sumDistances += distance;
    }
    
    printf("The sum of distances between consecutive points is %.2f\n", sumDistances);
    
    return 0;
}
