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
                              Aryan Bansal
                        deepspacetramp - codechef
                        a_parzival_b - codeforces
*/
#include <bits/stdc++.h>
using namespace std;
#define ll  long long
string solve(int n , int m , int k , string a , string b){
    string c = "";
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    int i = 0 , j = 0 , c1 = 0 , c2 =0 ;
    while(i <n && j< m){
        if(a[i]< b[j] && c1<k){
            c+=a[i];
            i++ ; c1++ ;
            c2 = 0 ;
        }
        else if(a[i]> b[j] && c2<k){
            c+=b[j];
            j++ ; c2++ ;
            c1 = 0 ;
        }
        else if( c1<k){
            c+=a[i];
            i++ ; c1++ ;
            c2 = 0 ;
        }
        else if(c2<k){
            c+=b[j];
            j++ ; c2++ ;
            c1 = 0 ;
        }
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int p[n];
        for(int i = 0 ; i < n ;i++){
            p[i] = i+1;
        }
        if(n==1){
            int a ;
            cin>>a;
            cout<<-1<<endl;
        }
        else{
            int a[n] ;
            for(int i = 0 ; i < n ;i++){
                cin>>a[i];
            }
            sort(p , p+n);
            for(int i = 0 ; i < n ;i++){
                if(a[i]!= p[i]){
                    continue;
                }
                if(i == n-1){
                    swap(p[n-1],p[n-2]);
                }
                else{
                    swap(p[i], p[i+1]);
                }
            }
            for(int i = 0 ;i< n ; i++){
                cout<<p[i]<<" ";
            }
            cout<<endl;
        }
    }
}