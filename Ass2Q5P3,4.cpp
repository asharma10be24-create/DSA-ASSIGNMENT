#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of rows/column : ";
	cin>>n;
	int arr[n*(n+1)];
	int s = (n*(n+1))/2;
	cout<<"Enter the elements of the array : ";
	for(int k=0;k<s;k++){
		cin>>arr[k];
	}
	
	int l=0;
	
	cout<<"The upper triangle matrix is : "<<endl;
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			if(i<=j){
				cout<<arr[l]<<" ";
				l++;
			}
			else{
				cout<<"0 ";
			}
		}		
	}
	l=0;
	cout<<endl<<endl;

	cout<<"The lower traingle matrix is : "<<endl;
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			if(i>=j){
				cout<<arr[l]<<" ";
				l++;
			}
			else{
				cout<<"0 ";
			}
		}
	}
	
	return 0;
}