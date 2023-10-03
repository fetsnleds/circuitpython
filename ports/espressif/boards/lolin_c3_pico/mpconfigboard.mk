CIRCUITPY_CREATOR_ID =  0x19881988
CIRCUITPY_CREATION_ID = 0x00C30002

IDF_TARGET = esp32c3

CIRCUITPY_ESP_FLASH_MODE=qio
CIRCUITPY_ESP_FLASH_FREQ=80m
CIRCUITPY_ESP_FLASH_SIZE=4MB

CIRCUITPY_ESP_USB_SERIAL_JTAG = 1

CIRCUITPY_BLEIO = 0

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel