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
    lli cards; cin>>cards;
    pair<lli,lli> alice = {0,0}, bob = {0,0};

    // 1 -> white, 0 -> black
    bool color = true;

    --cards; ++alice.f;

    // 2 4 6 8
    //alice -> 1     4
    //bob   ->   2 3
    lli c = 2;
    lli i = 0;

    bool wb = false;



    // false: bob, true: alice
    bool name = false;
    lli white, black;
    while(1){
        if (i % 2 != 0){
            color = !color;
        }

        if (i % 2 == 0 and i != 0) {
            name = !name;
            wb  = !wb;
        }

        if (cards - c < 0) {
            if (!name) {
                // bob
                if (color){
                    if (cards % 2 != 0){
                        white = cards/2;
                        black = cards-white;
                        bob.f += white; bob.s += black;
                    }
                    else {
                        white = cards/2;
                        black = cards-white;
                        bob.f += white; bob.s += black;

                    }
                }
                else {
                    if (cards % 2 == 0){
                        black = cards/2;
                        white = cards-black;
                        bob.f += white; bob.s += black;
                    }
                    else {
                        black = cards/2;
                        white = cards-black;
                        bob.f += white; bob.s += black;

                    }
                }
            }
            else {
                if (color){
                    if (cards % 2 != 0){
                        white = cards/2;
                        black = cards-white;
                        alice.f += white; alice.s += black;
                    }
                    else {
                        black = cards/2;
                        white = cards-black;
                        alice.f += white; alice.s += black;

                    }
                }
                else {
                    if (cards % 2 != 0){
                        black = cards/2;
                        white = cards-black;
                        alice.f += white; alice.s += black;
                    }
                    else {
                        white = cards/2;
                        black = cards-white;
                        alice.f += white; alice.s += black;

                    }
                }
            }
            break;
        }
        if (cards - c >= 0) {
            cards -= c;

            if (!wb){
                white = c/2;
                black = c-white;
            }
            else {
                black = c/2;
                white = c-black;
            }
        }

        if (!name) {
            bob.f += white; bob.s += black;
        }
        else {
            alice.f += white; alice.s += black;
        }

        c++;
        i++;
    }

    cout << alice.f << " " << alice.s << " " << bob.f << " " << bob.s << ENDL;
}

int main(){ IO
    int t; cin>>t;

    while(t--) solve();


    return 0;
}