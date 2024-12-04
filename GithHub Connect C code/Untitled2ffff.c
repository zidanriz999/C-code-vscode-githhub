#include<stdio.h>
int main(){
	 	int a,b,c,n;
	 	printf("Enter the value of Fibonacci number:");
	 	scanf("%d",&n);
	 	a =0;
	 	b = 1;
		if(n==0){
	 		printf("%d\n", n);
	 	}else if(n == 1){
	 		printf("%d\n%d\n", a, b);
		}else{
		 	for(c=1;c<=n;c=a+b){
		    	a=b;
		    	b=c;
		    printf("%d\n",c);
	 		}
		}



	return 0;
