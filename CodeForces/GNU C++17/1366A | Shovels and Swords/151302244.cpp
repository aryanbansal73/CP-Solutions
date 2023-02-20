#include <bits/stdc++.h>
using namespace std;
 
int main (){
    int t ;
    cin>>t;
    while(t--){
        int a , b ;
        cin>>a>>b;
        int emeralds = 0 ;
        if(a<b){
            swap(a,b);
        }
        int x = a-b;
        if(x>b){
            emeralds = b ;
        }
        else{
            emeralds = x ;
            a-=x ;
            b-=x ;
            emeralds += (b/3)*2 ;
            if(b%3 == 2){
                emeralds +=1;
            }
        }
        cout<<emeralds<<endl;
    }
}