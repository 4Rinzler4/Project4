/*Дана програма призначена
*для визначення значення функції*/
#include <stdio.h>
#include <math.h>
#include <locale.h>//підключення бібліотек
int main(){
    setlocale(LC_CTYPE, "ua");
float a, y, x;//оголошення змінних
printf("Введіть значення a:");
scanf("%f", &a);
printf("Введіть значення y:");
scanf("%f", &y);//введення змінних

x=a*(sqrt(y*y-2*a));

 if (x>0){
    printf("Значенння функції:%.2f \n", x);
} else{
    printf("Немає розв'язку.");
}
return 0;//кінець програми 
}