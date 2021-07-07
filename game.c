#include <gbalib.h>

void shurispin(Sprite shuriken, Sprite shuriken2, Sprite mysprite)
{
    Size bulletsmall = {8, 8};
    bool alive = true;
    while (alive) {
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
    Size mysize = {16, 16};
    showSprite(mysprite);

    //Sound mysound = createSound("song");
    //playSound(mysound, true);

    bool UpbuttonWasPressed = isButtonDown(UP);
    bool DownbuttonWasPressed = isButtonDown(DOWN);
    bool LeftbuttonWasPressed = isButtonDown(LEFT);
    bool RightbuttonWasPressed = isButtonDown(RIGHT);

    Position Sprite1pos = getPosition(mysprite);
    if (UpbuttonWasPressed == true)
    {

        Sprite1pos.y = Sprite1pos.y - 5;
        updatePosition(mysprite, Sprite1pos);
    }

    if (DownbuttonWasPressed == true)
    {

        Sprite1pos.y = Sprite1pos.y + 5;
        updatePosition(mysprite, Sprite1pos);
    }
    if (LeftbuttonWasPressed == true)
    {

        Sprite1pos.x = Sprite1pos.x - 5;
        updatePosition(mysprite, Sprite1pos);
    }

    if (RightbuttonWasPressed == true)
    {

        Sprite1pos.x = Sprite1pos.x + 5;
        updatePosition(mysprite, Sprite1pos);
    }
    bool shuritouch = checkCollisionSprite(mysprite, shuriken);
    bool shuri2touch = checkCollisionSprite(mysprite, shuriken2);
    if (shuritouch || shuri2touch)
    {
        bool alive = false;
    }
    updateScreen();
    }
}
int main(bool alive)
{
    Size bulletsmall = {8, 8};
    Sprite shuriken = createSprite("shuriken", bulletsmall);
    Sprite shuriken2 = createSprite("shuriken2", bulletsmall);
    Position upleft = {0, 0};
    Background mainscreen = createBackground("charselect");
    drawBackground(mainscreen, upleft);
    updatePosition(shuriken, upleft);
    showSprite(shuriken);
    hideSprite(shuriken2);
    Size mysize = {16,16};
    Sprite mysprite = createSprite("redboy", mysize);
    while (alive)
    {
        for (int i = 0; i < 160; i++)
        {
            shurispin(shuriken, shuriken2, mysprite);
        }
    }
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
