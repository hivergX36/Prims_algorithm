#include <iostream>


void display(int& a) {
    std::cout << "Value: " << a << std::endl;
};
int main() {
    int a = 0;
    int b = 0;
    int tab[5] = {1, 2, 3, 4, 5};
    int* p = &a; 
    for (int i = 0; i < 5; i++) {
        *p += i;
        std::cout << "a: " << a  << std::endl;
        display(a);
        std::cout << "p: " << p << std::endl;
        std::cout << "&a: " << &a << std::endl;
        std::cout << "*a" << *&a << std::endl;
        std::cout << "tab[i]: " << &tab + i << std::endl;
        std::cout << "tab[i]: " << &tab[i] << std::endl;


     }
    std::cout << std::endl;
    return 0;
}