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

string form(string& s) {
  auto it = find(s.begin(), s.end(), '1');
  return string(it, s.end());
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string str; cin >> str;
  str = form(str);
  auto it = find(str.begin(), str.end(), '0');
  if (it == str.end()) { 
    str.pop_back();
    if (str.empty()) cout << 0;
    else cout << str; 
  }
  else {
    str.erase(it);
    cout << str;
  }
  return 0;
}
