#include <iostream>
int main() {
    int a = 0;
    int b = 0;
    int tab[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        a += i ;
        std::cout << "a: " << a  << std::endl;
    }
    std::cout << std::endl;
    return 0;
}