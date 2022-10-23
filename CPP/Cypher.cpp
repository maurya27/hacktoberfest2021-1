// https://codeforces.com/contest/1703/problem/C
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization("unroll-loops")
#define TEST_CASES
// #define ONLINE_JUDGE
// --------------------------------------------------------------------------------------
#define test   \
  long long t; \
  cin >> t;    \
  while (t--)
#ifndef ONLINE_JUDGE
#define reach(x) cout << "\n\t\t" << x << "\n\n";
#define debx(x) cout << x;
#define debug(...) chalBhaiGaltiBta(#__VA_ARGS__, __LINE__, __VA_ARGS__);
#else
#define reach(x) //
#define debx(x)  // cout << #x << " " << x << '\n';
#define debug(...) ;
#endif
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; i < n; i++)
#define boost()                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);                      \
  cout << fixed << setprecision(11);
#define MEM(a, val) memset(a, val, sizeof(a));
#define inputarr(a, n)        \
  for (int i = 0; i < n; ++i) \
  cin >> a[i]

const long long INF = LONG_LONG_MAX, MOD = 1e9 + 7;

typedef long long ll;
typedef long double ld;
using namespace std;
void chalBhaiGaltiBta(string s, int LINE_NUM) { cout << endl; }
template <typename start, typename... end>
void chalBhaiGaltiBta(string s, int LINE_NUM, start x, end... y)
{
  if (s.back() != ',')
  {
    s += ',';
    // cout << "(" << LINE_NUM << ") ";
  }
  int i = s.find(',');
  cout << s.substr(0, i) << " = " << x;
  s = s.substr(i + 1);
  if (!s.empty())
    cout << ", ";
  chalBhaiGaltiBta(s, LINE_NUM, y...);
}
//-------------------------------------------------------------------------------//
void solve()
{
  ll n, i, j, moves;
  cin >> n;
  ll a[n], b[n];
  inputarr(a, n);
  fo(i, n)
  {
    cin >> moves;
    string seq;
    cin >> seq;
    b[i] = 10 + a[i] + 2 * count(seq.begin(), seq.end(), 'D') - moves;
    cout << b[i] % 10 << ' ';
  }
}

signed main()
{
#ifdef ONLINE_JUDGE
  boost()
#endif
#ifdef TEST_CASES
      test
#endif
  {
#ifdef TEST_CASES
    // reach("--------------------------------------------");
#endif
    solve();
#ifdef TEST_CASES
    cout << '\n';
    // reach("--------------------------------------------");
#endif
  }

  return 0;
}
