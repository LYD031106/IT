#include<cstdio>
#include<string.h>
struct answer{
	char operator1;
	double  number1;
	double  number2;
};


struct answer input(){
	double number1,nunber2;
	char operator1;
	char dest[50];
	struct answer result;
    printf("����������� (+, -, *, /): ");
    gets(dest);
	printf("��������������: ");
    scanf("%lf %lf", &number1, &nunber2);
    getchar();
    result.number1=number1;
    result.number2=nunber2;
    result.operator1=dest[0];
    return result;
}
