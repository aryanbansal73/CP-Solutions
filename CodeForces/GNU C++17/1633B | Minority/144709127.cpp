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
        string s;
        cin>>s;
        int z , o ;
        int  l = s.length();
        sort(s.begin(),s.end());
        z = 0;
        for(int i=0;i<l;i++){
        if(s[i]=='0'){
            z++;
        }}
        o = l-z ;
        if(o==z){
            cout<<z-1<<endl;
        }
        else{
            cout<<min(z,o)<<endl;
        }
    }
 
        }
 
 