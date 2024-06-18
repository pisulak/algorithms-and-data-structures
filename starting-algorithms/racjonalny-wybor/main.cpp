#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct pojazd{
    string nazwa;
    long int rotacje;
};

static bool compare(const pojazd& a, const pojazd& b) {
    if (a.rotacje != b.rotacje)
        return a.rotacje < b.rotacje;
    return a.nazwa < b.nazwa;
}

int main() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long int n;
    cin>>n;
    cin.ignore();

    pojazd pojazdy[3];

    for(int i=0; i<n; ++i) {
        string nazwa;
        double przebieg;
        long int srednica;
        getline(cin, nazwa);
        cin>>przebieg>>srednica;
        cin.ignore();

        long int rotacje = floor((przebieg * 1000 / ((3.141593 * srednica) * 0.0254)));

        if(i<3) {
            pojazdy[i].nazwa=nazwa;
            pojazdy[i].rotacje=rotacje;
            if(i==2) {
                sort(pojazdy, pojazdy+3, compare);
            }
        }
        else {
            int j;
            for (j = 0; j < 3; ++j) {
                if (rotacje < pojazdy[j].rotacje || (rotacje == pojazdy[j].rotacje && nazwa < pojazdy[j].nazwa)) {
                    for (int k = 2; k > j; --k) {
                        pojazdy[k] = pojazdy[k-1];
                    }
                    pojazdy[j].nazwa = nazwa;
                    pojazdy[j].rotacje = rotacje;
                    break;
                }
            }
        }
    }

    for (int i=0; i<3; ++i) {
        cout<<pojazdy[i].nazwa<<endl<<pojazdy[i].rotacje<<endl;
    }

    return 0;
}