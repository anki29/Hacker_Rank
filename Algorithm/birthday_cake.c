/*
Colleen is turning years old! She has candles of various heights on her cake, and candle has height . Because the taller candles tower over the shorter ones, Colleen can only blow out the tallest candles.

Given the for each individual candle, find and print the number of candles she can successfully blow out.

Input Format

The first line contains a single integer, , denoting the number of candles on the cake.
The second line contains space-separated integers, where each integer describes the height of candle .


Print the number of candles Colleen blows out on a new line.









*/


#include<stdio.h>
#include<stdlib.h>
int max(int *height, int n){
   
  int max= height[0];
  for(int i=1; i<n; i++){
   if(height[i]>max){
    max=height[i];
    }
  }

   return max;
}  




 
int main(){

   int n, count=0;
   scanf("%d", &n);
   int *height= malloc(sizeof(int) * n);
   for(int h=0; h<n; h++)
    scanf("%d", &height[h]);

   int a= max(height, n);
   for(int i=0; i<n; i++){
   if(height[i]==a)
     count++;
   }

   printf("%d\n", count);

return 0;

}
