///////////////////////////////////////////////////////////////////////////
//  CONFIGURATION - HARDWARE
///////////////////////////////////////////////////////////////////////////
// Door sensor
#define DOOR_SENSOR                     D3
#if defined(DOOR_SENSOR)
#define DOOR_SENSOR_NAME                "door" // used for the MQTT topic
#endif

// Motion sensor
//   - AM312
//   - RCWL 0516
#define MOTION_SENSOR
#if defined(MOTION_SENSOR)
#define MOTION_SENSOR_NAME                 "motion"
#define MOTION_SENSOR_PIN                  D7
#endif

// Ambient light sensor
//   - Photoresistor
//   - TEMT6000 sensor
// Do not add a 10 kOhms resistor if you're using the TEMT6000
// sensor (already present on the PCB)
//#define LDR_SENSOR   
#define LDR_SENSOR
#if defined(LDR_SENSOR)
#define LDR_SENSOR_NAME                 "lux"
#define LDR_OFFSET_VALUE                25
#define LDR_MEASURE_INTERVAL            15000   // [ms]
#define REFERENCE_VOLTAGE               3.3     // [v]
#define ADC_PRECISION                   1024.0  // 10 bits
#define LDR_RESISTOR_VALUE              10000.0  // [Ohms]
#define LDR_PIN                         A0
#endif

// Temperature and humidity sensor (DHT22)
//#define DHT_SENSOR
#if defined(DHT_SENSOR)
#define DHT_TEMPERATURE_SENSOR_NAME     "temperature"
#define DHT_HUMIDITY_SENSOR_NAME        "humidity"
#define DHT_TEMPERATURE_OFFSET_VALUE    0.2   // [°C]
#define DHT_HUMIDITY_OFFSET_VALUE       0.5   // [%]
#define DHT_MEASURE_INTERVAL            30000 // [ms]
#define DHT_PIN                         D2
#endif

// Temperature and humidity sensor (Sensirion SHT3X)
#define SHT_SENSOR
#if defined(SHT_SENSOR)
#define SHT_TEMPERATURE_SENSOR_NAME   "temperature"
#define SHT_HUMIDITY_SENSOR_NAME      "humidity"
#define SHT_TEMPERATURE_OFFSET_VALUE  0.2   // [°C]
#define SHT_HUMIDITY_OFFSET_VALUE     0.5   // [%]
#define SHT_MEASURE_INTERVAL          30000 // [ms]
#define SHT_SDA_PIN                   D3
#define SHT_SCL_PIN                   D2
#endif

// Button
#define BUTTON_SENSOR                   D1
#if defined(BUTTON_SENSOR)
#define BUTTON_SENSOR_NAME              "button"
#endif


///////////////////////////////////////////////////////////////////////////
//  CONFIGURATION - SOFTWARE
///////////////////////////////////////////////////////////////////////////
// Debug output
#define DEBUG_SERIAL

// Wi-Fi credentials
#define WIFI_SSID     ""
#define WIFI_PASSWORD ""

// Over-the-Air update
#define OTA
#define OTA_HOSTNAME  "MultiSensor"  // hostname esp8266-[ChipID] by default
//#define OTA_PASSWORD  "password"  // no password by default
//#define OTA_PORT      8266        // port 8266 by default

// MQTT
#define MQTT_USERNAME     ""
#define MQTT_PASSWORD     ""
#define MQTT_SERVER       ""
#define MQTT_SERVER_PORT  1883

#define MQTT_CONNECTION_TIMEOUT 5000 // [ms]

#define MQTT_AVAILABILITY_TOPIC_TEMPLATE  "%s/status" // MQTT availability: online/offline
#define MQTT_SENSOR_TOPIC_TEMPLATE        "%s/sensor/%s"

#define MQTT_PAYLOAD_ON   "ON"
#define MQTT_PAYLOAD_OFF  "OFF"
