#include <iostream>

using namespace std;

struct person {
    string name;
    int time;
};

int main() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t, n, p;
    cin>>t;

    for(int j=0; j<t; ++j) {
        cin>>n>>p;
        person *list=new person[n];
        long long int overall_time=1;

        //-------------------------przypisanie do tablicy
        for (int i = 0; i < n; ++i) {
            person current_person;
            cin>>current_person.name>>current_person.time;

            list[i].name=current_person.name;
            list[i].time=current_person.time;
        }

        //-------------------------sortowanie tablicy (selection sort)
        for(int i=n-1; i>0; --i){
            unsigned int max=0;
            for (int j=1; j<=i; ++j){
                if(list[max].time>list[j].time  || (list[max].time == list[j].time && list[max].name<list[j].name))
                    max=j;
            }
            person temp_element=list[max];
            list[max]=list[i];
            list[i]=temp_element;
        }

        //-------------------------wyswietlanie
        for(int i=0; i<p; ++i){
            cout<<list[i].name<<" ";
        }
        for(int i=1; i<n; ++i){
            overall_time+=1+(list[i].time*i);
        }
        overall_time%=1000003;
        cout<<endl<<overall_time<<endl;

        delete [] list;
    }
    return 0;
}