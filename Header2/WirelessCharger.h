#pragma once

#include "Chargers.h"
#include <iostream>
using namespace std;

class WirelessCharger : public Chargers {
public:
    void charge() override ;
};
