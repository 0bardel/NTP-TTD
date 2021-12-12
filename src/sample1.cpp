#include "sample1.h"

bool IsPrime(int n) {
    bool result{true};

    if(n <= 1)  result = false;

    if(n%2 == 0 && n!=2) result = false;

    for(int i{3}; i*i<=n; i+=2) {
        if(n%i == 0) {
            result = false;
            break;
        }
    }

    return result;
}
