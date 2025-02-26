#include<bits/stdc++.h>
using namespace std;
class Student{
private:
    int prn;
    string name;
    float cgpa;
public:
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
   Student students[4];
   students[0].setPrn(12211456);
   students[0].setName("Medhaj Kulkarni");
   students[0].setCgpa(8.74);

   students[1].setPrn(12211667);
   students[1].setName("Prateek Buthale");
   students[1].setCgpa(8.75);

   students[2].setPrn(12211643);
   students[2].setName("Yash Kate");
   students[2].setCgpa(8.48);

   students[3].setPrn(12211453);
   students[3].setName("Pratham Gadkari");
   students[3].setCgpa(9.25);

   for(int i=0; i<4; i++){
        cout<<students[i].getPrn()<<" "<<students[i].getName()<<" "<<students[i].getCgpa()<<endl;
   }
}