#include<stdio.h>
int main(){
    int n,a[20],sum=0;
printf("Enter total no.of elements:");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<=n;i++){
    if (a[i]!=0){
        sum=a[i];
  }
} 
printf("sum of array is %d",sum);
return 0;
 
}