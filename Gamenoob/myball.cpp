#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	float g = 0.58;
	float X = 800, Y = 600;
	float radius = 20;
	float bx = 100, Vy = 0;
	initgraph(800, 600);
#if 0 //����
	float by = 100;
	while (1) {
		Vy += g;
		by += Vy;
		if (by >= Y - radius) {
			Vy = -0.95 * Vy;
		}
		if (by > Y - radius) by = Y - radius;

		cleardevice();
		fillcircle(bx, by, radius);
		Sleep(10);
	}
#endif
#if 0 //just jump like a fool
	float by = Y - radius;
	while (1) {
		if (kbhit()) {
			char input = _getch();
			if (input == ' ') {
				Vy = -20;
			}
		}
		else if (by >= Y - radius) {
			Vy = 0;
			by = Y - radius;

		}
		Vy += g;
		by += Vy;
		cleardevice();
		fillcircle(bx, by, radius);
		Sleep(10);
	}
	closegraph();
#endif
#if 1 //��������
	float RecH = 100, width = 20, RecL = X / 3 * 2, RecVx = -2;
	float by = Y - radius;
	int jumpnum = 2; //��Ծ����
	int point = 0;
	while (1) {
		
		if (_kbhit()) {
			char input = _getch();
			if (input == ' ' && (jumpnum == 1 || jumpnum == 2)) {
				if (jumpnum == 2) Vy = -14.5; //һ����
				else if (jumpnum == 1) Vy = -12.5; //������
				jumpnum --; //ÿ����Ծ�������1
			}
		}
		else if (by >= Y - radius) {
			Vy = 0;
			by = Y - radius;
			jumpnum = 2;
		}

		Vy += g; 
		by += Vy;
		RecL += RecVx;
		if (RecL <= bx + radius && RecL + width >= bx - radius && Y - RecH <= by + radius) {
			point = 0;//clear your score
			return 0; //end the game
		}
		if (RecL <= 0)
			RecL = X * 4 / 3, RecH = rand() % int(Y / 4) + Y / 5, RecVx = rand() / float(RAND_MAX) - 4, point++;
		cleardevice();
		fillcircle(bx, by, radius);
		fillrectangle(RecL, Y - RecH, RecL + width, Y);
		TCHAR a[20]; //define a string
		swprintf_s(a, _T("��ĵ÷�:%d"), point);
		settextcolor(BLUE);
		settextstyle(40  , 0, _T("΢���ź�"));
		outtextxy(50, 30, a);
		Sleep(10);
	}
	closegraph();
#endif
#if 0 //�������˶�
	float Vx = 4; //�����ٶ�
	float by = 100; //�߶�
	while (1) {
		Vy += g;
		by += Vy;
		bx += Vx;
		if (by >= Y - radius) {
			by = Y - radius;
			Vy = -0.95 * Vy; //����
		}
		//if (by > Y - radius) by = Y - radius;

		if (bx >= X - radius) {
			bx = X - radius;
			Vx = -0.95 * Vx; //����
		}
		if (bx <= radius) {
			bx = radius;
			Vx = -0.95 * Vx; //����
		}
			cleardevice();
			
			fillcircle(bx, by, radius);
			Sleep(10);
		
	}
	closegraph();
#endif
	return 0;
}