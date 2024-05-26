#include<stdio.h>
int main(){
	int min, hour;
	printf("Enter a minutes:", min);
	scanf("%d", min);
	hour= min/60;
	
	printf("Enter a hour:", hour);
	scanf("%d", hour);
	min = min/60;
	printf("minutes: %d", min);
	
	return 0;
}

