#include<cstdio>
int main(){
	long wei;
	scanf("%ld",&wei);
	if(wei>30){
		printf("Fail");
	}
	if(wei<=10){
		printf("%.2lf",0.2+(0.8*wei));
	}
	if(wei>10&&wei<=20){
		printf("%.2lf",0.2+(0.8*10)+(0.75*(wei-10)));
	}
	if(wei>20&&wei<=30){
		printf("%.2lf",0.2+(0.8*10)+(10*0.75)+(0.70*(wei-20)));
	}
	return 0;
}
