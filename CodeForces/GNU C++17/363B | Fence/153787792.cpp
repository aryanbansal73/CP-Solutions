/*
 deepspacetramp
 aryan
                         ooOoo
                       o8888888o
                       88" . "88
                       (| -_- |)
                       O\  =  /O
                    _/`---'\_
                  .'  \\|     |//  `.
                 /  \\|||  :  |||//  \
                /   ||||| -:- |||||   \
                |   | \\\  -  //| |   |
                | \_|  `\`---'/'  |_/ |
                \  .-\__ `-.-' __/-.  /
              _`. .'  /--.--\   `. .'_
           ."" '<  `._\_<|>/__.' _> \"".
         | | :  `- \`. ;`. _/; .'/ /  .' ; |
          \  \ `-.   \_\_`. .'/_/  -' _.' /
===========`-.`_`-._\ \_  /.-'.'_.-'================
*/
#include<bits/stdc++.h>
using namespace std ;
#define ll long long
ll minindex(ll array[], ll size)
{
    int index = 0 ;
    double n = array[0] ;
    for (int i = 1; i < size; ++i)
    {
        if (array[i] < n)
        {
            n = array[i] ;
            index = i ;
        }
    }
    return index;
}
ll solve(ll n,  ll k , ll h[]){
 
    ll v[n+1-k];
    ll sum =0 ;
    for(int i = 0 ; i< k ; i++){
        sum+=h[i];
    }
    v[0] =sum ;
    for(int i = 0 ; i< n-k ; i++){
        v[i+1] = v[i]+ h[i+k] - h[i];
    }
 
    ll ans = minindex(v , n+1-k);
    return ans+1 ;
}
int main(){
    ll n , k ;
    cin>>n>>k;
    ll h[n];
    for(int i = 0 ; i< n ;i++){
        cin>>h[i];
    }
    ll ans ;
    ans = solve(n, k, h);
    cout<<ans<<endl;
}