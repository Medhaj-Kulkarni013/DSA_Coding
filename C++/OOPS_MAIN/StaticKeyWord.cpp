#include<iostream>
using namespace std;
class Student{
private :
    string name;
    int prn;
    float cgpa;
    static int numOfStudents; // now this data member belongs to the class itself
public :
    Student(){
        // Default
    }
    Student(string name, int prn, float cgpa){
        this->name = name;
        this->prn = prn;
        this->cgpa = cgpa;
    }
    // getters
    string getName(){
        return this->name;
    }
    int getPrn(){
        return this->prn;
    }
    float getCgpa(){
        return this->cgpa;
    }
    static int getnumOfStudnets(){
        return numOfStudents;
    }
    static void incrementStudents(){
        numOfStudents++;
    }
};
int Student::numOfStudents = 0; // intialized using scope resolution operator
// static variable can be intialized only globally like this
int main(){
    Student s1("Medhaj Kulkarni", 12211456, 8.74);
    Student s2("Prateek Buthale", 12211667, 8.75);
    cout<<s1.getnumOfStudnets()<<endl;
    cout<<s2.getnumOfStudnets()<<endl;
    s1.incrementStudents();
    Student::incrementStudents();
    cout<<s1.getnumOfStudnets()<<endl;
    cout<<s2.getnumOfStudnets()<<endl;
}