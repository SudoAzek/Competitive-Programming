#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

long int GCD(long int, long int);

int main() {
    long long T, A, B;
    cin >> T;

    while(T--){
        cin >> A >> B;
        cout << (A * B) / GCD(A, B) << " " << GCD(A, B) << endl;
    }
    return 0;
}

long int GCD(long int a, long int b){
    if (b == 0)
        return a;
    return (GCD(b, a % b));
}
