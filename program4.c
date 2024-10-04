//Problem Statement :Accept 2 number form the user and perform its addtion

#include<stdio.h>
int main()
 {
    float fValue1=0.0, fValue2=0.0;
    float fResult=0.0;

    printf("enter first no: ");
    scanf("%f",&fValue1);

    printf("enter the second no:");
    scanf("%f",&fValue2);

    fResult=fValue1+fValue2;

    printf("Addtion is the : %f",fResult);

    return 0;
 }