#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
    string name;
    int age;
    double height;
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;
    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    int aetAge()
    {
        return age;
    }
    double getHeight()
    {
        return height;
    }
    // เพิ่มเอาเอง
};

int main ()
{
    Student Noctis(36548, "Noctis", 20, 176);
    Student Ignis (36546, "Ignis", 22, 183);
    Student Gladious (36550, "Gladious", 23, 198);
    Student Prompto (36551, "Prompto", 20,173);

    cout << "Id : " << Noctis.getId() << endl;
    cout << "Name : " << Noctis.getName() << endl;
    cout << "age : " << Noctis.getName() << endl;
    cout << "height : " << Noctis.getName() << endl;

    cout << "Id : " << Ignis.getId() << endl;
    cout << "Name : " << Ignis.getName() << endl;
    cout << "age : " << Ignis.getName() << endl;
    cout << "height : " << Ignis.getName() << endl;

    cout << "Id : " << Gladious.getId() << endl;
    cout << "Name : " << Gladious.getName() << endl;
    cout << "age : " << Gladious.getName() << endl;
    cout << "height : " << Gladious.getName() << endl;

    cout << "Id : " << Prompto.getId() << endl;
    cout << "Name : " << Prompto.getName() << endl;
    cout << "age : " << Prompto.getName() << endl;
    cout << "height : " << Prompto.getName() << endl;
    return 0;
}
