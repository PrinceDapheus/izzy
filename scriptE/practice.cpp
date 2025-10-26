//Build a program using unique pointers to: 
//create a several players with the ability to attack one another
//The attacked player should loose health, while the attacing player gains score



#include <iostream>

using namespace std;

#include <memory>


class Player {


    public:
        string name;
        int health;
        int damage;
        int score;


        Player (string Name , int Health)
        
        
        
        {

            name = Name;
            health = Health;

            cout << Name << " has entered the game with " << health << " health." <<endl;



        }



       void  attack ( Player &target , int Damage ){
        
            target.damage = Damage;
            target.health -= Damage;


            cout << name << " has attacked " << target.name << " by " <<target.damage << " hits." <<endl;

        }


        
        void status (){

            //health = target.health;

            cout << name << " has " << health << " health. "<<endl;
        }


        // ~Player (){


        //     cout << name << " has terminated!" <<endl;
        // }






};


int main(){


// Create players

    //unique_ptr<Player> ninja = make_unique<Player>("Ninja", 100);

   // unique_ptr<Player> monster = make_unique<Player>("Monster", 100);

Player ninja("Ninja", 100);
Player monster("Monster", 100);


// Run methods

   ninja.attack(monster,33);

   monster.status();




    return 0;
}
