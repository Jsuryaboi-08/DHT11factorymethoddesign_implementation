#include "SensorFactory.h"

Sensor* dht11Sensor;

void setup() {
    Serial.begin(9600);

    // Create the DHT11 sensor using the factory
    dht11Sensor = SensorFactory::createSensor(DHT11_SENSOR);

    // Initialize the sensor
    dht11Sensor->begin();
}

void loop() {
    // Read sensor values
    float temperature = dht11Sensor->readTemperature();
    float humidity = dht11Sensor->readHumidity();

    // Print sensor values
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" *C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    delay(2000);
}