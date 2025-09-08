// String Anagrams 
#include <iostream>
using namespace std;
int main() {
//int so that it takes ascii values    
    char str1[100];
    char str2[100];
    int n1,n2;
    cout<<"Enter string 1 length ";
    cin>>n1;
    cout<<"Enter string 2 length ";
    cin>>n2;
    int n=n1;
    bool flag=true;
    if(n1!=n2){
        cout<<"Cannot be anagrams"<<endl;
    }
    else{
        
        cout<<"Enter string 1 "<<endl;
        for(int i=0;i<n;i++){
            cin>>str1[i];
        }
        cout<<"Enter string 2 "<<endl;
        for(int i=0;i<n;i++){
            cin>>str2[i];
        }
        //in ascending order acc to ascii
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (str1[j] > str1[j + 1]) {
                    char temp = str1[j];
                    str1[j] = str1[j + 1];
                    str1[j + 1] = temp;
                }
            }
        }
    
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (str2[j] > str2[j + 1]) {
                    char temp = str2[j];
                    str2[j] = str2[j + 1];
                    str2[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < n1; i++) {
        if (str1[i] != str2[i]) {
            flag = false;
            break;
        }
    }
    
    }
    if(n1==n2){
        if(flag==false){
        cout<<"These are not anagrams";
    }
    else{
        cout<<"These are anagrams";
    }
    }
    return 0;
}