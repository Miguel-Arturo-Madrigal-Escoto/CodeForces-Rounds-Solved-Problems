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
    vector<int> letras(26);
    
    char peek;
    string s = "";
    
    fore(i,0,n){
        cin>>peek;
        s += peek;
        
        ++letras[peek-97];
    }
    
    set<char> first_word;
    lli second_word = 0;
    
    // for(const auto& l: letras) if (l > 0) ++second_word;
    
    
    lli mx = -1;
    
    fore(i,0,n-1){
        char c = s[i];
        first_word.insert(c);
        --letras[c-97];
        
        for(const auto& l: letras) if (l > 0) ++second_word;
        
        mx = max(mx, sz(first_word) + second_word);
        
        second_word = 0;
    }
    
    cout << mx << ENDL;
}
 
 
int main(){ zzz
    int t; cin>>t;
    while(t--) solve();
    
    return 0;
}