/*********************************************************************
 *                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
 *        Solutions for real time microcontroller applications        *
 **********************************************************************
 *                                                                    *
 *        (c) 1996 - 2015  SEGGER Microcontroller Systeme GmbH        *
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
 File        : BASIC_HelloWorld.c
 Purpose     : Simple demo drawing "Hello world"
 ----------------------------------------------------------------------
 */

#include "gui_funs.h"
int config;

float offset_mm;
float def_ign_mm;
float def_ign;
long ign_length;

float b_1k;
float b_2k;
float b_3k;
float b_4k;
float b_5k;
float b_6k;
float b_7k;
float b_8k;
float b_9k;

void set_def_ign(float di) {
	def_ign = di;
}
void set_b_1k(float gui_b_1k) {
	b_1k = gui_b_1k;
}
float get_b_1k(void) {
	return b_1k;
}

void set_b_2k(float gui_b_2k) {
	b_2k = gui_b_2k;
}
float get_b_2k(void) {
	return b_2k;
}

void set_b_3k(float gui_b_3k) {
	b_3k = gui_b_3k;
}
float get_b_3k(void) {
	return b_3k;
}

void set_b_4k(float gui_b_4k) {
	b_4k = gui_b_4k;
}
float get_b_4k(void) {
	return b_4k;
}

void set_b_5k(float gui_b_5k) {
	b_5k = gui_b_5k;
}
float get_b_5k(void) {
	return b_5k;
}

void set_b_6k(float gui_b_6k) {
	b_6k = gui_b_6k;
}
float get_b_6k(void) {
	return b_6k;
}

void set_b_7k(float gui_b_7k) {
	b_7k = gui_b_7k;
}
float get_b_7k(void) {
	return b_7k;
}

void set_b_8k(float gui_b_8k) {
	b_8k = gui_b_8k;
}
float get_b_8k(void) {
	return b_8k;
}

void set_b_9k(float gui_b_9k) {
	b_9k = gui_b_9k;
}
float get_b_9k(void) {
	return b_9k;
}

void set_offset_mm(float gui_offset_mm) {
	offset_mm = gui_offset_mm / 10;
}
float get_offset_mm(void) {
	return offset_mm;
}

void set_def_ign_mm(float gui_def_ign_mm) {
	def_ign_mm = gui_def_ign_mm / 10;
}

float get_def_ign_mm(void) {
	return def_ign_mm;
}
void set_ign_length(long gui_ign_length) {
	ign_length = gui_ign_length * 100;
}
long get_ign_length(void) {
	return ign_length;
}

void leave_config(int gui_config) {
	config = gui_config;
}

int left_config(void) {
	return config;
}
GUI_POINT _aPoint[18];
GUI_POINT* _InitPoints(float x_tick, float y_tick, float y_offset) {
	_aPoint[0].x = 0;
	_aPoint[0].y = (def_ign + b_1k) * y_tick + y_offset;

	_aPoint[1].x = x_tick;
	_aPoint[1].y = (def_ign + b_1k) * y_tick + y_offset;

	_aPoint[2].x = x_tick;
	_aPoint[2].y = (def_ign + b_2k) * y_tick + y_offset;

	_aPoint[3].x = 2 * x_tick;
	_aPoint[3].y = (def_ign + b_2k) * y_tick + y_offset;

	_aPoint[4].x = 2 * x_tick;
	_aPoint[4].y = (def_ign + b_3k) * y_tick + y_offset;

	_aPoint[5].x = 3 * x_tick;
	_aPoint[5].y = (def_ign + b_3k) * y_tick + y_offset;

	_aPoint[6].x = 3 * x_tick;
	_aPoint[6].y = (def_ign + b_4k) * y_tick + y_offset;

	_aPoint[7].x = 4 * x_tick;
	_aPoint[7].y = (def_ign + b_4k) * y_tick + y_offset;

	_aPoint[8].x = 4 * x_tick;
	_aPoint[8].y = (def_ign + b_5k) * y_tick + y_offset;

	_aPoint[9].x = 5 * x_tick;
	_aPoint[9].y = (def_ign + b_5k) * y_tick + y_offset;

	_aPoint[10].x = 5 * x_tick;
	_aPoint[10].y = (def_ign + b_6k) * y_tick + y_offset;

	_aPoint[11].x = 6 * x_tick;
	_aPoint[11].y = (def_ign + b_6k) * y_tick + y_offset;

	_aPoint[12].x = 6 * x_tick;
	_aPoint[12].y = (def_ign + b_7k) * y_tick + y_offset;

	_aPoint[13].x = 7 * x_tick;
	_aPoint[13].y = (def_ign + b_7k) * y_tick + y_offset;

	_aPoint[14].x = 7 * x_tick;
	_aPoint[14].y = (def_ign + b_8k) * y_tick + y_offset;

	_aPoint[15].x = 8 * x_tick;
	_aPoint[15].y = (def_ign + b_8k) * y_tick + y_offset;

	_aPoint[16].x = 8 * x_tick;
	_aPoint[16].y = (def_ign + b_9k) * y_tick + y_offset;

	_aPoint[17].x = 9 * x_tick;
	_aPoint[17].y = (def_ign + b_9k) * y_tick + y_offset;

	return _aPoint;
}

int get_min_bk(void) {
	int i;
	float a[] = { b_1k, b_2k, b_2k, b_3k, b_4k, b_5k, b_6k, b_7k, b_8k, b_9k };
	int num = 10;
	float smallest = a[0];

	for (i = 0; i < num; i++) {
		if (a[i] < smallest) {
			smallest = a[i];
		}
	}
	return def_ign + smallest;
}

int get_max_bk(void) {
	int i;
	float a[] = { b_1k, b_2k, b_2k, b_3k, b_4k, b_5k, b_6k, b_7k, b_8k, b_9k };
	int num = 10;
	float biggest = a[0];

	for (i = 0; i < num; i++) {
		if (a[i] > biggest) {
			biggest = a[i];
		}
	}
	return def_ign + biggest;
}

float get_def_ign(void){
	return def_ign;
}
/*************************** End of file ****************************/
