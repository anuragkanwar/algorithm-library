#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

#define check(x) cout << "--------" << x << endl

#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; i < n; i++)
#define all(x) (x).begin(), (x).end()

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define arr array
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vl;
typedef vector<pll> vpll;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;

#define inp(a)                                                                 \
  ll a;                                                                        \
  cin >> a;

#define inpvec(v, n)                                                           \
  vl v(n);                                                                     \
  for (auto &x : v)                                                            \
    cin >> x;

#define inp2dvec(v, n, m)                                                      \
  vvl v(n, vl(m));                                                             \
  for (auto &x : v)                                                            \
    for (auto &y : x)                                                          \
      cin >> y;

#define inpstr(s)                                                              \
  cin >> ws;                                                                   \
  string s;                                                                    \
  getline(cin, s);

#define printvec(v)                                                            \
  for (auto x : v)                                                             \
    cout << x << " ";                                                          \
  cout << endl

#define printnum(x, y)                                                         \
  for (int i = x; i <= y; i++)                                                 \
    cout << setw(3) << i << " ";                                               \
  cout << endl

#define debvec(v)                                                              \
  for (auto x : v)                                                             \
    cout << setw(3) << x << " ";                                               \
  cout << endl

#define deb2dvec(v)                                                            \
  for (auto x : v) {                                                           \
    for (auto y : x) {                                                         \
      cout << setw(3) << y << " ";                                             \
    }                                                                          \
    cout << endl;                                                              \
  }

#define print2dvec(v)                                                          \
  for (auto x : v) {                                                           \
    for (auto y : x) {                                                         \
      cout << y << " ";                                                        \
    }                                                                          \
    cout << endl;                                                              \
  }

#define printarr(n, arr)                                                       \
  for (int i = 0; i < n; i++) {                                                \
    cout << setw(3) << arr[i] << " ";                                          \
  }                                                                            \
  cout << endl;

#define print2darr(n, m, arr)                                                  \
  for (int i = 0; i < n; i++) {                                                \
    for (int j = 0; j < m; j++) {                                              \
      cout << setw(3) << arr[i][j] << " ";                                     \
    }                                                                          \
    cout << endl;                                                              \
  }

#define deb(args...)                                                           \
  {                                                                            \
    string _s = #args;                                                         \
    replace(_s.begin(), _s.end(), ',', ' ');                                   \
    stringstream _ss(_s);                                                      \
    istream_iterator<string> _it(_ss);                                         \
    err(_it, args);                                                            \
  }

void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
  cout << *it << " = " << a << endl;
  err(++it, args...);
}

const int mxn3 = 1e3 + 1;
const int mxn5 = 1e5 + 1;
const int mxn25 = 2e5 + 1;
const ll MXN = 1e9 + 1;
const ll MOD = 1e9 + 7;

int gcd(int a, int b, int &x, int &y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  int d = gcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);
  return d;
}
void init() {
  ll a, b;

  int x, y;

  int g = gcd(a, b, x, y);

  deb(g, x, y);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  init();
}

/*


*/
