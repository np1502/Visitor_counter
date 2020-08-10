# Visitor_counter

In video of simulation two sensors are attached on both sides of room. To enter room one has to come from left to right and to exit one should have to go from right to left.
LCD shows number of people in room.
We have used PIR sensors to detect motion.
Let sensor outside(right in video) be sen1 and other sensor be sen2.

## LOGIC
If sen1 detects motion and then sen2 detects motion then count in LCD will increment one as person entered the room. And if sen2 senses motion first and then sen1 detects motion, It means some on exited so count in LCD will decrease.
