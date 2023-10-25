


#include<stdio.h>
int main(){
	

	int day=0;
//	scanf("%d",&day);
//	printf("\n day %d",day);

//while (day<5) {
//  printf("\n Hello!");
//  day++;
//}

//int Yesha=0;
//do{
//	 Yesha++;
//	 printf("\n Hello Yesha!");
// 
//}while(Yesha<5);
//  
  int i,j,k;
//  for(i=0;i<5;i++){
//  		 printf("\n Hello Parth!");
//  }
  
  for(i=0;i<5;i++){
  	 for(j=0;j<5;j++){
  		 printf("*");
  		 
  }
  		 printf("\n");
  }
  printf("\n");
   for(i=1;i<=5;i++){
  	 for(j=1;j<=i;j++){
//  		 printf("*");
//  		  printf("%d",i);
  		   printf("%d",j);
  		 
  }
  		 printf("\n");
  }
  
  
    printf("\n");
   for(i=1;i<=5;i++){
   	for(k=5;k>i;k--){
  		 printf(" ");
  		 
  }
  	 for(j=1;j<=i;j++){
//  		 printf("*");
//  		  printf("%d",i);
  		   printf("%d",j);
  		 
  }
  		 printf("\n");
  }
   	
  printf("\n");
   for(i=1;i<=5;i++){
  	 for(j=5;j>=i;j--){
//  		 printf("*");
//  		   printf("%d",i);
  		   printf("%d",j);
  		 
  }
  		 printf("\n");
  }
 


  printf("\n");
   for(i=1;i<=5;i++){
   	
   		for(k=1;k<=i;k++){
  		 printf(" ");
  		 
  }
  	 for(j=5;j>=i;j--){
//  		 printf("*");
//  		   printf("%d",i);
  		   printf("%d",j);
  		 
  }
  		 printf("\n");
  }
}
