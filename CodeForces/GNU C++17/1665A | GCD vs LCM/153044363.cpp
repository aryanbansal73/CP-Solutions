#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        if(n%2 == 1){
            if((n/2)%2==0){
                cout<<n/4<<" "<<n/2<<" "<<n/4<<" "<<1<<endl;
            }
            else{
                cout<<n/2 -1<<" "<<n/2<<" "<<1<<" "<<1<<endl;
            }
        }
        else{
            if(n%4 == 0){
                cout<<n/4<<" "<<n/4<<" "<<n/4<<" "<<n/4<<endl;
            }
            else{
                cout<<n/2<<" "<<n/2 -2<<" "<<1<<" "<<1<<endl;
            }
        }
    }
}