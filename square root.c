#include<stdio.h>
int mysqr(int x){
  int i=1;
while(i*i<=x){
i++;
}
return i-1;}
int main(){
  int x;
scanf("%d",&x);
printf("%d",mysqr(x));
return 0;
}
