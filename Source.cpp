#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double radius) : radius(radius) {}
    bool operator==(const Circle& other) const {
        return this->radius == other.radius;
    }
    bool operator>(const Circle& other) const {
        return this->radius > other.radius;
    }
    Circle& operator+=(double value) {
        this->radius += value;
        return *this;
    }
    Circle& operator-=(double value) {
        this->radius -= value;
        return *this;
    }
    double getRadius() const {
        return radius;
    }
};
int main() {
    Circle circle1(5.0);
    Circle circle2(7.0);
    Circle circle3(5.0);
    if (circle1 == circle2) {
        cout << "������ �� circle1 �� circle2 ���" << endl;
    }
    else {
        cout << "������ �� circle1 �� circle2 �� ���" << endl;
    }
    if (circle1 == circle3) {
        cout << "������ �� circle1 �� circle3 ���" << endl;
    }
    else {
        cout << "������ �� circle1 �� circle3 �� ���" << endl;
    }
    if (circle1 > circle2) {
        cout << "���� circle1 �� ������ ����� �� ���� circle2" << endl;
    }
    else {
        cout << "���� circle1 �� ������ ��� ����� ����� �� ���� circle2" << endl;
    }
    circle1 += 2.0;
    cout << "����� ����� ���� circle1: " << circle1.getRadius() << endl;
    circle2 -= 1.0;
    cout << "����� ����� ���� circle2: " << circle2.getRadius() << endl;
    return 0;
}