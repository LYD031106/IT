#include<cstdio>
int out(){
	printf("请问是否退出，退出请输入0，否则请随意按键");
	char a;
	scanf("%c",&a);
	if(a=='0'){
		return 0;
	}else{
		return 1;
	}
}
