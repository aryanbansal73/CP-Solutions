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
int main(){
   ll n , l ;
   cin>>n>>l;
   ll a[n];
   for(int i = 0 ;i < n ; i++){
       cin>>a[i];
   }
   sort(a, a+n);
   double  diff = - 7.0000 ;
   for(int i = 1 ; i< n ; i++){
       double  x = a[i] - a[i-1];
       diff = max(diff , x );
   }
    diff /=2 ;
    double y =a[0] ;
    diff = max(diff , y);
     y = l - a[n-1];
    diff = max(diff , y);
    cout.precision(10);
    cout<<fixed<<diff<<endl;
}
 
 