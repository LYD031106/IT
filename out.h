#include<string.h>
int out(){
	printf("�����Ƿ��˳����˳�������0������������1:");
	char a[100];
	gets(a);
	if(a[0]=='0'){
		return 0;
	}else{
		return 1;
	}
}
