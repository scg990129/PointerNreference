#include <iostream>

int main() {
    int currentValue = 10;

    int *ptr = &currentValue;
    int &ref = currentValue;

    printf("currentValue: %d %d %d\n", currentValue, *ptr, ref);

    *ptr = 20;
    printf("currentValue: %d %d %d\n", currentValue, *ptr, ref);

    ref = 30;
    printf("currentValue: %d %d %d\n", currentValue, *ptr, ref);

    currentValue = 40;
    printf("currentValue: %d %d %d\n", currentValue, *ptr, ref);

    int currentValue2 = 50;
    ptr = &currentValue2;
    printf("currentValue2: %d\ncurrentValue: %d, %d %d\n",currentValue2, currentValue, *ptr, ref);
    // &ref = &currentValue2; // Expression is not assignable

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
