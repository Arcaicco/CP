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
  string str, s;
  getline(cin, str); getline(cin, s);
  multiset<char> mst;
  for (char& c : str)
    if (c == ' ') continue;
    else mst.insert(c);

  for (char& c : s)
    if (c == ' ') continue;
    else {
      auto it = mst.find(c);
      if (it == mst.end()) { cout << "NO"; return 0; }
      mst.erase(it);
    }
  cout << "YES";
  return 0;
}
