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
#define ll  long long
int main(){
    ll n ,  t ;
    cin>>n>>t;
    ll a[n] , s[n];
    for(int i = 0 ; i< n ;i++){
        cin>>a[i];
    }
    ll sum = 0  , h =0, j=0;
    for(int i = 0 ; i< n ; i++){
        while (sum + a[j] <= t && j < n) {
            sum += a[j];
            j++;
        }
        sum -=a[i];
        h = max(h , j-i);
    }
    cout<<h<<endl;
}