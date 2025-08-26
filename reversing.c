#include<stdio.h>
int main(){
    int a[20],n;
    printf("ENTER NUMBERS:");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",a[i]);

    }
    for(int i=n;i<=0;i--){
        printf("reverse of numbers are:%d",a[i]);
    }
}