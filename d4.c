#include <stdio.h>
#include <math.h> 
int main(){
 double a = -M_PI/2;
 double b = M_PI/2;
 double dx = M_PI/20;
 double x, y;
for (x = a; x <= b; x += dx){
    y = 1 / tan(x) - 2 * sin(x);
    printf("x = %f, y = %f\n", x, y);
}
return 0;
}