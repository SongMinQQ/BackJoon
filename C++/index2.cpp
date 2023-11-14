#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle(int a = 0 , string b = "") : Circle(){
        this->name = b;
    };
    string getName() { return name; }
	void setName(string name) { this->name = name; }
};
int main(){
    cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;

    int setRadius;
    string setName;
    NamedCircle pizza[5];

    for(int i = 0; i < 5; i++) {
        cout << i+1 <<">> ";
        cin >> setRadius >> setName;
        pizza[i].setName(setName);
        pizza[i].setRadius(setRadius);
    }
    int max = 0, maxIndex;
    for(int i = 0; i < 5; i++){
        if (pizza[i].getArea() > max){
            max = pizza[i].getArea();
			maxIndex = i;
        }
    }
    cout << "���� ������ ū ���ڴ� " << pizza[maxIndex].getName() << "�Դϴ�" << endl;
}