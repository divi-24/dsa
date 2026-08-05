#include<iostream>
using namespace std;

//class creation
class Student {
    public:
        //properties / data members
        int age;
        int weight;
        int height;
        string name;

        //Constructor
        Student() {
            cout << "I am inside no param constructor" << endl;
            this->age = 0;
            this->weight = 3;
            this->height = 45;
            this->name = "dummy";
        }
        
        //parameterised constructor
        Student(int myAge, int myWeight, int myHeight, string myName):age(myAge), weight(myWeight), height(myHeight), name(myName) {
            cout << "I am inside param constructor" << endl;
        }

        //behaviours / member functions
        void running() {
            cout << "I am Running" << endl;
        }
        void studying() {
            cout << name << " is studying" << endl;
        }

        ~Student() {
            cout << "I am inside destructor " << endl;
        }
};

int main() {
    //cout << sizeof(Student) << endl;

    //Object Creation
    //static way
    // Student s1;
    // s1.age = 50;
    // s1.name = "babbar";
    // s1.weight = 50;
    // s1.height  = 180;

    // s1.running();

    //dynamic way
    // Student* s = new Student();
    // //(*s).age = 10;
    // s->age = 10;
    // (*s).weight = 60;
    // (*s).height = 190;
    // s->name = "Love babbar";
    // (*s).running();
    // s->studying();

    // Student a;
    // Student* b = new Student;
    // Student* c = new Student();


    // Student x;
    // Student y(10,40,90,"love");

    // Student* s = new Student(10,20,30,"kunal");

    // cout << s->age << endl;
    // cout << s->weight << endl;
    // cout << s->height << endl;
    // cout << s->name << endl;


    Student *s = new Student();
    
    delete s;

    return 0;
}