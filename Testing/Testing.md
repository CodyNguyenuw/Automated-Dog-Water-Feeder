Test 1 – Load Cell and HX711 Calibration

Objective: Verify that the load cell could accurately measure the weight of the water bowl.

Procedure: Connected the load cell to the HX711 amplifier and ESP32. Uploaded a test sketch to Arduino IDE to read and print weight measurements.

Results: Initial readings weren't changing despite changing weight on load cell.

Solution: Investigate wiring by utilizing multimeter to find improper connections. Was able to find A- connection wasn't properly soldered to HX711.
          
Status: Complete

Test 2 - MOSFET switch

Objective: Verify the MOSFET switches the output on to power water pump when prompted from ESP32

Procedure: Connected the load cell, HX711, and MOSFET to ESP32 while supplying power to the MOSFET and having the output power the water pump. Ran code from Arduino IDE to switch MOSFET on when load cell reaches threshold weight.

Results: When load cell reached set weight, MOSFET turned on, but didn't power water pump. 

Solution: Investigate wiring for output and input power. Was able to find that 5V power supply was defective and wasn't supplying enough voltage. Changed power supply and worked after that.
          
Status: Complete

Test 3 - Cable Gland Water Ingress Test

Objective: Check if water leaks through or not from water resevoir to electronics box 

Procedure: Have the two cable glands (for water pump power cable and water pipe) installed with the cable gland tightened in holes of water resevoir. Then, fill the water resevoir with water and test on electronics side whether water leaks through or not.

Results: When water was poured in the resevoir, both cable glands started dripping water into the electronics box, due to the water pressure on the gland and incomplete coverage of hole between the two sides.

Solution: 3D print washers for the cable gland to fill in the missing contact points and block the water from seeping into the electronics box. 
          
Status: Complete

<img width="3024" height="4032" alt="Cable Gland 3D Printed Washers" src="https://github.com/user-attachments/assets/6d630b07-5bdd-41ac-9953-6304ea8e25fe" />




