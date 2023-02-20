#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n , r , b ;
        cin>>n>>r>>b;
        string s = "";
        ll q = r/(b+1) , rem = r%(b+1);
        for(int i = 0 ; i <=b ; i ++){
            for(int  j = 0 ; j <q ; j++){
                s+="R";
            }
            if(rem>0){
                s+="R";
                rem--;
            }
            if(i!=b) {
                s += "B";
            }
        }
 
        cout<<s<<endl;
    }
}