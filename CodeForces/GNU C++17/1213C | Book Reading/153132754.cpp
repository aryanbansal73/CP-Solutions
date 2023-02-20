#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t ;
    cin>>t ;
    while(t--){
        ll n , m ;
        cin>>n>>m;
        ll sum = 0 ;
        ll k = n/m ;
        ll j = k/10 ;
        for(ll i=1 ; i<=10; i++){
            ll l = i*m ;
            sum += l%10;
        }
        sum *=j ;
        for(int i = 1 ; i<= k%10 ; i++){
            sum += (i*m)%10 ;
        }
        cout<<sum<<endl;
    }
}