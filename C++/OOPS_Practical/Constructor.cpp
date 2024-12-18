#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    int roll;
    string name;
    string branch;
    Student(){
     //Default Constructor   
    }
    Student(string x, string y, int z){// multiple such constructors are allowed
        name = x;
        branch = y;
        roll = z;
    }
};
int main(){
    Student s1 = Student("Medhaj Kulkarni", "CS-AiMl", 35); // initialization using constructor

    Student s2 = {"Shailaj Kulkarni", "CS-AiMl", 34}; // this is also a contructor call 
    // but now the order should be according to the constructor coded.

    Student s3; // now default constructor is needed for this initialization because 
    s3.name = "Prateek"; // actual constructor is present this time
    s3.branch = "CS-AiMl";
    s3.roll = 48;

}