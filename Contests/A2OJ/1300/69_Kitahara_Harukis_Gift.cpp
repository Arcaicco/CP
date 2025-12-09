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
  int a, b; a = b = 0;
  for (int i = 0; i < n; i++) {
    int v; cin >> v;
    if (v == 200) b++;
    else a++;
  }
  bool ans = true;
  if (b & 1) 
    if (a >= 2) a -= 2;
    else ans = false;

  if (a & 1) ans = false;

  cout << (ans ? "YES" : "NO");
    
  return 0;
}
