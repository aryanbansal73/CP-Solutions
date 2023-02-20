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
int main (){
    ll n ;
    cin>>n;
    ll a[n], z[n + 1], o[n + 1], d[n + 1];
    z[0] = 0, o[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            o[i + 1] = o[i] + 1;
            z[i + 1] = z[i];
        } else {
            o[i + 1] = o[i];
            z[i + 1] = z[i] + 1;
        }
    }
    for (int i = 0; i <= n; i++) {
        d[i] = o[i] - z[i];
    }
    ll ans = INT_MIN;
    for(int i=0 ; i <= n ; i++){
        for(int j = i+1 ; j<= n ; j++ ){
            ll k = (d[i] - d[j]) ;
            ans = max(ans  ,k  );
        }
    }
    ans += o[n];
    cout<<ans<<endl;
 
 
 
}