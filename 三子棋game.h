#pragma once
//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//符号的定义
#define ROW 3
#define COL 3
//初始化棋盘
void initial_board(char board[ROW][COL], int row, int col);
//打印棋盘格子
void display_board(char board[ROW][COL], int row, int col);
//玩家下棋
void player_move(char board[ROW][COL], int row, int col);
//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);
//判断是否胜利
char who_win(char board[ROW][COL], int row, int col);
//判断棋盘是否满了
int full_board(char board[ROW][COL], int row, int col);