#include <iostream>
#include <cmath>

using namespace std;

//double P(int i, int j){
//    return 30-sqrt(pow((i-5),2)+pow((j-5),2));
//}

int selectMax(int x, int y) {
    if(x==1)
        return 0;
    double maxVal = P(0, y);
    int xIndex=x;
    for (int i = 1; i < x; ++i) {
        double currentVal = P(i, y);
        if (currentVal >= maxVal) {
            maxVal = currentVal;
            xIndex = i;
        }
    }
    return xIndex;
}

double goThroughTheColumns(int n, int mStart, int mEnd) {
    if (mEnd - mStart == 0)
        return P(selectMax(n, mEnd), mEnd);

    int midIndex = (mStart + mEnd) / 2;
    int maxIndex = selectMax(n, midIndex);

    double midPeak = P(maxIndex, midIndex);
    double leftPeak = P(maxIndex, midIndex - 1);
    double rightPeak = P(maxIndex, midIndex + 1);

    if (leftPeak > midPeak)
        return goThroughTheColumns(n, mStart, midIndex - 1);
    else if (rightPeak > midPeak)
        return goThroughTheColumns(n, midIndex + 1, mEnd);
    else
        return midPeak;
}

int main() {
    int n, m;
    cin>>n>>m;

    double result;
    result=goThroughTheColumns(n, 1, m);
    cout<<(int)result;

    return 0;
}