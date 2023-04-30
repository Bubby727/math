#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(0));
   
    int varb1 = rand() % 100;
    int varb2 = rand() % 100;
    int answer = 0;
    
    bool bob = 1;

    while (bob == 1)
    {
        cout << endl << endl << "What is " << varb1 << " plus " << varb2 << "?" << endl << endl << endl;
        cin >> answer;

        if (varb1 + varb2 == answer)
        {
            cout << "You're correct!" << endl << endl << endl << endl;
        }
        else
        {
            cout << "You're wrong, lmao." << endl << endl << endl << endl;
        }

        cout << "Do you wish to continue with another problem?" << endl << endl << "Type 1 to continue" << endl << endl << "Type 0 to stop" << endl;
        cin >> bob;

        varb1 = rand() % 100;
        varb2 = rand() % 100;
    }

    return 0;
}



// while(something is true)
// {
//     do this
//     do that
// }