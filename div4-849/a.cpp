#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    char c; cin>>c; cin.ignore();
    string cad = "codeforces";

    if (cad.find(c) != std::string::npos){
        cout << "YES" << ENDL;

    }
    else{
        cout << "NO" << ENDL;
    }
}

int main(){
	int t; cin>>t;
    while(t--) solve();
	return 0;
}
