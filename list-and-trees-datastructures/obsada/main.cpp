#include <iostream>

using namespace std;

struct Actor {
    string actorName;
    int leavingFans{};
    Actor *prevActorPointer{};
    Actor *nextActorPointer{};
};

class ListOfActors {
private:
    Actor *firstActor{};

public:
    ListOfActors() {
        firstActor = nullptr;
    }

    void pushBackList(string tempName, string tempFans) {
        auto *tempActor = new Actor;
        tempActor->actorName = tempName;
        tempActor->leavingFans = stoi(tempFans);
        tempActor->prevActorPointer = nullptr;
        tempActor->nextActorPointer = nullptr;

        Actor *currentActor = firstActor;

        if (currentActor == nullptr) {
            firstActor = tempActor;
            firstActor->nextActorPointer = nullptr;
            cout << "TAK" << endl;
        } else {
            while (currentActor->nextActorPointer != nullptr) {
                if (currentActor->actorName == tempActor->actorName && currentActor->leavingFans == tempActor->leavingFans) {
                    cout << "NIE" << endl;
                    return;
                }
                currentActor = currentActor->nextActorPointer;
            }

            if (currentActor->actorName == tempActor->actorName && currentActor->leavingFans == tempActor->leavingFans) {
                cout << "NIE" << endl;
            } 
            else {
                currentActor->nextActorPointer = tempActor;
                tempActor->prevActorPointer = currentActor;
                cout << "TAK" << endl;
            }
        }
    }

    void removeActor(Actor *actor) {
        if (actor == nullptr) {
            return;
        }

        if (actor->prevActorPointer != nullptr) {
            actor->prevActorPointer->nextActorPointer = actor->nextActorPointer;
        } else {
            firstActor = actor->nextActorPointer;
        }

        if (actor->nextActorPointer != nullptr) {
            actor->nextActorPointer->prevActorPointer = actor->prevActorPointer;
        }

        delete actor;
    }

    void checkForMaxLoss(string p) {
        int maxActorLoss = stoi(p);
        Actor *bestPossibleActor = nullptr;
        Actor *currentActor = firstActor;

        while (currentActor != nullptr) {
            if (currentActor->leavingFans <= maxActorLoss) {
                if (bestPossibleActor == nullptr) {
                    bestPossibleActor = currentActor;
                } else {
                    if ((currentActor->actorName < bestPossibleActor->actorName && currentActor->leavingFans == bestPossibleActor->leavingFans) || currentActor->leavingFans > bestPossibleActor->leavingFans) {
                        bestPossibleActor = currentActor;
                    }
                }
            }
            currentActor = currentActor->nextActorPointer;
        }

        if (bestPossibleActor != nullptr) {
            cout << bestPossibleActor->actorName << endl;
            removeActor(bestPossibleActor);
        } else
            cout << "NIE" << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    string sn;
    getline(cin, sn);
    long int n = stoi(sn);

    ListOfActors ActorList;

    for (int i = 0; i < n; ++i) {
        string temp;
        int op;
        getline(cin, temp);
        op = stoi(temp);
        if (op == 1) {
            string tempName;
            string tempFans;
            getline(cin, tempName);
            getline(cin, tempFans);
            ActorList.pushBackList(tempName, tempFans);
        }

        if (op == 2) {
            string p;
            getline(cin, p);
            ActorList.checkForMaxLoss(p);
        }
    }
    return 0;
}