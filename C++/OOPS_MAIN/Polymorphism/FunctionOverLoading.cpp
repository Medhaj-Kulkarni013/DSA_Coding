#include<iostream>
using namespace std;
class Student{
public :
    string name;
    int prn;
    double cgpa;
    // Constructor Overloading
    Student(string name, int prn, double cgpa){
        this->name = name;
        this->prn = prn;
        this->cgpa = cgpa;
    }
    Student(string name, int prn){
        this->name = name;
        this->prn = prn; 
    }
    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa; 
    }
};
// Function Overloading
double CalculateArea(int base, int height){
    return 0.5*base*height;
}
int CalculateArea(int side){
    return side*side;
}
double CalculateArea(double radius){
    return 3.14*radius*radius;
}
int main(){
    cout<<"The area of Triangle is : "<<CalculateArea(5,10)<<endl;
    cout<<"The area of Circle is : "<<CalculateArea(5.0)<<endl;
    cout<<"The area of Square is : "<<CalculateArea(9)<<endl;

    Student s1("Medhaj Kulkarni", 12211456, 8.74);
    Student s2("Prateek Buthale", 8.75);
}