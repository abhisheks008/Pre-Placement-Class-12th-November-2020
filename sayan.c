#include<stdio.h>
int main(){
	int test,i;
	int j;
	int k;
	char arr[5];
	int t,s,p,l,final,c;
	scanf ("%d",&test);
	for (i=0;i<test;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr[j]);			
		}
		s = 0;
		p = 0;
		l = 0;
		for (k=1;k<100;k++){
			c = arr[1]*k;
			if (c<arr[0]){
				t = 2*c;
				s = s + t;
			}
			else if (c==arr[0]){
				p = 3*arr[0];
				break;
			}
			else if (c>arr[0]){
				l = arr[0];
				break;
			}
		
		}
		final = s + p + l;
		printf("%d\n",final);
	}
}
