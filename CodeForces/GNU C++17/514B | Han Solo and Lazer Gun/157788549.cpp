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
set<double> convertToSet(vector<double> v)
{
    set<double> s;
    for (double  x : v) {
        s.insert(x);
    }
    return s;
}
int main(){
    int n , x0 , y0 ;
    cin>>n>>x0>>y0 ;
    vector<double > x(n) , y(n) ;
    for(int i = 0 ; i < n ; i++){
        cin>>x[i]>>y[i];
    }
    vector<double> slopes;
    bool b =false ;
    for(int  i = 0 ; i < n ; i++){
        if(x0 != x[i]) {
            double  k = (y0 - y[i]) , j = (x0 - x[i]);
            double  m = k/j ;
            slopes.push_back(m);
        }
        else{
            b= true ;
        }
    }
    set<double> s = convertToSet(slopes);
    int ans = s.size();
    if(b){
        ans +=1 ;
    }
    cout<<ans<<endl;
}