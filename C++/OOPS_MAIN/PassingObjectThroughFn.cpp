#include<bits/stdc++.h>
using namespace std;
class Student{
private:
    int prn;
    string name;
    string branch;

public :
    // setters
    void setprn(int prn){
        this->prn = prn;
    }
    void setname(string name){
        this->name = name;
    }
    void setbranch(string branch){
        this->branch = branch;
    }
    // getters
    int getprn(){
        return prn;
    }
    string getname(){
        return name;
    }
    string getbranch(){
        return branch;
    }
};
bool isSameBranch(Student a, Student b){
    return a.getbranch()==b.getbranch();
}
int main(){
    Student s1;
    s1.setname("Medhaj Kulkarni");
    s1.setprn(12211456);
    s1.setbranch("CS-AiMl");

    Student s2;
    s2.setname("Prateek Buthale");
    s2.setprn(12211667);
    s2.setbranch("CS-AiMl");

    cout<<isSameBranch(s1,s2);
}