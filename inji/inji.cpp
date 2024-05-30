#include <iostream>

void drawTriangle(int n) 
{
   
    for (int i = 1; i <= n; ++i) 
    {
        
        for (int j = 1; j <= i; ++j)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int height;

    std::cout << "Введите высоту треугольника: ";
    std::cin >> height;

    if (height <= 0) 
    {
        std::cout << "Высота треугольника должна быть положительным числом." << std::endl;
        return 1;
    }

    drawTriangle(height);

    return 0;
}
