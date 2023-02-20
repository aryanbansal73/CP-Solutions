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
int main(){
    ll n ;
    cin>>n ;
    ll v[n],s[n];
    for(int i = 0 ; i< n ; i++){
        cin>>v[i];
        s[i] = v[i];
    }
    sort(s,s+n);
    int m ;
    cin>>m;
    int type[m],l[m],r[m];
    ll sum[n] ,sum1[n];
    sum[0] = v[0] , sum1[0] =s[0];
    for(int i = 0 ; i< n-1 ; i++){
        sum[i+1] = sum[i] + v[i+1];
        sum1[i+1] = sum1[i] + s[i+1];
    }
    for(int i = 0 ; i< m ; i++){
        cin>>type[i]>>l[i]>>r[i];
 
        if(type[i]==1){
            if(l[i]>1){
            ll  ans = sum[r[i]-1]-sum[l[i]-2];
            cout<<ans<<endl;}
            else{
                cout<<sum[r[i]-1]<<endl;
            }
            continue ;
        }
        else if( type[i] == 2){
            if(l[i] == 1){
                cout<<sum1[r[i]-1]<<endl;
            }
            else{
            ll  ans = sum1[r[i]-1]-sum1[l[i]-2];
            cout<<ans<<endl;
            }
 
            continue;
        }}
 
}
 