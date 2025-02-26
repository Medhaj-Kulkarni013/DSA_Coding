#include<bits/stdc++.h>
using namespace std;
class Book{
public :
    string name;
    int price;
    int pages;

    int countBooks(int price){
        if(this->price < price) return 1;
        else return 0;
    }

    bool isBook(string name){
        if(this->name==name) return true;
        else return false;
    }
};
int main(){
    Book b;
    b.name = "Harry Potter";
    b.pages = 1200;
    b.price = 800;

    cout<<b.countBooks(1000)<<endl;
    cout<<b.isBook("Game Of Thrones")<<endl;
}