#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, out=0, *arr;
    scanf("%d", &n); 
    arr = (int*) malloc(n * sizeof(int));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (i=0; i<n; i++) {
        scanf("%d", arr + i);
    }

    for (i=0; i<n; i++) {
        out+=*(arr+i);
    }

    printf("%d",out);
    
    return 0;
}
