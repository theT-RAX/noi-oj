#include<cstdio>
int main(){
	int score;
	scanf("%d",&score);
	if(score>=90){
		printf("Excellent");
	} 
	if(score>=80&&score<90){
		printf("Good");
	}
	if(score>=60&&score<80){
		printf("Pass");
	}
	if(score<60){
		printf("Fail");
	}
	return 0;
}
