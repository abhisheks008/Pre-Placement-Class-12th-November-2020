#include <stdio.h>
int main(){
	int test;
	int i,j,sum=0,day,ans,work,k=0;
	char arr[100];
	scanf ("%d",&test);
	for(i=0;i<test;i++){
		scanf ("%d %d",&day,&ans);
		sum = 0;
		for (j=0;j<day;j++){
			scanf ("%d",&arr[j]);
			sum = sum + arr[j];
		}
		k=0;
		while (1>0){
			work = sum - ans;
			sum = work;
			if (work<0){
				printf("%d\n",k+1);
				break;
			}
			k = k + 1;
		}
	}
}
