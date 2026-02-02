#include "Smartphone.h"
#include <iostream>
using namespace std;

Smartphone::Smartphone() : charger(nullptr) {}

void Smartphone::plugin(Chargers* other) {
    charger = other;

    if (!charger) {
        cout << "Connect your charger" << endl;
    } else {
        charger->charge();
    }
}
