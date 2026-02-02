#include "Smartphone.h"
#include "WiredCharger.h"
#include "WirelessCharger.h"

int main() {

    WiredCharger wired;
    WirelessCharger wireless;

    Smartphone samsung;

    samsung.plugin(&wired);
    samsung.plugin(&wireless);

    return 0;
}
