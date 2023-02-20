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
 
ll gcd(ll a, ll b)
{
if (b == 0)
 return a;
return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
 return (a / gcd(a, b)) * b;
}
int main() {
    ll t ;
    cin>>t ;
    while(t--){
        ll n ;
        cin>>n;
        if(n<=3){
            cout<<n-1<<" "<<1<<endl;
        }
        else {
            int i;
            for (i= 2; i * i <= n; i++) {
                if (n % i == 0) {
                    break;
                }
            }
 
            ll a , b ;
            a = n/i, b = n-a;
            if((lcm(a,b)<=n-1)) {
                cout << a << " " << b << endl;
            }
            else{
                cout<<1<<" "<<n-1<<endl;
            }
        }
    }
}