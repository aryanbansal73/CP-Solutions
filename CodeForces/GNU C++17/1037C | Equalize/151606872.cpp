# include <bits/stdc++.h>
using namespace std;
int solve(string a , string b , int n ){
    int ans =0 ;
    int i = 0 ;
    while(i<n){
        if(a[i]!=b[i]){
            if(i<n-1 && a[i]!=a[i+1]&&a[i+1]!=b[i+1]){
                ans +=1;
                i+=2;
            }
            else{
                ans ++;
                i++;
            }
        }
        else{
            i++;
        }
    }
    return ans ;
}
int main(){
    int n ;
    cin>>n;
    string  a , b ;
    cin>>a>>b;
    int ans = solve(a,b,n);
    cout<<ans<<endl;
}