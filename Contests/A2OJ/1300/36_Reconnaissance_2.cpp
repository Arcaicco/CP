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
  vi arr(n);
  for (int& v : arr) cin >> v;
  int mn = abs(arr.back() - arr.front());
  int x = 0, y = n - 1;
  for (int i = 1; i < n; i++) 
    if (mn > abs(arr[i] - arr[i - 1])) {
      mn = abs(arr[i] - arr[i - 1]), x = i - 1, y = i;
    }
  cout << x + 1 << ' ' << y + 1 << '\n';
  return 0;
}
