#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int count = 0;
        int a = 2 ;
        while(n>=2 ){
            count ++ ;
            a = 2 ;
            while(n>=a ){
                n-=a ;
                a+=3;
            }
        }
        cout<<count<<endl;
    }
}