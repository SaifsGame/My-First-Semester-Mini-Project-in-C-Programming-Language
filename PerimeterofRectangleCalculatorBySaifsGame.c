// Calculate Perimeter of Rectangle 
#include <stdio.h>
int main () {
int Length; 
printf("Enter Length \n");
scanf("%d" , &Length);
int Width;
printf("Enter Width\n");
scanf("%d" ,&Width); 
int Perimeter=2 *  (Length + Width); 
printf("The Perimeter of Rectangle is:%d ", Perimeter);
return 0; 
}