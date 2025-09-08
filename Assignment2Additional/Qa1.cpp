// Count pairs with absolute difference equal to k
#include <iostream>
using namespace std;
int main() {
    int k;
    cout<<"Enter difference to find: ";
    cin>>k;
    //2
    int count=0; 
    
    int arr[7]={2,4,5,3,7,6,9};
    
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]-arr[j]==k || arr[i]-arr[j]== -1*k){
                count++;
            }
        }
    }
    
    cout<<count;

    return 0;
}