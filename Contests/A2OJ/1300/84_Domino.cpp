#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<vi> vvi;

const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < n; i++) {
    int u, v; cin >> u >> v;
    if ((u & 1) && !(v & 1)) a++;
    else if (!(u & 1) && (v & 1)) b++;
    else if ((u & 1) && (v & 1)) c++;
 }
  bool con1 = a & 1 ? true : false;
  bool con2 = b & 1 ? true : false;
  bool con3 = c & 1 ? true : false;
  
  if (con3) {
    if (con1 && con2) cout << 0;
    else if ((!con1 && !con2) && (a > 0 || b > 0)) cout << 1;
    else cout << -1;
  }
  else {
    if (!con1 && !con2) cout << 0;
    else if (con1 && con2) cout << 1;
    else cout << -1;
  }


  return 0;
}
