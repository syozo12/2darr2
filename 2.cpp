#include<iostream>
using namespace std;
int main(){
    
     int n,m;
    cout<<"enter the value of rows and columns ";
    cin>>n>>m;
    int arr[n][m],arr2[n][m];
    cout<<"\n enter the values of matrix arr1";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<endl;
    //rever each row
    for(int i=0;i<n;i++){
        int j=0;
        int k=m-1;
        while(j<k){
              int temp=arr[i][j];
              arr[i][j]=arr[i][k];
              arr[i][k]=temp;
              j++;
              k--;
        }
    }
    //transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

        }
    }
    //diaplay the rotated matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}