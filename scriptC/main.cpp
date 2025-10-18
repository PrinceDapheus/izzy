#include <iostream>
using namespace std;
#include <memory>



class robot {

    public:

    robot (){

        cout << "robot has spawned!" <<endl;
    }
    ~robot (){

        cout << "robot killed!" <<endl;
    }

    void robotMove (){

        cout << " robot is moving " <<endl;
    }

    
};


int main(){

    


    unique_ptr <robot> rup1 = make_unique <robot> ();


    rup1->robotMove();


    return 0;
}

