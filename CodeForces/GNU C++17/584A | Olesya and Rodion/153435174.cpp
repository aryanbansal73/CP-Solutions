#include<bits/stdc++.h>
using namespace std ;
#define ll  long long
int main (){
    int n , t ;
    cin>>n>>t;
    ll ans[n];
    if(t!=10){
        for(int i =0 ; i< n ;i++){
            ans[i] = t ;
        }
    }
    else{
        for(int i =0 ; i< n ;i++){
            ans[i] = 0 ;
        }
        ans[0] = 1 ;
 
    }if(n==1&&t==10 ){\
    cout<<-1<<endl;}
    else{
        for(int i =0 ; i< n ;i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
    }