#include <iostream>
using namespace std;
class Airplane {
private:
    string type;
    int passengers;
    int maxPassengers;
public:
    Airplane(string type, int maxPassengers) : type(type), passengers(0), maxPassengers(maxPassengers) {}
    bool operator==(const Airplane& other) const {
        return this->type == other.type;
    }
    Airplane& operator++() {
        if (passengers < maxPassengers) {
            passengers++;
        }
        return *this;
    }
    Airplane& operator--() {
        if (passengers > 0) {
            passengers--;
        }
        return *this;
    }
    bool operator>(const Airplane& other) const {
        return this->maxPassengers > other.maxPassengers;
    }
    int getMaxPassengers() const {
        return maxPassengers;
    }
    int getPassengers() const {
        return passengers;
    }
};
int main() {
    Airplane plane1("Boeing 747", 400);
    Airplane plane2("Airbus A380", 550);
    Airplane plane3("Boeing 747", 450);
    if (plane1 == plane2) {
        cout << "Aircraft types plane1 and plane2 are equal" << endl;
    }
    else {
        cout << "Aircraft types plane1 and plane2 are not equal" << endl;
    }

    if (plane1 == plane3) {
        cout << "Aircraft types plane1 and plane3 are equal" << endl;
    }
    else {
        cout << "Aircraft types plane1 and plane3 are not equal" << endl;
    }
    ++plane1;
    --plane2;
    --plane2;
    cout << "Passengers in the airplane plane1: " << plane1.getPassengers() << endl;
    cout << "Passengers in the airplane plane2: " << plane2.getPassengers() << endl;
    if (plane1 > plane2) {
        cout << "Plane1 has a higher maximum number of passengers than plane2" << endl;
    }
    else {
        cout << "Plane1 has less or equal maximum number of passengers than plane2" << endl;
    }
    return 0;
}
