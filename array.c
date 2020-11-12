#include<stdio.h>
int main(){
	int test,i,j,g,k;
	int count;
	int m=0;
	int tmp;
	char arr[100];
	int repeat = 0;
	scanf("%d",&test);
	for (i=0;i<test;i++){
		scanf("%d",&count);
		for (j=0;j<count;j++){
			scanf("%d",&arr[j]);
		}
		for(i=0; i<count; i++)
    	{
        	for(j=i+1; j<count; j++)
        	{
            	if(arr[j] <arr[i])
            	{
                	tmp = arr[i];
                	arr[i] = arr[j];
                	arr[j] = tmp;
            	}
        	}
    	}
    	for (g=0;g<count;g++){
    		if (repeat!=arr[g]){
    			for (k=0;k<count;k++){
    				if (arr[g]==arr[k]){
    					m = m+1;
					}
				}
				repeat = arr[g];
				printf ("%d %d\n",arr[g],m);
				m = 0;
			}
		}
		
	}
	return 0;
}
