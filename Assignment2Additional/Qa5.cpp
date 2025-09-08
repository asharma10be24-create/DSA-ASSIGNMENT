// duplicate each occurrence of two (2)
#include <iostream>
using namespace std;
int main() {
    int arr[7]={1,2,3,4,2,5,2};
    int n=7;
    int temp[20];
    int j=0;
    for(int i=0;i<n;i++){
        temp[j]=arr[i];
        j++;
        if(arr[i]==2){
            temp[j] = 2;
            j++;
        }
    }
    
     for (int i = 0; i < j; i++){
            cout << temp[i];
        }
    
    
    return 0;
}