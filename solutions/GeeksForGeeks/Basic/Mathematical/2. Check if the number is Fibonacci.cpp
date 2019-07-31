#include <iostream>
#include <math.h>

using namespace std;

bool isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

bool isFib(long int n){
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4 );
}


int main() {
    long long T, N;
    cin >> T;

    while(T--){
       cin >> N;

       isFib(N)? cout << "Yes"<< endl : cout << "No" << endl;
    }
    return 0;
}


