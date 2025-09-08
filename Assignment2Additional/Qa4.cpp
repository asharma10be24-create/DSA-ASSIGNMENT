// Dutch National Flag Problem
#include <iostream>
using namespace std;
int main() {
    int arr[10]={1,2,1,1,2,0,0,0,1,0};
    int ans[10];
    int j=0;
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            ans[j]=0;
            j++;
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i]==1){
            ans[j]=1;
            j++;
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i]==2){
            ans[j]=2;
            j++;
        }
    }
    for(int i=0;i<10;i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}
