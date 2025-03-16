#include<iostream>
using namespace std;
class Student{
private :
    string name;
    int prn;
    float cgpa;
public :
    // intialization list, const data members can be intialized using this list
    Student(string n, int p, float c) : name(n), prn(p), cgpa(c){}
    //getters
    string getName(){
        return this->name;
    }
    int getPrn(){
        return this->prn;
    }
    float getCgpa(){
        return this->cgpa;
    } 
}; 
int main(){
    Student s1 = Student("Medhaj Kulkarni", 12211456, 8.74);
    Student s2("Prateek Buthale", 12211667, 8.75);
    cout<<s1.getName()<<" "<<s1.getPrn()<<" "<<s1.getCgpa()<<endl;
    cout<<s2.getName()<<" "<<s2.getPrn()<<" "<<s2.getCgpa()<<endl;
}