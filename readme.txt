Mr. Drillux (2019/02/17)
Ported from Miss Driller ver 0.05 (2000/11/5)

[Overview]

Mr. Driller (c) It is somewhat similar game to namco.
It is a test version. Several functions do not work.

[Controls]

A - Drill
B - Exit high score display
X - Complete name entry
Right Shoulder - Backspace
Start - Start game
Select - Exit game
Power - Exit game

[Operating environment]

RS-97 running RetroFW

A computer that uses 800 x 600 screen, 16 bit or more, the next OS.
Linux
Windows 9x
BeOS
FreeBSD 4.0
Irix
MacOS
Solaris
SDL-1.1.3 or later must be installed
Also, SDL_mixer - 1.0.5 or later must be installed (for now)

[Enclosed Files]

readme.txt This file
Makefile Makefile
* .c / *. h Various source files
Copying Lesser GNU General Public License documentation
bmp / ​​graphics file
wav / sound file
* .txt designation file


[How to operate]

Compiling
Just type make

■ Playing method

The program starts with / drill (or double click on drill.dge).

The game rule is Mr. Driller. Digging 1000 M is over.

Use the arrow keys to move, dig the space key.
In case of a joystick, move it as you turn the lever and dig it with the 0 button.

The name entry is character input by A button, correction by backspace (right shoulder), it is completed by return or X button. In case of joystick, 0 button is input, 1 button is corrected. Please use the keyboard return or 2 button to make the decision.

You can quit the game at any time by pressing the application exit button or the escape key.


■ Detailed specification change etc.

[Full screen]

in drill.ini
# FULLSCREEN YES
FULLSCREEN NO
Where you are
FULLSCREEN YES
# FULLSCREEN NO

If you change it to full screen etc. Please press ESC to end the game.

[Presence / absence of joystick]

in drill.ini
JOYSTICK_ENABLED
If you set it to NO, you will not read the joystick. Please discontinue use of the joystick if the driver does not work properly, the button keeps entering, or other trouble appears.


[Change log]

2019/02/17 - jbanes

Ported to RetroFW
Removed code to exit when brightness button is pressed
Added code to exit when power button is pressed
Moved main button from X to A
Added support for the X button completing the name entry screen (to match the instructions)
Added support for the B button exiting the high score screen (to match the instructions)
Packaged in IPK distribution
Added this translated file as a manual

2000/11/9 ver 0.05

Correction of drop algorithm
Fixed that 'Y' was missing in name entry character

2000/10/3 ver 0.04

Air recovery to 22%
Change of fall algorithm
Add a character graphic
Adding character animation
In addition, minor changes and additions on setting etc.

2000/9/17 ver 0.02a / 0.03

Joystick adjustment (0.02a)
Changing the block graphic (connected and visible)
Display of transit time
Lucky reset technique implementation
Change game speed
Daisy high score
Changing the main character graphic
Bug removal
Other, minor changes


2000/9/6 ver.0.02

Addition of forced termination of game by ESC
Addition of a function to press a F12 key to take a screenshot
Corrected Air's fall algorithm
Addition of setting file (addition of full screen switch etc.)
Bitmap files in one directory
Add high score input
Mimics the difficulty degree to the real thing (reference weekly The PlayStation 2000.9.15 reference)
Correspond to joystick input, slightly change input system
Addition of sound effects (experimental)
Other, add and change details

2000/8/31 ver.0.01

For the time being

[Others]

It is a test version.
Is there anyone who draws a picture of Hollis mi (pseudonym)?


I borrow the sound from the following.
http://tokyo.cool.ne.jp/cgf/sounds.html
Lasers flock through (laugh)


This program is programmed using Simple DirectMedia Layer (SDL). The latest version of SDL and SDL_mixer
http://www.devolution.com/~slouken/SDL/license.html
It is in SDL is distributed according to LGPL.
