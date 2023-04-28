#include <stdio.h>
#include <math.h>//підключення бібліотек
int main(){
   int j, i, s, p = 0; 
for (i = 10; i <= 30; i++)
{ for (s = 0, j = i; j <= i; j++) s += (1+i+j);
p += s;
}    
printf("p=%d\n", p);
return 0;//кінець програми
}