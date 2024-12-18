#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    string branch;
    int roll;

    Student(){
        //Default
    }

    Student(string name, string branch, int roll, int prn){
        // to avoid confusion betn attributes of the class and parameters of the
        // constructor "this" keyword is used
        this->name = name;
        this->branch = branch;
        this->roll = roll;
        this->prn = prn;
    }

    void set(int prn){
        this->prn = prn;
    }

    int get(){
        return prn;
    }

private:
    int prn; // private keyword can be accessed only through getters and setters
    // can also be set through constructor
};
int main(){
    Student s1 = Student("Medhaj Kulkarni", "CS-AiMl", 35, 12211456);
    Student s2;
    s2.name = "Yash Kate";
    s2.branch = "CS-AiMl";
    s2.roll = 30;

    s2.set(12211340);

    cout<<s1.get()<<" "<<s1.roll<<" "<<s1.name<<" "<<s1.branch<<endl;
    cout<<s2.get()<<" "<<s2.roll<<" "<<s2.name<<" "<<s2.branch<<endl; 
}