#include<string.h>
int out(){
	printf("请问是否退出，退出请输入0，否则请输入1:");
	char a[100];
	gets(a);
	if(a[0]=='0'){
		return 0;
	}else{
		return 1;
	}
}
