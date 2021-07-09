#include <gbalib.h>

void shurispin(Sprite shuriken, Sprite shuriken2, Sprite mysprite, bool endloop)
{
    Size bulletsmall = {4, 4};

    if (!endloop)
    {
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
if (UpbuttonWasPressed == true && Sprite1pos.y > 0)
        {

            Sprite1pos.y = Sprite1pos.y - 5;
            updatePosition(mysprite, Sprite1pos);
        }

        if (DownbuttonWasPressed == true && Sprite1pos.y < 140)
        {

            Sprite1pos.y = Sprite1pos.y + 5;
            updatePosition(mysprite, Sprite1pos);
        }
        if (LeftbuttonWasPressed == true && Sprite1pos.x > 0)
        {

            Sprite1pos.x = Sprite1pos.x - 5;
            updatePosition(mysprite, Sprite1pos);
        }

        if (RightbuttonWasPressed == true && Sprite1pos.x < 220)
        {

            Sprite1pos.x = Sprite1pos.x + 5;
            updatePosition(mysprite, Sprite1pos);
        }

        updateScreen();
    }
}
void shurispin2(Sprite shuriken3, Sprite shuriken4, Sprite mysprite, bool endloop)
{
    Size bulletsmall = {4, 4};
    if (!endloop)
    {
        Position shuriken2spot = getPosition(shuriken3);
        shuriken2spot.y += 1;
        shuriken2spot.x += -1;
        hideSprite(shuriken3);
        updatePosition(shuriken4, shuriken2spot);
        showSprite(shuriken4);

        shuriken2spot.y += 1;
        shuriken2spot.x += -1;
        updatePosition(shuriken3, shuriken2spot);
        hideSprite(shuriken4);
        showSprite(shuriken3);
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
        if (UpbuttonWasPressed == true && Sprite1pos.y > 0)
        {

            Sprite1pos.y = Sprite1pos.y - 5;
            updatePosition(mysprite, Sprite1pos);
        }

        if (DownbuttonWasPressed == true && Sprite1pos.y < 140)
        {

            Sprite1pos.y = Sprite1pos.y + 5;
            updatePosition(mysprite, Sprite1pos);
        }
        if (LeftbuttonWasPressed == true && Sprite1pos.x > 0)
        {

            Sprite1pos.x = Sprite1pos.x - 5;
            updatePosition(mysprite, Sprite1pos);
        }

        if (RightbuttonWasPressed == true && Sprite1pos.x < 220)
        {

            Sprite1pos.x = Sprite1pos.x + 5;
            updatePosition(mysprite, Sprite1pos);
        }

        updateScreen();
    }
}
int main()
{
    while (true) {
    Size bulletsmall = {4, 4};
    bool endloop = false;
    bool alive = true;
    Size mysize = {16,16};
    Sprite mysprite = createSprite("redboy", mysize);
    Sprite mysprite2 = createSprite("blueboy", mysize);
    Sprite mysprite3 = createSprite("yellowboy", mysize);
    Sprite mysprite4 = createSprite("greenboy", mysize);
    Position upleft = {0, 0};
    Background home = createBackground("gameback");
    int selectedchar = 0;
    bool charselect = true;
    Sprite shuriken = createSprite("shuriken", bulletsmall);
    Sprite shuriken2 = createSprite("shuriken2", bulletsmall);
    Sprite shuriken3 = createSprite("shuriken", bulletsmall);
    Sprite shuriken4 = createSprite("shuriken2", bulletsmall);
    Position right = {240, 0};
    Background mainscreen = createBackground("charselect");
    drawBackground(mainscreen, upleft);
    updatePosition(shuriken, upleft);
    hideSprite(shuriken2);
    drawBackground(home,upleft);
    wait(1);
    bool mainscreenon = true;
    while (mainscreenon) {
        bool isAPressed = isButtonDown(A);
        bool isBPressed = isButtonDown(B);
        bool isRightPressed = isButtonDown(RIGHT);
        bool isLeftPressed = isButtonDown(LEFT);
        if (isAPressed) {
            selectedchar = 0;
            mainscreenon = false;
        }
        if (isBPressed) {
            selectedchar = 1;
            mainscreenon = false;
        }
        if (isRightPressed) {
            selectedchar = 2;
            mainscreenon = false;
        }
        if (isLeftPressed) {
            selectedchar = 3;
            mainscreenon = false;
        }
    }
    drawBackground(mainscreen,upleft);
    while (alive)
    {
        updatePosition(shuriken, upleft);
        showSprite(shuriken);
        hideSprite(shuriken2);
        updateScreen();
        wait(1);
        for (int i = 0; i < 160; i++)
        {
            if (alive) {
            shurispin(shuriken, shuriken2, mysprite, endloop);
            bool shuritouch = checkCollisionSprite(mysprite, shuriken);
            bool shuri2touch = checkCollisionSprite(mysprite, shuriken2);
            if (shuritouch || shuri2touch)
            {
                alive = false;
                endloop = true;
                drawBackground(home, upleft);
                    hideSprite(mysprite);
                    hideSprite(shuriken);
                    hideSprite(shuriken2);
                    hideSprite(shuriken3);
                    hideSprite(shuriken4);
            }}
            else {
                hideSprite(mysprite);
            }
        }
        if (alive) {
            updatePosition(shuriken3, right);
        showSprite(shuriken3);
        hideSprite(shuriken4);
        updateScreen(); }
        for (int j = 0; j < 160; j++)
        {
            if (alive) {
            shurispin2(shuriken3, shuriken4, mysprite, endloop);
            bool shuri3touch = checkCollisionSprite(mysprite, shuriken3);
            bool shuri4touch = checkCollisionSprite(mysprite, shuriken4);
            if (shuri3touch || shuri4touch)
            {
                alive = false;
                endloop = true;
                drawBackground(home,upleft);
                    hideSprite(mysprite);
                    hideSprite(shuriken);
                    hideSprite(shuriken2);
                    hideSprite(shuriken3);
                    hideSprite(shuriken4);
            }
        }
        else {
            hideSprite(mysprite);
        }}
    hideSprite(shuriken);
    hideSprite(shuriken3);
    }
    hideSprite(mysprite);
    hideSprite(shuriken);
    hideSprite(shuriken2);
    hideSprite(shuriken3);
    hideSprite(shuriken4);
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
