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
  vi ans;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.') { ans.push_back(0); continue; }
    else if (s[i] == '-' && s[i + 1] == '.') ans.push_back(1);
    else ans.push_back(2);
    i++;
  }
  for (int& v : ans) cout << v;
  return 0;
}
