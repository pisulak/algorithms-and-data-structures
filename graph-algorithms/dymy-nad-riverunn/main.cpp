#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Castle {
    int nodeNumber;
    vector<int> neighborList;
    bool visitStatus = false;

    explicit Castle(int nodeNbr) : nodeNumber(nodeNbr) {}
};

struct QueueList {
    int castleNode;
    int daysNeeded;

    QueueList(int node, int days){
        castleNode=node;
        daysNeeded=days;
    }

    int getCastleNode() {
        return castleNode;
    }

    int getDaysNeeded() {
        return daysNeeded;
    }

    virtual ~QueueList() {}
};


void count_castles(Castle** castle_list, queue<QueueList>& result_queue, int &castles_supporting, int &days_max, int days_limit){
    while(!result_queue.empty()){
        int current_days = result_queue.front().getDaysNeeded();
        if(current_days > days_max)
            days_max = current_days;
        if(current_days <= days_limit && result_queue.front().getDaysNeeded() != 0)
            ++castles_supporting;
        for (int i : castle_list[result_queue.front().getCastleNode()]->neighborList) {
            if(!castle_list[i]->visitStatus){
                result_queue.emplace(castle_list[i]->nodeNumber, current_days + 1);
                castle_list[i]->visitStatus=true;
            }
        }
        result_queue.pop();
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    short int n, s, d;
    int m;
    cin >> n >> m >> s >> d;
    cin.ignore();
    
    Castle* castle_list[n];

    for (int i = 0; i < n; ++i) {
        castle_list[i]=new Castle(i);
    }

    if (m == 0)
        return 0;
    else {
        for (int i = 0; i < m; ++i) {
            int temp_first, temp_second;
            cin >> temp_first >> temp_second;
            cin.ignore();
            
            castle_list[temp_first]->neighborList.push_back((temp_second));
            castle_list[temp_second]->neighborList.push_back((temp_first));
        }

        std::queue<QueueList> queue;

        int castles_supporting = 0;
        int days_max = 0;

        queue.emplace(castle_list[s]->nodeNumber, 0);
        castle_list[s]->visitStatus=true;

        count_castles(castle_list, queue, castles_supporting, days_max, d / 2);

        cout << days_max << " " << castles_supporting;
    }
    return 0;
}