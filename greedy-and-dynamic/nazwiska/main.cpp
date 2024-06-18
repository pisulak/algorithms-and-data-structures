#include <iostream>
#include <string>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    cin>>n>>m;
    cin.ignore();

    string surnames[1500];

    for (int i = 0; i < n; ++i) {
        int iterator = i % 1500;
        if (i < m) {
            cin >> surnames[iterator];
            cin.ignore();
            continue;
        }

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cin.ignore();

        a = a % 1500;
        b = b % 1500;
        c = c % 1500;
        d = d % 1500;

        for (int j = 0; j < 4; ++j) {
            if (j == 0)
                surnames[iterator] = surnames[a].substr(0, 3);
            else if (j == 1)
                surnames[iterator] += surnames[b].substr(3, 3);
            else if (j == 2)
                surnames[iterator] += surnames[c].substr(6, 3);
            else
                surnames[iterator] += surnames[d].substr(9, 3);
        }
    }

    cout << surnames[(n - 1) % 1500];
    return 0;
}