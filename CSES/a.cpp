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

int f(int n) {
  vector<int> arr(n + 1 / 2);
  for (int i = 2; i * i <= n; i++) 
    while (n % i == 0) {
      arr[i]++;
      n /= i;
    }
  int ans = 1;
  for (int& v : arr)
    if (v > 0) ans = ans * (v + 1);
      
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    cout << f(n) << '\n';
  }
  return 0;
}
