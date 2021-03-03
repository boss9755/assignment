#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkPrime(int input)
{
	int b=0;
	int i=0;
	int flag=0;
	int result=0;

	b = input;

	for (i = 2; i < b/2; i++)
	{
		if (b%i==0)
		{
			result = 0;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{	
		result = 1;
	}

	return result;
}

int main(int argc, char const *argv[])
{
	double input = -1;
	int output1 = -1;
	int output2 = -1;
	int output3 = -1;	
	int resultF = 0;	
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;
	char output[16];


	while(input != 0.0)
	{
		scanf("%lf",&input);

		if (input == 0.0)
		{
			return 0;
		}
		else if (input < 1.0 || input > 10.0)
		{
			printf("Please enter input between 1.0 and 10.0\n");
			return 0;
		}
		else
		{
			// first digit after decimal point
			output1 = input *10;
			result1 = checkPrime(output1);
			// Second digit after decimal point
			output2 = input *100;
			result2 = checkPrime(output2);
			// Third digit after decimal point
			output3 = input *1000;
			result3 = checkPrime(output3);
		}

		if (result1 == 1 || result2 == 1 || result3 == 1)
		{
			resultF = 1;
		}
		else 
		{
			resultF = 0;
		}

		if(resultF == 1)
		{
			printf("TRUE\n");
		}
		else if(resultF == 0)
		{
			printf("FALSE\n");
		}
	}
}