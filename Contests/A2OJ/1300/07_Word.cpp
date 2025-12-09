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
  int a = 0, b = 0;
  for (char& c : s) 
    if (isupper(c)) a++;
    else b++;
  if (a > b) 
    for (char& c : s)
      cout << (char)toupper(c);
  else
    for (char& c : s)
      cout << (char)tolower(c);
  return 0;
}
