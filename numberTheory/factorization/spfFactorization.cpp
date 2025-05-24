#include <unordered_map>
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

void preProcessSPF(vi &spf, int n) {

  for (ll i = 4; i <= n; i += 2) {
    spf[i] = 2;
  }

  for (ll i = 3; i * i <= n; i += 2) {
    if (spf[i] == i) {
      for (ll j = i * i; j <= n; j += (i << 1)) {
        spf[j] = i;
      }
    }
  }
}

void init() {

  int n;
  cin >> n;

  vi v(n);
  for (int &x : v)
    cin >> x;

  vi spf(20000 + 1);
  iota(all(spf), 0);

  preProcessSPF(spf, 20000);

  for (auto &x : v) {
    unordered_map<int, int> f;

    while (x != 1) {
      f[spf[x]]++;
      x /= spf[x];
    }

    for (auto &[x, y] : f) {
      cout << x << " --> " << y << "\n";
    }
    cout << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  init();
}

/*


*/
