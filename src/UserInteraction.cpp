#include "UserInteraction.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
#include <limits>

using namespace std;

UserInteraction::UserInteraction() {}

void UserInteraction::getUserInput(std::vector<Shape*>& shapes) {
    int numShapes;
    cout << "������� ���������� �����: ";
    cin >> numShapes;

    int choice;

    for (int i = 0; i < numShapes; ++i) {
        cout << "�������� ������:" << endl;
        cout << "1 - ����" << endl;
        cout << "2 - �������������" << endl;
        cout << "3 - �������" << endl;
        cout << "4 - �����������" << endl;

        while (!(cin >> choice)) {
            cout << "������: ���� ������ ���� ������" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "�������� ���� ����� �����: ";
        }

        float x, y;
        cout << "������� ���������� ������ (x, y) ����� ������: ";
        cin >> x >> y;

        switch (choice) {
        case 1: { // ����
            double radius;
            cout << "������� ������: ";
            cin >> radius;
            shapes.push_back(new Circle(x, y, radius));
            break;
        }
        case 2: { // �������������
            double width, height;
            cout << "������� ������ � ������: ";
            cin >> width >> height;
            shapes.push_back(new Rectangle(x, y, width, height));
            break;
        }
        case 3: { // ������� (���������� Rectangle)
            double a;
            cout << "������� ����� �������: ";
            cin >> a;
            shapes.push_back(new Rectangle(x, y, a, a));
            break;
        }
        case 4: { // �����������
            double base, height;
            cout << "������� ��������� � ������: ";
            cin >> base >> height;
            shapes.push_back(new Triangle(x, y, base, height));
            break;
        }
        default:
            cout << "�������� �����!" << endl;
            --i; // ��������� ����� ������
        }
    }
}
