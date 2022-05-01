#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define X 3
#define Y 3

void game();

void board0(char arr[X][Y],int x,int y);

void print(char arr[X][Y], int x, int y);

void play(char arr[X][Y], int x, int y);

void computer(char arr[X][Y], int x, int y);

char iswin(char arr[X][Y], int x, int y);