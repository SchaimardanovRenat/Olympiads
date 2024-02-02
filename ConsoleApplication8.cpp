#include <iostream>
#include <locale>
using namespace std;

double calculateRingArea(double out_Radius, double innerRadius) {
    double ringArea = 3.14159 * (out_Radius * out_Radius - innerRadius * innerRadius);
    return ringArea;
}

int main() {
    setlocale(LC_ALL, "Russian"); 
    double out_Radius, innerRadius;
    cout << "Введите внешний радиус: ";
    cin >> out_Radius;
    cout << "Введите внутренний радиус: ";
    cin >> innerRadius;

    double ringArea = calculateRingArea(out_Radius, innerRadius); 
    cout << "Площадь кольца: " << ringArea << endl;

    return 0;
}
