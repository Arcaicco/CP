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
 
bool is_pal(string& s) {
  map<char, int> mp;
  for (char& c : s)
    mp[c]++;
  int evns = 0, odds = 0;
  for (auto& [_, v] : mp)
    if (v & 1) odds++;
    else evns++;
  
  return odds > 1 ? false : true;
}
 
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string s; cin >> s;
  bool first = false;
  while (true) {
    first = first ? false : true; 
    if (is_pal(s)) {
      cout << (first ? "First" : "Second"); break;
    }
    for (int i = 0; i < s.size(); i++) {
      char c = s[i];
      s.erase(s.begin() + i);
      if (!is_pal(s) || i == s.size() - 1) break;
      s.insert(s.begin() + i, c);
    }
    //cout << s << '\n';
  }
 
  return 0;
}

