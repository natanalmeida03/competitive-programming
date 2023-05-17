#include <stdio.h>
#include <math.h>

int main(){

    double delta;
    double x1 = 0,x2 = 0;
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);

    if (a == 0 && b == 0 && c == 0) {
        printf("0\n");
        return 0;
    }
    else if (a == 0 && b == 0 && c != 0 ) {
        printf("-1\n");
        return 0;
    } else if (a == 0 && b != 0 && c != 0) {
        printf("1\n");
        x1 = ((c*(-1))/b);
        printf("%lf\n", x1);
        return 0;
    }

    delta = b*b - 4*a*c;

    if ( delta < 0 ) {
        printf("0\n");
        return 0;
    } else if (delta == 0) {
        x1 = ((-1)*b + sqrt(delta)) / (2*a);
        x2 = x1;
        printf("1\n");
        printf("%lf\n", x1);
        return 0;
    } else {
        x1 = ((-1)*b + sqrt(delta)) / (2*a);
        x2 = ((-1)*b - sqrt(delta)) / (2*a);
        printf("2\n");
        if (x1 >= x2) {
        printf("%lf\n", x2);
        printf("%lf\n", x1);
        return 0;
        } else {
        printf("%lf\n", x1);
        printf("%lf\n", x2);
        return 0;
        }
        
    }




}