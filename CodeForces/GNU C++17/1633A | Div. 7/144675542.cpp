#include<iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;
void printArray(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
        }
        else{
            int r;
            int ans;
            r= n%7;
            int l = n%10;
            if(l+7-r<10){
                ans = n+7-r;
            } else{
                ans = n-r;
            }
            cout<<ans<<endl;
        }
 
    }
}