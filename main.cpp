#include "add.h" 
#include "subtraction.h"
#include<cstdio> 
#include "input.h"
#include "out.h"
#include "chengchu.h"
int main(){
	while(1){
		struct answer result=input();
	    double result_answer;
	    switch(result.operator1) {
         case '+':
        	result_answer=add(result.number1,result.number2);
        	printf("%.2lf\n",result_answer);
            break;
         case '-':
         	result_answer=subtraction(result.number1,result.number2);
            printf("%.2lf\n",result_answer);
            break;
         case '*':
         	result_answer=multiple(result.number1,result.number2);
            printf("%.2lf\n",result_answer);
            break;
         case '/':
         	result_answer=division(result.number1,result.number2);
            if(result_answer==0){
                 break;	
			}else{
				 printf("%.2lf\n",result_answer);
				 break;
			}
		default :
        	printf("不合规范\n");
        	break; 
        }
        if(out()==0){
        	printf("结束");
        	break;
		}
	}
    return 0;
} 
