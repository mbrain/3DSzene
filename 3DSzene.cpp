#define _CRT_SECURE_NO_WARNINGS

#include"LoadImageFile.h"
#include"DrawScene.h"
#include"DisplayScene.h"

float _Angle = 0.0;
float _moveLeftRight = 0.0;
float X = 6.0, Z = 5.0;
float X_2 = 0.0, Z_2 = -1.0;
float Y = 6.0;
int _moveForeBack = 0;
int moveUp = 0;
int _width, _height;
int showRoof = 1;
bool showOuterWall = true;
float fb = 0.8;
int texture_type = MyTextures::DEFAULT;

void Initialize_OpenGL()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);

}

void Moving_Left_Right_Direction(float angle)
{
	X_2 = sin(angle);
	Z_2 = -cos(angle);
	glLoadIdentity();
	gluLookAt(X, Y, Z, X + X_2, Y, Z + Z_2, 0.0f, 1.0f, 0.0f);
}

void Moving_Foreword_Backword_Direction(int loc)
{
	X = X + loc*(X_2)*fb;
	Z = Z + loc*(Z_2)*fb;
	glLoadIdentity();
	gluLookAt(X, Y, Z, X + X_2, Y, Z + Z_2, 0.0f, 1.0f, 0.0f);
}

void Display_Scene()
{
	if (_moveForeBack)
	{
		Moving_Foreword_Backword_Direction(_moveForeBack);
	}

	if (_moveLeftRight)
	{
		_Angle += _moveLeftRight;
		Moving_Left_Right_Direction(_Angle);
	}

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//call function from DisplayGameScene class which will be displayed
	DisplayGameScene::DisplayTexturedGameScene(texture_type, showRoof, showOuterWall);
	glutSwapBuffers();
}

void Keyboard_function(unsigned char key, int x, int y)
{
	if (key == 27)
	{
		exit(EXIT_SUCCESS);
	}
}

void Key_Pressed(int key, int x, int y)
{
	if (key == GLUT_KEY_LEFT)
	{
		_moveLeftRight = -0.05;
	}
	else if (key == GLUT_KEY_RIGHT)
	{
		_moveLeftRight = 0.05;
	}
	else if (key == GLUT_KEY_UP)
	{
		_moveForeBack = 2;
	}
	else if (key == GLUT_KEY_DOWN)
	{
		_moveForeBack = -2;
	}
	else if (key == GLUT_KEY_UP && key == GLUT_KEY_LEFT)
	{
		_moveLeftRight = 0.1;
	}
	else if (key == GLUT_KEY_UP && key == GLUT_KEY_RIGHT)
	{
		_moveLeftRight = 0.1;
	}

	if ( key == GLUT_KEY_PAGE_UP)
	{
		Y = Y + 0.5;
		fb = fb + 0.02;
		if (Y >= 50.0) showRoof = 1;
		else showRoof = 1;
		glLoadIdentity();
		gluLookAt(X, Y, Z, X + X_2, Y, Z + Z_2, 0.0f, 1.0f, 0.0f);
		glutPostRedisplay();
	}
	else if (key == GLUT_KEY_PAGE_DOWN)
	{
		Y = Y - 0.5;
		if (Y < 50.0) showRoof = 1;
		glLoadIdentity();
		gluLookAt(X, Y, Z, X + X_2, Y, Z + Z_2, 0.0f, 1.0f, 0.0f);
		glutPostRedisplay();		 
	}
}

void Key_Released(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		if (_moveLeftRight < 0.0f)
			_moveLeftRight = 0.0f;
		break;

	case GLUT_KEY_RIGHT:
		if (_moveLeftRight > 0.0f)
			_moveLeftRight = 0.0f;
		break;

	case GLUT_KEY_UP:
		if (_moveForeBack > 0)
			_moveForeBack = 0;

		break;

	case GLUT_KEY_DOWN:
		if (_moveForeBack < 0)
			_moveForeBack = 0;
		break;
	}
}

void Menu_Process(int mode)
{
	switch (mode)
	{
	case 1 :
		texture_type = MyTextures::DEFAULT;
		glutPostRedisplay();
		break;

	case 2:
		texture_type = MyTextures::ANIMATION;
		glutPostRedisplay();
		break;

	}
}


//create menu function for glut
void Create_Menu()
{

	glutCreateMenu(Menu_Process);
	glutAddMenuEntry(" Default             ", 1);
	glutAddMenuEntry(" Animation", 2);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}


//reshape function
void Reshape_Function(int width, int height)
{
	if (height == 0)
		height = 1;

	_width = width;
	_height = height;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, _width, _height);
	gluPerspective(45, 1.0*(width / height), 1.0, 1000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(X, Y, Z, X + X_2, Y, Z + Z_2, 0.0f, 1.0f, 0.0f);

}


void CallingAllCallBacks()
{
	glutIgnoreKeyRepeat(0);
	glutDisplayFunc(Display_Scene);
	glutKeyboardFunc(Keyboard_function);
	glutSpecialFunc(Key_Pressed);
	glutSpecialUpFunc(Key_Released);
	glutIdleFunc(Display_Scene);
	glutReshapeFunc(Reshape_Function);
	Initialize_OpenGL();
}

//function that set fore & back color to console window
void SetTextColorAndBackgroundColor(int TextColor, int BackgroundColor)
{
	WORD color = ((BackgroundColor & 0x00F) << 4) + (TextColor & 0x00F);

	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD coord = { 0, 0 };

	DWORD count;

	CONSOLE_SCREEN_BUFFER_INFO csbi;

	SetConsoleTextAttribute(hstdout, color);
	if (GetConsoleScreenBufferInfo(hstdout, &csbi))
	{
		FillConsoleOutputCharacter(hstdout, (TCHAR)32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

		FillConsoleOutputAttribute(hstdout, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
		SetConsoleCursorPosition(hstdout, coord);
	}
}


//main function
int main(int argc, char **argv)
{
	int option;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);

	int result = MessageBox(NULL, TEXT("Would you like to run in Full Screen Mode ?\n\nClick \" YES \" to go to Full Screen Mode\n\nClick \" NO \" to go to Window Screen Mode"), TEXT("Full Screen or Window"), MB_YESNOCANCEL);
	
	if (result == IDYES)
	{
		SetTextColorAndBackgroundColor(15, 2);
		printf("\t===  Select any one of the following texture  ===");
		printf("\n\n\t\t1]     Default  ");
		printf("\n\t\t2]     Animation  ");
		printf("\n\t\t3]     Buildings  ");
		printf("\n\t\t4]     Horror  ");
		printf("\n\t\t5]     Greeny  ");
		printf("\n\t\t6]     Woods  ");
		printf("\n\t\t7]     Rocks  ");
		printf("\n\t\t8]     Circuit  ");
		printf("\n\t\t9]     How do i ........  ");
		printf("\n\t\t10]     Quit  ");
		printf("\n\n\tEnter your Choice = ");
		scanf_s("%d", &option);

			if (option >= 1 && option <= 9)
			{
				if (option == 10)
				{
					exit(EXIT_SUCCESS);
				}
				else if (option == 9)
				{
					MessageBox(NULL, TEXT("UP\t\t:\tGo Forward\nDOWN\t\t:\tGo Backward\nLEFT\t\t:\tMove Left\nRIGHT\t\t:\tMove Right\nPAGE UP\t\t:\tGo Upward\nPAGE DOWN\t:\tGo Downward"), TEXT("How do i ......"), MB_OK);
				}
				else
				{
					texture_type = option;
					glutInitWindowPosition(10, 10);
					glutInitWindowSize(1000, 600);
					glutCreateWindow("3D Home Scene");
					CallingAllCallBacks();
					glutFullScreen();
					glutMainLoop();
				}
			}
			else
			{
				MessageBox(NULL, TEXT("Invalid Option"), TEXT("Error....."), MB_ICONERROR);
			}
	}

    if (result == IDNO)
	{
		glutInitWindowPosition(80, 40);
		glutInitWindowSize(800, 500);
		glutCreateWindow("3D Game Scene");
		CallingAllCallBacks();
		Create_Menu();
		glutMainLoop();
	}
	return(0);
}

