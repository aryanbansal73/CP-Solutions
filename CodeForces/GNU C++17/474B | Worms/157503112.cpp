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
int binary_search(int start , int end , int a[] ,int k){
    int m = (start +end)/2 ;
    if(start == end ){
        return start ;
    }
    if(a[m]<k && a[m+1]>=k){
       return m+1;
    }
    else if(a[m] == k){
        return m ;
    }
    else if(a[m]>k){
        binary_search(start , m , a ,k);
    }
    else if(a[m+1]<k){
        binary_search(m+1 , end , a , k);
    }
}
int main(){
    int n ;
    cin>>n;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int b[n] ;
    b[0] =a[0];
    for(int i = 1 ; i< n ; i++){
        b[i] = b[i-1] + a[i];
    }
    int m ;
    cin>>m;
    int k ;
    for(int i = 0 ; i < m ;i++){
        cin>>k;
        cout<<binary_search(0 , n-1 , b , k )+1<<endl;
    }
}