#include <iostream>

using namespace std;

int i = 0; // ���������� ����������

int m(int a, int b){
}

double m(double a, double b){
}

int openWindow(){
    static int totalWindows = 0;
    totalWindows++;
    cout << "Open window #" << totalWindows << endl;
}

const int incSize = 10000;

int f(){
    static int calls = 0;
    calls++;
    cout << "calls = " << calls << endl;
    int inStack[incSize];
    f();
}

int bigArray[100000000];

int main()
{
    cout << 51 * 10000 * sizeof(int) << endl;

    openWindow();
    openWindow();
    openWindow();

    for(int i=0; i < 100000000; ++i)
        bigArray[i] = i;

    int anyName[100]; // �������� ������ � �����

    int *intPtr;

    cout << sizeof(intPtr) << endl;

    // ������� � ������������ ������ ������ �� 100 ���������
    // � ����� int
    intPtr = new int[100];

    // �������
    delete[] intPtr;

    intPtr = (new int[100]) + 2;
    // *(intPtr + 19*sizeof(int));
    intPtr = new int[100];

    return 0;
}
