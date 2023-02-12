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
    lli n; cin>>n;
   
    if (n % 2 == 0) cout << "No" << ENDL;
    else {
        
        lli x = n*2;
   
        vector<ii> ans;
        lli cont = 0;
        lli last = 1;

        fore(i,1,(n/2)+2){
            ans.pb(make_pair(i,x-cont));
            cont += 2;
            last = i;
        }
        cont = 0;
        lli copy = x-1;
        fore(i,last+1,x+1){
            // if (st.count(i)) i++;
            
            if (sz(ans) == n) break;
            ans.pb(make_pair(i,copy-cont));
            cont += 2;
        }
        
        cout << "Yes" << ENDL;
        for(const auto& p: ans){
            if (p.f != 0 and p.s != 0) cout << p.f << " " << p.s << ENDL;
        }
        
    }
}
 
int main(){ zzz
    int t; cin>>t;
 
    while(t--) solve();
 
    return 0;
}
