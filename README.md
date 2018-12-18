# decimaltobinary
Converts to signed binary numbers<br />
<br />
Will work on 32 bit binary numbers and lower <br />
<br />
gmpdectobin will work on larger then 32 bit binary numbers <br />
<br />
If you get a answer with anything other than 0 or 1 the number you entered isn't valid. <br />
<br />
Example usage:<br />
Convert 1 to 32 bit binary number and store in int buffer1[32]: <br />
dectobin(1, buffer1, 32) <br />
<br />
Convert -2 to 5 bit binary number and store in int buffer1[5]: <br />
dectobin(-2, buffer1, 5) <br />
