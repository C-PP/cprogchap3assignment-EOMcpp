#include <stdio.h>
#include <stdlib.h>
void function(float);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float amount;    /*�Է¹��� ���� ��*/

	printf("�Է��� ���� ���� ���Ե� �� ������ ������ ���ϴ� ���α׷��Դϴ�.\n");
	printf("�� ���� �ϳ��� ������ �� 3.0*10^(-23)g �Դϴ�.\n\n");

	printf("���� ���� �Է��ϼ���. (���� : quarts) : ");/*get input from the user  */
	scanf("%f", &amount);   
							
	function(amount);

	system("pause");
	return 0;
}

void function(float amount)       /* start of function definition */
{
	double mol = 3.0e-23; //�� ���� �ϳ��� ���� (g)
	double num; //�� ������ ����
	double Mass = amount * 950.0; //�Է¹��� ���� ���� (g)
	
	num = Mass / mol;


	printf("\n�� %.2f quarts�� ���Ե� �� ������ ������ �� %.2e���Դϴ�.\n", amount, num);

	}
