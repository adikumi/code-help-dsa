#include <iostream>
using namespace std;

void goingHome(int current_location, int HOME) {

    // Base-Case
    if (current_location == HOME) {
        cout << "REACHED HOME" << endl;
        return;
    }

    // Processing
    current_location++;
    cout << "took a step. " << HOME - current_location << " steps away from home." << endl;

    // Recursive Relation
    goingHome(current_location, HOME);
    
}

int main() {
    
    // taking input
    int HOME;
    cout << "Enter Home Address : ";
    cin >> HOME;

    // Going Home
    goingHome(0, HOME);
   
    return 0;
    
}