#pragma once

// 定数 ----------------------------------------------------------------
#define SCREEN_WIDTH    (1920)
#define SCREEN_HEIGHT   (1080)

// クラス --------------------------------------------------------------
class System
{
public:
    void    drawDebugString();

private:
    unsigned int cr = 0;

};