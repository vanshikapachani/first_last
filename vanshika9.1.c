#include<stdio.h>

void main(){
	
	
	int n,sum=0;
	int firstdigit,lastdigit;
	
	printf("enter any number:  ");
	scanf("%d",&n);
	
	lastdigit =n % 10;
	
	while(n >=10 )
{ 
   n = n / 10;
}
    firstdigit =n;
    
    sum= firstdigit+lastdigit;
    
    printf("sum of firstdigit and lastdigit %d ",sum);

	
	
	
	
	
	
	
	
}
