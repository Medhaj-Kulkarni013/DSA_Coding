#include<iostream>
using namespace std;
class Student{
    public:
    int prn;
    string name;
    int roll;
    string branch;

    Student(){
        // Default
    }

    Student(int prn, string name, int roll, string branch){
        this->prn = prn;
        this->name = name;
        this->roll = roll;
        this->branch = branch;
    }
};

void change(Student* s3){
    s3->name = "Yash Kate";
    s3->branch = "IT"l
    s3->prn = 12211678;
}

int main(){
    Student s1 = {12211456,"Medhaj Kulkarni",35,"CS-AiMl"};
    Student s2 = Student(12211656,"Prateek Buthale",48,"CS-AiMl");

    cout<<s1.prn<<" "<<s1.name<<" "<<s1.roll<<" "<<s1.branch<<endl;
    cout<<s2.prn<<" "<<s2.name<<" "<<s2.roll<<" "<<s2.branch<<endl;

    change(&s2);

    cout<<s1.prn<<" "<<s1.name<<" "<<s1.roll<<" "<<s1.branch<<endl;
    cout<<s2.prn<<" "<<s2.name<<" "<<s2.roll<<" "<<s2.branch<<endl;
}