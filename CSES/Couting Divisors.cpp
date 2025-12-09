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

const int N = 1e6 + 5;
vi primes, spf;
vi spfExp, numDiv;

void sieve() {
  spf.assign(N + 1, 0); 
  spfExp.assign(N + 1, 0);
  numDiv.assign(N + 1, 0);
  primes.reserve(N / 10);
  spf[1] = numDiv[1] = 1;

  for (int i = 2; i <= N; i++) {
    if (spf[i] == 0) {
      spf[i] = i;
      primes.push_back(i);
      spfExp[i] = 1;
      numDiv[i] = 2;
    }

    for (int& p : primes) {
      if (p > spf[i] || (ll)p * i > N) break;
      int val = i * p;
      spf[val] = p;

      if (spf[i] == p) {
        spfExp[val] = spfExp[i] + 1;
        numDiv[val] = numDiv[i] / (spfExp[i] + 1) * (spfExp[i] + 2);
      }
      else {
        spfExp[val] = 1;
        numDiv[val] = numDiv[i] * 2;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  sieve();
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    cout << numDiv[n] << '\n';
  }
  return 0;
}
