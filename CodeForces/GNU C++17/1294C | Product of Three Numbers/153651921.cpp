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
    ll t ;
    cin>>t ;
    while(t--){
        ll n ,f;
        cin>> n ;
        f =n ;
        ll a ,b ,c ;
        for( a= 2 ; a*a*a<=n;a++){
            if(n%a==0){
                n/=a;
                break;
            }
        }
        for(b  = a +1 ; b*b<= n;b++){
            if(n% b == 0 ){
                c = n/b;
                if(b==c || c ==a){
                    c=0 ;
                }
                break;
            }
 
        }
        if(a*b*c == f ){
            cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}