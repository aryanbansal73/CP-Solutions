#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}int main(){
    ll n ;
    cin>>n ;
    ll a[n];
    for(ll i = 0 ; i < n ; i ++){
        cin>>a[i];
    }
    string  ans  ;
    for(ll i = 0 ; i < n ; i ++){
        long long sr = sqrt(a[i]);
        if(sr*sr == a[i]){
            if(isPrime(sr)){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }
    }
}