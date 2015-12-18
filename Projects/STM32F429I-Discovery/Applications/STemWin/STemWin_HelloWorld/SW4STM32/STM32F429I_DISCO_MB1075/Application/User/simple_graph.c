/*********************************************************************
 *                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
 *        Solutions for real time microcontroller applications        *
 **********************************************************************
 *                                                                    *
 *        (c) 1996 - 2004  SEGGER Microcontroller Systeme GmbH        *
 *                                                                    *
 *        Internet: www.segger.com    Support:  support@segger.com    *
 *                                                                    *
 **********************************************************************

 ***** emWin - Graphical user interface for embedded applications *****
 emWin is protected by international copyright laws.   Knowledge of the
 source code may not be used to write a similar product.  This file may
 only be used in accordance with a license and should not be re-
 distributed in any way. We appreciate your understanding and fairness.
 ----------------------------------------------------------------------
 File        : WIDGET_GraphXY.c
 Purpose     : Demonstrates the use of the GRAPH widget
 Requirements: WindowManager - (x)
 MemoryDevices - (x)
 AntiAliasing  - ( )
 VNC-Server    - ( )
 PNG-Library   - ( )
 TrueTypeFonts - ( )
 ----------------------------------------------------------------------
 */
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "DIALOG.h"
#include "GRAPH.h"

#include "gui_funs.h"

// Dialog ressource
#define ID_WINDOW_0 (GUI_ID_USER + 0x00)

static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] =
  {
    { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 320, 240, 0, 0x0, 0 },
    { GRAPH_CreateIndirect, 0, GUI_ID_GRAPH0, 0, 0, 320, 240 }, };

GUI_POINT _aPoint[10];
GRAPH_DATA_Handle _ahDataXY;

/*********************************************************************
 *
 *       Static code
 *
 **********************************************************************
 */
/*********************************************************************
 *
 *       _InitPoints
 */

/*********************************************************************
 *

 /
 **********************************************************************
 *
 *       _UserDraw
 *
 * Function description
 *   This routine is called by the GRAPH object before anything is drawn
 *   and after the last drawing operation.
 */
static void
_UserDraw (WM_HWIN hWin, int Stage)
{
  if (Stage == GRAPH_DRAW_LAST)
    {
      GUI_SetFont (GUI_FONT_20B_1);
      GUI_SetColor (GUI_WHITE);
      GUI_DispStringHCenterAt ("Zündpunkt in ° vor OT.", 160, 0);
      //GUI_DispFloat (get_b_1k (), 4);
    }
}
GRAPH_SCALE_Handle _hScaleV;
GRAPH_SCALE_Handle _hScaleH;

static void
_cbCallback (WM_MESSAGE * pMsg)
{
  int NCode;
  int Id;
  int Value;
  int j;
  WM_HWIN hDlg;
  WM_HWIN hItem;

  hDlg = pMsg->hWin;
  switch (pMsg->MsgId)
    {
    case WM_INIT_DIALOG:
      hItem = WM_GetDialogItem (hDlg, GUI_ID_GRAPH0);
      float y_tick = 201 / (get_max_bk () - get_min_bk ()+2);
      float x_tick = 32;
      float y_offset = -get_min_bk () * y_tick;

      GRAPH_SetLineStyle (hItem, GUI_LS_SOLID);
      GRAPH_SetLineStyleH (hItem, GUI_LS_DOT);
      GRAPH_SetLineStyleV (hItem, GUI_LS_DOT);
      _ahDataXY = GRAPH_DATA_XY_Create (GUI_RED, 18,
					_InitPoints (x_tick, y_tick, y_offset),
					18);
      //GRAPH_DATA_XY_SetLineStyle(_ahDataXY[i],);

      GRAPH_AttachData (hItem, _ahDataXY);

      _hScaleV = GRAPH_SCALE_Create (10, GUI_TA_RIGHT, GRAPH_SCALE_CF_VERTICAL,
				     y_tick);
      GRAPH_SCALE_SetFactor (_hScaleV, 1.0f / y_tick);
      GRAPH_SCALE_SetTextColor (_hScaleV, GUI_WHITE);
      GRAPH_SCALE_SetOff (_hScaleV, y_offset);
      GRAPH_AttachScale (hItem, _hScaleV);

      _hScaleH = GRAPH_SCALE_Create (232, GUI_TA_HCENTER,
      GRAPH_SCALE_CF_HORIZONTAL,
				     x_tick);
      GRAPH_SCALE_SetFactor (_hScaleH, 1.0f / x_tick);
      GRAPH_SCALE_SetTextColor (_hScaleH, GUI_WHITE);
      GRAPH_AttachScale (hItem, _hScaleH);

      GRAPH_SetColor (hItem, GUI_BLACK, GRAPH_CI_BORDER);
      GRAPH_SetBorder (hItem, 14, 25, 1, 14);

      GRAPH_SetGridDistY (hItem, y_tick);
      GRAPH_SetGridDistX (hItem, x_tick);

      GRAPH_SetGridVis (hItem, 1);
      GRAPH_SetUserDraw (hItem, _UserDraw);
      break;

    default:
      WM_DefaultProc (pMsg);
    }
}

/*********************************************************************
 *
 *       Public code
 *
 **********************************************************************
 */
/*********************************************************************
 *
 *       MainTask
 */

WM_HWIN
CreateWindow_graph (void)
{
  WM_HWIN hWin;
  hWin = GUI_CreateDialogBox (_aDialogCreate, GUI_COUNTOF(_aDialogCreate),
			      _cbCallback, 0, 0, 0);
  return hWin;
}

/*************************** End of file ****************************/
