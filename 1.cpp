#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of rows and columns ";
    cin>>n;
    int arr[n][n];
    cout<<"\n enter the values of matrix arr1";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i+j==n-1)
               cout<<arr[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    
        
}

