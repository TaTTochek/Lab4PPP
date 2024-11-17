#include <iostream>
#include "Class.h"
#include "Function.h"

using namespace std;

int main() {
    system("chcp 1251");
    system("cls");
    Airport Y;

    string test, wntd;
    float Tcost, Tdiscont;

    do {
        cout << "������ �������:\n"
            << "1 - �������� ����� � ������������� �������\n"
            << "2 - �������� ����� ��� ������������� �������\n"
            << "3 - ������� ������ �������\n"
            << "4 - ������� ����� � ������������ ����������\n"
            << "5 - ��������� ������\n"
            << "������� ��������: ";
        cin >> wntd;
        cout << "\n";

        if (wntd == "1") {
            try {
                cout << "������� ��������� ������" << endl;
                inputFloat(Tcost);
                cout << "������� ������������� ������" << endl;
                inputFloat(Tdiscont);
                cout << "������� �������� �����������" << endl;
                cin >> test;
                cin.get();
            }
            catch (int code) {
                if (code == -1) cout << "�������� �� ������ � �������� [0; 100000]" << endl;
                else if (code == -2) cout << "�������� �����������" << endl;
                continue;
            }
            if (Tcost < Tdiscont) {
                cout << "������ �� ����� ���� ������ ���������" << endl;
                continue;
            }
            Y.addTarif(new DiscontTariff(Tcost, test, Tdiscont));
        }
        else if (wntd == "2") {
            try {
                cout << "������� ��������� ������" << endl;
                inputFloat(Tcost);
                cout << "������� �������� �����������" << endl;
                cin >> test;
                cin.get();
            }
            catch (int code) {
                if (code == -1) cout << "�������� �� ������ � �������� [0; 100000]" << endl;
                else if (code == -2) cout << "�������� �����������" << endl;
                continue;
            }
            Y.addTarif(new ClassicTariff(Tcost, test));
        }
        else if (wntd == "3") {
            Y.ShowTariff();
        }
        else if (wntd == "4") {
            Y.GetMaxTariff();
        }
    } while (wntd != "5");

    cout << "\n\n\n\t������� �� ��������\n\n\n";
    return 0;
}
