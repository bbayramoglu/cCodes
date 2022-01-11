#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,a;
	printf("Enter a Number:");scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("*");
	}
	printf("\n");
	for(i=(a-1)/2;i>0;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
		for(j=a-(2*i);j>=1;j--){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=((a-1)/2)-1;i++)
	{
		for(j=i+1;j>=1;j--){
			printf("*");
		}	
		for(j=a-((i+1)*2);j>=1;j--)
		{
			printf(" ");
		}
		for(j=i+1;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=a;i++){
		printf("*");
}
	return 0;
}
