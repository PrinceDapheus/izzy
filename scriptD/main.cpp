
// create a unique pointer, with a class object
// The constructor should be able to take an argument
// run a function from the class
// tranfer the ownership of the object to another pointer



#include <iostream>
using namespace std;
#include <memory>



class dog{




    public:

    dog(string n)
    : name(n)
    {
      cout << name <<" has been spawned!" << endl;
        
    }


    ~dog () {

        cout << name << " has deactivated!"<<endl;
    }


    void bark (){

        cout << name << " is barking like crazy!"<<endl;
    }

    private:

    string name;




};





int main (){


    unique_ptr <dog> dog1 = make_unique <dog> ("skippy");

    dog1->bark();

cout << "----------" <<endl;

    unique_ptr <dog> dog2 = move(dog1);

    if(!dog1){

        cout << "Ownership of skippy has changed it is now with dog2"<<endl;



    }

cout << "----------" <<endl;

dog2 ->bark();




    return 0;

}





