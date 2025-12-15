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
  string s; cin >> s;
  vi arr;
  for (int i = 0; i < s.size(); i++) {
    int v = s[i] - '0';
    if (!(i & 1)) 
      arr.push_back(v);
  }
  sort(arr.begin(), arr.end());
  for (int i = 0, j = 0; i < s.size(); i++) {
    if (!(i & 1)) cout << arr[j++];
    else cout << '+';
  }
  cout << '\n';
  return 0;
}
