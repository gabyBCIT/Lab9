#include <iostream>
#include <vector>
#include <set>
#include <deque>
#include <map>
#include <random>

using namespace std;

int main() {
    const int rands = 20;
    default_random_engine generator(time(0));
    uniform_real_distribution<double> distribution(0.00, 1000.00);

    vector<double> vex;

    // Creates random doubles
    for (int i = 0; i < rands; i++ ) {
        vex.push_back(distribution(generator));
        cout << vex[i] << "\t";
    }
    cout << "\n";

    // Shows iterator adding to itself
    for(vector<double>::iterator rato = vex.begin(); rato != vex.end(); rato++){
        cout << *rato + *rato << "\t";
    }
    return 0;
}

