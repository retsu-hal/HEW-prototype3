#pragma once

#include <d3d11.h>

//=========================================================================================================
// プロトタイプ宣言
//=========================================================================================================
void Player_Initialize(ID3D11Device* pDevice, ID3D11DeviceContext* pContext);
void Player_Finalize(void);
void Player_Update();
void Player_Draw(void);
void Player2D_Draw(void);
void Player3D_Draw(void);

