#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#ifdef CODE_IMAGE_STR
  #undef CODE_IMAGE_STR
#endif
#define CODE_IMAGE_STR "TasmoCompiler-esp8266generic"

#ifdef STA_SSID1
  #undef STA_SSID1
#endif
#define STA_SSID1	"lenovo"

#ifdef STA_PASS1
  #undef STA_PASS1
#endif
#define STA_PASS1	"???"

#ifdef WIFI_IP_ADDRESS
  #undef WIFI_IP_ADDRESS
#endif
#define WIFI_IP_ADDRESS	"192.168.1.212"

#ifdef WIFI_SUBNETMASK
  #undef WIFI_SUBNETMASK
#endif
#define WIFI_SUBNETMASK	"255.255.255.0"

#ifdef WIFI_GATEWAY
  #undef WIFI_GATEWAY
#endif
#define WIFI_GATEWAY	"192.168.1.1"

#ifdef WIFI_DNS
  #undef WIFI_DNS
#endif
#define WIFI_DNS	"192.168.1.1"

#ifdef USE_ENERGY_SENSOR
  #undef USE_ENERGY_SENSOR
#endif
#define USE_ENERGY_SENSOR

#ifdef USE_MHZ19
  #undef USE_MHZ19
#endif

#ifdef USE_SENSEAIR
  #undef USE_SENSEAIR
#endif

#ifdef USE_PMS5003
  #undef USE_PMS5003
#endif

#ifdef USE_MGS
  #undef USE_MGS
#endif

#ifdef USE_NOVA_SDS
  #undef USE_NOVA_SDS
#endif

#ifdef USE_SGP30
  #undef USE_SGP30
#endif

#ifdef USE_CCS811
  #undef USE_CCS811
#endif

#ifdef USE_SCD30
  #undef USE_SCD30
#endif

#ifdef USE_SPS30
  #undef USE_SPS30
#endif

#ifdef USE_HPMA
  #undef USE_HPMA
#endif

#ifdef USE_IAQ
  #undef USE_IAQ
#endif

#ifdef USE_EMULATION
  #undef USE_EMULATION
#endif

#ifdef USE_EMULATION_HUE
  #undef USE_EMULATION_HUE
#endif

#ifdef USE_EMULATION_WEMO
  #undef USE_EMULATION_WEMO
#endif

#ifdef USE_TASMOTA_CLIENT
  #undef USE_TASMOTA_CLIENT
#endif

#ifdef USE_ADC_VCC
  #undef USE_ADC_VCC
#endif

#ifdef USE_DISPLAY
  #undef USE_DISPLAY
#endif

#ifdef USE_DISPLAY_MODES1TO5
  #undef USE_DISPLAY_MODES1TO5
#endif

#ifdef USE_DISPLAY_LCD
  #undef USE_DISPLAY_LCD
#endif

#ifdef USE_DISPLAY_SSD1306
  #undef USE_DISPLAY_SSD1306
#endif

#ifdef USE_DISPLAY_MATRIX
  #undef USE_DISPLAY_MATRIX
#endif

#ifdef USE_DISPLAY_ILI9341
  #undef USE_DISPLAY_ILI9341
#endif

#ifdef USE_DISPLAY_EPAPER_29
  #undef USE_DISPLAY_EPAPER_29
#endif

#ifdef USE_DISPLAY_EPAPER_42
  #undef USE_DISPLAY_EPAPER_42
#endif

#ifdef USE_DISPLAY_SH1106
  #undef USE_DISPLAY_SH1106
#endif

#ifdef USE_DISPLAY_ILI9488
  #undef USE_DISPLAY_ILI9488
#endif

#ifdef USE_DISPLAY_SSD1351
  #undef USE_DISPLAY_SSD1351
#endif

#ifdef USE_DISPLAY_RA8876
  #undef USE_DISPLAY_RA8876
#endif

#ifdef USE_DISPLAY_SEVENSEG
  #undef USE_DISPLAY_SEVENSEG
#endif

#ifdef USE_DISPLAY_ST7789
  #undef USE_DISPLAY_ST7789
#endif

#ifdef USE_DISPLAY_SSD1331
  #undef USE_DISPLAY_SSD1331
#endif

#ifdef USE_SR04
  #undef USE_SR04
#endif

#ifdef USE_VL53L0X
  #undef USE_VL53L0X
#endif

#ifdef USE_HRXL
  #undef USE_HRXL
#endif

#ifdef USE_DYP
  #undef USE_DYP
#endif

#ifdef USE_VL53L1X
  #undef USE_VL53L1X
#endif

#ifdef USE_DOMOTICZ
  #undef USE_DOMOTICZ
#endif

#ifdef USE_HLW8012
  #undef USE_HLW8012
#endif
#define USE_HLW8012

#ifdef USE_CSE7766
  #undef USE_CSE7766
#endif
#define USE_CSE7766

#ifdef USE_PZEM004T
  #undef USE_PZEM004T
#endif
#define USE_PZEM004T

#ifdef USE_MCP39F501
  #undef USE_MCP39F501
#endif
#define USE_MCP39F501

#ifdef USE_PZEM_AC
  #undef USE_PZEM_AC
#endif
#define USE_PZEM_AC

#ifdef USE_PZEM_DC
  #undef USE_PZEM_DC
#endif
#define USE_PZEM_DC

#ifdef USE_ADE7953
  #undef USE_ADE7953
#endif
#define USE_ADE7953

#ifdef USE_SDM120
  #undef USE_SDM120
#endif
#define USE_SDM120

#ifdef USE_DDS2382
  #undef USE_DDS2382
#endif
#define USE_DDS2382

#ifdef USE_SDM630
  #undef USE_SDM630
#endif
#define USE_SDM630

#ifdef USE_DDSU666
  #undef USE_DDSU666
#endif
#define USE_DDSU666

#ifdef USE_SOLAX_X1
  #undef USE_SOLAX_X1
#endif
#define USE_SOLAX_X1

#ifdef USE_LE01MR
  #undef USE_LE01MR
#endif
#define USE_LE01MR

#ifdef USE_BL0940
  #undef USE_BL0940
#endif
#define USE_BL0940

#ifdef USE_TELEINFO
  #undef USE_TELEINFO
#endif
#define USE_TELEINFO

#ifdef USE_IEM3000
  #undef USE_IEM3000
#endif
#define USE_IEM3000

#ifdef USE_WE517
  #undef USE_WE517
#endif
#define USE_WE517

#ifdef USE_ENERGY_DUMMY
  #undef USE_ENERGY_DUMMY
#endif
#define USE_ENERGY_DUMMY

#ifdef USE_HOME_ASSISTANT
  #undef USE_HOME_ASSISTANT
#endif

#ifdef USE_I2C
  #undef USE_I2C
#endif
#define USE_I2C

#ifdef USE_MCP230xx
  #undef USE_MCP230xx
#endif

#ifdef USE_MCP230xx_OUTPUT
  #undef USE_MCP230xx_OUTPUT
#endif

#ifdef USE_MCP230xx_DISPLAYOUTPUT
  #undef USE_MCP230xx_DISPLAYOUTPUT
#endif

#ifdef USE_IR_REMOTE
  #undef USE_IR_REMOTE
#endif

#ifdef USE_IR_REMOTE_FULL
  #undef USE_IR_REMOTE_FULL
#endif

#ifdef USE_KNX
  #undef USE_KNX
#endif

#ifdef USE_BH1750
  #undef USE_BH1750
#endif

#ifdef USE_VEML6070
  #undef USE_VEML6070
#endif

#ifdef USE_TSL2561
  #undef USE_TSL2561
#endif

#ifdef USE_SI1145
  #undef USE_SI1145
#endif

#ifdef USE_APDS9960
  #undef USE_APDS9960
#endif

#ifdef USE_VEML6075
  #undef USE_VEML6075
#endif

#ifdef USE_MAX44009
  #undef USE_MAX44009
#endif

#ifdef USE_TSL2591
  #undef USE_TSL2591
#endif

#ifdef USE_AS3935
  #undef USE_AS3935
#endif

#ifdef USE_VEML7700
  #undef USE_VEML7700
#endif

#ifdef USE_DISCOVERY
  #undef USE_DISCOVERY
#endif

#ifdef USE_MQTT_TLS
  #undef USE_MQTT_TLS
#endif

#ifdef USE_RC_SWITCH
  #undef USE_RC_SWITCH
#endif

#ifdef USE_RULES
  #undef USE_RULES
#endif
#define USE_RULES

#ifdef USE_EXPRESSION
  #undef USE_EXPRESSION
#endif
#define USE_EXPRESSION

#ifdef SUPPORT_IF_STATEMENT
  #undef SUPPORT_IF_STATEMENT
#endif
#define SUPPORT_IF_STATEMENT

#ifdef USE_SCRIPT
  #undef USE_SCRIPT
#endif

#ifdef USE_UFILESYS
  #undef USE_UFILESYS
#endif

#ifdef USE_SDCARD
  #undef USE_SDCARD
#endif

#ifdef GUI_TRASH_FILE
  #undef GUI_TRASH_FILE
#endif

#ifdef GUI_EDIT_FILE
  #undef GUI_EDIT_FILE
#endif

#ifdef USE_SPI
  #undef USE_SPI
#endif

#ifdef USE_SONOFF_SC
  #undef USE_SONOFF_SC
#endif

#ifdef USE_DS18x20
  #undef USE_DS18x20
#endif

#ifdef USE_DHT
  #undef USE_DHT
#endif

#ifdef USE_SHT
  #undef USE_SHT
#endif

#ifdef USE_HTU
  #undef USE_HTU
#endif

#ifdef USE_BMP
  #undef USE_BMP
#endif

#ifdef USE_SHT3X
  #undef USE_SHT3X
#endif

#ifdef USE_LM75AD
  #undef USE_LM75AD
#endif

#ifdef USE_AZ7798
  #undef USE_AZ7798
#endif

#ifdef USE_MAX31855
  #undef USE_MAX31855
#endif

#ifdef USE_MLX90614
  #undef USE_MLX90614
#endif

#ifdef USE_MAX31865
  #undef USE_MAX31865
#endif

#ifdef USE_HIH6
  #undef USE_HIH6
#endif

#ifdef USE_DHT12
  #undef USE_DHT12
#endif

#ifdef USE_DS1624
  #undef USE_DS1624
#endif

#ifdef USE_AHT1x
  #undef USE_AHT1x
#endif

#ifdef USE_HDC1080
  #undef USE_HDC1080
#endif

#ifdef USE_MCP9808
  #undef USE_MCP9808
#endif

#ifdef USE_HP303B
  #undef USE_HP303B
#endif

#ifdef USE_LMT01
  #undef USE_LMT01
#endif

#ifdef USE_TIMERS
  #undef USE_TIMERS
#endif

#ifdef USE_TUYA_MCU
  #undef USE_TUYA_MCU
#endif

#ifdef USE_WEBSERVER
  #undef USE_WEBSERVER
#endif
#define USE_WEBSERVER

#ifdef USE_WS2812
  #undef USE_WS2812
#endif

#ifdef MY_LANGUAGE
  #undef MY_LANGUAGE
#endif
#define MY_LANGUAGE	pt_BR

#ifdef MQTT_HOST
  #undef MQTT_HOST
#endif
#define MQTT_HOST         "192.168.1.1"

#ifdef MQTT_PORT
  #undef MQTT_PORT
#endif
#define MQTT_PORT         1883

#ifdef MQTT_USER
  #undef MQTT_USER
#endif
#define MQTT_USER         "hb"

#ifdef MQTT_PASS
  #undef MQTT_PASS
#endif
#define MQTT_PASS         ""

#ifdef FRIENDLY_NAME
  #undef FRIENDLY_NAME
#endif
#define FRIENDLY_NAME     "nilm_monitor"

#ifdef PROJECT
  #undef PROJECT
#endif
#define PROJECT           "nilm"

#ifdef NTP_SERVER1
  #undef NTP_SERVER1
#endif
#define NTP_SERVER1     "192.168.1.1"

#ifdef NTP_SERVER2
  #undef NTP_SERVER2
#endif
#define NTP_SERVER2     "192.168.1.1"

#ifdef NTP_SERVER3
  #undef NTP_SERVER3
#endif
#define NTP_SERVER3     "192.168.1.1"

#ifdef APP_TIMEZONE
  #undef APP_TIMEZONE
#endif
#define APP_TIMEZONE     -3

#ifdef ENERGY_RESOLUTION
  #undef ENERGY_RESOLUTION
#endif
#define ENERGY_RESOLUTION 3

#ifdef TELE_PERIOD
  #undef TELE_PERIOD
#endif
#define TELE_PERIOD       1

#ifndef USE_PZEM004T
  #define USE_PZEM004T
#endif
#endif
