int*twosum(int*nums,int numsSize,int target,int*returnSize){
  int*arr=(int*)malloc(sizeof(int)*2);
int i,j;
for(i=0;i<numsSize;i++){
for(j=0;j<numsSize;j++){
if(i!=j && nums[i]+nums[j]==target){
arr[0]=i;
arr[1]=j;
}}}
*returnSize=2;
return arr;}
