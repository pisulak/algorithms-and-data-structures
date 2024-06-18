#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int *counter=new int[26] {0};
    char c='0';
    while(c!='^'){
        cin>>c;
        for(int i=0; i<26; ++i){
            if((int)c==i+65 || (int)c==i+97){
                ++counter[i];
            }
        }
    }

    int min=2000000,max=0;
    char temp_min,temp_max;
    for(int i=0;i<26;++i){
        if (counter[i] > max && counter[i]>0) {
            max = counter[i];
            temp_max=(char)(i+97);
        }
        if(counter[i]<min && counter[i]>0) {
            min = counter[i];
            temp_min=(char)(i+97);
        }
    }

    cout<<temp_max<<" "<<temp_min;

    delete [] counter;
    return 0;
}