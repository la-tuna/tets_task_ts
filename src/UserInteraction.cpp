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
    cout << "Введите количество фигур: ";
    cin >> numShapes;

    int choice;

    for (int i = 0; i < numShapes; ++i) {
        cout << "Выберите фигуру:" << endl;
        cout << "1 - круг" << endl;
        cout << "2 - прямоугольник" << endl;
        cout << "3 - квадрат" << endl;
        cout << "4 - треугольник" << endl;

        while (!(cin >> choice)) {
            cout << "Ошибка: ввод должен быть числом" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Сделайте свой выбор снова: ";
        }

        float x, y;
        cout << "Введите координаты начала (x, y) через пробел: ";
        cin >> x >> y;

        switch (choice) {
        case 1: { // Круг
            double radius;
            cout << "Введите радиус: ";
            cin >> radius;
            shapes.push_back(new Circle(x, y, radius));
            break;
        }
        case 2: { // Прямоугольник
            double width, height;
            cout << "Введите ширину и высоту: ";
            cin >> width >> height;
            shapes.push_back(new Rectangle(x, y, width, height));
            break;
        }
        case 3: { // Квадрат (используем Rectangle)
            double a;
            cout << "Введите длину стороны: ";
            cin >> a;
            shapes.push_back(new Rectangle(x, y, a, a));
            break;
        }
        case 4: { // Треугольник
            double base, height;
            cout << "Введите основание и высоту: ";
            cin >> base >> height;
            shapes.push_back(new Triangle(x, y, base, height));
            break;
        }
        default:
            cout << "Неверный выбор!" << endl;
            --i; // Повторить выбор фигуры
        }
    }
}
