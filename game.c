#include <gbalib.h>

void shurispin(Sprite shuriken, Sprite shuriken2) {
    Size bulletsmall = {8,8};
    Position shuriken1spot = getPosition(shuriken);
    shuriken1spot.y += 1;
    shuriken1spot.x += 1;
    hideSprite(shuriken);
    updatePosition(shuriken2, shuriken1spot);
    showSprite(shuriken2);
    
    shuriken1spot.y += 1;
    shuriken1spot.x += 1;
    updatePosition(shuriken, shuriken1spot);
    hideSprite(shuriken2);
    showSprite(shuriken);
    wait(.01);
    updateScreen();
}
int main() {
    Size bulletsmall = {8,8};
    Sprite shuriken = createSprite("shuriken", bulletsmall);
    Sprite shuriken2 = createSprite("shuriken2", bulletsmall);
    Position upleft = {0,0};
    Background mainscreen = createBackground("charselect");
    drawBackground(mainscreen,upleft);
    updatePosition(shuriken,upleft);
    showSprite(shuriken);
    hideSprite(shuriken2);
    for (int i = 0; i < 160; i++) {
        shurispin(shuriken, shuriken2);
    } 
    // bool fightstart = false;
    // Background homescreen = createBackground("mainscreen");
    // Position backpos = {0,0};
    // drawBackground(homescreen, backpos);
    // Background characterselect = createBackground("charselect");
    // Size charselect = {64,64};
    // Size redsquaresize = {32,32};
    // // Sprite onepunchselect = createSprite("", charselect);
    // // Sprite obamaselect = createSprite("", charselect);
    // Sprite redsquare = createSprite("smallredsquare", redsquaresize);
    // Position onepunchselectpos = {20,20};
    // Position obamaselectpos = {90, 20};
//     bool mainscreen = true;
//     bool fighterselect = false;
//     int selectedchar = 0;
//     while (mainscreen == true) {
//         bool isAPressed = isButtonDown(A);
//         if (isAPressed == true) {
//             mainscreen = false;
//             fighterselect = true;
//         }
//     }
//     int once = 1;
//     while (fighterselect == true) {
//         drawBackground(characterselect, backpos);
//         showSprite(redsquare);
//         // updatePosition(onepunchselect, onepunchselectpos);
//         // updatePosition(obamaselect, obamaselectpos);
//         Color red = createColor(255,0,0);
//         Size charselectoutlinesize = {32,32};
//         if (selectedchar == 0) {
//             updatePosition(redsquare,onepunchselectpos);
//         }
//         // else if (selectedchar == 1) {
//         //     updatePosition(redsquare, obamaselectpos);
//         //}
//         bool isRightPressed = isButtonDown(B);
//         bool isLeftPressed = isButtonDown(A);
//         if (isRightPressed == true) {
//             if (selectedchar < 1) {
//                 selectedchar += 1;
//             }
//         }
//         if (isLeftPressed == true) {
//             if (selectedchar > 0) {
//                 selectedchar += -1;
//             }
//         }
//         bool isAPressed = isButtonDown(A);
//         if (isAPressed == true) {
//             bool fightstart = true;
//         }
//         updateScreen();
//     }
// }
}