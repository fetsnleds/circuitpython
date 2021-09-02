#define MICROPY_HW_BOARD_NAME "Adafruit ItsyBitsy M4 Express"
#define MICROPY_HW_MCU_NAME "samd51g19"

#define CIRCUITPY_MCU_FAMILY samd51

// This is for Rev B
#define MICROPY_HW_LED_STATUS   (&pin_PA22)

#define MICROPY_HW_APA102_MOSI   (&pin_PB03)
#define MICROPY_HW_APA102_SCK    (&pin_PB02)

#define DEFAULT_I2C_BUS_SCL (&pin_PA13)
#define DEFAULT_I2C_BUS_SDA (&pin_PA12)

#define DEFAULT_SPI_BUS_SCK (&pin_PA01)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA00)
#define DEFAULT_SPI_BUS_MISO (&pin_PB23)

#define DEFAULT_UART_BUS_RX (&pin_PA16)
#define DEFAULT_UART_BUS_TX (&pin_PA17)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1