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
 
    if (n % 2 == 0) {
        lli x = n / 2;
        cout << x << " " << x << ENDL;
    }
    else {
        string num = to_string(n);
        string ans_a = "", ans_b = "";
        bool curr_max = 1;
        
        fore(i,0,sz(num)){
            n = stoi(to_string(num[i])) - 48;
            
            int a = n/2;
            int b = n-a;
            
            int c_a = a, c_b = b;
            
            if (b > a){
               curr_max = !curr_max;
            }
            // else if (b < a){
            //     curr_max = 1;
            // }
            
            if (curr_max == 0){
                a = max(c_a,c_b);
                b = min(c_a,c_b);
            }
            else {
                b = max(c_a,c_b);
                a = min(c_a,c_b);
            }
            
            
            ans_a += to_string(a);
            ans_b += to_string(b);
            
        }
        
        while (ans_a[0] == '0' and sz(ans_a) > 1 and sz(ans_a) > 0) ans_a.erase(begin(ans_a));
        while (ans_b[0] == '0' and sz(ans_b) > 1 and sz(ans_b) > 0) ans_b.erase(begin(ans_b));
           
        cout  << ans_b << " " << ans_a << ENDL;
    }
}
 
int main(){ zzz
    int t; cin>>t;
 
    while(t--) solve();
 
    return 0;
}
