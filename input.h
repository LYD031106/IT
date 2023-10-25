#include<cstdio>
struct answer{
	char operator1;
	double  number1;
	double  number2;
};


struct answer input(){
	double number1,nunber2;
	char operator1;
	struct answer result;
    printf("请输入运算符 (+, -, *, /): ");
    scanf("%c", &operator1);
	printf("请输入两个数字: ");
    scanf("%lf %lf", &number1, &nunber2);
    result.number1=number1;
    result.number2=nunber2;
    result.operator1=operator1;
    return result;
}
