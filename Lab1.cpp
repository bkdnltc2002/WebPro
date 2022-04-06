#include <iostream>
#include <fstream>
#include <sstream>

class Book {
public:
    std::string name ;
    int price ;
    Book* b=NULL;

    //Constructor
    Book(std::string name_val, int price_val) {
        name = name_val;
        price = price_val;
        b =new Book("And",5);
    }

    //To get the information as a string
    std::string toString() {
        std::stringstream info;
        info << "Name: " << name <<", Price: " << price;
        return info.str();
    }

    //Destructor
    ~Book(){
        std::cout << "Name: " << b->name <<", Price: " << b->price;
        delete b;
    }
};


int main() {

    // Qa
    // Init 3 bank accounts
    Book b1 ("TCB", 10);

    // Print all info
    std::cout << b1.toString() << "\n";
    
    return 0;
}