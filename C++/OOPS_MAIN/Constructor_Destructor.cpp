#include<bits/stdc++.h>
using namespace std;
class Student{
private :
    int prn;
    string name;
    float cgpa;
public :
    Student (){
        // Default
    }
    Student (int prn, string name, float cgpa){
        this->prn = prn;
        this->name = name;
        this->cgpa = cgpa;
    }
    // Destructor
    ~Student(){
        cout<<"Destructor Destroyss!!!"<<endl;
    }
    // Setters are present incase constructor is not used
    void setPrn(int prn){ 
        this->prn = prn;
    } 
     void setName(string name){
        this->name = name;
    }
    void setCgpa(float cgpa){
        this->cgpa = cgpa;
    }
    int getPrn(){
        return prn;
    }
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};
int main(){
    Student s1 = Student(12211456, "Medhaj Kulkarni", 8.74); // envokes copy and parameterized both constructors
    Student s2(12211667, "Prateek Buthale", 8.75); // envokes only parameterized
    if(true){
        Student s3 = Student(12211453, "Pratham Gadkari", 9.25);
        cout<<s3.getPrn()<<" "<<s3.getName()<<" "<<s3.getCgpa()<<endl;
    }
    // Destructor will first destroy s3 as it gets out of scope before s1 and s2
    cout<<s2.getPrn()<<" "<<s2.getName()<<" "<<s2.getCgpa()<<endl;
    cout<<s1.getPrn()<<" "<<s1.getName()<<" "<<s1.getCgpa()<<endl;
}