#include <bits/stdc++.h>
using namespace std;
 
int main (){
    int n , m ,a , b ;
    cin>>n>>m>>a>>b ;
    if(m*a <= b ){
        cout<<n*a<<endl;
    }
    else{
        int ans = (n/m)*b ;
        if((n%m)*a <= b ){
            ans += (n%m)*a;
        }
        else{
            ans += b ;
        }
        cout<<ans<<endl;
    }
}