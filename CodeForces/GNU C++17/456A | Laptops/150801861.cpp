#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    vector <int> a(n),b(n);
    vector <pair <int, int> > e;
    for (int i = 0; i < n; i++) {
        cin >> a[i]>>b[i];
        e.push_back({a[i],b[i]});
    }
    sort(e.begin(), e.end());
    bool  ans = false;
    for (int i = 0; i < n-1; i++){
        if(e[i].second>e[i+1].second){
            ans = true;
        }
    }
    if(ans){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
 
}