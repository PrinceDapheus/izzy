
// create a unique pointer, with a class object
// The constructor should be able to take an argument
// run a function from the class
// tranfer the ownership of the object to another pointer


#include <iostream>
using namespace std;
#include <memory>


class player {


    public : 

    player(string n)
    :name(n)
    
    {
    cout << "player : " << name << " has been spawned!"<<endl;


    }

    ~player (){

        cout << name << " has terminated!!!"<<endl;
    }



    void run (int speed ){

        cout<< name << " is running at " << speed << " kph" <<endl;
    }





private:

string name;


};



int main(){

// Declare pointer
    unique_ptr <player> player1 = make_unique <player> ("Billionare");

//run method
    player1->run(120);

//Transfer ownership

    unique_ptr <player> player2 = move(player1);

    if (!player1){

        cout << "Ownership has been transfered!" <<endl;

    }



//Use new pointer
    player2->run(260);







    return 0;
}





