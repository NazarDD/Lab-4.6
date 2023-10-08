#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    double Result = 1, Sum = 0;
    int k = 1;
    int i = 1;

    while (k <= 20) {
        while (i <= k) {
            Sum += i * i;
            i++;
        }
        Result *= Sum / (1.0 + Sum);
        k++;
    }

    std::cout << "Result: " << Result << std::endl;

    Result = 1;
    Sum = 0;
    k = 1;
    i = 1;

    do {
        do {
            Sum += i * i;
            i++;
        } while (i <= k);

        Result *= Sum / (1.0 + Sum);
        k++;
    } while (k <= 20);

    std::cout << "Result: " << Result << std::endl;

    Result = 1;

    for (int k = 1; k <= 20; k++) {
        Sum = 0;
        for (int i = 1; i <= k; i++) {
            Sum += i * i;
        }
        Result *= Sum / (1.0 + Sum);
    }

    std::cout << "Result: " << Result << std::endl;

    Result = 1;

    for (int k = 20; k >= 1; k--) {
        Sum = 0;
        for (int i = k; i >= 1; i--) {
            Sum += i * i;
        }
        Result *= Sum / (1.0 + Sum);
    }

    std::cout << "Result: " << Result << std::endl;

    return 0;
}