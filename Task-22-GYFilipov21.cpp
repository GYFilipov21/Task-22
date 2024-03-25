#include <iostream>
using namespace std;

class Rectangle {
    float length;
    float height;
public:
    Rectangle(float l, float h) {
        length = l;
        height = h;
    }
    float perimeter() {
        return 2 * (length + height);
    }

    float area() {
        return length * height;
    }
};

int main() {
    float length;
    float height;
    cin >> length >> height;
    Rectangle rect(length, height);

    cout << "Perimeter = " << rect.perimeter() << endl;
    cout << "Area = " << rect.area() << endl;

}
