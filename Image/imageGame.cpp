
#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);
    int x=0;

    HDC ForestImage = txLoadImage ("\\Forest.bmp");
    if (!ForestImage)
        txMessageBox ("Не могу загрузить фон из ForestImage.jpg", "Да, это из Интернета");

    while (!txGetAsyncKeyState (VK_ESCAPE))
        {
        txSetFillColor(TX_BLACK);
        txClear();
        txBitBlt (txDC(), 0, 0, 800, 600,ForestImage, 0, 0);

        if (txGetAsyncKeyState (VK_LEFT)) x--;
        if (txGetAsyncKeyState (VK_RIGHT)) x++;

        txSleep(15);
        }

    txDeleteDC(ForestImage);
    return 0;
    }
