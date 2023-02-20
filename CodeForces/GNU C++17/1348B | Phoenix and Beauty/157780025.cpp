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
    int t ;
    cin>>t;
    while(t--){
        int n , k ;
        cin>>n>>k;
        int a[n] ;
        bool b = true;
 
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i+k<n;i++ ){
            if(a[i]!=a[i+k] ){
                b = false;
            }
        }
        if(n==k){
            b = false ;
        }
        set<int> s1{a ,a+n};
        int dis = s1.size();
        if(b){
            cout<<n<<endl;
            for(int i=0 ; i< n ; i++ ){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            if(dis > k){
                cout<<-1<<endl;
            }
            else if( dis == k){
                vector<int> v ;
                for(auto itr : s1){
                    v.push_back(itr);
                }
                int o = n*k;
                cout<<o<<endl;
                for(int i = 0 ; i< o ; i++){
                    int j= i%k ;
                    cout<<v[j]<<" ";
                }cout<<endl;
            }
            else if(dis < k){
                vector<int> v ;
                for(auto itr : s1){
                    v.push_back(itr);
                }
                int c[k];
                for(int i = 0  ; i < k ; i++){
                    if(i<dis){
                        c[i] = v[i];
                    }
                    else{
                        c[i] = i%k ;
                    }
                }
                int o = n*k ;
                cout<<o<<endl;
                for(int i = 0 ; i<o ; i++ ){
                    int j = i%k ;
                    cout<<c[j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}