#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,b,c,d,e;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    a = n % 10;
    b = (n % 100)/10;
    c = (n % 1000)/100;
    d = (n % 10000)/1000;
    e = n/10000;
    printf("%d", (a+b+c+d+e));
    return 0;
}
