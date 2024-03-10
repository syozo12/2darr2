#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the value of rows and columns ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"\n enter the values of matrix arr1";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        
    }
    //printing in wave form
    cout<<"elements in wave form are"<<endl;
    for(int i=m-1;i>=0;i--){
        if(i%2!=0){
           for(int j=n-1;j>=0;j--){
               cout<<arr[i][j];
           }
        }
        else{
            for(int j=0;j<n;j++){
                cout<<arr[i][j];
            }
        }
    }
    return 0;
        

}