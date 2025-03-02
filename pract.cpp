#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,3,3,2,1,4};
    int ans=0;
    for(int val : vec){
        ans^=val;}
    cout<<"the no. is"<<ans;
    return 0;
   
}

