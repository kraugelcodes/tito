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