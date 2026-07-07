# Devlog: 
**11h worth of work was done on Fallout. (I didn't submit there, as I didn't finish the project.)
More accurate time logs on Lapse/Hackatime.
Fallout Journals are under the journals I did for outpost.** 
### I also had to transfer the images from fallout... I did this manually so it may look messy at times

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


# automatic Vex screw sorter — Journal Export

- Exported at: 2026-07-07T04:16:02Z
- Project ID: 1106
- Entries: 8

## Entry 1
- ID: 8177
- Author: tomato
- Created At: 2026-05-20T16:42:01Z

### Content

(logging this 3 days later, was busy) 
this is my first journal, which will also serve as part of the readme, because I’m writing my idea of what this project will look like. I did previously work on this project without logging it, but I have many more improvements to make - I’ll mention the first one in a second. 

In Vex robotics, we all use screws. However, it’s easy to throw the screws we didn’t use into a random box and forget about putting it bac where it was. 

My screw sorter is an automatic solution to this problem - just dump all your screws in a box and it’ll automatically sort them by size. 

Other designs sort the screws, but still require a human operator to manually put the screws in place. Example: 
<img width="529" height="392" alt="image" src="https://github.com/user-attachments/assets/14ad80ac-064d-4e36-933c-4c356bc6c2c0" />


my goal for this project is to make the process fully automatic. 
It will use: 

- dc motor, (battery)
- switch to turn it on and off,
- and other features i decide to implement down the line.

I might make a custom pcb for it if I decide to add more parts/to make it look nicer. 

This design by Christopher looks interesting, using magnets to pull the screws up from the box. 
<img width="553" height="291" alt="image" src="https://github.com/user-attachments/assets/f61ca95b-a652-4b51-b6b2-2043a87eac58" />

I already have the bottom "sorting part" - made previously. 
The way it'll work is that the screws in the box area will get picked up by the wheel, which has magnets inside. This will then bring it up to the dispenser part, where it'll be directed into the sorter area. 
I am thinking about what would happen if a long screw comes along and it’s upside down. 
I've also found it difficult making a box design that doesn’t interfere with the wheel. 
<img width="521" height="459" alt="image" src="https://github.com/user-attachments/assets/fe595fb4-9b81-4221-b5df-acdcd4a68fec" />


I also need to make the box inclined so that the screws bunch up near the bottom of the wheel. 

I added a “hook” which would theoretically detach the screw from the magnet (i also made the hole for it)
and a cover to keep it from falling out. 
In hindsight I don’t think the “hook” needs to be shaped this way.
<img width="506" height="486" alt="image" src="https://github.com/user-attachments/assets/31b54b2e-4f72-48a7-808c-90e9916d2042" />

<img width="457" height="482" alt="image" src="https://github.com/user-attachments/assets/be9b4daf-6863-492a-9d68-872557127521" />


there is a rail for the screws to slot into place in the round part. 

tomorrow, I will (NOT BECAUSE I WAS TOO BUSY)
- work on making the box work,
- attach the new parts (the hook and the cover are currently floating)
- add a shaft/mounting hole for the wheel to spin




### Recording Links

- https://lookout.hackclub.com/api/media/9636e65d-2c7b-4c0e-94a6-4ae4e1f16784/video.mp4

## Entry 2
- ID: 9653
- Author: tomato
- Created At: 2026-05-27T13:32:42Z

### Content

today, I mainly focused on the box part. 
previously, the box was just a flat box, so once there weren’t enough screws, the magnets wouldn’t pull the leftover screws that were too low or too far to get picked up. 
<img width="561" height="385" alt="image" src="https://github.com/user-attachments/assets/a98c5759-ad57-472f-b770-f82a0fe2200d" />

I therfore made the box inclined, so the screws would naturally tend to the wheel. 

I also had to maek sure that it wouldn’t interfere with the other parts of the sorter and hit other screws. 

<img width="539" height="384" alt="image" src="https://github.com/user-attachments/assets/fdb916e3-f1fb-4793-af65-0ff06ffe03ad" />

i then realized how dumb i’d been to just have a box enclosing the whole thing: the screw would just get stuck inside. 🤦
<img width="534" height="469" alt="image" src="https://github.com/user-attachments/assets/eff99ee7-fb1b-48e3-8089-2931d330d8b6" />


<img width="555" height="397" alt="image" src="https://github.com/user-attachments/assets/ea67f786-2c73-4c9e-a89a-3e1938436f40" />


I therefore made a slit for the screw to go through. 
this may cause rpoblems down the line, wiht screws falling out from the slit, especialy the smaller screws, but I want to test this version first and then come up with solutions. 

NExt I worked on teh hook a little bit, making it a bit less complicated. 
i also attached as one body like this, although I mgiht need to make some changes when printing this as i can foresee the need for some supports. 
I’ll go for this for the moment because I want to test this section, without having to figure out a complicated mechanical attachment system (That’d be more efficient/refined, so work for another day)
<img width="529" height="461" alt="image" src="https://github.com/user-attachments/assets/10ccb952-5256-40c0-b864-0cf93ff60a8b" />

this is the current result. 
<img width="530" height="479" alt="image" src="https://github.com/user-attachments/assets/ae5ac08f-2ab3-4ada-a083-e9e24742a84f" />


i also did some cleaning up, renamign the bodies. 
I should rename the sketches one day too.  
<img width="239" height="479" alt="image" src="https://github.com/user-attachments/assets/02d3956d-1f18-4523-935c-7c6910a9094a" />



the takss now are: 

- make a drive shaft hole in the wheel, (+ an attachment) so that the wheel can be spun by a motor 
This’d allow me to test the loading section (fig.the image above)
I will test this on a breadboard for the moment, I am also considering implementing other components on a PCB.
- make a support for the box (it cant float unfortunately)
- figure out a support for the main sorter: 
I previously had a design which worked, but it was a bit clunky and required some taping. 
I will therefore rework this.

<img width="533" height="323" alt="image" src="https://github.com/user-attachments/assets/dde19bd2-1542-49d3-9a17-ab647f87444f" />


I also want to learn how to deal with sketches in fusion360, such as when I insertt a new component and then want to edit a previosu sketch with the new component in mind: (the new component doedsnt show)

I wasn’t able to find an answer, and I have asked some of my teachers.

[Continued on the next day, 26 May]: 

I briefly worked on the README, learnt a bit about how to use Markdown. 
I need to find what motor I’ll be using, so that I can: 
1. Put it in the 3d model and design accordingly
2. (Order if needed); assemble the circuit for testing (RPM shoudln’0t be that fast)

Otherwise, I improved the body separation for the loader. This allows the parts to be tested individually, saving on filament/time. 
To attach the hook, I created a hole and will fit a bar into it, as seen in the images below. 
I also incorporated tolerances, which I will need to test as well. 

<img width="186" height="124" alt="image" src="https://github.com/user-attachments/assets/73d96516-3e6b-4f75-9c7e-3c802dddb359" />


<img width="530" height="325" alt="image" src="https://github.com/user-attachments/assets/056d3366-a10b-4906-bb18-3e7d29f9ae99" />


<img width="550" height="412" alt="image" src="https://github.com/user-attachments/assets/2f31c962-7112-43a1-8c89-0cf8d9c02593" />

<img width="493" height="477" alt="image" src="https://github.com/user-attachments/assets/75397a74-3a00-4a41-93c3-40711e890e29" />

<img width="526" height="483" alt="image" src="https://github.com/user-attachments/assets/e904b9ea-71b3-4b0e-b6cd-4db617d8ffbd" />


Below was my first idea at attaching the curved part with the first part of the funnel. 
This won’t work, and my current solution I have in mind is: 
hot glue the parts together
however this will make testing more inconsitent/harder in my opinion, so I will figure out a better way tomorrow. 

<img width="513" height="483" alt="image" src="https://github.com/user-attachments/assets/77686501-1959-4e9a-a93e-8eab2295f0c4" />


<img width="518" height="460" alt="image" src="https://github.com/user-attachments/assets/75a51458-d60a-4782-997a-f98766239f07" />

I also need to think about how to attach the motor to the wheel, as there are many parts around that miht interfere with the motor attachment. 

That’s it for today (and yesterday), next time (tmr hopefully) I will: 
figure out the body attachment methods
do some research on the motors/start designing the pcb???
3d print soon

### Recording Links

- https://lookout.hackclub.com/api/media/746643bf-e4d1-42b6-8ecd-86335d50c0c6/video.mp4
- https://lookout.hackclub.com/api/media/720516d4-a807-4749-aefb-02b7c3763dcb/video.mp4
- https://lookout.hackclub.com/api/media/73e45309-c194-4816-9717-e51777492c30/video.mp4

## Entry 3
- ID: 10525
- Author: tomato
- Created At: 2026-05-30T21:47:17Z

### Content

### 30 MAY: the loading part has been printed and is being tested! 

Firstly, I added some supporting pillars for the box. This can however be replaced by a book or something for testing. 
<img width="540" height="367" alt="image" src="https://github.com/user-attachments/assets/2642cdb8-0e7a-4f26-a451-8b68a72797dd" />


i also found a DC motor to use - it’s just a 12V motor that I have lying around at the moment - that’d be the easiest to use for now. I make the shaft hole for it in the wheel. 

I should, in the future, allow the wheel to be attached to the box, so the distance stays constant (easier for end user)
But I will do this after I figure out what other parts I need and where to put them, like the battery and cables.. 
<img width="119" height="129" alt="image" src="https://github.com/user-attachments/assets/c28ebac7-c6c2-4899-9594-a7827b15dedf" />

<img width="342" height="448" alt="image" src="https://github.com/user-attachments/assets/56cbe671-98fa-4bca-b1fb-6060e3dcff56" />


The sorting part requires the main sorter and the containers that will store the screws after they’re sorted. image: 

<img width="540" height="273" alt="image" src="https://github.com/user-attachments/assets/e79d24bc-7e19-4e02-b1fb-37675de92dd7" />


the mian challenge was having the containers not hit the screw sorter, as the top sorting bit has to be slanted to work properly (the screws tend to get stuck if it’s not inclined)

I first made the other slot for the screw sorter to be held in place. 

<img width="540" height="395" alt="image" src="https://github.com/user-attachments/assets/9d2b3a3d-7ec2-4321-b567-dd693c7dde4b" />


<img width="539" height="209" alt="image" src="https://github.com/user-attachments/assets/4c6011f0-c23a-4ee6-8e06-a6aa70b53a1f" />


I had to make some minor adjustments here to make sure the sorter would hold in place, using the cross-section analysis tool in Fusion. 

But then I realized I could extend this hole so that it goes further down, giving the containers more space. 

This wans’t enough for the containers, however, so i redesigned them (based off the projections of the old design) to fit more nicely with the main sorter. 

<img width="557" height="319" alt="image" src="https://github.com/user-attachments/assets/a10a2b86-127a-47fc-b42e-4ea4eb135f09" />


<img width="537" height="323" alt="image" src="https://github.com/user-attachments/assets/1081e280-b683-4617-8505-887a39f3e174" />


The sorter, along with the containers, are now ready to be printed. I’ll only print one for now to not waste too much filament. 

**[SECOND Recording]**
I came back and worked on the wheel. I firstly added a holder for the motor. 


<img width="550" height="445" alt="image" src="https://github.com/user-attachments/assets/a4a2155b-0081-4b39-a03b-ae208cd59195" />


The wheel should be at a set distance from the box, so that it works well; 
The obvious solution is to. have the box and wheel be one big body. 
However, I want to keep the parsts of this project modular, so that they can be 
a. printed easily
b. tested easily individually. 

Therefore, I thought of making the wheel part attach onto the box, like this. 
I now realize that this will probably cause the motor to fall over in the direction of the wheel, due to the weight of the motor. I can, however, just put a book under to keep it balanced. 

<img width="522" height="468" alt="image" src="https://github.com/user-attachments/assets/62d65ac7-c390-4290-9940-80b2883d52ff" />


I also attempted to run some stress tests (simulations) on the system, to test the durability, especially of the shaft that holds the motor holder and the box together. 
However it turns out it’s a bit complicated, and 3d printers don’t completely fill up the bodies with filament anyways, so it’d be underweight by a percentage. therefore running tests, even if i could, would most probably overestimate the strength of this part. I’ll try the simulation feature out one day on another project. 
<img width="547" height="445" alt="image" src="https://github.com/user-attachments/assets/7f3a2648-fcef-4fcc-b4c0-684a5c75c2b3" />


NExt I decided I want to test the loader part. I made it so that the loader can slot into the sorter holder, so that I can test it individually. 

<img width="276" height="457" alt="image" src="https://github.com/user-attachments/assets/8d447774-0ee0-4d73-9dcc-d6590c420eb6" />

<img width="408" height="483" alt="image" src="https://github.com/user-attachments/assets/b760fd8b-7cb6-41e8-b62d-239bf31ddf4f" />


I also split up the loader into two parts, so I can test those individually, and added a coupling attachment. 

<img width="539" height="363" alt="image" src="https://github.com/user-attachments/assets/0aef7b72-1853-4c50-8260-91625065ff7d" />


I am now going to test these parts of the system, and hopefully they work! 
the last step is 3d printing them, for which I luckily have a 3d printer for at school. I put the file into bambustudio and I am now going to wait ~3 hours for this to print. Hopefully it works! ~~(Now time to stop procrastinating and do my homework…)~~
<img width="542" height="329" alt="image" src="https://github.com/user-attachments/assets/46f8433b-c3bc-4a3e-848f-f1c7b606b6e8" />


**[3rd recording]**
So I spent some time testing the loading mechanism that I printed off. Despite some difficulties when removing the supports that came with the print, resulting in me cracking a bit of the plastic, it seemed to work well. 
The screws occasionally require a little nudge, but I can tolerate that for the moment. I haven't tested the first stage yet, as I didn't print it. 

I tested this using the old screw sorter design that I had worked on previously to fallout - it's a bit different, thus why the screws are falling out in the image - the new version should be better. 
I already know that the sorter works, so I won't be prioritizing its testing, yet. 
![IMG_3743.HEIC](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQwMTQsInB1ciI6ImJsb2JfaWQifX0=--38f03f20a2252b2af42ad9615e9c328f21b26764/IMG_3743.HEIC)
**Screws were getting stuck due to the printer support filament being hard to remove fully. **
![IMG_3739.HEIC](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQwMTUsInB1ciI6ImJsb2JfaWQifX0=--6c427cd53a2a794316766b56f399c9b3ac3a4f46/IMG_3739.HEIC)


[4th Recording]
I also printed the first stage of the loader. This is when I realized how small the parts physically are, compared to what they looked like in the CAD. I will pay more attention to this n the future. 
![IMG_3747.HEIC](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQwMTcsInB1ciI6ImJsb2JfaWQifX0=--df061f74fdbcdbf726c03c70d6a1bd4495983b89/IMG_3747.HEIC)

I therefore added 2 things to the design of the motor holder: 
- More support for the motor holder
- A stopper so user can attach it to the box easily

<img width="539" height="436" alt="image" src="https://github.com/user-attachments/assets/2963f853-77cc-4948-9054-0001cdf8c34b" />




### Recording Links

- https://lookout.hackclub.com/api/media/35a3cb54-dcf8-4e49-94c5-097720b6a71f/video.mp4
- https://lookout.hackclub.com/api/media/59da71e0-00d0-4ba8-af40-d77a6ec7c561/video.mp4
- https://lookout.hackclub.com/api/media/ad360f85-8680-47f5-b002-0fccaf02da5a/video.mp4
- https://lookout.hackclub.com/api/media/3a4a85cf-fa2a-4836-8156-b03425d2ca2f/video.mp4

## Entry 4
- ID: 10527
- Author: tomato
- Created At: 2026-05-30T21:54:26Z

### Content

**[From 27 May - Wasn't logged for some reason]**

I started this screw sorting project before fallout. Therefore I already had some designs (which I wasn't completely satisfied with) started. To further integrate each body within the system, I decided to bring over the holder for the screw sorter, so that I could attach other parts of the whole system to it. 

It's basically just a rectangular holder for the actual screw sorter body. 

I didn't take screenshots but I had difficulties with extruding (removing) some of the old parts of the container, but I was able to do so, and make a extrusion and a hole so the sorter would be held by the container. 

<img width="540" height="355" alt="image" src="https://github.com/user-attachments/assets/eae06665-e550-4a4b-a16a-ea95ee34f038" />

<img width="543" height="359" alt="image" src="https://github.com/user-attachments/assets/df0710eb-10cc-44cc-90cf-8cd256172dfe" />



### Recording Links

- https://lookout.hackclub.com/api/media/bf9a2d16-2cd5-457c-9a67-b81407850010/video.mp4
- https://lookout.hackclub.com/api/media/bd9e2ee6-111c-4b4c-8b87-b80df1ba6046/video.mp4

## Entry 5
- ID: 11712
- Author: tomato
- Created At: 2026-06-04T21:20:45Z

### Content

# Small CAD Fixes + Starting Electronics!

So for this project I decided to use a motor with an encoder. I want this project to be a bit more complex than just a singular dc motor spinning while the switch is closed. 

After my research, in this circuit, I want:

- an LCD screen, which will display: 
Motor encoder values (probably number of rotations or something)
+Whatever i want it to display
- A motor with an encoder
- Potentiometer - to control speed

I will now make the pcb/schematic for this (hopefully successfully)

## CAD Cleanup

Before that, a few things to clean up in the CAD: 

Here I added a holder for the motor to keep it in the right place. I might add one on the other side as well. I hope I didn’t make it too small. 
<img width="411" height="332" alt="image" src="https://github.com/user-attachments/assets/22525f03-6d9e-4a00-aa4c-529bfb790a61" />
<img width="421" height="399" alt="image" src="https://github.com/user-attachments/assets/e656fafd-e7e1-467e-9a1e-2303044fdb29" />



I then realized I should probably just make a proper motor mount. So I made one. 
Therefore I got rid of those two things on the back because that’d make it impossible to put the motor in 🤦
The gap between teh wheel and the motor is very thin, so I hope that the mount isn’t too thin. To make it a big stronger (I hope), I attached it all the way around the motor, like this. 

<img width="417" height="329" alt="image" src="https://github.com/user-attachments/assets/58d7fb4c-64e9-48db-9bd8-d2ae2b7a7e53" />

<img width="425" height="281" alt="image" src="https://github.com/user-attachments/assets/3d374c09-c650-4fdf-b7b8-7c82f06967bc" />

I’ll try to get the wheel and this holder printed tomorrow - I’ll put the magnets in and I’ll then plug in a motor and test it out. I really hope it works. 

i hawd to make some minor adjustments to the motor mounting holes after re-consulting the datasheet. 

## Electronics

getting started with the electronics: 

- I searched for a potentiometer, but didn't really know what to look for - will do some research tomorrow and come back to this

<img width="407" height="340" alt="image" src="https://github.com/user-attachments/assets/d1ecc4fd-fc98-4903-b0f2-cd5ef7cd26a9" />


i was reading the datasheet (hopefully the right one - the image didn’t look the same as the one I have..)
So I need to decide a microcontrolller that can handle both the motor and the lcd. 
Im hoping this means that the power in for the encoder should be 3.3V. 
<img width="398" height="327" alt="image" src="https://github.com/user-attachments/assets/79aa86b7-2223-45fd-8424-7c1f153544db" />


<img width="418" height="482" alt="image" src="https://github.com/user-attachments/assets/167b5c08-67b3-4a6d-9ae2-87a025d250f0" />


Found an example circuit. the colours are a bit differnet but. 
Looks like encoders have two signal outputs: i don’t fully understand why, but it has to do with this thing being a "quadrature encoder", I will do some more research on this tomorrow. 

i’ve been trying to find the correct size for this connector, so that I can use the correct footprint in my pcb. unfortunately I cant so ill just measure it tomorrow when I have a caliper. 
also for some silly reason I imported the arduino nano symbol + footprint only to realize that Kicad already has it. Duh. 

<img width="400" height="387" alt="image" src="https://github.com/user-attachments/assets/b7ae18bd-8e3c-43b8-9b45-f0e526942152" />


I’m not very experienced in electronics in general, so I will do some testing of the LCD screen on its own. 
Additionally I need to figure out a way to get the footprint/symbol for the motor connections. THis may mean I have to make it myself in the symbol/Footprint editor - I’d just like to confirm this with a friend. I also need to learn more about potentiometers and what values I should be looking at when deciding one. 

Depending on this testing, I can find out how many pins all these components will need, and I can choose a suitable microcontroller for it. The idea is that this PCB will fit somewhere here, where the LCD screen + potentiometer can be accessed by the user easil.y 
<img width="422" height="291" alt="image" src="https://github.com/user-attachments/assets/e07df20a-21ac-4f75-90aa-0b06a97b2af0" />


**So to recap the next tasks are: **
- Print the motor holder + Wheel
- assemble motor + holder
- Test the wheel with a dc motor (no proper circuit/encoders yet)
- continue electronics when i get answers from my friend 






### Recording Links

- https://lookout.hackclub.com/api/media/78474f9b-a5ce-4b02-bfe3-06e9b631c07a/video.mp4

## Entry 6
- ID: 11924
- Author: tomato
- Created At: 2026-06-05T19:41:12Z

### Content

# [Electronic research continues! +some cad ]

I made the other holes for the wheel, so that I can print it and test it with the magnets. 

I’m a bit worried about the wheel and its rigidity - this might be too thin. 

<img width="408" height="341" alt="image" src="https://github.com/user-attachments/assets/e02c1a27-fcac-48bb-8b35-727ccd07a1fa" />


I measured the dimensions of this area (the box, under it) - this is probably where the PCB will go. 
as well as the LCD. 

<img width="426" height="422" alt="image" src="https://github.com/user-attachments/assets/d63bdd6e-82d5-40a0-9be4-2d7f1ba47181" />



I’ve been looking for potentionmeters - the first one I found doesn’t seem to have a datasheet. Will need to do more research tomorrow. 

I did some research on the LCD Screens, and it turns out the easiest way is to use an “I2C Backpack module”. I Found one of these lying around, so I can put it in my design. 

<img width="413" height="314" alt="image" src="https://github.com/user-attachments/assets/5158d238-e771-4564-a647-d98d5fabbdb0" />


I will connect this via jumper wires to the PCB. 

I also tried to do some soldering. 
(second recording - forgot to take pictures unfortunately)

In this project, I need to solder the I2C backpack module to the back of the LCD screen, as well as any other soldering. 
A main problem I had was that the solder was sticking to the iron tip, without sticking to the wire I was trying to attach. I followed a couple of tutorials, and it said I should use flux, but it didn’t really help - a teacher I asked suggested that it might just be a problem with the tip. 

Therefore I wasn’t able to test the LCD Screen today - I’ll get back to it soon. 

Reading the motor datasheet further: 

I understand that the stall current is the highest current my circuit should be able to handle. 
<img width="403" height="231" alt="image" src="https://github.com/user-attachments/assets/55d576df-e109-4370-8afe-2905af0bd8e7" />


For the electronics, I also need to find a battery that I can use. 

The motor uses 6-12V, which the arduino doesn’t seem to handle. I will therefore power this, and the mtor driver - which is needed to control the motor’s speed and direction - with a 9v Lipo battery (probably)

I will use a school project as an example, and therefore I will use this motor driver: 

I will get the breakout board version to make it all easier to assemble. 
I just need to find a suitable battery and the symbol for the driver so I can finish the schematic. 

I also sent three parts to print, so that I can test them later on. 

<img width="418" height="335" alt="image" src="https://github.com/user-attachments/assets/457288ce-ed4a-4ed2-9dd1-7596e393b95c" />

I printed a reduced version to preserve filament and time. 
I just need a way to test if this holder works.

<img width="419" height="445" alt="image" src="https://github.com/user-attachments/assets/a69bfe8d-1c6e-4546-83b0-426afe7be0f8" />


Tomorrow I will: 

- Assemble + Test the parts
- print the remaining other parts
- Further soldering practice/try to solder the lcd once I’m ready







### Recording Links

- https://lookout.hackclub.com/api/media/c207e46e-adea-45e1-84eb-20bf3dbde5a0/video.mp4
- https://lookout.hackclub.com/api/media/583055d6-78fb-462f-9d47-6aa88ca697bb/video.mp4
- https://lookout.hackclub.com/api/media/bb4beb66-4c9e-4640-a470-8d2fdce642ae/video.mp4

## Entry 7
- ID: 12122
- Author: tomato
- Created At: 2026-06-06T20:21:38Z

### Content

# [Testing -  A success! + Relevant Fixes/Improvements]

I go to test the parts I printed earlier, to great success. 
Removing the supports took a while, because they were in small holes. 

I didn’t have any better tools available so I had to use this bit of my nail clipper to take out this tiny support. 
<img width="353" height="469" alt="image" src="https://github.com/user-attachments/assets/6d2c2741-5801-4aeb-b374-30a89d476e13" />

The Loader part1 worked 95% of the time, and it only had occasional screws getting stuck, especially the smaller ones. Hopefully this issue resolves itself when I test this with a motor. Otherwise, a solution would just be to maybe filet/make this gap a bit wider. 

<img width="355" height="480" alt="image" src="https://github.com/user-attachments/assets/9551d24d-c3aa-4522-8be6-33f55bbe1872" />


The two loader parts integrated well with eachother, which I’m very happy about. 

<img width="369" height="482" alt="image" src="https://github.com/user-attachments/assets/bf1bb3df-bf10-4fa1-9016-11f2226d3ef2" />

the motor hub worked well as well - it fit well. 

<img width="355" height="493" alt="image" src="https://github.com/user-attachments/assets/600df0b2-1070-4c6b-b0e4-a080972a2cfb" />



the wheel needs to be improved, however, as it had two issues: 
<img width="358" height="473" alt="image" src="https://github.com/user-attachments/assets/f2e46700-5c45-4aaa-b44f-1001dbb0a658" />


1. too thick: the magnet was to thin for the wheel, so the screws would get stuck in between the wheel and the magnet. I will simply make the wheel a bit thinner. 

2. 3d printing tolerance
I for some reason forgot to add a slight clearance: i couldn’t put the motor shaft into the wheel. this should hoepfully be an easy fix. I wonder if there’s a feature in Fusio360 that allows me to replicate a sketch but with a tolerance. 

# Fixes!!

I started by making the wheel thinner, according to the magnet’s dimensions (measured properly this time)

<img width="409" height="300" alt="image" src="https://github.com/user-attachments/assets/7906a5fb-d0f6-4abe-b9c5-039609cc0918" />

<img width="414" height="299" alt="image" src="https://github.com/user-attachments/assets/a7970ba7-a516-48cd-9e8d-65c1539a306d" />


I added clearances (Not “tolerances”) to my motor shaft extrusion, using the offset tool (thank goodness I found out this exists)

I also made this part a bit smaller to accomodate for the motor irl (i stopped the print a bit early, so the current version I have looks a bit too small, but measurements tell me I should do this)

<img width="416" height="333" alt="image" src="https://github.com/user-attachments/assets/152aaa0f-f910-43f7-9691-a74726e361e4" />


<img width="415" height="389" alt="image" src="https://github.com/user-attachments/assets/3212f08a-1b40-480b-a747-221cbf5d3ea3" />


I also made the gap for the loader part 1 marginally bigger. This should hopefully help with the jamming issue. 

Later today, I will send this to print, so I can have the whole non-motor part working. 

<img width="421" height="318" alt="image" src="https://github.com/user-attachments/assets/acae24d5-0990-4a00-934b-b3063bba4ade" />



Tasks now: 
- Keep printing + Testing parts
- Electronics research + design!!!

### Soldering practice

I did some more soldering practice. (Image - pins on the left)

I used some more flux this time, and I got *some* decent connections. I also tried de-soldering, but not to much success. 
<img width="353" height="474" alt="image" src="https://github.com/user-attachments/assets/ba9eb517-caee-4c4b-9203-1bab308a2464" />

<img width="360" height="482" alt="image" src="https://github.com/user-attachments/assets/40bd4655-ee5c-446e-babd-ad59853f65ad" />


Slightly foolishly, I decided to start soldering the LCD backpack module on. It therefore got attached a bit slanted - not a completely detrimental issue (hopefully), but I could’ve done with some more practice. 

### Tasks for tomorrow:

- Test the new parts
- Continue the electronics research/schematic










### Recording Links

- https://lookout.hackclub.com/api/media/04125ba0-8b23-43db-af39-6a143a385a31/video.mp4
- https://lookout.hackclub.com/api/media/499a8498-faea-4911-88d7-8f753571642a/video.mp4
- https://lookout.hackclub.com/api/media/ff4e93d6-3229-4520-bc0c-04b9cc93bf62/video.mp4
- https://lookout.hackclub.com/api/media/b2e061b7-8a2d-41b6-ae25-8dd2f6ac378f/video.mp4

## Entry 8
- ID: 12359
- Author: tomato
- Created At: 2026-06-07T19:47:51Z

### Content

# [Electronics breadboard testing / software]

So today I’m going to learn a bit more about how my circuit will work - the folllowing components will be used

- Arduino Uno (instead of nano for now, for simplicity and availability)
- potentiometer (dont have the name yet)
- 9v battery
- dc motor (12v - jga25-370)

the first step would be finding out how the encoder works (how to wire it)

I found a the datasheet (screenshot later) and got this circuit. 
![IMG_3777.jpeg](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6Mjg5OTcsInB1ciI6ImJsb2JfaWQifX0=--3cc36f3be164d6bb4754912206f168969c0bbca5/IMG_3777.jpeg)


### Arduino Coding
<img width="639" height="448" alt="image" src="https://github.com/user-attachments/assets/3a2aef4b-a5ac-4b02-a717-ea4c16e335d5" />


For background, I only know some basic python. 

i just found out that variables have to be declared globally (Im pretty sure) before being formally given a value, unlike in python where I can just define it at any moment. 

Trying to figure out the logic of the encoder: how is the “GND” pin the encoder pinC??? 
<img width="750" height="434" alt="image" src="https://github.com/user-attachments/assets/b99ed5a3-75a8-40d0-88dc-410618be8ffe" />

I am just so confused here. I am following a tutorial of some sort, but using it as a guide. 

<img width="407" height="474" alt="image" src="https://github.com/user-attachments/assets/6ad455a0-8466-438e-add7-01a2d810e148" />


Below is my own code. 
I made some changes, notably to the result of the logic, because I want to use these values to translate to outputs for the motor to use. 
Turning clockwise would increase the position -> the speed, and encoder position of 0 means that the speed would be 0.

<img width="365" height="401" alt="image" src="https://github.com/user-attachments/assets/ca0f1048-743e-40ff-b218-285aa0134f21" />


I sometimes get these readings, , even though I’m only turning it in one direction. I’m guessing this is due to inaccuracies in the encoder module. 
<img width="906" height="219" alt="image" src="https://github.com/user-attachments/assets/a289e38a-6fce-4750-880e-3bc907df32e3" />



The next step is connecting the motor to the circuit and using these encoder readings as inputs for the motor. 

So I couldn’t find a suitable power supply for the motor - I implemetned the logic I wanted, and I will test this later today. (I need to add the motor controller pins/code as well, but I’d find it hard to test without the motor spinning too)

I used the map() function to map the encoder’s values (capped at 20 - more on this later) to a range between 0-255, to represent the duty cycle of the pwm signal, which will be used to control the DC motor’s speed.

<img width="370" height="413" alt="image" src="https://github.com/user-attachments/assets/1d40ab89-6723-4ea7-9109-69ee5394eef6" />


I can’t think of how to cap the encoder position at 20, however. I need to find a solution. 
<img width="212" height="100" alt="image" src="https://github.com/user-attachments/assets/3cc9cf35-4a9f-4147-902c-9df07de9c6c8" />


I was planning on controlling the motor speed using these encoder values, 
but I unfortunately don't have a power supply at the moment, so I couldn't test the motor 
(I had the plug, just not the EU adapter)
<img width="636" height="487" alt="image" src="https://github.com/user-attachments/assets/5bcac8a7-7175-48e9-ae08-4ab3dda685db" />



Next Tasks: 
Get a power supply and test the motor
Continue testing hardware
Find a better ptentiometer and put it in the schematic



### Recording Links

- https://lookout.hackclub.com/api/media/ef5baa33-2fd6-419d-9db0-e3fa48e674f2/video.mp4
- https://lookout.hackclub.com/api/media/e9ec7b1f-99b9-43f7-a91f-5863b54d79d1/video.mp4
