# LM-35
interface LM35 with led blink.
since i was working on an online simulator i faced many issues.
some specific libraries that i wanted to include was not available on some simulator.
and the main issue was the lack of LM 35 temparature sensor on  some of them.
i used an analog sensor which was not giving me an accurate value of temperature in celcius.
but i somehow managed to find a solution. which i believe to be true.
in some simulator it was needed to subtract an addition 50 degree on LM35 to correct my temperature value. Which i didnt include in the above code.
I still belive  that it would have been an easy task if i had the hardware accesories on reach.
I AM STILL NOT SURE THAT THE ABOVE CODE MIGHT WORK ON REAL TIME WITH THE HARDWARE BUT IS PERFECTY WORKING ON SIMULATER.AND THE CODE WAS HAVING NO ERROE WHILE COMPILING ON ARDUINO IDE.
Thanks for reading.
