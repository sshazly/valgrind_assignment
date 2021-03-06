#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    int sensorOutput = lightSensor.Read();
    std::cout << "Averaged sensor reading: " << sensorOutput << std::endl;
    bool terminator=true;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
