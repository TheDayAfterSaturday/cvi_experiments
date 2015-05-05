/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/* Copyright (c) National Instruments 2015. All Rights Reserved.          */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  MYPANEL                          1
#define  MYPANEL_AQUIRE_DISPLAY           2       /* control type: command, callback function: Aquire_Display */
#define  MYPANEL_QUIT                     3       /* control type: command, callback function: Qiut */
#define  MYPANEL_MYRING                   4       /* control type: ring, callback function: (none) */
#define  MYPANEL_MYGRAPH                  5       /* control type: graph, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

          /* (no menu bars in the resource file) */


     /* Callback Prototypes: */

int  CVICALLBACK Aquire_Display(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Qiut(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
