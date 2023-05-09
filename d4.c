#include <stdio.h>
#include <math.h>//підключення бібліотек 
int main(){
 double a = -M_PI/2;
 double b = M_PI/2;
 double dx = M_PI/20;
 double x, y;//оголошення змінних
for (x = a; x <= b; x += dx){
    /*y = 1 / tan(x) - 2 * sin(x);
    printf("x = %.2f, y = %.2f\n", x, y);//виведення*/
    if (x == 0)
    {
        printf("x = %.2f\t| Невизначено\n", y);
    }
    else{
        y = 1 / tan(x) - 2 * sin(x);
        printf("x = %.2f, y = %.2f\n", x, y);
    }
}
return 0;//кінець програми
}
