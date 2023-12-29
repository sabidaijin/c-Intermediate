#include <stdio.h>

int main() {

    double weight = 0;
    double height = 0;
    
    puts("身長(cm)と体重(kg)を入力してください");
    
    printf("身長");
    scanf("%lf",&height);
    printf("体重"); scanf("%lf",&weight);
    height=height/100;
    double bmi = weight / (height*height);
    
    printf("あなたのBMIは"); printf("%lf", bmi);
    
    return 0;
}
