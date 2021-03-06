/*********************************************************************
 *                                                                    *
 *                SEGGER Microcontroller GmbH & Co. KG                *
 *        Solutions for real time microcontroller applications        *
 *                                                                    *
 **********************************************************************
 *                                                                    *
 * C-file generated by:                                               *
 *                                                                    *
 *        GUI_Builder for emWin version 5.28                          *
 *        Compiled Jan 30 2015, 16:41:06                              *
 *        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
 *                                                                    *
 **********************************************************************
 *                                                                    *
 *        Internet: www.segger.com  Support: support@segger.com       *
 *                                                                    *
 **********************************************************************
 */

// USER START (Optionally insert additional includes)
// USER END
#include "DIALOG.h"
#include "gui_funs.h"

/*********************************************************************
 *
 *       Defines
 *
 **********************************************************************
 */
#define ID_WINDOW_0        (GUI_ID_USER + 0x00)
#define ID_TEXT_0        (GUI_ID_USER + 0x01)
#define ID_SPINBOX_0        (GUI_ID_USER + 0x02)
#define ID_TEXT_1        (GUI_ID_USER + 0x03)
#define ID_SPINBOX_1        (GUI_ID_USER + 0x04)
#define ID_SPINBOX_2        (GUI_ID_USER + 0x05)
#define ID_TEXT_2        (GUI_ID_USER + 0x06)
#define ID_TEXT_3        (GUI_ID_USER + 0x07)
#define ID_TEXT_4        (GUI_ID_USER + 0x08)
#define ID_TEXT_5        (GUI_ID_USER + 0x09)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
 *
 *       Static data
 *
 **********************************************************************
 */

// USER START (Optionally insert additional static data)
// USER END
/*********************************************************************
 *
 *       _aDialogCreate
 */
const GUI_WIDGET_CREATE_INFO _aDialogCreate_config_low[] = {
		{ WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 320, 240, 0, 0x0,
				0 }, { TEXT_CreateIndirect, "Low_Text_below_1000", ID_TEXT_0,
				15, 20, 80, 50, 0, 0x64, 0 }, { SPINBOX_CreateIndirect,
				"Low_Spinbox_below_1000", ID_SPINBOX_0, 120, 20, 80, 50, 0, 0x0,
				0 }, { TEXT_CreateIndirect, "Low_Text_below_2000", ID_TEXT_1,
				15, 70, 90, 50, 0, 0x64, 0 }, { SPINBOX_CreateIndirect,
				"Low_Spinbox_below_2000", ID_SPINBOX_1, 120, 70, 80, 50, 0, 0x0,
				0 }, { SPINBOX_CreateIndirect, "Low_Spinbox_below_3000",
		ID_SPINBOX_2, 120, 120, 80, 50, 0, 0x0, 0 }, { TEXT_CreateIndirect,
				"Low_Text_below_3000", ID_TEXT_2, 15, 120, 80, 50, 0, 0x64, 0 },
		{ TEXT_CreateIndirect, "Low_Text_Unit_below_3000", ID_TEXT_3, 210, 120,
				80, 50, 0, 0x64, 0 }, { TEXT_CreateIndirect,
				"Low_Text_Unit_below_1000",
				ID_TEXT_4, 210, 20, 90, 50, 0, 0x64, 0 }, { TEXT_CreateIndirect,
				"Low_Text_Unit_below_2000", ID_TEXT_5, 210, 70, 90, 50, 0, 0x64,
				0 },
// USER START (Optionally insert additional widgets)
// USER END
		};

/*********************************************************************
 *
 *       Static code
 *
 **********************************************************************
 */

// USER START (Optionally insert additional static code)
// USER END
/*********************************************************************
 *
 *       _cbDialog
 */
void _cbDialog_config_low(WM_MESSAGE * pMsg) {
	WM_HWIN hItem;
	int NCode;
	int Id;
	// USER START (Optionally insert additional variables)
	// USER END

	switch (pMsg->MsgId) {
	case WM_INIT_DIALOG:
		//
		// Initialization of 'Low_Text_below_1000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
		TEXT_SetText(hItem, "< 1000");
		TEXT_SetFont(hItem, GUI_FONT_8X16);
		TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
		//
		// Initialization of 'Low_Spinbox_below_1000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
		SPINBOX_SetFont(hItem, GUI_FONT_8X16);
		SPINBOX_SetRange(hItem, -15, 15);
		SPINBOX_SetValue(hItem, get_b_1k());
		//
		// Initialization of 'Low_Text_below_2000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
		TEXT_SetText(hItem, "< 2000");
		TEXT_SetFont(hItem, GUI_FONT_8X16);
		TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
		//
		// Initialization of 'Low_Spinbox_below_2000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_1);
		SPINBOX_SetFont(hItem, GUI_FONT_8X16);
		SPINBOX_SetRange(hItem, -15, 15);
		SPINBOX_SetValue(hItem, get_b_2k());
		//
		// Initialization of 'Low_Spinbox_below_3000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_2);
		SPINBOX_SetFont(hItem, GUI_FONT_8X16);
		SPINBOX_SetRange(hItem, -15, 15);
		SPINBOX_SetValue(hItem, get_b_3k());
		//
		// Initialization of 'Low_Text_below_3000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
		TEXT_SetText(hItem, "< 3000");
		TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
		TEXT_SetFont(hItem, GUI_FONT_8X16);
		//
		// Initialization of 'Low_Text_Unit_below_3000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
		TEXT_SetText(hItem, "° v. Zzp");
		TEXT_SetFont(hItem, GUI_FONT_8X16);
		TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
		//
		// Initialization of 'Low_Text_Unit_below_1000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
		TEXT_SetText(hItem, "° v. Zzp");
		TEXT_SetFont(hItem, GUI_FONT_8X16);
		TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
		//
		// Initialization of 'Low_Text_Unit_below_2000'
		//
		hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_5);
		TEXT_SetText(hItem, "° v. Zzp");
		TEXT_SetFont(hItem, GUI_FONT_8X16);
		TEXT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
		// USER START (Optionally insert additional code for further widget initialization)
		// USER END
		break;
	case WM_NOTIFY_PARENT:
		Id = WM_GetId(pMsg->hWinSrc);
		NCode = pMsg->Data.v;
		switch (Id) {
		case ID_SPINBOX_0: // Notifications sent by 'Low_Spinbox_below_1000'
			switch (NCode) {
			case WM_NOTIFICATION_CLICKED:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_RELEASED:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_MOVED_OUT:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_VALUE_CHANGED:
				// USER START (Optionally insert code for reacting on notification message)
				hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
				set_b_1k(SPINBOX_GetValue(hItem));
				// USER END
				break;
				// USER START (Optionally insert additional code for further notification handling)
				// USER END
			}
			break;
		case ID_SPINBOX_1: // Notifications sent by 'Low_Spinbox_below_2000'
			switch (NCode) {
			case WM_NOTIFICATION_CLICKED:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_RELEASED:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_MOVED_OUT:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_VALUE_CHANGED:
				hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_1);
				set_b_2k(SPINBOX_GetValue(hItem));
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
				// USER START (Optionally insert additional code for further notification handling)
				// USER END
			}
			break;
		case ID_SPINBOX_2: // Notifications sent by 'Low_Spinbox_below_3000'
			switch (NCode) {
			case WM_NOTIFICATION_CLICKED:

				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_RELEASED:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_MOVED_OUT:
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
			case WM_NOTIFICATION_VALUE_CHANGED:
				hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_2);
				set_b_3k(SPINBOX_GetValue(hItem));
				// USER START (Optionally insert code for reacting on notification message)
				// USER END
				break;
				// USER START (Optionally insert additional code for further notification handling)
				// USER END
			}
			break;
			// USER START (Optionally insert additional code for further Ids)
			// USER END
		}
		break;
		// USER START (Optionally insert additional message handling)
		// USER END
	default:
		WM_DefaultProc(pMsg);
		break;
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
 *       CreateWindow
 */

// USER START (Optionally insert additional public code)
// USER END
/*************************** End of file ****************************/
