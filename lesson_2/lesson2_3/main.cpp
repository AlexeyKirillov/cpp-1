#include <iostream>
#include <clocale> // setlocale

using namespace std;

int main()
{
    // Win1251 � � �������� ������ � � �������
    setlocale(LC_ALL, "Russian");

    cout << "������� ����� ����� ����� �����: ";
    int metro;
    cin >> metro;
    switch(metro){
    case 1:
        cout << "�������: ��������-����������. ����� ������ ����� �����." << endl;
        break;
    case 2:
        cout << "�����: ���������-�������������. " << endl;
        break;
    case 3:
        cout << "������: ����������������" << endl;
        break;
    case 4:
        cout << "Ƹ����: �������������" << endl;
        break;
    case 5:
        cout << "����������: �������-��������������" << endl;
        break;
    default:
        cout << "� �� ���� :) ����� ����� ��� �� ��������� � 2013 ����." << endl;
    }
    return 0;
}
