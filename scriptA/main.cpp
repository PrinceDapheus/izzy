#include <iostream>
using namespace std;


class animal {

 public: 

  virtual void makeSound(){


    cout << "animal make sound" << endl;
  }



};


class lion : public animal{

public:

 void makeSound(){


    cout << "Lion roar!!" << endl;
  }



};


class cow: public animal{

public:

 void makeSound(){


    cout << "Cow moooo!!" << endl;
  }



};




int main (){


    animal *a1;
    animal *a2;

    lion theLion;
    cow theCow;

    a1 = &theLion;
    a2 = &theCow;


    a1->makeSound();
    a2->makeSound();



    return 0;
}