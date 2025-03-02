#include<stdio.h>
int bintodec(int bin){
int ans=0,pow=1;
while(bin>0){
int rem=bin%10;
    ans+=rem*pow;
    bin/=10;
    pow*=2;
}
return ans;
}
int main()
{
    int bin=111;
    printf("%d",bintodec(bin));
    return 0;
    
}
