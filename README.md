# Automated Dog Water Feeder
An ESP32-based smart dog water feeder designed to monitor water consumption and automate water dispensing. The system uses a load cell to measure changes in the water bowl's weight and a Wi-Fi-enabled ESP32 to process measurements and provide notifications.
This project combines embedded systems, sensor integration, basic circuit design, and 3D-printed mechanical components.


# Objectives

-Monitor water consumption using a load cell.

-Measure bowl weight through an HX711 load cell amplifier.

-Use an ESP32 to process sensor measurements.

-Integrate Wi-Fi connectivity for remote monitoring and notifications.

-Automate water dispensing using a 5V DC water pump.

Design and 3D print a custom enclosure to house the electronics and water reservoir.

Develop a compact mechanical design that integrates the electrical and plumbing components.


# Software

-Arduino IDE – ESP32 programming and firmware development.

-C/C++ – Embedded programming.

-GitHub – Version control and project documentation.


# Main Functions

-Read load cell measurements through the HX711.

-Calibrate and tare the load cell.

-Convert sensor readings into weight measurements.

-Process changes in bowl weight.

-Control the water pump through a MOSFET driver.

-Custom build

-Establish Wi-Fi connectivity for remote monitoring.
