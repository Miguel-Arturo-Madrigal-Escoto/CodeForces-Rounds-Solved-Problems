/*
⌜                                                            ⌝
                    ılı.lıllılı.ıllı.
                        2KMiguel64
 
            ᴺᵒʷ ᵖˡᵃʸᶦⁿᵍ; [ Soy de Rancho  ]
 
           1:07 ——◦———— -4:05
 
          ↠El ansioso ↺ ʳᵉᵖᵉᵃᵗ ⊜ ᵖᵃᵘˢᵉ
 
            ᴠᴏʟᴜᴍᴇ : ▮▮▮▮▮▮▮▮▯
 
⌞                                                           ⌟
*/
#include <bits/stdc++.h>
 
#define zzz ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    vector<int> arr(n);
    int ans = 10e4;

    fore(i,0,n) cin>>arr[i];

    fore(i,0,n) {
        int a = 0, b = 0;
        int idx;


        fore(j,0,i+1){
            if (arr[j] == 2) a++;    
            idx = j + 1;
        }

        fore(j,i+1,n){
            if (arr[j] == 2) b++;
        }

        if (a == b) {
            ans = idx;
            break;
        }
        
    }

    if (ans == 10e4) cout << -1 << ENDL;
    else cout << ans << ENDL;
}

int main(){ zzz
    int t; cin>>t;

    while(t--) solve();

    return 0;
}