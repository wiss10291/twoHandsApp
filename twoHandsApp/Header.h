#include <stdlib.h>
#include <stdio.h>
#include "Leap.h"

#ifndef Header_H
#define Header_H

#define M_PI 3.14159265358979323846  /* pi */
#define RAD (M_PI / 180.0)

#endif

using namespace Leap;

/* グローバル変数 */
extern int   xBegin;               /* マウスドラッグの始点X座標 */
extern int   yBegin;               /* マウスドラッグの始点Y座標 */
extern int   PressButton;          /* 現在押されているマウスボタン（1:左,2:中,3:右） */
extern float CameraAzimuth;   /* カメラの位置（方位角） */
extern float CameraElevation;    /* カメラの位置（仰角） */
extern float CameraDistance;    /* カメラの位置（原点からの距離） */
extern float CameraX;            /* カメラの位置（X座標） */
extern float CameraY;            /* カメラの位置（Y座標） */
extern float CameraZ;            /* カメラの位置（Z座標） */
extern float BoxRotate;          /* 箱の回転角 */

extern float lengthL;       /* 左の一辺の長さ */
extern float lengthR;        /* 右の一辺の長さ */
extern float swipeSpead;           /* 人差し指のスワイプの速さ */
extern Vector swipeVector;          /* 右手の人差し指のスワイプの速度 */
extern Vector swipeCenter;         /* 回転体の中心方向を指すベクトル*/
extern bool flag;

