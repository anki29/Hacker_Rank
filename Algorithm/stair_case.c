/*Consider a staircase of size :

   #
  ##
 ###
####

Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Input Format

A single integer, , denoting the size of the staircase.

Output Format

Print a staircase of size using # symbols and spaces.

Note: The last line must have spaces in it.

Sample Input

6 

Sample Output

     #
    ##
   ###
  ####
 #####
######
*/
#include<stdio.h>
#include<stdlib.h>
int main(){

   int n,i,j,k;
   scanf("%d", &n);
  
    for(i=1; i<=n; i++){
      for(j=0; j<n-i; j++)
         printf(" ");
         
     
       for(k=0; k<i;k++)
         printf("#");
  
    printf("\n");
}
   
return 0;   




}

