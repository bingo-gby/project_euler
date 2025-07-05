#include <iostream>

/*求小于1000的自然数中所有3或5的倍数之和。*/
int main() {
    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    std::cout << "answer: " << sum << std::endl;
    return 0;
}