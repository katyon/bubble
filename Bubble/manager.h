#pragma once
#include "singleton.h"
// 定数 ----------------------------------------------------------------

// クラス --------------------------------------------------------------
#define M_GameManager GameManager::getInstance()
class GameManager : public Singleton<GameManager>
{
public:
    void init(void);
    void update(void);
    void draw(void);
    void end(void);

    bool clear = false;
private:
};