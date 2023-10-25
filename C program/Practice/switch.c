#include<stdio.h>
int main(){
	
	printf("enter number 1 for Monday");
	printf("\nenter number 2 for Tuesday");
	int day;
	scanf("%d",&day);
	printf("\n day %d",day);

switch (day) {
  case 1:
    printf("\n Monday");
    break;
  case 2:
    printf("\n Tuesday");
    break;
    
     default:
     	 printf("selete option");
    break;
  
}
}
