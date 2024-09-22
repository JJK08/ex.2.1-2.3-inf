#include<stdio.h>

int main() {
    float b;
    float h;
    float a;
    printf("base del triango:");
    scanf("%f",&b);
    printf("altezza del triangolo: ");
    scanf("%f",&h);
    a=(b*h)/2;
    printf("l'area del trainglo e':%f\n",a);
    return 0;
}