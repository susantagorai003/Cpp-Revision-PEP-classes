#pragma once

#include "Chargers.h"
#include <iostream>
using namespace std;

class WiredCharger : public Chargers {
public:
    void charge() override;
};
