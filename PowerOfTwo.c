#include<stdio.h>
#include<stdbool.h>
bool ispoweroftwo(int n) {
  if(n <= 0)
    return false;
return (n&(n -1)) ==0;
}
int main(){
  int n;
scanf("%d",&n);
if(ispoweroftwo(n))
  printf(%d is power of 2\n",n);
  else
  printf("%d is not power of 2\n",n);
return 0;
}
