/*
 * gui_funs.h
 *
 *  Created on: 16.12.2015
 *      Author: johannes
 */

#include "GRAPH.h"


void set_b_1k(float gui_b_1k);
float get_b_1k(void);

void set_b_2k(float gui_b_2k);
float get_b_2k(void);

void set_b_3k(float gui_b_3k);
float get_b_3k(void);

void set_b_4k(float gui_b_4k);
float get_b_4k(void);

void set_b_5k(float gui_b_5k);
float get_b_5k(void);

void set_b_6k(float gui_b_6k);
float get_b_6k(void);


void set_b_7k(float gui_b_7k);
float get_b_7k(void);

void set_b_8k(float gui_b_8k);
float get_b_8k(void);

void set_b_9k(float gui_b_9k);
float get_b_9k(void);

void set_offset_mm(float gui_offset_mm);
float get_offset_mm(void);

void set_def_ign_mm(float def_ign_mm);
float get_def_ign_mm(void);

void set_ign_length(long gui_ign_length);
long get_ign_length(void);

void leave_config(int gui_config);
int left_config(void);

int get_min_bk(void);
int get_max_bk(void);

float get_def_ign(void);
GUI_POINT* _InitPoints(float x_tick,float y_tick,float y_offset);
