#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Product{
public :
    int price;
    string name;
    Product(string name, int price){
        this->price = price;
        this->name = name;
    }
};
bool cmp(Product a, Product b){
    return a.price < b.price; // since we r using less than operator product having lesser price will be picked
}
int main(){
    Product p1("Backpack",500);
    Product p2("Pen",50);
    Product p3("Notebook",100);
    Product p4("Eraser",10);

    vector<Product> v = {p1,p2,p3,p4};

    // sort(v.begin(),v.end()); // you cannot directly sort product!!??
    for(int i=0; i<v.size(); i++){
        cout<<v[i].name<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<v.size(); i++){
        cout<<v[i].name<<" ";
    }
    cout<<endl;
}