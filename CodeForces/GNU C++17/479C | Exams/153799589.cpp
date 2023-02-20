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
    cin>>n;
    vector <ll> a(n),b(n);
 
    vector <pair <ll, ll> > v;
    for (int i = 0; i < n; i++) {
        cin >> a[i]>>b[i];
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end());
    ll  best = -7;
    for(int i = 0 ; i <n ; i ++ ){
        if(v[i].second >=best){
            best = v[i].second;
        }
        else{
            best  = v[i].first;
        }
    }
    cout<<best<<endl;
}