#pragma once
#include "Chargers.h"

class Smartphone {
private:
    Chargers* charger;

public:
    Smartphone();
    void plugin(Chargers* other);
};
