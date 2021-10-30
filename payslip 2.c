/*
Project : payslip program
Author : Virginia Mbugua
Date : Oct 2021
Compiler : GCC
Language : C99
License : MIT

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{


    //variable declaration
    char name[1000];
    int emp_no,hours;
    int normal_pay,overtime_pay,gross;
    float tax,net;
    const int rate = 1000;

    printf("Factory Payslip System!\n");
    printf("Employee Number:");
    gets (name);
    printf("Employee Number:");
    scanf("%d",&emp_no);
    printf("Hours Worked:");
    scanf("%d",&hours);

    //computations
    if(hours>40){
            normal_pay-pay = 40*rate;
    overtime_pay = (hours -40)*1.5*rate;
    }
    else{
            normal-pay = hours*rate;
    overtime_pay = 0;
    }
    gross =normal_pay+overtime_pay-pay;
    tax =0.16*gross;
    net = gross-tax;

    //print payslip
    printf("Employee No:\t%d\n",emp_no);
    printf("Employee Name:\t%d\n",name);
    printf("Normal Pay:\t%d\n",normal_pay);
    printf("Overtime Pay:\t%d\n",overtime_pay);
    printf("Gross Pay:\t%d\n",gross);
    printf("Tax:\t%f\n",tax);
    printf("Net Pay:\t%f\n",net);

    return 0;













