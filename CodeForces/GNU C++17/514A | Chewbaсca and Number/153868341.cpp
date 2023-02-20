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
int main() {
    ll n;
    cin >> n;
    vector<ll> v;
    while (n != 0) {
        ll x = n % 10;
        if (x >= 5) {
            x = 9 - x;
        }
        v.push_back(x);
        n /= 10;
    }
    ll l = v.size();
    reverse(v.begin(), v.end());
    if(v[0] == 0){
        v[0] = 9 ;
    }
    for (int i = 0; i < l; i++) {
        cout << v[i];
    }
    cout << endl;
 
 
 
}