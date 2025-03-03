#include<iostream>
using namespace std;
int main(){
    int n=4;
   
  int arr[n+2]={1,2,3,4,1,2};
  int res[2];
for(int i=0;i<n+2;i++){
    for(int j=0;j<n+2;j++){
      if(i!=j){
        if(arr[i]==arr[j]){
          res[0]=arr[i];
          

        }
      }

    }
    }
    cout<<res[0];
}

