#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    // all the data members
    int roll;
    string name;
    float sgpa, cgpa;

    Student(){
        // Default Constructor
    }

    Student(int roll, string name, float sgpa, float cgpa){
        this->roll = roll;
        this->name = name;
        this->sgpa = sgpa;
        this->cgpa = cgpa;
    }
    void set(int prn){
        this->prn = prn;
    }
    int get(){
        return prn;
    }
private:
    int prn;
};

void change(Student* s){
    (*s).roll = 22;
    (*s).name = "Pratham Gadkari";
    s->sgpa = 9.75;
    s->cgpa = 9.25;
    s->set(12211453);
}

int main(){
    Student s1 = Student(30, "Yash Kate", 9.33, 8.48);
    Student s2 = {35, "Medhaj Kulkarni", 9.5, 8.74};
    Student s3;
    s3.roll = 48;
    s3.name = "Prateek Buthale";
    s3.sgpa = 9.54;
    s3.cgpa = 8.75;

    s1.set(12211564);
    s2.set(12211456);
    s3.set(12211595);

    cout<<s1.get()<<" "<<s1.roll<<" "<<s1.name<<" "<<s1.sgpa<<" "<<s1.cgpa<<endl;
    cout<<s2.get()<<" "<<s2.roll<<" "<<s2.name<<" "<<s2.sgpa<<" "<<s2.cgpa<<endl;
    cout<<s3.get()<<" "<<s3.roll<<" "<<s3.name<<" "<<s3.sgpa<<" "<<s3.cgpa<<endl;

    change(&s3);
    cout<<endl;

    cout<<s1.get()<<" "<<s1.roll<<" "<<s1.name<<" "<<s1.sgpa<<" "<<s1.cgpa<<endl;
    cout<<s2.get()<<" "<<s2.roll<<" "<<s2.name<<" "<<s2.sgpa<<" "<<s2.cgpa<<endl;
    cout<<s3.get()<<" "<<s3.roll<<" "<<s3.name<<" "<<s3.sgpa<<" "<<s3.cgpa<<endl;

}