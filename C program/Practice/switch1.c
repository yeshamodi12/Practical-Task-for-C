#include<stdio.h>
int main(){
	int p , y;
	printf("\nEnter 1 for Sandwich");
		printf("\nEenter 2 for Water");
	scanf("%d",&p);
		printf("%d",p);
	

switch (p) {
  case 1:
    printf("\nSandwich");
    
    printf("Enter 1 for Sandwich");
    printf("\nEnter 2 for Chees Sandwitch");
    scanf("%d",&y);
		printf("%d",y);
    
			switch (y) {
			case 1:
			printf("\nSandwich");
			break;
			case 2:
			printf("\nWater");
			break;
			
			default:
			printf("Select");
			break;
}
    break;
  case 2:
    printf("\nWater");
    break;
  
  default:
    printf("Select");
    break;
}
}
