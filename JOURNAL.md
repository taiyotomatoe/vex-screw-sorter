# Devlog: 
**11h worth of work was done on Fallout. (journals there too)
More accurate time logs on Lapse/Hackatime:**
![image](https://cdn.hackclub.com/019f3772-d745-74f2-8a5d-fc60e827cc27/Screenshot%202026-07-06%20at%2021.41.04.png)

# 3 July: 
Finished the schematic... 

I finalized the list of the main components for the PCB: 
Rotary Encoder (leftover. from Blueprint)
LCD 
12V Motor (with encoder)
Arduino Nano. 

I found out that I most likely shouldn't power tehse components with the arduino's power pins, so I did some research on voltage converters: 
buck converter vs linear regulator.. .


I also had to do some digging around to find the pin headers for the motor. This motor is one my school had lying around, and has a 2.00mm pitch. I decided to have this assembled by JLCPCB. 
I had difficulties finding a suitable footprint/3d model for these components, so I found the JLCImport plugin, which made my life so much easier by letting me import footprints from within KiCad.
![JLCImport Plugin](https://cdn.hackclub.com/019f24c2-2ec6-76ab-b7ff-9473416edb3c/Screenshot%202026-07-03%20at%2006.31.53.png) 
(yes I could've just used the default KiCad ones, but this also applies to other components/projects)


I also need to find a suitable battery to power this project. It could be done using either. a LiPo battery or a power bank. I will do further research on this. 

#2: 
Went back to the CAD. I have to fix an issue on the main sorter where the bigger screws would slide off the bottom - Hopefully by making the part the screw body rests on a bit lower, there should be less bumps to throw the screws off course. ![image](https://cdn.hackclub.com/019f25ae-67f0-7051-8ddb-38fdd7332806/Screenshot%202026-07-03%20at%2010.46.43.png)
I also need to change the wheel a bit, so that the magnet fits well - I think it was too wide, but I don't have any calipers with me - I will test this while the thing is printing and stop it when fit. 

I realized I made another dumb mistake, and wasted some more filament. I printed a "testing" patch to waste less filament, with 5 different sizes, so I could see which one would work best, before printing the actual wheel *again*. ![image](https://cdn.hackclub.com/019f25e4-c05f-7a40-b5ac-9a52df79ced4/Screenshot%202026-07-03%20at%2011.51.54.png)

I'm trying to think of ways to secure these two in teh same posiition relative to the sorter each time, but I'll have to test this once it's printed. 


Back to electronics research - not really sure whether the DRV8833 that I'm planning on using for motor control is suitable, because my motor's stall torque is 2A and the DRV has a max current rating of 1.5A. I'll test this out. 

A friend suggested using the DRV8871 instead, which seems to be the better option. 

#3/4: Tested out the new wheel thicknesses, and I have a size that alows the magnet to be friction fit well. I will print this final version now. 

I also decided on a [lipo batery ](https://www.amazon.co.jp/-/en/Battery-Rechargeable-Terminal-Bluetooth-Electronics/dp/B0G2MJ5YLF?crid=178IX3BYRONUD&dib=eyJ2IjoiMSJ9.gnWILACyYgdu2AtJWz-Q15tv8IVhpi-14Ny1lzd_shXT0ptj0pcGcrKUds12ozBjwAKugvMiGpk9IJTkMXHU2_VZHPDrXllLtcTKVFVP91Py6K3_Lnz4L3aPuB68flx2GzmH3v33JkZbq6tz48VAcd0oJG9zQUsnbH4Rs79b6K7zrn-ot5wu-mPG1zG1V6uMD_PLa5Wjpar9tGu_CpE7fUpqUYBwllS08eGof5ZvOexPMNX1Hf3_Wsg27bwYR10dlwsjIbl9ozy8f6aR44Yij44YiW27DGfj4A1WN0vInLY.7w6LZ7R5i1eYA33umAx3ulGQ-1bwW1Q_A8D6ao1iwu0&dib_tag=se&keywords=9v+lipo+battery&qid=1783093079&sprefix=9v+lipo+batter%2Caps%2C189&sr=8-18)
and addded it to the circuit.  

I'm wondering if I can/should power both the arduino and the motor directly from the battery, as I'm worried of a current spike or something when the motor starts spinning. 

Time spent (total for today): 3h30

# 4 July

Looking at the buck converters, I just cannot find the footprint for them. I think what I'll do is I'll estimate the destance between the pins, and then bend the pins on the pcb when soldering the buck converter on. (unless someone warns me to do otherwise)

For this one, I'll go with 21mm and 52.7mm apart. 

Time spent: 1h50

# 5 July: 

I'm reprinting the sorter again - hopefully printing it the other way will make it work better. It seeesm that printing the sorter upside down makes the face less smooth because of the supports, which makes it work less. 

I'm also just going to use the 3d model to space out the buck converter pins out correctly. Hopefully this is a precise enough method. ![image](https://cdn.hackclub.com/019f2e70-5698-7348-a794-3b3dc1f93ec6/Screenshot%202026-07-05%20at%2003.41.51.png)
I think this turned out ok. ![image](https://cdn.hackclub.com/019f2e7f-3621-7435-9cae-0cd21d35e8ae/Screenshot%202026-07-05%20at%2003.52.31.png)This better work.. 

I've been running into more issues to do wiht pin spacings and not finding their values anywhere, and I'm slwoly makign progress. I've been measuring the 3d models that I found of the components, so the pin distances shoudl be correct, assuming the 3d models were correct. 

I think I have the layout I want (haven't done the routing yet), and I will import this into Fusion and design an enclosure for it. ![image](https://cdn.hackclub.com/019f2eb0-bea8-7815-8a72-cc23f2a7ed22/Screenshot%202026-07-05%20at%2004.51.16.png)
This is the idea for now: 
I am slightly worried that the potentiometer will be difficult to control because of its position as well as the plastic used to support it being light and probably prone to sliding around. I might change the pcb just to make the potentiometer higher up, depending on costs, and I'll experiment with the box as welll to make it less prone to sliding around. 


I made a little mistake not setting the clearances before routing the traces... Hopefully the clearances I calculate aren't much more than what I currently have. 
Looks like it's fine. 
I moved onto adding graphics on the silkscreen, then realized all my 3d models were gone, for some reason... ![image](https://cdn.hackclub.com/019f3006-5b89-793c-a08a-8d8e5e0c0ad8/Screenshot%202026-07-05%20at%2010.59.19.png)
Back in business. ![image](https://cdn.hackclub.com/019f3006-3633-750e-82e7-9cab6b3d4be9/Screenshot%202026-07-05%20at%2004.51.16.png)

Time spent: 3h30


# 6 July: 

#1: 
To make it easier for the user to turn the rotary encoder, I think I should make a knob for it. 

#2: 
Wrote some code for the LCD screen that'll be used. The encoder code should work, I already worked on it a month ago. 
I used the map function to map encoder values to 0-155, because I don't want the motor spinning at full speed (255). 
I also learnt how the I2C comm works, and that it's a form of serial communication alongside UART (the one I was familiar with), and  others. 

#3/4: 
Some more work on the CAD - changing hole sizes to fit better... etc
Rendered the Screw Sorter - the final printed verrsion probably won't look as vibrant, but I think it looks alright for now. 

Time spent: 2h55