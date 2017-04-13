#include<stdio.h>
#include<stdlib.h>


void grades(){
   int n, marks;
   int i;
   scanf("%d", &n);
   for(i=0; i<n; i++){
     scanf("%d", &marks);  
   
     if(marks>=38 && marks%5>=3){

      while(marks%5!=0){
       marks++;    
       }

     } 
     printf("%d\n", marks);
   
  }
}  

  
    

int main () {
    grades();
    return 0;
}
