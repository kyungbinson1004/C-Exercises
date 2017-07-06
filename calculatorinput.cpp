
// #: specifier 
// include:keyword
// stdio.h: standard input/output
#include <stdio.h>

//int:integer
int main()
{
	
	char cond, firstNum, secondNum;

	//cond='s';
	
	printf("Enter condition> ");
	scanf("%d",&cond);
	
	printf("Enter a number:");
	scanf("%f", &firstNum);
	printf("Enter the second number");
	scanf("%d", &secondNum);
	float add, sub, mul, div; 
	
	if(cond == 'a')
	{
		add = firstNum+secondNum;
			printf("add = %f\n", add);

	}
	
	else if(cond == 's')
	{
		sub = firstNum-secondNum;
			printf("sub = %f\n", sub);


	}
	
	else if(cond =='m')
	{
		mul = firstNum*secondNum;
			printf("mul = %f\n", mul);


	}
	
	else
	{
		div = firstNum/secondNum;
			printf("div = %f\n", div);

	}
	
	
	//printf format
	
	
	return 0;
	
}
	
	
	
	
	

