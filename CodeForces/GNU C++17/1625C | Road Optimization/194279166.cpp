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
 #username - a_parzival_b
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD = 1e9 + 7 ;
ll gcd1(ll a, ll b)
{
  return b == 0 ? a : gcd1(b, a % b);
}
void primefactors_all(vector<ll> &v, ll n)
{
  while (n % 2 == 0)
  {
    v.push_back(2);
    n /= 2;
  }
  for (int i = 3; i <= sqrt(n); i += 2)
  {
    while (n % i == 0)
    {
      v.push_back(i);
      n = n / i;
    }
  }
  if (n > 2)
  {
    v.push_back(n);
  }
}
void primefactors_pow(vector<pair<ll,ll>> &v, ll n)
{ 
  int k = 0 ;
  while (n % 2 == 0)
  {
    k++;
    n /= 2;
  }
  v.push_back({k,2});
  for (int i = 3; i <= sqrt(n); i += 2)
  { 
    if(n%i ==0){
      k = 0 ;
      while(n%i ==0){
        k++;
        n/=i;
      }
      v.push_back({k,i});
    }
  }
  if (n > 2)
  {
    v.push_back({1,n});
  }
}
int max_map(unordered_map<char, int> &v)
{
  int ans = INT_MIN;
  for (auto it : v)
  {
    ans = max(ans, it.second);
  }
  return ans;
}
int makezero(int n)
{
  int ans = INT_MAX;
  for (int i = 0; i <= 15; i++)
  {
    for (int j = 0; j <= 15; j++)
    {
      if (int((n + i) * (1 << j)) % 32768 == 0)
      {
        ans = min(ans, i + j);
      }
    }
  }
  return ans;
}
bool isprime(ll n){
  for(int i =2 ; i<=sqrt(n) ; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true ;
}
int indx(int low ,int high, int x,int ad[] ){
  while(high - low>1){
    int mid = (low+high)/2;
    if(ad[mid]<=x){
      high = mid ;
    }
    else{
      low = mid  ;
    }
 
  }
  if(ad[low]<x){return low; }
  else {return high ;}
 
}
ll pow_modulo(ll a  , ll b , ll m){
  if(b==0) return 1 ;
  ll c = pow_modulo(a,b/2,m);
  if(b%2 == 0) return((c*c)%m) ;
  return ((c*c)%m  * a%m)%m;
}
vector<int> euler_totient_till_n(int n ){
  vector<int> phi(n+1);
  for(int i = 0 ; i<=n;i++){
    phi[i] = i ;
  }
  for(int i= 2 ;i<=n;i++){
    if(phi[i] == i ){
      for(int j = i ; j<=n;j+=i){
        phi[j] -=phi[j]/i ;
      }
    }
  }
  return phi ;
}
bool isvalid(int x , int a[] , int k , int n ){
    int sum = 0 ;
    for(int i = k-1 ; i>=k-x ; i--){
      sum += (n-a[i]);
    }
    return sum <=n-1 ;
}
void make_comb(vector<string>&possible , string curr, int pos , int m , string &discrete){
  if(curr.size() == m){
    possible.push_back(curr);
    return ;
  }
  if(pos == discrete.size()){
    return ;
  }
  make_comb(possible,curr,pos+1,m,discrete);
  curr.push_back(discrete[pos]);
  make_comb(possible,curr,pos+1,m,discrete);
  curr.pop_back();
}
void sol(vector<ll>&ps , ll a,ll b ){
  for(ll i = 1 ; i<a*b ; i++){
    if(((i%a)%b)!=((i%b)%a)){
      ps[i] =ps[i-1] +1 ;
    }
  }
 
}
const ll INF = 1e10 ;
ll joke(vector<ll>&ps , ll l){
  ll sz = ps.size() ; 
  ll cnt = l/sz ;
  return  cnt*ps[sz-1] + ps[(l%sz)];
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
 ll n , k , l ; 
 cin>>n>>l>>k ; 
 ll point[n+2] , time[n+2]; 
 for(int i = 1 ; i<=n ; i++)cin>>point[i] ;
 for(int i = 1 ; i<=n ; i++)cin>>time[i] ;
 vector<vector<ll>> dp(n+4 , vector<ll>(k+4,INF));
 point[n+1] = l ; 
 dp[1][0] = 0 ;
 for(int i = 2 ; i<=n+1 ;i++){
  dp[i][0] = dp[i-1][0] + (point[i] - point[i-1])*time[i-1] ;
 }
 for(ll i = 2 ; i <=n+1; i++){
  for(ll j = 1 ;  j <= min(k , i-2) ; j++){
    for(ll joker = i - 1 ;  joker  >= i - j - 1 ; joker --){
      dp[i][j] = min(dp[i][j] ,  dp[joker][j+1 - i + joker] +  (point[i] - point[joker])*time[joker]);
    }
  }
 }
 ll ans = *min_element(dp[n+1].begin() , dp[n+1].end());
 cout<<ans<<endl;
}