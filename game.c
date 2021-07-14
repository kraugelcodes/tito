#include <gbalib.h>

void spritemove(Sprite mysprite, Sprite mysprite2, Sprite mysprite3, Sprite mysprite4, int selectedchar)
{
    bool UpbuttonWasPressed = isButtonDown(UP);
    bool DownbuttonWasPressed = isButtonDown(DOWN);
    bool LeftbuttonWasPressed = isButtonDown(LEFT);
    bool RightbuttonWasPressed = isButtonDown(RIGHT);
    if (selectedchar == 0)
    {
        Position Sprite1pos = getPosition(mysprite);
        if (UpbuttonWasPressed == true && Sprite1pos.y > 0)
        {

            Sprite1pos.y = Sprite1pos.y - 1;
            updatePosition(mysprite, Sprite1pos);
        }

        if (DownbuttonWasPressed == true && Sprite1pos.y < 140)
        {

            Sprite1pos.y = Sprite1pos.y + 1;
            updatePosition(mysprite, Sprite1pos);
        }
        if (LeftbuttonWasPressed == true && Sprite1pos.x > 0)
        {

            Sprite1pos.x = Sprite1pos.x - 1;
            updatePosition(mysprite, Sprite1pos);
        }

        if (RightbuttonWasPressed == true && Sprite1pos.x < 220)
        {

            Sprite1pos.x = Sprite1pos.x + 1;
            updatePosition(mysprite, Sprite1pos);
        }
    }
    if (selectedchar == 1)
    {
        Position Sprite1pos = getPosition(mysprite2);
        if (UpbuttonWasPressed == true && Sprite1pos.y > 0)
        {

            Sprite1pos.y = Sprite1pos.y - 1;
            updatePosition(mysprite2, Sprite1pos);
        }

        if (DownbuttonWasPressed == true && Sprite1pos.y < 140)
        {

            Sprite1pos.y = Sprite1pos.y + 1;
            updatePosition(mysprite2, Sprite1pos);
        }
        if (LeftbuttonWasPressed == true && Sprite1pos.x > 0)
        {

            Sprite1pos.x = Sprite1pos.x - 1;
            updatePosition(mysprite2, Sprite1pos);
        }

        if (RightbuttonWasPressed == true && Sprite1pos.x < 220)
        {

            Sprite1pos.x = Sprite1pos.x + 1;
            updatePosition(mysprite2, Sprite1pos);
        }
    }
    if (selectedchar == 2)
    {
        Position Sprite1pos = getPosition(mysprite3);
        if (UpbuttonWasPressed == true && Sprite1pos.y > 0)
        {

            Sprite1pos.y = Sprite1pos.y - 1;
            updatePosition(mysprite3, Sprite1pos);
        }

        if (DownbuttonWasPressed == true && Sprite1pos.y < 140)
        {

            Sprite1pos.y = Sprite1pos.y + 1;
            updatePosition(mysprite3, Sprite1pos);
        }
        if (LeftbuttonWasPressed == true && Sprite1pos.x > 0)
        {

            Sprite1pos.x = Sprite1pos.x - 1;
            updatePosition(mysprite3, Sprite1pos);
        }

        if (RightbuttonWasPressed == true && Sprite1pos.x < 220)
        {

            Sprite1pos.x = Sprite1pos.x + 1;
            updatePosition(mysprite3, Sprite1pos);
        }
    }
    if (selectedchar == 3)
    {
        Position Sprite1pos = getPosition(mysprite4);
        if (UpbuttonWasPressed == true && Sprite1pos.y > 0)
        {

            Sprite1pos.y = Sprite1pos.y - 1;
            updatePosition(mysprite4, Sprite1pos);
        }

        if (DownbuttonWasPressed == true && Sprite1pos.y < 140)
        {

            Sprite1pos.y = Sprite1pos.y + 1;
            updatePosition(mysprite4, Sprite1pos);
        }
        if (LeftbuttonWasPressed == true && Sprite1pos.x > 0)
        {

            Sprite1pos.x = Sprite1pos.x - 1;
            updatePosition(mysprite4, Sprite1pos);
        }

        if (RightbuttonWasPressed == true && Sprite1pos.x < 220)
        {

            Sprite1pos.x = Sprite1pos.x + 1;
            updatePosition(mysprite4, Sprite1pos);
        }
    }
}
void shurispindownright(Sprite shuriken, Sprite mysprite, bool endloop, Sprite mysprite2,
                        Sprite mysprite3, Sprite mysprite4, int selectedchar)
{

    if (!endloop)
    {
        Position shuriken1spot = getPosition(shuriken);
        if (shuriken1spot.y <= 165 && shuriken1spot.x <= 245)
        {
            shuriken1spot.y += 1;
            shuriken1spot.x += 1;
            updatePosition(shuriken, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void shurispindownleft(Sprite shuriken2, Sprite mysprite, bool endloop, Sprite mysprite2,
                       Sprite mysprite3, Sprite mysprite4, int selectedchar)
{

    if (!endloop)
    {
        Position shuriken1spot = getPosition(shuriken2);
        if (shuriken1spot.y <= 165 && shuriken1spot.x >= -5)
        {
            shuriken1spot.y += 1;
            shuriken1spot.x += -1;
            updatePosition(shuriken2, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void shurispinupright(Sprite shuriken3, Sprite mysprite, bool endloop, Sprite mysprite2,
                      Sprite mysprite3, Sprite mysprite4, int selectedchar)
{

    if (!endloop)
    {
        Position shuriken1spot = getPosition(shuriken3);
        if (shuriken1spot.y >= -5 && shuriken1spot.x <= 245)
        {
            shuriken1spot.y += -1;
            shuriken1spot.x += 1;
            updatePosition(shuriken3, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void shurispinupleft(Sprite shuriken4, Sprite mysprite, bool endloop, Sprite mysprite2,
                     Sprite mysprite3, Sprite mysprite4, int selectedchar)
{

    if (!endloop)
    {
        Position shuriken1spot = getPosition(shuriken4);
        if (shuriken1spot.y >= -5 && shuriken1spot.x >= -5)
        {
            shuriken1spot.y += -1;
            shuriken1spot.x += -1;
            updatePosition(shuriken4, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void bulshape1downleft(Sprite bulletshape1, bool endloop, Sprite mysprite, Sprite mysprite2, Sprite mysprite3, Sprite mysprite4, int selectedchar)
{
    if (!endloop)
    {
        Position shuriken1spot = getPosition(bulletshape1);
        if (shuriken1spot.y <= 245 && shuriken1spot.x >= -5)
        {
            shuriken1spot.y += 1;
            shuriken1spot.x += -1;
            updatePosition(bulletshape1, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void bulshape1upright(Sprite bulletshape1, bool endloop, Sprite mysprite, Sprite mysprite2, Sprite mysprite3, Sprite mysprite4, int selectedchar)
{
    if (!endloop)
    {
        Position shuriken1spot = getPosition(bulletshape1);
        if (shuriken1spot.y >= -5 && shuriken1spot.x <= 245)
        {
            shuriken1spot.y += -1;
            shuriken1spot.x += 1;
            updatePosition(bulletshape1, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void horizontalbulletlr(Sprite bulletshape1, bool endloop, Sprite mysprite, Sprite mysprite2, Sprite mysprite3, Sprite mysprite4, int selectedchar)
{
    if (!endloop)
    {
        Position shuriken1spot = getPosition(bulletshape1);
        if (shuriken1spot.y >= -5 && shuriken1spot.x <= 245)
        {
            shuriken1spot.y += 0;
            shuriken1spot.x += 1;
            updatePosition(bulletshape1, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void horizontalbulletrl(Sprite bulletshape1, bool endloop, Sprite mysprite, Sprite mysprite2, Sprite mysprite3, Sprite mysprite4, int selectedchar)
{
    if (!endloop)
    {
        Position shuriken1spot = getPosition(bulletshape1);
        if (shuriken1spot.y >= -10 && shuriken1spot.x >= -10)
        {
            shuriken1spot.y += 0;
            shuriken1spot.x += -1;
            updatePosition(bulletshape1, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void verticalbulletdown(Sprite bulletshape1, bool endloop, Sprite mysprite, Sprite mysprite2, Sprite mysprite3, Sprite mysprite4, int selectedchar)
{
    if (!endloop)
    {
        Position shuriken1spot = getPosition(bulletshape1);
        if (shuriken1spot.y <= 245 && shuriken1spot.x >= -10)
        {
            shuriken1spot.y += 1;
            shuriken1spot.x += 0;
            updatePosition(bulletshape1, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
void verticalbulletup(Sprite bulletshape1, bool endloop, Sprite mysprite, Sprite mysprite2, Sprite mysprite3, Sprite mysprite4, int selectedchar)
{
    if (!endloop)
    {
        Position shuriken1spot = getPosition(bulletshape1);
        if (shuriken1spot.y >= -10 && shuriken1spot.x >= -10)
        {
            shuriken1spot.y += -1;
            shuriken1spot.x += 0;
            updatePosition(bulletshape1, shuriken1spot);
        }
        //Sound mysound = createSound("song");
        //playSound(mysound, true);
    }
}
bool collisioncheck(bool collisioncheck, Sprite mysprite, Sprite shuriken, Sprite shuriken2,
                    Sprite shuriken3, Sprite shuriken4, Sprite bulshape1, Sprite bulshape2)
{
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken2);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken3);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken4);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bulshape1);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bulshape2);
    }
    return collisioncheck;
}
bool collisioncheck2(bool collisioncheck, Sprite mysprite, Sprite shuriken, Sprite shuriken2,
                     Sprite shuriken3, Sprite shuriken4, Sprite bul1, Sprite bul2, Sprite bul3, Sprite bul4, Sprite bul5, Sprite bul6,
                     Sprite bul7, Sprite bul8)
{
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken2);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken3);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, shuriken4);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul1);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul2);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul3);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul4);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul5);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul6);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul7);
    }
    if (!collisioncheck)
    {
        collisioncheck = checkCollisionSprite(mysprite, bul8);
    }
    return collisioncheck;
}
int main()
{

    Size bulletsmall = {4, 4};
    Size bulletmed = {4, 4};
    Position upright = {240, 0};
    Size mysize = {16, 16};
    Position upleft = {0, 0};
    Position downleft = {0, 160};
    Position downright = {240, 160};
    Position randomupleft = {randomInteger(-40, 0), randomInteger(-40, 0)};
    Position center = {120, 80};
    Sprite mysprite = createSprite("redboy", mysize);
    Sprite mysprite2 = createSprite("blueboy", mysize);
    Sprite mysprite3 = createSprite("yellowboy", mysize);
    Sprite mysprite4 = createSprite("greenboy", mysize);
    Sprite shuriken = createSprite("shuriken", bulletsmall);
    Sprite shuriken2 = createSprite("shuriken2", bulletsmall);
    Sprite shuriken3 = createSprite("shuriken", bulletsmall);
    Sprite shuriken4 = createSprite("shuriken2", bulletsmall);
    Sprite bulletshape1 = createSprite("bullet", bulletmed);
    Sprite bulletshape1v2 = createSprite("bullet", bulletmed);
    Sprite hori1 = createSprite("rightbullet3", bulletmed);
    Sprite hori2 = createSprite("rightbullet3", bulletmed);
    Sprite hori3 = createSprite("rightbullet3", bulletmed);
    Sprite verti4 = createSprite("upsidedownbullet2", bulletmed);
    Sprite verti5 = createSprite("upsidedownbullet2", bulletmed);
    Sprite verti6 = createSprite("upsidedownbullet2", bulletmed);
    Sprite verti1 = createSprite("bullet2", bulletmed);
    Sprite verti2 = createSprite("bullet2", bulletmed);
    Sprite verti3 = createSprite("bullet2", bulletmed);
    Sprite hori4 = createSprite("leftbullet2", bulletmed);
    Sprite hori5 = createSprite("leftbullet2", bulletmed);
    Sprite hori6 = createSprite("leftbullet2", bulletmed);
    Background mainscreen = createBackground("charselect");
    Background home = createBackground("gameback");
    while (true)
    {
        hideSprite(mysprite);
        hideSprite(mysprite2);
        hideSprite(mysprite3);
        hideSprite(mysprite4);
        hideSprite(shuriken);
        hideSprite(shuriken2);
        hideSprite(shuriken3);
        hideSprite(shuriken4);
        hideSprite(bulletshape1);
        hideSprite(bulletshape1v2);
        bool collision = false;
        int score = 0;
        bool endloop = false;
        bool alive = true;
        int selectedchar = 0;
        bool charselect = true;
        drawBackground(home, upleft);
        hideSprite(mysprite);
        hideSprite(mysprite2);
        hideSprite(mysprite3);
        hideSprite(mysprite4);
        hideSprite(shuriken);
        hideSprite(shuriken2);
        hideSprite(shuriken3);
        hideSprite(shuriken4);
        hideSprite(bulletshape1);
        hideSprite(bulletshape1v2);
        bool mainscreenon = true;
        while (mainscreenon)
        {
            bool isAPressed = isButtonDown(A);
            bool isBPressed = isButtonDown(B);
            bool isRightPressed = isButtonDown(RIGHT);
            bool isLeftPressed = isButtonDown(LEFT);
            if (isAPressed)
            {
                selectedchar = 0;
                mainscreenon = false;
            }
            if (isBPressed)
            {
                selectedchar = 1;
                mainscreenon = false;
            }
            if (isRightPressed)
            {
                selectedchar = 2;
                mainscreenon = false;
            }
            if (isLeftPressed)
            {
                selectedchar = 3;
                mainscreenon = false;
            }
        }
        drawBackground(mainscreen, upleft);
        if (selectedchar == 0)
        {
            showSprite(mysprite);
            updatePosition(mysprite, center);
        }
        if (selectedchar == 1)
        {
            showSprite(mysprite2);
            updatePosition(mysprite2, center);
        }
        if (selectedchar == 2)
        {
            showSprite(mysprite3);
            updatePosition(mysprite3, center);
        }
        if (selectedchar == 3)
        {
            showSprite(mysprite4);
            updatePosition(mysprite4, center);
        }
        updateScreen();
        while (alive)
        {
            // int timestall = 0;
            // for (int i = 0; i < 40; i++)
            // {
            //     timestall += 1;
            //     spritemove(mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
            // }
            // updatePosition(shuriken, upleft);
            // updatePosition(shuriken2, upright);
            // updatePosition(shuriken3, downleft);
            // updatePosition(shuriken4, downright);
            // showSprite(shuriken);
            // showSprite(shuriken2);
            // showSprite(shuriken3);
            // showSprite(shuriken4);
            // for (int i = 0; i < 300; i++)
            // {
            //     if (alive)
            //     {
            //         shurispindownright(shuriken, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
            //         shurispindownleft(shuriken2, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
            //         shurispinupright(shuriken3, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
            //         shurispinupleft(shuriken4, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
            //         if (selectedchar == 0)
            //         {
            //             collision = collisioncheck(collision, mysprite, shuriken, shuriken2, shuriken3,
            //                                        shuriken4);
            //         }
            //         if (selectedchar == 1)
            //         {
            //             collision = collisioncheck(collision, mysprite2, shuriken, shuriken2, shuriken3,
            //                                        shuriken4);
            //         }
            //         if (selectedchar == 2)
            //         {
            //             collision = collisioncheck(collision, mysprite3, shuriken, shuriken2, shuriken3,
            //                                        shuriken4);
            //         }
            //         if (selectedchar == 3)
            //         {
            //             collision = collisioncheck(collision, mysprite4, shuriken, shuriken2, shuriken3,
            //                                        shuriken4);
            //         }
            //         updateScreen();
            //         if (collision)
            //         {
            //             alive = false;
            //             endloop = true;
            //             drawBackground(home, upleft);
            //             hideSprite(mysprite);
            //             hideSprite(mysprite2);
            //             hideSprite(mysprite3);
            //             hideSprite(mysprite4);
            //             hideSprite(shuriken);
            //             hideSprite(shuriken2);
            //             hideSprite(shuriken3);
            //             hideSprite(shuriken4);
            //             hideSprite(bulletshape1);
            //             hideSprite(bulletshape1v2);
            //             updateScreen();
            //         }
            //     }
            // }
            // for (int i = 0; i < 40; i++)
            // {
            //     timestall += 1;
            //     spritemove(mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
            // }
            // updatePosition(bulletshape1, downleft);
            // updatePosition(bulletshape1v2, upright);
            // for (int i = 0; i < 165; i++)
            // {

            //     bulshape1upright(bulletshape1, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
            //     bulshape1downleft(bulletshape1v2, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
            //     if (selectedchar == 0)
            //     {
            //         collision = collisioncheck(collision, mysprite, bulletshape1, bulletshape1v2, shuriken3,
            //                                    shuriken4, shuriken2, shuriken);
            //     }
            //     if (selectedchar == 1)
            //     {
            //         collision = collisioncheck(collision, mysprite2, bulletshape1, bulletshape1v2, shuriken3,
            //                                    shuriken4, shuriken, shuriken2);
            //     }
            //     if (selectedchar == 2)
            //     {
            //         collision = collisioncheck(collision, mysprite3, bulletshape1, bulletshape1v2, shuriken3,
            //                                    shuriken4, shuriken, shuriken2);
            //     }
            //     if (selectedchar == 3)
            //     {
            //         collision = collisioncheck(collision, mysprite4, bulletshape1, bulletshape1v2, shuriken3,
            //                                    shuriken4, shuriken, shuriken2);
            //     }
            //     updateScreen();
            //     if (collision)
            //     {
            //         alive = false;
            //         endloop = true;
            //         drawBackground(home, upleft);
            //         hideSprite(mysprite);
            //         hideSprite(mysprite2);
            //         hideSprite(mysprite3);
            //         hideSprite(mysprite4);
            //         hideSprite(shuriken);
            //         hideSprite(shuriken2);
            //         hideSprite(shuriken3);
            //         hideSprite(shuriken4);
            //         hideSprite(bulletshape1);
            //         hideSprite(bulletshape1v2);
            //         updateScreen();
            //     }
            // }
            // Position ranleftaxis = {0, randomInteger(0, 160)};
            // Position ranleftaxis2 = {0, randomInteger(0, 160)};
            // Position ranleftaxis3 = {0, randomInteger(0, 160)};
            // updatePosition(hori1, ranleftaxis);
            // updatePosition(hori2, ranleftaxis2);
            // updatePosition(hori3, ranleftaxis3);
            // updatePosition(bulletshape1, downleft);
            // for (int i = 0; i < 245; i++)
            // {

            //     horizontalbulletlr(hori1, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
            //     horizontalbulletlr(hori2, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
            //     horizontalbulletlr(hori3, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
            //     bulshape1upright(bulletshape1, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);

            //     if (selectedchar == 0)
            //     {
            //         collision = collisioncheck(collision, mysprite, hori1, hori2, hori3,
            //                                    bulletshape1);
            //     }
            //     if (selectedchar == 1)
            //     {
            //         collision = collisioncheck(collision, mysprite2, hori1, hori2, hori3,
            //                                    bulletshape1);
            //     }
            //     if (selectedchar == 2)
            //     {
            //         collision = collisioncheck(collision, mysprite3, hori1, hori2, hori3,
            //                                    bulletshape1);
            //     }
            //     if (selectedchar == 3)
            //     {
            //         collision = collisioncheck(collision, mysprite4, hori1, hori2, hori3,
            //                                    bulletshape1);
            //     }
            //     updateScreen();
            //     if (collision)
            //     {
            //         alive = false;
            //         endloop = true;
            //         drawBackground(home, upleft);
            //         hideSprite(mysprite);
            //         hideSprite(mysprite2);
            //         hideSprite(mysprite3);
            //         hideSprite(mysprite4);
            //         hideSprite(shuriken);
            //         hideSprite(shuriken2);
            //         hideSprite(shuriken3);
            //         hideSprite(shuriken4);
            //         hideSprite(bulletshape1);
            //         hideSprite(bulletshape1v2);
            //         hideSprite(hori1);
            //         hideSprite(hori2);
            //         hideSprite(hori3);
            //         updateScreen();
            //     }
            // }
            updateScreen();
            Position ranleftaxis = {0, randomInteger(0, 160)};
            Position ranleftaxis2 = {0, randomInteger(0, 160)};
            Position ranleftaxis3 = {0, randomInteger(0, 160)};
            updatePosition(hori1, ranleftaxis);
            updatePosition(hori2, ranleftaxis2);
            updatePosition(hori3, ranleftaxis3);
            Sprite hori4 = createSprite("leftbullet2", bulletmed);
            Sprite hori5 = createSprite("leftbullet2", bulletmed);
            Sprite hori6 = createSprite("leftbullet2", bulletmed);
            Position ranrightaxis = {240, randomInteger(0, 160)};
            Position ranrightaxis2 = {240, randomInteger(0, 160)};
            Position ranrightaxis3 = {240, randomInteger(0, 160)};
            updatePosition(hori4, ranrightaxis);
            updatePosition(hori5, ranrightaxis2);
            updatePosition(hori6, ranrightaxis3);
            Position ranlowaxis = {randomInteger(0, 240), 160};
            Position ranlowaxis2 = {randomInteger(0, 240), 160};
            Position ranlowaxis3 = {randomInteger(0, 240), 160};
            updatePosition(verti1, ranlowaxis);
            updatePosition(verti2, ranlowaxis2);
            updatePosition(verti3, ranlowaxis3);
            Position ranupaxis = {randomInteger(0, 240), 0};
            Position ranupaxis2 = {randomInteger(0, 240), 0};
            Position ranupaxis3 = {randomInteger(0, 240), 0};
            updatePosition(verti4, ranupaxis);
            updatePosition(verti5, ranupaxis2);
            updatePosition(verti6, ranupaxis3);
            updatePosition(shuriken, upleft);
            updatePosition(shuriken2, upright);
            updatePosition(shuriken3, downleft);
            updatePosition(shuriken4, downright);
            updatePosition(bulletshape1, downleft);
            updatePosition(bulletshape1v2, upright);
            showSprite(shuriken);
            showSprite(shuriken2);
            showSprite(shuriken3);
            showSprite(shuriken4);
            showSprite(bulletshape1);
            showSprite(bulletshape1v2);
            showSprite(hori1);
            showSprite(hori2);
            showSprite(hori3);
            showSprite(hori4);
            showSprite(hori5);
            showSprite(hori6);
            showSprite(verti1);
            showSprite(verti2);
            showSprite(verti3);
            showSprite(verti4);
            showSprite(verti5);
            showSprite(verti6);
            for (int i = 0; i < 248; i++)
            {

                horizontalbulletlr(hori1, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                horizontalbulletlr(hori2, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                horizontalbulletlr(hori3, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                horizontalbulletrl(hori4, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                horizontalbulletrl(hori5, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                horizontalbulletrl(hori6, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                verticalbulletup(verti1, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                verticalbulletup(verti2, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                verticalbulletup(verti3, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                verticalbulletdown(verti4, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                verticalbulletdown(verti5, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                verticalbulletdown(verti6, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                bulshape1upright(bulletshape1, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                bulshape1downleft(bulletshape1v2, endloop, mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                shurispindownright(shuriken, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
                shurispindownleft(shuriken2, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
                shurispinupright(shuriken3, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
                shurispinupleft(shuriken4, mysprite, endloop, mysprite2, mysprite3, mysprite4, selectedchar);
                spritemove(mysprite, mysprite2, mysprite3, mysprite4, selectedchar);
                
                if (selectedchar == 0)
                {
                    collision = collisioncheck(collision, mysprite, bulletshape1, bulletshape1v2, shuriken3,
                                               shuriken4, shuriken, shuriken2);
                }
                if (selectedchar == 1)
                {
                    collision = collisioncheck(collision, mysprite2, bulletshape1, bulletshape1v2, shuriken3,
                                               shuriken4, shuriken, shuriken2);
                }
                if (selectedchar == 2)
                {
                    collision = collisioncheck(collision, mysprite3, bulletshape1, bulletshape1v2, shuriken3,
                                               shuriken4, shuriken, shuriken2);
                }
                if (selectedchar == 3)
                {
                    collision = collisioncheck(collision, mysprite4, bulletshape1, bulletshape1v2, shuriken3,
                                               shuriken4, shuriken, shuriken2);
                }
                // Color black = createColor(0,0,0);
                // Position scoreboard = {0,0};
                // drawBackground(mainscreen, upleft);
                // drawIntegerText(score,black, scoreboard);
                // score += 1;
                
                updateScreen();
                
                if (collision)
                {
                    alive = false;
                    endloop = true;
                    drawBackground(home, upleft);
                    hideSprite(mysprite);
                    hideSprite(mysprite2);
                    hideSprite(mysprite3);
                    hideSprite(mysprite4);
                    hideSprite(shuriken);
                    hideSprite(shuriken2);
                    hideSprite(shuriken3);
                    hideSprite(shuriken4);
                    hideSprite(bulletshape1);
                    hideSprite(bulletshape1v2);
                    updateScreen();
                }
                if (!collision)
                {

                    if (selectedchar == 0)
                    {
                        collision = collisioncheck2(collision, mysprite, hori1, hori2, hori3,
                                                    hori4, hori5, hori6, verti1, verti2, verti3,
                                                    verti4, verti5, verti6);
                    }
                    if (selectedchar == 1)
                    {
                        collision = collisioncheck2(collision, mysprite2, hori1, hori2, hori3,
                                                    hori4, hori5, hori6, verti1, verti2, verti3,
                                                    verti4, verti5, verti6);
                    }
                    if (selectedchar == 2)
                    {
                        collision = collisioncheck2(collision, mysprite3, hori1, hori2, hori3,
                                                    hori4, hori5, hori6, verti1, verti2, verti3,
                                                    verti4, verti5, verti6);
                    }
                    if (selectedchar == 3)
                    {
                        collision = collisioncheck2(collision, mysprite4, hori1, hori2, hori3,
                                                    hori4, hori5, hori6, verti1, verti2, verti3,
                                                    verti4, verti5, verti6);
                    }
                }

                if (collision)
                {
                    alive = false;
                    endloop = true;
                    drawBackground(home, upleft);
                    hideSprite(mysprite);
                    hideSprite(mysprite2);
                    hideSprite(mysprite3);
                    hideSprite(mysprite4);
                    hideSprite(hori4);
                    hideSprite(hori5);
                    hideSprite(hori6);
                    hideSprite(verti1);
                    hideSprite(verti2);
                    hideSprite(verti3);
                    hideSprite(hori1);
                    hideSprite(hori2);
                    hideSprite(hori3);
                    hideSprite(verti4);
                    hideSprite(verti5);
                    hideSprite(verti6);
                    hideSprite(shuriken);
                    hideSprite(shuriken2);
                    hideSprite(shuriken3);
                    hideSprite(shuriken4);
                    hideSprite(bulletshape1);
                    hideSprite(bulletshape1v2);
                    collision = false;
                    updateScreen();
                }
            }
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
