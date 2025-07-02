#include<iostream>
using namespace std;
class Student{
private :
    string name;
    double* cgpa; // this a pointer data member (DMA) so we need a deep copy constructor which is not present
public :
    Student(){
        // default Constructor
    }
    // Constructor
    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = new double(cgpa);
    }
    // Copy Constructor NOT NEEDED as this will be a default 
    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa; // only adress copied so normal shallow copy
    }
    // getters and setters
    void setName(string name){
        this->name = name;
    }
    void setCgpa(double cgpa){
        this->cgpa = new double(cgpa);
    }
    string getName(){
        return this->name;
    }
    double getCgpa(){
        return *cgpa;
    }
};
class Student2{
private : 
    string name;
    double* cgpa;
publci :
    Student
};
int main(){
    // Student s1 = Student("Medhaj Kulkarni", 8.74); this declaration actually envokes parameterized and 
    // copy both constructors so if you do this make sure your copy has 'const'. 
    Student s1("Medhaj Kulkarni", 8.74);
    Student s2(s1); // default copy constructor called which creates a shallow copy
    // doesn't matter if you do this Student s2 = s1; or Student s2; then s2 = s1
    // or this Student s2(s1) all will create a shallow copy
    s2.setName("Shailaj Kulkarni");
    cout<<s1.getName()<<" "<<s1.getCgpa()<<endl;
    cout<<s2.getName()<<" "<<s2.getCgpa()<<endl;
    s2.setCgpa(9.55);
    cout<<s2.getName()<<" "<<s2.getCgpa()<<endl;
    cout<<s2.getName()<<" "<<s2.getCgpa()<<endl;
}