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
██████╗░██╗░░░░░███████╗░█████╗░░██████╗███████╗░░░░░░░░░░░░░█████╗░░█████╗░░█████╗░███████╗██████╗░████████╗
██╔══██╗██║░░░░░██╔════╝██╔══██╗██╔════╝██╔════╝░░░░░░░░░░░░██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔══██╗╚══██╔══╝
██████╔╝██║░░░░░█████╗░░███████║╚█████╗░█████╗░░█████╗█████╗███████║██║░░╚═╝██║░░╚═╝█████╗░░██████╔╝░░░██║░░░
██╔═══╝░██║░░░░░██╔══╝░░██╔══██║░╚═══██╗██╔══╝░░╚════╝╚════╝██╔══██║██║░░██╗██║░░██╗██╔══╝░░██╔═══╝░░░░██║░░░
██║░░░░░███████╗███████╗██║░░██║██████╔╝███████╗░░░░░░░░░░░░██║░░██║╚█████╔╝╚█████╔╝███████╗██║░░░░░░░░██║░░░
╚═╝░░░░░╚══════╝╚══════╝╚═╝░░╚═╝╚═════╝░╚══════╝░░░░░░░░░░░░╚═╝░░╚═╝░╚════╝░░╚════╝░╚══════╝╚═╝░░░░░░░░╚═╝░░░
 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ex[1<<18];
int main ()
{
    int t ;
    cin>>t;
    while(t--){
        ll n ;
        cin>>n;
        ll a[n] , sum = 0;
        bool tr =false ;
        for(int i = 0 ; i< n ;i++){
            cin>>a[i];
            if(i==n-1){
                break;
            }
            if(a[i]!=0){
                tr =true;
            }
            if(a[i]==0 && tr){
                sum++;
            }
            sum+=a[i];
        }
        cout<<sum<<endl;
 
    }
}