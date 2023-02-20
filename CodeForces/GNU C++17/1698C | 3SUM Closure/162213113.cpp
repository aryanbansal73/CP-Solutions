/*
                          ____,......__
                     _, -'' _________,..i''--.._
                 ,.-'' ,.-''             '' ... '`-._
              ,/' _.-''                        '`-.  '-
            ,' ,-'                                 ':. `-
          ,' ,'                                       `. `.
         / ,'                                           `. \
       ,' /                       .|                      \ `.
      /  /                        '\                       \  \
     / ,'                       ,''`__                      `. \
    / /                         ':::.|                        \ \
   / ;                          |+-'i|                         : \
  ;  ;                         ,',''.|                         :  :
  ; /                         /,|- --|\                         \ :
+/ /                         ,;'| ;; |\\                         \ \
; ;                         ,/__,\--i .L`                         : :
;-;   /|                  ,''|||'    '+-:...                      : :
 ;._ |..\              _-'    |`      | _''-:`-.           ,''--'' : :
 |\ / \              ,-       |.\-   ,|/-   |   \         ,' /-    | |
 ; '`\ ;-         _-'     ,,. '`:`'ii,''   ,_    -.     _:..;:     : :
;    -' ;+      ,+||,. _,' ,\...--'    ,,-i -`..   '-._,''''        : :
|     -:  '.. +'||| ||/  /' __,.....'-'  ,'   '-'-.    `  /         | |
|      \     .  |.  /,/;;,'' |          /         ''-..__'          | |
|       \   |    `-/' |/|     \        .              \             | |
|         ''|`._.-'   |'     __-`-.._....:                          | |
|            '             ,'  ''.---iii  '-_                       | |
:                        ,'      `\::\      `:'-.                  _; ;
 :                     ,'     ,._ |\::\      ':_.:=.._______..,--''; ;
 |                   /'    ,i:,'':+ \::\      | `_ \-._ .__     _. | |
-:-                /'   _,'' /      :`\:\     .   \ `\ '--.i---'   ; ;
: :             -;:. ,,-    /        ',i.:___/     \  '-.   '-..  ; ;
: :       ,-----  i;/'     '         /     '        `    '`-.._,:`;,;
 \ \       '''--.,-'     ,'        /'                ' .._____,.-+'/
  : \                   /       ,/'                             / ;
  :  :                 ||    _,'                               ;  ;
   \ :                  |    |                                 ; /
    \ \                  \    \                               / /
     \ `.                 `    \                            ,' /
      \  \                 `.  '.                          /  /
       `. \                  \__i.                        / ,'
         \ `.                 +''`.                     ,' /
          `. `.       ,+.._;:-i;.--:  .-.             ,' ,'
            `. `.    (\i.).-''-=-----+--`\          ,' ,'
              `. `-.  `+'.---.....|-.|__ +'''':-.,-' ,'
                `-. `-.../       - ...:=-.|   ,-' ,-'
                   `-. `--._     : :     _.--' ,-'
                      `---._''---------''_.---'
                            ''---------''
 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull  unsigned long long
 
int  main(){
    int t ;
    cin>>t ;
    while(t--){
        ll q  ;
        cin>>q ;
        vector<ll> a(q) ,z, pos , neg ;
        unordered_map<ll , ll> m ;
        for(int i = 0 ; i< q ;i ++ ){
            ll x ;
            cin>>x;
            a[i] = x ;
            if(x>0){
                pos.push_back(x);
            }
            if(x<0){
 
                neg.push_back(x);
            }
            if(x==0){
                if(z.size()<2) {
                    z.push_back(x);
                    m[x]++;
                }
            }
        }
        if(pos.size()>2 || neg.size() >2){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            for(auto  i : pos){
                z.push_back(i);
                m[i]++;
            }
            for(auto  i : neg){
                z.push_back(i);
                m[i]++;
            }
            ll l  = z.size() ;
        bool t = true ;
        for(int i = 0 ; i<l ; i++ ){
            for(int j = i+1 ; j < l;j++ ){
                for(int k = j+1 ; k < l ; k++){
                    ll s = z[i] + z[j] +z[k];
                    if(m[s]>0){}
                    else{
                        t = false ;
                    }
                }
            }
        }
        if(t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }}
 
    }
}