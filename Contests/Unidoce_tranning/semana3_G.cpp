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
  int ans = 0;
  vi arr(n);
  for (int& v : arr) cin >> v;
  while (arr.size() > 1) {
    ans++;
    sort(arr.begin(), arr.end());
    int l = arr.size() - 2;
    int& prev = arr[l];
    if (--prev == 0) arr.erase(arr.begin() + l);
    l = arr.size() - 1;
    int& cur = arr[l];
    if (--cur == 0) arr.pop_back();
    //for (int& v : arr) cout << v << ' '; cout << '\n';
  }
  cout << ans;

  return 0;
}
