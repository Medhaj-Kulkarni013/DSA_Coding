#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student{
    public:
        string name;
        string branch;
        int roll;
        float cgpa;
};
int main(){
    //objects or instances
    Student s1; //Declaration
    s1.branch = "CS-AIML";
    s1.cgpa = 8.54;
    s1.roll = 35;

    cout<<"Enter the name of the student : ";
    getline(cin,s1.name);
    cout<<s1.roll<<" "<<s1.name<<" "<<s1.branch<<" "<<s1.cgpa<<endl;

    //Only C++ exclusive : Compiler creates a constructor on its own for
    // such type of intialization as well
    Student s2 = {"Prateek Buthale","CS-AIML",48,8.55};
    cout<<s2.roll<<" "<<s2.name<<" "<<s2.branch<<" "<<s2.cgpa;
    
}