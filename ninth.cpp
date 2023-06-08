#include <iostream>
using namespace std;
/*
      *
     ***
    *****
   *******
    *****
     ***
      *   
*/

void printTriangle1(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";
            }
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }cout<<endl;
        }
    }

 void printTriangle2(int n) {
	    // code here
	    for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*n-(2*i+1);j++){
                cout<<"*";
            }
            for(int j=0;j<i;j++){
                cout<<" ";
            }cout<<endl;
	    }
	}   

    int main(){
        int n;
        cin>>n;
        printTriangle1(n);
        printTriangle2(n);
    }