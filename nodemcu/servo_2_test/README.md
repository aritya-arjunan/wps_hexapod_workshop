# Part 1: Controlling two servo motors with NodeMCU

1. Connect a 2 pin male to male dupont wire to the battery 2 pin (+6V and Ground)

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/4.0_battery_connect.jpg)

2. Connect the 2 pin male to male dupont from battery to the second servo

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/4.1_battery_servo2_connect.jpg)
 
3. Connect servo signal pin (yellow) with a male to female dupont wire

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/4.2_servo2_signal_connect.jpg)

4. Connect servo signal with NodeMCU D3 pin

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/4.3_servo2_signal_D3_connect.jpg)

5. Overall connections of NodeMCU and two servos

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/4.4_servo2_all_connected.jpg)

6. Connect a male to female dupont wire to one of the battery +6V pins

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/4.5_battery_2pin_volt_connect.jpg)

7. Connect the female dupont pin to the V pin of NodeMCU

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/4.6_battery_2pin_nodemcu_V_pin_connect.jpg)

8. Connect USB to NodeMCU and upload sketch (servo_2_test.ino)

9. Disconnect USB and turn on battery to test the two servos

## Demo Video of Part 1

Click on the image below to open the demo video:

[![](http://i.ytimg.com/vi/CBluMBrn7sg/hqdefault.jpg)](https://www.youtube.com/watch?v=CBluMBrn7sg)


# Part 2: Assembling 3D printed hexapod leg parts with two servos


1. A 3D printed femur part and a servo that will be assembled

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.0_femur_servo_items.jpg)

2. Placement of the servo motor wire within the femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.1_femur_servo_side_wire_placement.jpg)

3. Placement of the servo motor inside the femur (top view)

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.2_femur_servo_top_placement.jpg)

4. Screws and driver that will be used to fix the servo in the femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.3_femur_servo_screws.jpg)

5. First servo that has been screwed to the femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.4_femur_servo_screwed.jpg)

6. Get the second servo to be placed in the femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.5_femur_servo2_items.jpg)

7. Placement of the second servo motor wire within the femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.6_femur_servo2_side_wire_placement.jpg)

8. Placement of the second servo motor within the femur (top view) and screws

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.7_femur_servo2_top_placement.jpg)

9. Servo 2 screwed and get a servo horn that will be fixed onto the first servo

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.8_femur_servo2_screwed.jpg)

10. Fix the servo horn and rotate the servo clockwise gently until it has reached its maximum rotation. Remove the horn and refix the horn at the angle shown below:

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.9_femur_servo_horn_max_placement.jpg)

11. Rotate the horn anticlockwise until it is parallel to the femur as shown below:

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.10_femur_servo_horn_adjustment.jpg)

12. Get the 3D printed coxa part to be connected to the first servo

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.11_femur_coxa_items.jpg)

13. Align the coxa to the horn and place it snugly as shown below:

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.12_coxa_servo_horn_side_placement.jpg)

14. Placement of coxa from the top view with the required screw

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.13_coxa_servo_horn_top_placement.jpg)

15. Screwed coxa to the servo horn

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.14_coxa_servo_horn_screwed.jpg)

16. Screw and bearing required to fix coxa with femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.15_femur_coxa_bearing_items.jpg)

17. Place bearing and screw within the coxa and gently screw it into the femur using a hex key

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.15_femur_coxa_bearing_placement.jpg)

18. Turn the screw until it slightly touches the base of the servo

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.16_femur_coxa_bearing_screwed.jpg)

19. Get another horn ready for the second servo

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.17_servo2_horn_items.jpg)

20.  Fix the servo horn onto the second servo and rotate the servo anticlockwise gently until it has reached its maximum rotation

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.18_servo2_horn_max_placement.jpg)

21. Remove the horn and refix the horn at the angle shown below. Get the 3D printed tibia part ready.

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.19_servo2_horn_adjustment.jpg)

22. Align the tibia to the horn and place it snugly as shown below:

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.20_tibia_servo2_horn_side_placement.jpg)

23. Placement of coxa from the top view with the required screw

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.21_tibia_servo2_horn_top_placement.jpg)

24. Screwed tibia to the servo horn

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.22_tibia_servo2_screwed.jpg)

25. Screw and bearing required to fix the tibia with femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.23_tibia_servo2_bearing_items.jpg)

26. Place bearing and screw within the tibia and gently screw it into the femur using a hex key.

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.24_tibia_servo2_bearing_placement.jpg)

27. Placement of the screw into the femur

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.25_tibia_servo2_bearing_bottom_side_placement.jpg)

28. Turn the screw until it slightly touches the base of the second servo

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.26_tibia_servo2_bearing_bottom_side_placement.jpg)

29. Placement of servo wires

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.28_tibia_servo2_bearing_bottom_side_screwed.jpg)

30. Fully assembled hexapod leg with two servos

![](https://github.com/aritya-arjunan/wps_hexapod_workshop/blob/main/nodemcu/servo_2_test/5.27_tibia_servo2_bearing_side_screwed.jpg)
