#pragma once
//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//���ŵĶ���
#define ROW 3
#define COL 3
//��ʼ������
void initial_board(char board[ROW][COL], int row, int col);
//��ӡ���̸���
void display_board(char board[ROW][COL], int row, int col);
//�������
void player_move(char board[ROW][COL], int row, int col);
//��������
void computer_move(char board[ROW][COL], int row, int col);
//�ж��Ƿ�ʤ��
char who_win(char board[ROW][COL], int row, int col);
//�ж������Ƿ�����
int full_board(char board[ROW][COL], int row, int col);