/*
name:grace wambui 
reg no:CT100/G/30628/26
description:Q 1 discount
*/

#include<stdio.h>

float calculatediscount(float purchase_amount)

float amount,result,final_amount;

int main()
{
	printf("enter the amount purchased : \t");
	scanf("%f", &amount);
	
	result = calculatediscount(amount);
	final_amount=amount-result;
	
	printf("\n");
	printf("supermarket discount program\n");
	printf("=====================\n"),
	printf("initial amount: Ksh. %.2f\n", amount);
	printf("discount offered: Ksh. %.2f\n", result);
	printf("final amount payable: Ksh %.2f\n", final_amount);
	printf("=============\n");
	
	return 0;
	
}

	float calculatediscount(float purchase_amount){
	float discount;
	if (purchase_amount<5000){
		discount=0.5*purchase_amount;
	}
	else if(purchase_amount<10000){
		discount=0.1*purchase_amount;
	}
	else if(purchase_amount>=10000){
		discount=0.15*purchase_amount;
	}
	return discount;
}