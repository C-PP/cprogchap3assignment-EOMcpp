#include <stdio.h>
#include <stdlib.h>
void function(float);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float amount;    /*입력받은 물의 양*/

	printf("입력한 양의 물에 포함된 물 분자의 갯수를 구하는 프로그램입니다.\n");
	printf("물 분자 하나의 질량은 약 3.0*10^(-23)g 입니다.\n\n");

	printf("물의 양을 입력하세요. (단위 : quarts) : ");/*get input from the user  */
	scanf("%f", &amount);   
							
	function(amount);

	system("pause");
	return 0;
}

void function(float amount)       /* start of function definition */
{
	double mol = 3.0e-23; //물 분자 하나의 질량 (g)
	double num; //물 분자의 갯수
	double Mass = amount * 950.0; //입력받은 물의 질량 (g)
	
	num = Mass / mol;


	printf("\n물 %.2f quarts에 포함된 물 분자의 갯수는 약 %.2e개입니다.\n", amount, num);

	}
