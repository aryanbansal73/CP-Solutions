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
          | :  `- \`. ;`. _/; .'/ /  .' ; |
          \  \ `-.   \_\_`. .'/_/  -' _.' /
==============`-.`_`-._\ \_  /.-'.'_.-'================
*/
#include<bits/stdc++.h>
using namespace std ;
#define ll  long long
int main(){
    int  t ;
    cin>>t;
    while(t--){
        int n ;
        cin>> n ;
        int a[n] ;
        for(int i=0 ; i<n ; i++){
            cin>>a[i] ;
        }
        int m ;
        cin>>m;
        int b [m] ;
        ll sum = 0 ;
        for(int i=0 ; i<m ; i++){
            cin>>b[i] ;
            sum += (b[i])%n ;
        }
        int k = (sum)%n ;
        cout<<a[k]<<endl;
 
    }
}