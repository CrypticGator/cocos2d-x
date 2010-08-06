//------------------------------------------------------------------------------
//                      test_uphone_Res_c.h
//              资源编译器转换文件数据定义文件
//
//
//        Copyright (C) Tranzda CORPORATION
//
//---┤编译器信息├---
//   编译器名称: TR3C.exe 
//   编译器版本: TG3 资源编译器 版本V1.5  Build 87
//
//---┤注意├---
// 警告：未经允许，任何人不准擅自修改此文件!!!否则后果自负!
//
//------------------------------------------------------------------------------
#include "test_uphone_res_h.h" //类型定义头文件 
#ifndef WIN32 
//#pragma diag_remark 1296 
#endif
#if 10<RES_VERSION 
#error Resource file version too low!Must be compiled with higher version TR3C.
#endif


/************************************************************
*     Language:CHS
*************************************************************/




/*-------------------------------------------------------------
*     ID为TEST_U_ID_Form1002窗体的数据
------------------------------------------------------------*/


const ResWindowType TEST_U_Form1002 =
{
  {//资源公共头部定义
    TEST_U_ID_Form1002,//资源ID
    RES_CLASS_FORM,//资源类型为FORM(窗体)类型
    sizeof(ResWindowType),//资源大小
    -1,//父资源ID(窗体没有故为-1)
    0,//Tag
    0//StyleOption
  },//资源公共头部定义结束
  {//ControlAttrType属性
    0,//Enabled,(nouse here)
    0,//Visibled,(nouse here)
    0,//Ctl3D,,(nouse here)
    0,//TabStop,(nouse here)
    0,//ReadOnly,(nouse here)
    0,//ImeEnable,(nouse here)
    0,//WordWrap,(nouse here)
    0,//TopLeftIsLock,(nouse here)
    0,//Check,(nouse here)
    0,//MultiLine,(nouse here) 
    0,//AutoSize,(nouse here)
    0,//Modal, 
    0,//Numeric ,Field Use
    0,//AutoShift,Field Use
    0,//DynamicSize,Field Use
    0,//UnderLine,Field Use
    0,//BIClose
    0,//HasStatusBar
    0,//BIAction
    0,//BIMaximize
    0,//ForceShowTitle
    0,//Graphical,(nouse here)
    0,//sbmHasVertical,垂直滚动条
    0,//sbmHasHorizontal，水平滚动条
    0,//sbmAuto,滚动条自动出现
    0,//hasImage
    0,//hasCheckBox
    1,//UseSYSDefColor
    0,//Smooth
    0,//ShowText
    1,//TransParent
    0//OwnerDraw
  },
  {//PanelAttr
    2,//HScrollMode,0-auto,1-enable,2-disable
    0,//VScrollMode,0-auto,1-enable,2-disable
  },
  0X3, // BackColor
  0X2, // ForeColor
  {{0, 0}, {320, 480}}, // RectangleType windowBounds
  0, // 控件个数
  {//ResWindowExAttrType
    0,//closeBtnStyle
    0,//actionBtnStyle
    0,//hasSystemStatusBar
    1,//fullScreen
  },
  NULL, // 标题（当前窗体没有标题，故为空！）
  NULL, // 关闭按钮文字（当前为空！）
  NULL, // action button text = null
  0, //CharSet
  stdFont,//Font
  -1, //MainMenuID(-1为没有主菜单)
  TG3_WINDOW_MOVIE_MODE_DEFAULT						, // 启动动画模式
  TG3_WINDOW_MOVIE_MODE_DEFAULT						, // 关闭动画模式
  NULL, // 指向控件列表(没有控件，所以为空！)
  0, // 旋转参考表子项个数
  NULL // 界面旋转参考表(空)
};//窗体TEST_U_Form1002资源数据常量结束
const ResourceLangRegisterEntry TEST_U_CHS_Resource[] = 
{
  {kWindowRscType,TEST_U_ID_Form1002,(void*)&TEST_U_Form1002,sizeof(TEST_U_Form1002)}   
};

const ResourceLangRegisterEntry2  TEST_U_CHS_ResourceEntry = 
{
  tgresource_tag,
  10,//res version
  0,//subVersionValue
  0,//reserved1
  0,//reserved2
  TEST_U_CHS_Resource
};


/************************************************************
*     Language:ENU
*************************************************************/




/*-------------------------------------------------------------
*     ID为TEST_U_ID_Form1002窗体的数据
------------------------------------------------------------*/


const ResWindowType TEST_U_ENU_Form1002 =
{
  {//资源公共头部定义
    TEST_U_ID_Form1002,//资源ID
    RES_CLASS_FORM,//资源类型为FORM(窗体)类型
    sizeof(ResWindowType),//资源大小
    -1,//父资源ID(窗体没有故为-1)
    0,//Tag
    0//StyleOption
  },//资源公共头部定义结束
  {//ControlAttrType属性
    0,//Enabled,(nouse here)
    0,//Visibled,(nouse here)
    0,//Ctl3D,,(nouse here)
    0,//TabStop,(nouse here)
    0,//ReadOnly,(nouse here)
    0,//ImeEnable,(nouse here)
    0,//WordWrap,(nouse here)
    0,//TopLeftIsLock,(nouse here)
    0,//Check,(nouse here)
    0,//MultiLine,(nouse here) 
    0,//AutoSize,(nouse here)
    0,//Modal, 
    0,//Numeric ,Field Use
    0,//AutoShift,Field Use
    0,//DynamicSize,Field Use
    0,//UnderLine,Field Use
    1,//BIClose
    0,//HasStatusBar
    0,//BIAction
    0,//BIMaximize
    0,//ForceShowTitle
    0,//Graphical,(nouse here)
    0,//sbmHasVertical,垂直滚动条
    0,//sbmHasHorizontal，水平滚动条
    0,//sbmAuto,滚动条自动出现
    0,//hasImage
    0,//hasCheckBox
    1,//UseSYSDefColor
    0,//Smooth
    0,//ShowText
    1,//TransParent
    0//OwnerDraw
  },
  {//PanelAttr
    2,//HScrollMode,0-auto,1-enable,2-disable
    0,//VScrollMode,0-auto,1-enable,2-disable
  },
  0X3, // BackColor
  0X2, // ForeColor
  {{0, 0}, {320, 480}}, // RectangleType windowBounds
  0, // 控件个数
  {//ResWindowExAttrType
    0,//closeBtnStyle
    0,//actionBtnStyle
    0,//hasSystemStatusBar
    0,//fullScreen
  },
  NULL, // 标题（当前窗体没有标题，故为空！）
  NULL, // 关闭按钮文字（当前为空！）
  NULL, // action button text = null
  0, //CharSet
  stdFont,//Font
  -1, //MainMenuID(-1为没有主菜单)
  TG3_WINDOW_MOVIE_MODE_DEFAULT						, // 启动动画模式
  TG3_WINDOW_MOVIE_MODE_DEFAULT						, // 关闭动画模式
  NULL, // 指向控件列表(没有控件，所以为空！)
  0, // 旋转参考表子项个数
  NULL // 界面旋转参考表(空)
};//窗体TEST_U_ENU_Form1002资源数据常量结束
const ResourceLangRegisterEntry TEST_U_ENU_Resource[] = 
{
  {kWindowRscType,TEST_U_ID_Form1002,(void*)&TEST_U_ENU_Form1002,sizeof(TEST_U_ENU_Form1002)}   
};

const ResourceLangRegisterEntry2  TEST_U_ENU_ResourceEntry = 
{
  tgresource_tag,
  10,//res version
  0,//subVersionValue
  0,//reserved1
  0,//reserved2
  TEST_U_ENU_Resource
};

//资源定义
#define TG_RESOURCE_DEFINE   \
{SYS_LANGUAGE_CHS,sizeof( TEST_U_CHS_Resource )/ sizeof(ResourceLangRegisterEntry), &TEST_U_CHS_ResourceEntry},   \
{SYS_LANGUAGE_ENU,sizeof( TEST_U_ENU_Resource )/ sizeof(ResourceLangRegisterEntry), &TEST_U_ENU_ResourceEntry},   
