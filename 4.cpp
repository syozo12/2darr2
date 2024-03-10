#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of rows and columns ";
    cin>>n;
    int minr=0,maxr=n-1,minc=0,maxc=n-1; 
    int tne=n*n;
    int arr[n][n];
    int a=1;
    while(tne>0){
        for(int i=minc;i<=maxc&&tne>0;i++){
            arr[minr][i]=a++;
            tne--;
        

        }
        minr++;
        for(int i=minr;i<=maxr&&tne>0;i++){
            arr[i][maxc]=a++;
            tne--;
        }
        maxc--;
        for(int i=maxc;i>=minc&&tne>0;i--){
            arr[maxr][i]=a++;
            tne--;
        }
        maxr--;
        for(int i=maxr;i>=minr&&tne>0;i--){
            arr[i][minc]=a++;
            tne--;
        }
        minc++;
        

    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
        
    }
    return 0;

}