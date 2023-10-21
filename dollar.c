#include<stdio.h>
//The program about to exchange dollar to pound and yen
int main(){
    //variable
    float dollar, fee, total_dollar, pound;
    int yen; 
    //prompt to user
    printf("Enter the amount of dollar:");
    scanf("%f",&dollar);
    //exchange fee and half dollar conver to yen and half to pound
    fee=dollar * 0.1;
    total_dollar=dollar-fee;
    pound=(total_dollar/2) * 0.79;
    yen= (total_dollar/2) * 127.65;
    // output
    printf("Half dollar exchange to %f GBP\n",pound);
    printf("Half dollar convert to %d JPY\n",yen);
    return 0;
}