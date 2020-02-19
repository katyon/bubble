// インクルード -------------------------------------------------------------------------------------
#include "DxLib.h"
#include <math.h>

#include "common.h"
#include "main.h"
#include "system.h"
#include "vec2.h"

// 関数 ----------------------------------------------------------------------------------------
// デバック文字を描画
void System::drawDebugString()
{
    SetFontSize(25);
    cr = GetColor(0, 200, 200);

}