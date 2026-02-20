#include<stdio.h>
int subractsumandproduct(int n){
  int sum=0;
int product=1;
int digit;
while(n>0){
digit =n%10;
product *=digit;
sum+ =digit;
n/=10;
}
return product -sum;}
int main(){
  int n;
scanf("%d",&n);
printf("%d\n",subractsumandproduct(n));
return 0;
}
