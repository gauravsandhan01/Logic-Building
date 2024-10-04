//Problem Statement :Accept 2 number form the user and perform its addtion

#include<stdio.h>
int main()
 {
    int iValue1=0, iValue2=0;
    int iResult=0;

    printf("enter first no: ");
    scanf("%d",&iValue1);

    printf("enter the second no:");
    scanf("%d",&iValue2);

    iResult=iValue1+iValue2;

    printf("Addtion is the : %f",iResult);

    return 0;
 }