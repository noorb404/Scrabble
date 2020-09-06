/*
 * functions.h
 *
 *  Created on: Jan 18, 2016
 *      Author: nor
 */
#ifndef _functions_h
#define _functions_h
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 12
extern char array[MAX_SIZE][MAX_SIZE];
typedef struct
{
	int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
}tile;
void FILL_VALUE(tile *);
void FILL_QUANTITY(tile *);
int check_ch(char,tile);
void get_info(void);
void print_board(char,int,int,int,int);
int print_random(char[]);
int is_exist(int,char [],char[]);
int check_pos(char,char[],int,int);
int check_room(char,int,int,int);
int is_end(char[]);
int check_quantity(char,tile *);
int end_quantity(tile *);
int check_connection(char,int,int,int);

#endif

