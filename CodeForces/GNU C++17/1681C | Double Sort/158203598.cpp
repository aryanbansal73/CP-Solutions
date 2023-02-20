/*
 deepspacetramp - codechef
 a_parzival_b - codeforces
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
          | :  `- \`. ;`. _/; .'/ /  .' ; |
          \  \ `-.   \_\_`. .'/_/  -' _.' /
==============`-.`_`-._\ \_  /.-'.'_.-'================
*/
#include<bits/stdc++.h>
using namespace std ;
#define ll  long long 
int main(){
    ll  t ;
    cin>>t;
    while(t--){
        ll n ;
        cin>> n ;
        vector<ll> a(n) , b(n) ;
        vector<pair<ll,ll>> e ;
        vector<pair<ll,ll>> l ;
        unordered_map<ll,ll>mp;
        for(ll i=0 ; i<n ; i++){
            cin>>a[i];
            mp[a[i]]++;}
        for(ll i=0 ; i<n ; i++){
            cin>>b[i];
            mp[a[i]]++;
            e.push_back({a[i] , b[i]});
        }
        sort(e.begin(), e.end());
        for(ll i = 0 ; i< n ; i ++ ){
            if((a[i] == e[i].first && b[i] == e[i].second)){
 
            }
            else {
                for(ll j=i+1;j<n;j++)
                {
                    if(a[j]==e[i].first&&b[j]==e[i].second)
                    {
                        swap(a[i],a[j]);
                        swap(b[i],b[j]);
                        l.push_back({i+1,j+1});
                    }
                }
            }
        }
        bool fact = true ;
        for(ll i = 1 ; i< n ; i ++){
            if(e[i-1].first<=e[i].first && e[i-1].second<=e[i].second){
 
            }
            else{
                fact = false ;
                break;
            }
        }
        if(fact){
            cout<<l.size()<<endl;
            for(auto i :l){
                cout<<i.first<<" "<<i.second<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
 
 
    }
}