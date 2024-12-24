#include <iostream>
using namespace std;
class abc
{
public:
    int health;
    string name;
    float age;

public:
    abc(int health, string name, float age)
    {
        this->age = age;
        this->name = name;
        this->health = health;
    }
    void showdata()
    {
        cout << "Name of the person is " << name << endl;
        cout << "Age of the person is " << age << "years" << endl;
        cout << "Health of the person is " << health << endl;
    }
};
// void change(abc &s)
// {
//     s.name="harshit";
// }
void change(abc *s)
{
    s->name = "harshit";
}
int main()
{
   // abc obj1(200, "Kartik", 19.5);
    // obj1.showdata();
    abc*obj1=new abc(200, "Kartik", 19.5);//

    cout << obj1->name << endl;
    // change(obj1); // classes is user defined data structure with pass by value either pass as pointer or pass by refrence
    // abc *ptr = &obj1;
    // change(ptr);
    // cout << obj1.name;
}