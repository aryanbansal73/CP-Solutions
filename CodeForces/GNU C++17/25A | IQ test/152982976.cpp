#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    int a[n];
    int odd=0  , lastodd ,lasteven;
 
    for(int i =0 ; i< n ; i++){
        cin>>a[i];
        if(a[i]%2 == 1){
            odd ++ ;
            lastodd = i+1;
        }
        else{
            lasteven = i+1 ;
        }
    }
    if(odd == 1){
        cout<<lastodd<<endl;
    }
    else{
        cout<<lasteven<<endl;
    }
}