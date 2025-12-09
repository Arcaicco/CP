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
int freq[N], spf[N];
vi primes;

void sieve() {
  spf[1] = 1;
  for (int i = 2; i < N; i++) {
    if (spf[i] == 0) {
      spf[i] = i;
      primes.push_back(i);
    }
    for (int& p : primes) {
      if (p > spf[i] || (ll) p * i >= N) break;
      spf[i * p] = p;
    }
  }
}

vii factorize(int n) {
  vii facts;
  while (n > 1) {
    int p = spf[n];
    int e = 0;
    while (n % p == 0) {
      n /= p;
      e++;
    }
    facts.emplace_back(p, e);
  }
  return facts;
}

void dfs(int idx, int val, vii& facts, vi& divs) {
  if (idx == facts.size()) {
    divs.push_back(val);
    return; 
  }
  int p_pow = 1;
  int p = facts[idx].first;
  int e = facts[idx].second;
  for (int i = 0; i <= e; i++) {
    dfs(idx + 1, val * p_pow, facts, divs);
    p_pow *= p;
  }
}

vi get_divs(int n) {
  vii facts = factorize(n);
  vi divs;
  dfs(0, 1, facts, divs);
  return divs;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  sieve();
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    vi divs = get_divs(x);
    for (int& v : divs)
      freq[v]++;
  }

  for (int i = N - 1; i >= 1; i--) 
    if (freq[i] >= 2) {
      cout << i;
      break; 
    }

  return 0;
}
