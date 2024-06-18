#include <iostream>

using namespace std;

struct miejsce{
    unsigned int index;
    unsigned int sila;
    string nazwa;
};

void przesiejGore(miejsce arr[], unsigned int i) {
    unsigned int korzen = (i-1)/2;
    if(i>0 && arr[i].sila > arr[korzen].sila) {
        miejsce temp=arr[korzen];
        arr[korzen]=arr[i];
        arr[i]=temp;
        przesiejGore(arr, korzen);
    }
    else if(i>0 && arr[i].sila == arr[korzen].sila) {
        if(arr[i].index < arr[korzen].index) {
            miejsce temp=arr[korzen];
            arr[korzen]=arr[i];
            arr[i]=temp;
            przesiejGore(arr, korzen);
        }
    }
}

void przesiejDol(miejsce arr[], unsigned int size, unsigned int i) {
    if(i<size) {
        unsigned int leweDziecko=i*2+1;
        unsigned int praweDziecko=i*2+2;
        unsigned int maxIndex=i;

        if (leweDziecko<size && (arr[leweDziecko].sila > arr[maxIndex].sila || (arr[leweDziecko].sila == arr[maxIndex].sila && arr[leweDziecko].index < arr[maxIndex].index))) {
            maxIndex=leweDziecko;
        }
        if (praweDziecko<size && (arr[praweDziecko].sila > arr[maxIndex].sila || (arr[praweDziecko].sila == arr[maxIndex].sila && arr[praweDziecko].index < arr[maxIndex].index))) {
            maxIndex=praweDziecko;
        }
        if(maxIndex!=i) {
            miejsce temp=arr[i];
            arr[i]=arr[maxIndex];
            arr[maxIndex]=temp;
            przesiejDol(arr, size, maxIndex);
        }
    }
}

void usun(miejsce arr[], unsigned int &size, unsigned int k) {
    if(arr[0].sila<=k){
        k-=arr[0].sila;
        cout<<arr[0].nazwa<<" ";
        if(k==0)
            return;
    }
    arr[0]=arr[size-1];
    --size;

    if(size>0) {
        przesiejDol(arr, size, 0);
        usun(arr, size, k);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned int n;
    cin>>n;
    cin.ignore();

    miejsce kopiec[n];

    for(unsigned int i=0; i<n; ++i) {
        kopiec[i].index=i;
        cin>>kopiec[i].nazwa>>kopiec[i].sila;
        cin.ignore();

        przesiejGore(kopiec, i);
    }

    unsigned int k;
    cin>>k;
    cin.ignore();

    usun(kopiec, n, k);

    return 0;
}