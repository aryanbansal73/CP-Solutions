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
    string s ;
    cin>>s;
    bool fact = false;
    int l = s.length();
 
    for(int i = 0 ; i <  l ; i++){
        if((s[i]-'0')%2 ==0){
            fact = true ;
        }
    }
    if(fact){
        for (int i = 0; i < l - 1; i++) {
            if ((s[i] - '0') % 2 == 0) {
                if (s[i] < s[l - 1]) {
                    swap(s[i], s[l - 1]);
                    break;
                }
            }
        }
        if ((s[l - 1] - '0') % 2 != 0) {
            for (int i = l - 2; i > -1; i--) {
                if ((s[i] - '0') % 2 == 0) {
                    swap(s[i], s[l - 1]);
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}