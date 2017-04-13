/*

Sam's house has an apple tree and an orange tree that yield an abundance of fruit. In the diagram below, the red region denotes his house, where is the start point and is the end point. The apple tree is to the left of his house, and the orange tree is to its right. You can assume the trees are located on a single point, where the apple tree is at point and the orange tree is at point .

Apple and orange(2).png

When a fruit falls from its tree, it lands units of distance from its tree of origin along the -axis. A negative value of means the fruit fell units to the tree's left, and a positive value of means it falls units to the tree's right.

Given the value of for apples and oranges, can you determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range )? Print the number of apples that fall on Sam's house as your first line of output, then print the number of oranges that fall on Sam's house as your second line of output.

Input Format

The first line contains two space-separated integers denoting the respective values of and .
The second line contains two space-separated integers denoting the respective values of and .
The third line contains two space-separated integers denoting the respective values of and .
The fourth line contains space-separated integers denoting the respective distances that each apple falls from point .
The fifth line contains space-separated integers denoting the respective distances that each orange falls from point .



*/
#include<stdio.h>
#include<stdlib.h>
int main(){

  int orange=0;
  int apple=0;
  int s,t;
  scanf("%d %d", &s, &t);
  
  int a,b;
  scanf("%d %d", &a, &b);

  int m,n;
  scanf("%d %d", &m, &n);

  int *apple_d= malloc(sizeof(int) * m);
  for(int i=0; i<m; i++)
    scanf("%d", &apple_d[i]);

  int *orange_d= malloc(sizeof(int) * n);
  for(int j=0; j<n; j++)
    scanf("%d", &orange_d[j]);


  for(int i=0; i<m; i++){
   int y = a+apple_d[i];
   if(y>=s && y<=t)
      apple++;

  }

for(int i=0; i<n; i++){
   int x= b+orange_d[i];
   if( x>=s && x<=t )
         orange++;
  // printf("%d\n", b+orange_d[i]);

   }

  printf("%d\n", apple);
  printf("%d\n", orange);



}
