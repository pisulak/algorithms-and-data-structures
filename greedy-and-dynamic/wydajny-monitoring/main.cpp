#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct pomieszczenia{
    int start=0;
    int end=0;
};

bool comparator(const pomieszczenia& a, const pomieszczenia& b){
    return a.end<b.end;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        cin.ignore();

        vector<pomieszczenia> pom(n);
        bool usedList[n];

        for (int j = 0; j < n; ++j) {
            int a, b;
            cin >> a >> b;
            cin.ignore();

            pom[j].start=a;
            pom[j].end=b;
            usedList[j] = false;
        }

        sort(pom.begin(), pom.end(), comparator);

        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (!usedList[k] && j >= pom[k].start && j <= pom[k].end) {
                    usedList[k] = true;
                    break;
                }
            }
        }

        bool check = true;
        for (int j = 0; j < n; ++j) {
            if (!usedList[j]) {
                check = false;
                break;
            }
        }

        if (check)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }

    return 0;
}