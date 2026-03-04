cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(USBTEST)

pico_sdk_init()

add_executable(UsbTest
    UsbTest.c
)

target_link_libraries(UsbTest pico_stdlib)

pico_enable_stdio_usb(UsbTest 1)
pico_enable_stdio_uart(UsbTest 0)

pico_add_extra_outputs(UsbTest)
