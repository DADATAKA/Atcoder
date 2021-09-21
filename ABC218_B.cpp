#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rep_ll(i,n) for(ll i = 0; i < (ll)(n); i++)

using namespace std;
 
typedef long long ll;
typedef unsigned long long u_ll;
typedef pair<int, int> pair_;

const long double PI = (acos(-1));
 
const int INF = 1001001001;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

 
int gcd(int a, int b){
    if(b == 0) return a;
 
    return gcd(b, a%b);
}
 
int main(){

  vector<int> p(26);

  for(int i=0; i<26; i++){
    
    cin >> p[i];

  }

  for(int i=0; i<26; i++){
    char j = 'a';
    //for(int k=0; k<p[i]-1; k++){
      j+=p[i]-1;
    //}
    cout << (char)j;

  }

  
  return 0;
}