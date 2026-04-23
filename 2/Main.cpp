#include <iostream>
#include "PidGain.h"

using namespace std;

int main()
{
    PidGain pidGain(0, 0, 0);
    cout << pidGain.kp << ", " << pidGain.ki << ", " << pidGain.kd << endl;

    pidGain.setPidGain();
    cout << pidGain.kp << ", " << pidGain.ki << ", " << pidGain.kd << endl;
}