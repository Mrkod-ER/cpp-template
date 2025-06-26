#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

// Short forms
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ff first
#define ss second

// Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 2e5 + 5; // Change size as needed

// Debug (disable before submitting)
#define debug(x) cerr << #x << " = " << x << "\n";

// GCD & LCM
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// Modular Exponentiation
ll binpow(ll a, ll b, ll mod = MOD) {
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

// Main solve function
void solve() {
    // your logic here
}

int main() {
    fast_io
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
