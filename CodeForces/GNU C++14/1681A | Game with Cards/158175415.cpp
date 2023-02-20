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
        int am = *max_element(a , a+n );
        int m ;
        cin>>m;
        int b [m] ;
        for(int i=0 ; i<m ; i++){
            cin>>b[i] ;
        }
        int bm = *max_element(b , b+m) ;
        if(am > bm ){
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else if ( am < bm ){
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
    }
}