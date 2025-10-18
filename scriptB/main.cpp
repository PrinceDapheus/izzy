#include <iostream>
using namespace std;
#include <memory>



int main () {
    

    unique_ptr <int> up1 = make_unique <int> (100);

    cout << *up1 <<endl;

    cout << up1.get() <<endl;




    return 0;

}