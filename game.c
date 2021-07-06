#include <gbalib.h>

int main() {
    bool fightstart = false;
    Background homescreen = createBackground("");
    Position backpos = {0,0};
    drawBackground(homescreen, backpos);
    Background characterselect = createBackground("");
    Size charselect = {64,64};
    Sprite onepunchselect = createSprite("", charselect);
    Sprite obamaselect = createSprite("", charselect);
    Position onepunchselectpos = {20,20};
    Position obamaselectpos = {90, 20};
    bool mainscreen = true;
    bool fighterselect = false;
    int selectedchar = 0;
    while (mainscreen == true) {
        bool isAPressed = isButtonDown("A");
        if (isAPressed == true) {
            mainscreen == false;
            fighterselect = true;
        }
    }
    while (fighterselect == true) {
        drawBackground(characterselect, backpos);
        showSprite(onepunchselect);
        updatePosition(onepunchselect, onepunchselectpos);
        updatePosition(obamaselect, obamaselectpos);
        
        bool isRightPressed = isButtonDown("RIGHT");
        bool isLeftPressed = isButtonDown("LEFT");
        if (isRightPressed == true) {
            while (selectedchar < 1) {
                selectedchar += 1;
            }
        }
        if (isLeftPressed == true) {
            while (selectedchar > 0) {
                selectedchar += -1;
            }
        }
        bool isAPressed = isButtonDown("A");
        if (isAPressed == true) {
            
        }
    }
    while (fightstart) {

    }
}

// Size mysize = {16, 16};
// Sprite mysprite = createSprite("sprite", mysize);
// showSprite(mysprite);

// //Sound mysound = createSound("song");
// //playSound(mysound, true);

// while (true) {

// bool UpbuttonWasPressed = isButtonDown(UP);
// bool DownbuttonWasPressed = isButtonDown(DOWN);
// bool LeftbuttonWasPressed = isButtonDown(LEFT);
// bool RightbuttonWasPressed = isButtonDown(RIGHT);
   
//    Position Sprite1pos = getPosition(mysprite);
//        if (UpbuttonWasPressed == true) {

// Sprite1pos.y=Sprite1pos.y-5;
// updatePosition(mysprite, Sprite1pos);
//        }

//        if (DownbuttonWasPressed == true) {

// Sprite1pos.y=Sprite1pos.y+5;
// updatePosition(mysprite, Sprite1pos);

//        }
//        if (LeftbuttonWasPressed == true) {

// Sprite1pos.x=Sprite1pos.x-5;
// updatePosition(mysprite, Sprite1pos);
//        }

//        if (RightbuttonWasPressed == true) {

// Sprite1pos.x=Sprite1pos.x+5;
// updatePosition(mysprite, Sprite1pos);
// }

// updateScreen();





// }
// }