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
        int a , b ;
        cin>>a>>b;
        string ans = "NO";
        if(a!=0 && b!=0){
            if (a <= b) {
                if ((a + b) % 3 == 0 && b <= 2 * a) {
                    ans = "YES";
                }
            } else if (b <= a) {
                if ((a + b) % 3 == 0 && a <= 2 * b) {
                    ans = "YES";
                }
            }
        }
        if (a == 0 && b == 0) {
            ans = "YES";
        }
        cout<<ans<<endl;
    }
}