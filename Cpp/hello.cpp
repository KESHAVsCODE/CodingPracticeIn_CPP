//#include<stdio.h>
//#include<conio.h>
//#include<iostream>
#include<bits/stdc++.h>
int SUM();
int main()
{
    int ask;
   ask=SUM();
   printf("%d",ask);
}
int SUM()
{
    int n,i,j,sum=0,num=0,ans;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(i==j){
            sum=sum+a[i][j];
           }
        }
    }
    printf("%d\n",sum);
    j=n-1;
    for(i=0;i<n;i++){
        num=num+a[i][j--];
    }
    printf("%d\n",num);
    ans=sum-num;
    if(ans<0){
        ans=(-1)*ans;
      return ans;
    }
    else
    return ans;
}
