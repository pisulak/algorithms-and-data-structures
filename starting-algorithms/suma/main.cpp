#include <iostream>

using namespace std;

int main() {
ios_base::sync_with_stdio(false);
std::cin.tie(nullptr);
std::cout.tie(nullptr);
    int n=0;
    cin>>n;
    if(n>=1 && n<=10){
        long x,y;
        for(int i=0;i<n;++i){
            cin>>x>>y;
            cout<<x+y<<"\n";
        }
    }
    return 0;
}