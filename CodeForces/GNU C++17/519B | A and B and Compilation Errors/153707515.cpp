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
    cin>> n ;
    ll x = n-1 , y = n-2 ;
    ll a[n], b[x], c[y];
    for( int i = 0 ; i< n ;i++){
        cin>>a[i];
    }
    for( int i = 0 ; i< x ;i++){
        cin>>b[i];
    }
    for( int i = 0 ; i< y ;i++){
        cin>>c[i];
    }
    sort(a, a+n);
    sort(b , b+x );
    sort(c,c+y);
    ll ans1 , ans2 ;
    bool b1 = true , b2=true ;
    for(int i = 0 ; i < n-1;i++){
        if(a[i]!=b[i]){
            ans1 = a[i];
            b1 = false;
            break;
        }
    }
    if(b1){
        ans1 = a[x];
    }
    ll q ;
    for(q =0 ; q < y ;q++){
        if(c[q]!=b[q]){
            ans2 = b[q];
            b2 = false;
            break;
        }
    }
    if(b2 ){
        ans2 = b[y];
    }
    cout<<ans1<<endl<<ans2<<endl;
}