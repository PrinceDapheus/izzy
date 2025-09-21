
#include <iostream>
using namespace std;



class Animal{

public:

virtual void  makeSound (){

cout << "animal making sound!!!"<< endl;

}


};


class Lion : public Animal{

public:

void makeSound (){

cout << "lion roar!" << endl;

}


};



class Elephant : public Animal{

public:

void makeSound (){

cout << "Elephant screaming!!!"<< endl;

}



};

class Parrot : public Animal {

    public:

void makeSound (){

cout << "Parrot Talking!!!"<< endl;

}

};




int main(){



Animal *animal1;
Animal *animal2;
Animal *animal3;

Lion l;
Elephant e;
Parrot p;

animal1 = &l;
animal2 = &e;
animal3 = &p;


animal1->makeSound();
animal2->makeSound();
animal3->makeSound();








    return 0;
}