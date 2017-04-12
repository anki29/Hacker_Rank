/*

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Input Format

A single line of five space-separated integers.

Constraints

    Each integer is in the inclusive range .

Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)

Sample Input

1 2 3 4 5

Sample Output

10 14



*/
#include<stdio.h>
#include<stdlib.h>

long int max(long int a, long int b, long int c, long int d, long int e){

    return a>b && a>c && a>d && a>e ?a : b>c && b>d && b>e?b: c>d && c>e?c: d>e?d:e  ; 

}

long int min(long int a, long int b, long int c, long int d, long int e){

return a<b && a<c && a<d && a<e ?a : b<c && b<d && b<e?b: c<d && c<e?c: d<e?d:e ;

}


 int main(){
   long int a,b,c,d,e;
   scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &d, &e);
   long int q= a+b+c+d;
   long int r=b+c+d+e;
   long int s=c+d+e+a;
   long int t=d+e+a+b;
   long int u=e+a+b+c;

   long int maximum= max(q,r,s,t,u);
   long int minimum=min(q,r,s,t,u);
 
   printf("%ld %ld \n", minimum, maximum); 
   




return 0;
}
