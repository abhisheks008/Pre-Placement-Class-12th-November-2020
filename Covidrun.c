#include<stdio.h>
#include<stdlib.h>


void main(){
	
	int t,n,k,x,y,i;
	int *arr;
	
	scanf("%d",&t);
	
	while(t>0){
		
		t--;
		scanf("%d %d %d %d",&n,&k,&x,&y);
		
		arr=(int *)malloc(n*sizeof(int));
		
		i=x;
		
		while(1){
			
			i=(i+k)%n;
			
			if(x==y || i==y){
				printf("YES\n");
				break;
			}
			else if(i==x){
				printf("NO\n");
				//exit;
				break;
			}
		}
		
	}
}
