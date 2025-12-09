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
  string f, s; cin >> f >> s;
  if (f.size() != s.size()) { cout << "NO"; return 0; }
  vi arr;
  for (int i = 0; i < f.size(); i++) 
    if (f[i] != s[i]) arr.push_back(i);
  if (arr.size() != 2) { cout << "NO"; return 0; }
 
  swap(f[arr[0]], f[arr[1]]);
 
  for (int i = 0; i < f.size(); i++)
    if (f[i] != s[i]) { cout << "NO"; return 0; }
  cout << "YES";
  return 0;
}
