#include <iostream>

using namespace std;

void solve_equation(double a, double b, double c){
   // TODO: реализовать
}

int main() {
    // Коэффициенты квадратного уравнения
    double a, b, c;
    // a*x^2 + b*x + c = 0
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << endl;

    // Вызов функции решения квадратного уравнения
    solve_equation(a,b,c);

    return 0;
}
