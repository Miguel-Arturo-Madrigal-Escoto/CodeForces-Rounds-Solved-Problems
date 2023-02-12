#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fore(i,a,b) for(int i = a, T = b; i < T; ++i)
#define sz(s) int(s.size())
#define pb push_back
#define pba pop_back
#define f first
#define s second
#define all(s) begin(s),end(s)
#define ENDL '\n'

using namespace std;

///types
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;

void solve(){
    vector<pair<int,int>> odd, even;
    int n, a; cin>>n;

    fore(i,0,n){
        cin>>a;
        if (a % 2 == 0) even.pb({i+1, a});
        else odd.pb({i+1, a});
    }

    if (sz(odd) >= 3){
        cout << "YES" << ENDL;
        fore(i,0,3) cout << odd[i].f << " ";
        cout << ENDL;
        return;
    }
    else if (sz(even) >= 2 and sz(odd) >= 1){
        cout << "YES" << ENDL;
        fore(i,0,2) cout << even[i].f << " ";
        cout << odd[0].f;
        cout << ENDL;
        return;
    }

    cout << "NO" << ENDL;
}

int main()
{
    IO
    int t; cin>>t;

    while(t--) solve();

    return 0;
}