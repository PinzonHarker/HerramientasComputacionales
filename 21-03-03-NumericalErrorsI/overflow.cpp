#include <iostream>

int main(void)
{
    float under = 1;
    float over = 1;
    int n = 0;

    std::cout.precision(7);
    std::cout.setf(std::ios::scientific);

    do{
        under = under / 2;
        over = over * 2;
        std::cout << under << "   ---   " << over << "\n";
        n += 1;
    }while(under != 0);

    std::cout << n;
}
