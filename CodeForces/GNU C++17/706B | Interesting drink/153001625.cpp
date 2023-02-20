#include<bits/stdc++.h>
using namespace std;
int bs( int a[] , int n,  int m ){
    int l = 0 ;
    int h = n - 1;
    int ans = -1;
    while(l<=h)
    {
        int  mid = l + (h-l)/2;
        if(a[mid]<=m)
        {
            ans = mid;
            l = mid + 1 ;
 
        }
        else
        {
            h = mid-1;
        }
    }
    return ans+1;
}
int main(){
    int n ;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n );
    int q ;
    cin>>q;
    int m[q],store[q];
    for(int i = 0 ; i< q ; i++){
        cin>>m[i];
        int j = m[i];
        store[i] = bs(a ,n, j);
    }
    for(int i = 0 ; i< q ; i++){
        cout<<store[i]<<endl;
    }
}