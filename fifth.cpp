#include<iostream>
using namespace std;

/*
* * * * *
* * * * 
* * *
* *
*
*/

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i+1;j++){
                cout<<"* ";
            }cout<<endl;
        }
    }
}