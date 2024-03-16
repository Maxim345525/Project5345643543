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
        cout << "Радіуси кіл circle1 та circle2 рівні" << endl;
    }
    else {
        cout << "Радіуси кіл circle1 та circle2 не рівні" << endl;
    }
    if (circle1 == circle3) {
        cout << "Радіуси кіл circle1 та circle3 рівні" << endl;
    }
    else {
        cout << "Радіуси кіл circle1 та circle3 не рівні" << endl;
    }
    if (circle1 > circle2) {
        cout << "Коло circle1 має більший радіус ніж коло circle2" << endl;
    }
    else {
        cout << "Коло circle1 має менший або рівний радіус ніж коло circle2" << endl;
    }
    circle1 += 2.0;
    cout << "Новий радіус кола circle1: " << circle1.getRadius() << endl;
    circle2 -= 1.0;
    cout << "Новий радіус кола circle2: " << circle2.getRadius() << endl;
    return 0;
}