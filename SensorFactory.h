// SensorFactory.h
#ifndef SENSOR_FACTORY_H
#define SENSOR_FACTORY_H

#include "Sensor.h"
#include "DHT11Sensor.h"

enum SensorType {
    DHT11_SENSOR
};

class SensorFactory {
public:
    static Sensor* createSensor(SensorType type) {
        switch (type) {
            case DHT11_SENSOR:
                return new DHT11Sensor();
            default:
                return nullptr;
        }
    }
};

#endif