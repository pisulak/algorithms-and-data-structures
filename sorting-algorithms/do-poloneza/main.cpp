#include <iostream>

using namespace std;

struct person {
    string kod;
    double s;
    int d, m;
};

bool tempSort(person first, person second, char order[3]){
    if(order[0]=='s'){
        if(second.s > first.s)
            return true;
        else if(order[1]=='m'){ // s m d
            if(second.s == first.s && second.m > first.m)
                return true;
            else if(second.s == first.s && second.m == first.m && second.d > first.d)
                return true;
            else if(second.s == first.s && second.m == first.m && second.d == first.d)
                return false;
        }
        else if(order[1]=='d'){ // s d m
            if(second.s == first.s && second.d > first.d)
                return true;
            else if(second.s == first.s && second.d == first.d && second.m > first.m)
                return true;
            else if(second.s == first.s && second.d == first.d && second.m == first.m)
                return false;
        }
    }
    else if(order[0]=='m'){
        if(second.m > first.m)
            return true;
        else if(order[1]=='s'){ // m s d
            if(second.m == first.m && second.s > first.s)
                return true;
            else if(second.m == first.m && second.s == first.s && second.d > first.d)
                return true;
            else if(second.m == first.m && second.s == first.s && second.d == first.d)
                return false;
        }
        else if(order[1]=='d'){ // m d s
            if(second.m == first.m && second.d > first.d)
                return true;
            else if(second.m == first.m && second.d == first.d && second.s > first.s)
                return true;
            else if(second.m == first.m && second.d == first.d && second.s == first.s)
                return false;
        }
    }
    else if(order[0]=='d'){
        if(second.d > first.d)
            return true;
        else if(order[1]=='s'){ // d s m
            if(second.d == first.d && second.s > first.s)
                return true;
            else if(second.d == first.d && second.s == first.s && second.m > first.m)
                return true;
            else if(second.d == first.d && second.s == first.s && second.m == first.m)
                return false;
        }
        else if(order[1]=='m'){ // d m s
            if(second.d == first.d && second.m > first.m)
                return true;
            else if(second.d == first.d && second.m == first.m && second.s > first.s)
                return true;
            else if(second.d == first.d && second.m == first.m && second.s == first.s)
                return false;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    cin>>n;
    cin.ignore();

    char *order=new char[3];
    cin>>order[0]>>order[1]>>order[2];
    cin.ignore();

    person *manList=new person[n];
    person *womanList=new person[n];

    //-----------------------zapis do tablicy
    for(int i=0; i<n; ++i){
        cin>>manList[i].kod>>manList[i].s>>manList[i].d>>manList[i].m >> womanList[i].kod>>womanList[i].s>>womanList[i].d>>womanList[i].m;
    }

    //-----------------------sortowanie tablicy (insert sort)
    person temp_man, temp_woman;
    for(int i=1; i<n; ++i){
        if(tempSort(manList[i - 1], manList[i], order)) {
            temp_man=manList[i];
            for(int j=i-1; j>=0 && tempSort(manList[j], temp_man, order); --j){
                manList[j+1]=manList[j];
                manList[j]=temp_man;
            }
        }
        if(tempSort(womanList[i - 1], womanList[i], order)) {
            temp_woman=womanList[i];
            for(int j=i-1; j>=0 && tempSort(womanList[j], temp_woman, order); --j){
                womanList[j+1]=womanList[j];
                womanList[j]=temp_woman;
            }
        }
    }


    //-----------------------wyswietlanie tablicy
    for(int i=0; i<n; ++i){
        cout<<manList[i].kod<<" "<<womanList[i].kod<<" ";
    }

    delete [] order;
    delete [] manList;
    delete [] womanList;

    return 0;
}