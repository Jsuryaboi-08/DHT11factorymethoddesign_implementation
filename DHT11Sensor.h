// DHT11Sensor.h
//implement the DHT11 sensor class that inherits from the Sensor base class.
#ifndef DHT11_SENSOR_H
#define DHT11_SENSOR_H

#include "Sensor.h"
#include <DHT.h>

#define DHTPIN 2  // Define the pin where the data pin is connected
#define DHTTYPE DHT11  // Define the type of DHT sensor

class DHT11Sensor : public Sensor {
private:
    DHT dht;

public:
    DHT11Sensor() : dht(DHTPIN, DHTTYPE) {}

    void begin() override {
        dht.begin();
    }

    float readTemperature() override {
        return dht.readTemperature();
    }

    float readHumidity() override {
        return dht.readHumidity();
    }
};

#endif