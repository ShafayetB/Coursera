/*
  "With age, comes wisdom. With travel, comes understanding.
   Remember that happiness is a way of travel – not a destination"
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int             long long int
#define ld              long double
#define F               first
#define S               second
#define pb              push_back
#define si              set <int>
#define vi              vector <int>
#define pii             pair <int, int>
#define vpi             vector <pii>
#define vpp             vector <pair<int, pii>>
#define mii             map <int, int>
#define mpi             map <pii, int>
#define spi             set <pii>
#define endl            "\n"
#define sz(x)           ((int) x.size())
#define all(p)          p.begin(), p.end()
#define que_max         priority_queue <int>
#define que_min         priority_queue <int, vi, greater<int>>
#define bug(...)        __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define Print(a,x,y)    for (int i=x; i<y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
     int x = 1;
     while (b)
     {
          if (b & 1) x *= a;
          a *= a;
          b >>= 1;
     }
     return x;
}

typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> Set;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
     const char* comma = strchr (names + 1, ',');
     cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;
int a[N], pp[N], pp1[N], n, k;
const int p = 31, p1 = 53;
const int m = 1e9 + 9;
vpi h[2];
string s, t;

int mod = 1e9 + 9;
inline int add(int x, int y) { x += y; if (x >= mod) x -= mod; return x; }
inline int sub(int x, int y) { x -= y; if (x < 0) x += mod; return x; }
inline int mul(int x, int y) { return ((x % mod) * (y % mod)) % mod; }
inline int powr(int a, int b) {
     int x = 1 % mod;
     while (b) {
          if (b & 1) x = mul(x, a);
          a = mul(a, a);
          b >>= 1;
     }
     return x;
}
inline int inv(int a) { return powr(a, mod - 2); }


void compute_hash(string s, int x)
{
     int hash_value = 0, hash1_value = 0;
     int p_pow = 1, p1_pow = 1;

     h[x].pb({0, 0});
     for (int i = 0; i < sz(s); i++)
     {
          hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow) % m;
          pp[i] = inv(p_pow);
          p_pow = (p_pow * p) % m;

          hash1_value = (hash1_value + (s[i] - 'a' + 1) * p1_pow) % m;
          pp1[i] = inv(p1_pow);
          p1_pow = (p1_pow * p1) % m;

          h[x].pb({hash_value, hash1_value});

     }
}

void solve()
{
     while (cin >> k >> s >> t)
     {
          h[0].clear();
          h[1].clear();
          compute_hash(s, 0);
          compute_hash(t, 1);

          vi ans;
          for (int i = 0; i < sz(s) - sz(t) + 1; i++)
          {
               int low = i, cnt = 0;
               while (low < i + sz(t))
               {
                    int l = low, h1 = i + sz(t) - 1, ans1 = -1;
                    while (l <= h1)
                    {
                         int mid = l + h1 >> 1;
                         pii x = {((h[0][mid + 1].F - h[0][l].F + m)*pp[l]) % m, ((h[0][mid + 1].S - h[0][l].S + m)*pp1[l]) % m};
                         pii y = {((h[1][mid + 1 - i].F - h[1][l - i].F + m)*pp[l - i]) % m, ((h[1][mid + 1 - i].S - h[1][l - i].S + m)*pp1[l - i]) % m};
                         if (y == x)
                              l = mid + 1, ans1 = mid;
                         else
                              h1 = mid - 1;
                    }
                    if (ans1 == -1)
                    {
                         low++;
                         cnt++;
                    }
                    else
                         low = ans1 + 1;

                    if (cnt > k)
                         break;
               };
               if (cnt <= k)
                    ans.pb(i);
          }
          cout << sz(ans) << " ";
          print(ans);

     }

}

int32_t main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*#ifndef ONLINE_JUDGE
     freopen("input.txt",  "r",  stdin);
     freopen("output.txt", "w", stdout);
#endif
     cout << setprecision(9) << fixed;
     clock_t z = clock();*/

     solve();

     //cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

     return 0;
}