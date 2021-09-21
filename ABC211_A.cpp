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

  double a, b;

  cin >> a >> b;

  cout << fixed << setprecision(6) << (a-b)/3+b;

  return 0;
}