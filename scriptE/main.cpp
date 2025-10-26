#include <iostream>
using namespace std;


class Player {

    public:


    string name;
    int health;
    int Damage;


//Create player
Player (string Name , int Health){

    name = Name;

    health = Health;

    cout << name << " is created with " << health << "%" << " health " <<endl;

}

    //Attack function

    void attack (Player &target, int damage){
        Damage = damage;
        target.health -= Damage;

        cout << name << " attacks " << target.name << " with " << Damage << " hits " <<endl;

    }


    //Show players current health

    void status(){

    //Damage =  Damage;

        cout <<name <<" took " << Damage << " hits " <<"Health is now " << health <<endl;
    }


};


int main (){

    Player hero ("Hero" , 100);
    Player monster ("Monster" , 100);


    hero.attack(monster , 10);

    monster.status();




    return 0;
}
