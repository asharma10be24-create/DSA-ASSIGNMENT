#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows/column : ";
	cin>>n;
	int arr[3*n-2];
	cout<<"Enter the elements of the array : ";
	for(int k=0;k<(3*n-2);k++){
		cin>>arr[k];
	}
	int l=0;
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			if(i==j || i-j==1 || i-j==(-1)){
				cout<<arr[l]<<" ";
				l++;
			}
			else {
				cout<<"0 ";
			}
		}
	}
	return 0;
}