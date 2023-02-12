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
    int n; cin>>n;
    string s; cin>>s; cin.ignore();

    // x,y
    pair<int,int> spoint = {0, 0}, found = {1, 1};


    for(const auto& d: s){
        if (d == 'U'){
            spoint.s++;
        }
        else if (d == 'D'){
            spoint.s--;
        }
        else if (d == 'R'){
            spoint.f++;
        }
        else if (d == 'L'){
            spoint.f--;
        }
        if (spoint == found){
            cout << "YES" << ENDL;
            return;
        }

    }
    cout << "NO" << ENDL;
}

int main(){
    IO
    int t; cin>>t;
    while(t--) solve();


    return 0;
}