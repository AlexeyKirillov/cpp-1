// Домашнее задание - структуры данных
#include <iostream>
#include <math.h>

using namespace std;

struct Point {
  double x,y;
};

double sqr(double x){
  return x*x;
}

double dist(Point a, Point b){
  return
    sqrt(sqr(a.x-b.x) +
         sqr(a.y-b.y));
}

typedef Point Vector;

// Сумма
Point sum(Vector A, Vector B){
  // TODO: Реализовать
}

// Разность
Point sub(Vector A, Vector B){
  // TODO: Реализовать
}

// Скалярное произведение векторов
Point dotProduct(Vector A, Vector B){
  // TODO: Реализовать
}

int main()
{
    Point a = {1.2, 1.3},
          b = {10.2, 3.3};
    cout << dist(a,b) << endl;
    return 0;
}
