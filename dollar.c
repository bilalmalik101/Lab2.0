#include<stdio.h>
int main(){
    float dollar, fee, total_dollar, pound;
    int yen; 
    printf("Enter the amount of dollar:");
    scanf("%f",&dollar);
    fee=dollar * 0.1;
    total_dollar=dollar-fee;
    pound=(total_dollar/2) * 0.79;
    yen= (total_dollar/2) * 127.65;
    printf("Half dollar exchange to %f GBP\n",pound);
    printf("Half dollar convert to %d JPY\n",yen);
    return 0;
}