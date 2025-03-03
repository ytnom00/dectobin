#include<iostream>
using namespace std;
int dectobin(int dec){
    int ans=0,pow=1;
    while(dec>0){
        int rem=dec%2;
        dec/=2;
        ans=ans+rem*pow;
        pow*=10;
    }
    return ans;
}
int main(){
    int dec=9;
    cout<<dectobin(dec);
    return 0;
}



