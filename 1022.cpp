#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int a;
	float sum;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		sum += a;
	} 
	sum/=n;
	printf("%.2f",sum);
	return 0;
}
