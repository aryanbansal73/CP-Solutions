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
    int t ;
    cin>>t;
    while(t--){
        int a,b,c,x,y ;
        cin>>a>>b>>c>>x>>y;
        if(a+b+c < x+y ){
            cout<<"NO"<<endl;
        }
        else{
            if(max(0 , x-a ) + max(0 , y- b)<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}