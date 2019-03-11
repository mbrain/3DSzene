
#include"LoadImageFile.h"
#include"DrawScene.h"


//define each function from file DrawScene.h from class GameScene


//draw floor
void GameScene::Draw_Floor(GLuint texture,float f)
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);


	glPushMatrix();

	for (float a = -10.0; a <= 170.0; a = a + 10.0)
	{
		glBegin(GL_QUADS);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(0.0 + a, 0.0, 10.0);
		glTexCoord2f(0.0, f);
		glVertex3f(0.0 + a, 0.0, 0.0);
		glTexCoord2f(f, f);
		glVertex3f(10.0 + a, 0.0, 0.0);
		glTexCoord2f(f, 0.0);
		glVertex3f(10.0 + a, 0.0, 10.0);
		glEnd();
	}

	for (float b = -10.0; b <= 320.0; b += 10.0)
	{
		for (float a = -10.0; a <= 170.0; a = a + 10.0)
		{
			glBegin(GL_QUADS);
			glTexCoord2f(0.0, 0.0);
			glVertex3f(0.0 + a, 0.0, -(b - 10.0));
			glTexCoord2f(0.0, f);
			glVertex3f(0.0 + a, 0.0, -b);
			glTexCoord2f(f ,f );
			glVertex3f(10.0 + a, 0.0, -b);
			glTexCoord2f(f, 0.0);
			glVertex3f(10.0 + a, 0.0, -(b - 10.0));
			glEnd();

		}
	}

	glPopMatrix();

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);
}



//draw roof
void GameScene::Draw_Roof(GLuint texture,int x,float f)
{
	if (x == 1)
	{
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);


		glPushMatrix();

		for (float a = -10.0; a <= 170.0; a = a + 10.0)
		{
			glBegin(GL_QUADS);
			glTexCoord2f(0.0, 0.0);
			glVertex3f(0.0 + a, 50.0, 20.0);
			glTexCoord2f(0.0, f);
			glVertex3f(0.0 + a, 50.0, 0.0);
			glTexCoord2f(f , f);
			glVertex3f(10.0 + a, 50.0, 0.0);
			glTexCoord2f(f, 0.0);
			glVertex3f(10.0 + a, 50.0, 20.0);
			glEnd();
		}

		for (float b = -10.0; b <= 320.0; b += 10.0)
		{
			for (float a = -10.0; a <= 170.0; a = a + 10.0)
			{
				glBegin(GL_QUADS);
				glTexCoord2f(0.0, 0.0);
				glVertex3f(0.0 + a, 50.0, -(b - 10.0));
				glTexCoord2f(0.0, f);
				glVertex3f(0.0 + a, 50.0, -b);
				glTexCoord2f(f , f);
				glVertex3f(10.0 + a, 50.0, -b);
				glTexCoord2f(f, 0.0);
				glVertex3f(10.0 + a, 50.0, -(b - 10.0));
				glEnd();

			}
		}

		glPopMatrix();

		glDisable(GL_TEXTURE_2D);

		LoadTexture::FreeCreatedTexture(texture);
	}
}


//draw outer wall
void GameScene::Draw_OuterWall(GLuint texture,BOOL isdisplay)
{
	if (isdisplay)
	{
		glPushMatrix();


		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, texture);

		//wall 1
		for (float a = 0.0; a <= 180.0; a = a + 10.0)
		{
			glColor3f(0.7, 0.7, 0.5);
			glBegin(GL_QUADS);
			glTexCoord2f(0.0, 0.0);
			glVertex3f(-10.0 + a, 0.0, 20.0);
			glTexCoord2f(0.0, 1.0);
			glVertex3f(-10.0 + a, 50.0, 20.0);
			glTexCoord2f(1.0, 1.0);
			glVertex3f(0.0 + a, 50.0, 20.0);
			glTexCoord2f(1.0, 0.0);
			glVertex3f(0.0 + a, 0.0, 20.0);
			glEnd();
		}

		//wall 2
		for (float a = 0.0; a <= 320.0; a = a + 20.0)
		{
			glColor3f(0.7, 0.7, 0.5);
			glBegin(GL_QUADS);
			glTexCoord2f(0.0, 0.0);
			glVertex3f(180.0, 0.0, 0.0 - a);
			glTexCoord2f(0.0, 1.0);
			glVertex3f(180.0, 50.0, 0.0 - a);
			glTexCoord2f(1.0, 1.0);
			glVertex3f(180.0, 50.0, 20.0 - a);
			glTexCoord2f(1.0, 0.0);
			glVertex3f(180.0, 0.0, 20.0 - a);
			glEnd();
		}

		//wall 3
		for (float a = 0.0; a <= 180.0; a = a + 10.0)
		{
			glColor3f(0.7, 0.7, 0.5);
			glBegin(GL_QUADS);
			glTexCoord2f(0.0, 0.0);
			glVertex3f(180.0 - a, 0.0, -320.0);
			glTexCoord2f(0.0, 1.0);
			glVertex3f(180.0 - a, 50.0, -320.0);
			glTexCoord2f(1.0, 1.0);
			glVertex3f(170.0 - a, 50.0, -320.0);
			glTexCoord2f(1.0, 0.0);
			glVertex3f(170.0 - a, 0.0, -320.0);
			glEnd();
		}


		//wall 4
		for (float a = -10.0; a <= 320.0; a = a + 10.0)
		{
			glColor3f(0.7, 0.7, 0.5);
			glBegin(GL_QUADS);
			glTexCoord2f(0.0, 0.0);
			glVertex3f(-10.0, 0.0, 0.0 - a);
			glTexCoord2f(0.0, 1.0);
			glVertex3f(-10.0, 50.0, 0.0 - a);
			glTexCoord2f(1.0, 1.0);
			glVertex3f(-10.0, 50.0, 10.0 - a);
			glTexCoord2f(1.0, 0.0);
			glVertex3f(-10.0, 0.0, 10.0 - a);
			glEnd();
		}


		glDisable(GL_TEXTURE_2D);

		LoadTexture::FreeCreatedTexture(texture);

		glPopMatrix();
	}
}


//***********************************************************************
//draw inner room 1
void GameScene::Draw_InnerRoom_1(GLuint texture)
{
	glPushMatrix();


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);

	
	//wall 1
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -5.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(10.0, 50.0, -5.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(12.0, 50.0, -5.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(12.0, 0.0, -5.0);
	glEnd();
	

	//wall 2
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(12.0, 0.0, -5.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(12.0, 50.0, -5.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(12.0, 50.0, -12.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(12.0, 0.0, -12.0);
	glEnd();

	//wall 3
	for (float a = 0.0; a <= 100.0; a = a + 18.0)
	{
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(12.0 + a, 0.0, -12.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(12.0 + a, 50.0, -12.0);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(30.0 + a, 50.0, -12.0);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(30.0 + a, 0.0, -12.0);
		glEnd();
	}
	

	//wall 4
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(120.0, 0.0, -12.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(120.0, 50.0, -12.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(120.0, 50.0, -5.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(120.0, 0.0, -5.0);
	glEnd();

	//wall 5
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(120.0, 0.0, -5.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(120.0, 50.0, -5.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -5.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -5.0);
	glEnd();
	
	//wall 6
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -5.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -5.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -15.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -15.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -15.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -15.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -22.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -22.0);
	glEnd();


	//wall 7
	glColor3f(0.8, 0.5, 0.4);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -22.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -22.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(120.0, 50.0, -22.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(120.0, 0.0, -22.0);
	glEnd();

	//wall 8
	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(120.0, 0.0, -22.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(120.0, 50.0, -22.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(120.0, 50.0, -35.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(120.0, 0.0, -35.0);
	glEnd();

	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(120.0, 0.0, -35.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(120.0, 50.0, -35.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(120.0, 50.0, -55.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(120.0, 0.0, -55.0);
	glEnd();


	//wall 9
	glColor3f(0.7, 0.4, 0.3);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(120.0, 0.0, -55.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(120.0, 50.0, -55.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(100.0, 50.0, -55.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(100.0, 0.0, -55.0);
	glEnd();

	glColor3f(0.7, 0.4, 0.3);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(100.0, 0.0, -55.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(100.0, 50.0, -55.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(70.0, 50.0, -55.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(70.0, 0.0, -55.0);
	glEnd();

	//wall 10
	glColor3f(0.8, 0.5, 0.4);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(70.0, 0.0, -55.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(70.0, 50.0, -55.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(70.0, 50.0, -75.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(70.0, 0.0, -75.0);
	glEnd();

	//wall 11
	glColor3f(0.8, 0.5, 0.4);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(70.0, 0.0, -75.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(70.0, 50.0, -75.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(70.0, 50.0, -95.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(70.0, 0.0, -95.0);
	glEnd();
	
	//wall 12
	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(70.0, 0.0, -95.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(70.0, 50.0, -95.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(40.0, 50.0, -95.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(40.0, 0.0, -95.0);
	glEnd();

	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(40.0, 0.0, -95.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(40.0, 50.0, -95.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(10.0, 50.0, -95.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(10.0, 0.0, -95.0);
	glEnd();



	//wall 13
	glColor3f(200.0, 200.0, 200.0);
	glBegin(GL_QUADS);

	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -5.0);

	glTexCoord2f(0.0, 2.0);
	glVertex3f(10.0, 50.0, -5.0); // schraeg nach innen, height, ..

	glTexCoord2f(2.0, 2.0);
	glVertex3f(10.0, 50.0, -25.0); // schraeg nach innen, height, ..

	glTexCoord2f(2.0, 0.0);
	glVertex3f(10.0, 0.0, -25.0);

	glEnd();

	/*
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -5.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(10.0, 50.0, -5.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(10.0, 50.0, -25.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(10.0, 0.0, -25.0);
	glEnd();
	*/

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -25.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(10.0, 50.0, -25.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(10.0, 50.0, -45.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(10.0, 0.0, -45.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -55.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(10.0, 50.0, -55.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(10.0, 50.0, -95.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(10.0, 0.0, -95.0);
	glEnd();



	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);

	glPopMatrix();

}


//***********************************************************************************
//draw inner room 2
void GameScene::Draw_InnerRoom_2(GLuint texture,GLuint texture2)
{
	glPushMatrix();


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);


	//wall 1
	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -35.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -35.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(135.0, 50.0, -35.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(135.0, 0.0, -35.0);
	glEnd();
	
	//wall 2
	glColor3f(0.8, 0.5, 0.4);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(135.0, 0.0, -35.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(135.0, 50.0, -35.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(135.0, 50.0, -55.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(135.0, 0.0, -55.0);
	glEnd();

	glColor3f(0.8, 0.5, 0.4);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(135.0, 0.0, -55.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(135.0, 50.0, -55.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(135.0, 50.0, -70.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(135.0, 0.0, -70.0);
	glEnd();
	
	//wall 3
	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(135.0, 0.0, -70.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(135.0, 50.0, -70.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(110.0, 50.0, -70.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(110.0, 0.0, -70.0);
	glEnd();

	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(110.0, 0.0, -70.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(110.0, 50.0, -70.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(85.0, 50.0, -70.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(85.0, 0.0, -70.0);
	glEnd();
	

	//wall 4
	glColor3f(0.8, 0.5, 0.4);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(85.0, 0.0, -70.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(85.0, 50.0, -70.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(85.0, 50.0, -90.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(85.0, 0.0, -90.0);
	glEnd();

	glColor3f(0.8, 0.5, 0.4);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(85.0, 0.0, -90.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(85.0, 50.0, -90.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(85.0, 50.0, -110.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(85.0, 0.0, -110.0);
	glEnd();
	
	//wall 5
	glColor3f(1.0, 0.7, 0.6);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(85.0, 0.0, -110.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(85.0, 50.0, -110.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(50.0, 50.0, -110.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(50.0, 0.0, -110.0);
	glEnd();

	//wall 6
	glColor3f(0.75, 0.75, 0.75);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(50.0, 0.0, -110.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(50.0, 50.0, -110.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(50.0, 50.0, -140.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(50.0, 0.0, -140.0);
	glEnd();
	
	//wall 7
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(50.0, 0.0, -140.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(50.0, 50.0, -140.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(70.0, 50.0, -140.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(70.0, 0.0, -140.0);
	glEnd();
	

	//wall 8
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(70.0, 0.0, -140.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(70.0, 50.0, -140.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(70.0, 50.0, -160.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(70.0, 0.0, -160.0);
	glEnd();
	
	

	//wall 10
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(110.0, 0.0, -200.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(110.0, 50.0, -200.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -200.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -200.0);
	glEnd();
	

	//wall 11
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -200.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -200.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -195.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -195.0);
	glEnd();
	
	//wall 12
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -195.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -195.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(110.0, 50.0, -195.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(110.0, 0.0, -195.0);
	glEnd();

	//wall 13
	for (float a = 0.0; a <= 100.0; a += 10.0)
	{
		glColor3f(0.8, 0.8, 0.8);
		glBegin(GL_QUADS);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(110.0, 0.0, -195.0 + a);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(110.0, 50.0, -195.0 + a);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(110.0, 50.0, -185.0 + a);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(110.0, 0.0, -185.0 + a);
		glEnd();
	}
	
	//wall 14
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(110.0, 0.0, -85.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(110.0, 50.0, -85.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -85.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -85.0);
	glEnd();

	//wall 15
	for (float a = 0.0; a <= 40.0; a += 10.0)
	{
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(140.0, 0.0, -85.0 + a);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(140.0, 50.0, -85.0 + a);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(140.0, 50.0, -75.0 + a);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(140.0, 0.0, -75.0 + a);
		glEnd();
	}

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture2);

	//wall 9
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(70.0, 0.0, -160.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(70.0, 50.0, -160.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(110.0, 50.0, -200.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(110.0, 0.0, -200.0);
	glEnd();

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture2);

	glPopMatrix();

}



//***********************************************************************************
//draw inner room 3
void GameScene::Draw_InnerRoom_3(GLuint texture, GLuint texture2)
{
	glPushMatrix();

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);

	//wall 1
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -110.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(10.0, 50.0, -110.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(35.0, 50.0, -110.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(35.0, 0.0, -110.0);
	glEnd();
	
	//wall 2
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(35.0, 0.0, -110.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(35.0, 50.0, -110.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(35.0, 50.0, -130.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(35.0, 0.0, -130.0);
	glEnd();

	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(35.0, 0.0, -130.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(35.0, 50.0, -130.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(35.0, 50.0, -160.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(35.0, 0.0, -160.0);
	glEnd();

	//wall 3
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(35.0, 0.0, -160.0);
	glTexCoord2f(0.0, 2.0);
	glVertex3f(35.0, 50.0, -160.0);
	glTexCoord2f(2.0, 2.0);
	glVertex3f(55.0, 50.0, -160.0);
	glTexCoord2f(2.0, 0.0);
	glVertex3f(55.0, 0.0, -160.0);
	glEnd();
	

	//wall 4
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(15.0, 0.0, -200.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(15.0, 50.0, -200.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(10.0, 50.0, -200.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(10.0, 0.0, -200.0);
	glEnd();

	//wall 6
	for (float a = 0.0; a <= 80.0; a += 10.0)
	{
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(10.0, 0.0, -200.0 + a);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(10.0, 50.0, -200.0 + a);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(10.0, 50.0, -190.0 + a);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(10.0, 0.0, -190.0 + a);
		glEnd();
	}

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture2);

	//wall 5
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(55.0, 0.0, -160.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(55.0, 50.0, -160.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(15.0, 50.0, -200.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(15.0, 0.0, -200.0);
	glEnd();

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture2);

	glPopMatrix();
}


//***********************************************************************************
//draw inner room 4
void GameScene::Draw_InnerRoom_4(GLuint texture, GLuint texture2)
{
	glPushMatrix();


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);

	//wall 1
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -220.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -220.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(110.0, 50.0, -220.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(110.0, 0.0, -220.0);
	glEnd();
	

	//wall 3
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(70.0, 0.0, -260.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(70.0, 50.0, -260.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(70.0, 50.0, -290.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(70.0, 0.0, -290.0);
	glEnd();
	

	//wall 4
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(70.0, 0.0, -290.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(70.0, 50.0, -290.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -290.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -290.0);
	glEnd();

	//wall 5
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -290.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -290.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -250.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -250.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(140.0, 0.0, -250.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(140.0, 50.0, -250.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(140.0, 50.0, -220.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(140.0, 0.0, -220.0);
	glEnd();

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture2);

	//wall 2
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(110.0, 0.0, -220.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(110.0, 50.0, -220.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(70.0, 50.0, -260.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(70.0, 0.0, -260.0);
	glEnd();

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture2);

	glPopMatrix();
}



//***********************************************************************************
//draw inner room 5
void GameScene::Draw_InnerRoom_5(GLuint texture, GLuint texture2)
{
	glPushMatrix();


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);

	//wall 1
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -220.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(10.0, 50.0, -220.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(15.0, 50.0, -220.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(15.0, 0.0, -220.0);
	glEnd();
	
	//wall 3
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(55.0, 0.0, -260.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(55.0, 50.0, -260.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(55.0, 50.0, -290.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(55.0, 0.0, -290.0);
	glEnd();
	
	//wall 4
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(55.0, 0.0, -290.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(55.0, 50.0, -290.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(10.0, 50.0, -290.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(10.0, 0.0, -290.0);
	glEnd();

	//wall 5
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -290.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(10.0, 50.0, -290.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(10.0, 50.0, -250.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(10.0, 0.0, -250.0);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(10.0, 0.0, -250.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(10.0, 50.0, -250.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(10.0, 50.0, -220.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(10.0, 0.0, -220.0);
	glEnd();


	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture2);

	//wall 2
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(15.0, 0.0, -220.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(15.0, 50.0, -220.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(55.0, 50.0, -260.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(55.0, 0.0, -260.0);
	glEnd();

	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture2);

	glPopMatrix();
}


//draw pipes
void GameScene::Draw_Pipes(GLuint texture)
{
	GLUquadric *quad;
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);

	quad = gluNewQuadric();
	gluQuadricTexture(quad, 1);

	//all scene pipe 1
	glPushMatrix();

	glTranslatef(0.0, 25.0, 13.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();
	
	glPushMatrix();

	glTranslatef(0.0, 50.0, 13.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();


	//all scene pipe 2
	glPushMatrix();

	glTranslatef(170.0, 25.0, 13.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();
	
	glPushMatrix();

	glTranslatef(170.0, 50.0, 13.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();

	//all scene pipe 3
	glPushMatrix();

	glTranslatef(170.0, 25.0, -150.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(170.0, 50.0, -150.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();
	

	//all scene pipe 4
	glPushMatrix();

	glTranslatef(170.0, 25.0, -300.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(170.0, 50.0, -300.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();

	
	//all scene pipe 5
	glPushMatrix();

	glTranslatef(0.0, 25.0, -300.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.0, 50.0, -300.0);
	glRotatef((GLfloat)90, 1.0, 0.0, 0.0);
	gluCylinder(quad, 1.0, 1.0, 25.0, 40, 40);

	glPopMatrix();


	// wall 3 pipe 1
	glPushMatrix();

	glTranslatef(12.0, 10.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(42.0, 10.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(72.0, 10.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(102.0, 10.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 18.0, 40, 40);

	glPopMatrix();
	
	// wall 3 pipe 2
	glPushMatrix();
	glTranslatef(12.0, 20.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(42.0, 20.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(72.0, 20.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(102.0, 20.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 18.0, 40, 40);

	glPopMatrix();

	// wall 3 pipe 3
	glPushMatrix();
	glTranslatef(12.0, 30.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(42.0, 30.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(72.0, 30.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 30.0, 40, 40);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(102.0, 30.0, -8.0);
	glRotatef((GLfloat)90, 0.0, 1.0, 0.0);
	gluCylinder(quad, 2.0, 2.0, 18.0, 40, 40);

	glPopMatrix();

	LoadTexture::FreeCreatedTexture(texture);
}


//draw wood boxes
void GameScene::Draw_WoodBoxes(GLuint texture)
{
	glPushMatrix();


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);
	
	//draw 3 wood boxes
	for (float a = 0.0; a <= 60.0; a += 30.0)
	{
		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(30.0+a, 9.0, 14.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(40.0 + a, 9.0, 14.0);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(40.0 + a, 0.1, 14.0);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(30.0 + a, 0.1, 14.0);
		glEnd();

		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(30.0 + a, 9.0, 14.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(40.0 + a, 9.0, 14.0);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(40.0 + a, 9.0, 19.8);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(30.0 + a, 9.0, 19.8);
		glEnd();

		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(30.0 + a, 9.0, 14.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(30.0 + a, 9.0, 19.8);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(30.0 + a, 0.1, 19.8);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(30.0 + a, 0.1, 14.0);
		glEnd();

		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(40.0 + a, 9.0, 14.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(40.0 + a, 9.0, 19.8);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(40.0 + a, 0.1, 19.8);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(40.0 + a, 0.1, 14.0);
		glEnd();
	}
	

		//wood box 1
		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(170.8, 10.0, -100.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(180.0, 10.0, -100.0);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(180.0, 0.1, -100.0);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(170.8, 0.1, -100.0);
		glEnd();

		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(170.8, 10.0, -100.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(170.8, 10.0, -112.0);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(170.8, 0.1, -112.0);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(170.8, 0.1, -100.0);
		glEnd();

		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(170.8, 10.0, -112.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(180.0, 10.0, -112.0);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(180.0, 0.1, -112.0);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(170.8, 0.1, -112.0);
		glEnd();

		glColor3f(0.7, 0.6, 0.4);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);
		glVertex3f(170.8, 10.0, -112.0);
		glTexCoord2f(0.0, 1.0);
		glVertex3f(180.0, 10.0, -112.0);
		glTexCoord2f(1.0, 1.0);
		glVertex3f(180.0, 10.0, -100.0);
		glTexCoord2f(1.0, 0.0);
		glVertex3f(170.8, 10.0, -100.0);
		glEnd();


	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);

	glPopMatrix();
}


void GameScene::Display_Text(GLuint texture)
{
	glPushMatrix();


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);


	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(179.8, 30.0, -80.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(179.8, 30.0, -64.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(179.8, 10.0, -64.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(179.8, 10.0, -80.0);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.0, 0.0);
	glVertex3f(-9.9, 30.0, -64.0);
	glTexCoord2f(0.0, 1.0);
	glVertex3f(-9.9, 30.0, -80.0);
	glTexCoord2f(1.0, 1.0);
	glVertex3f(-9.9, 10.0, -80.0);
	glTexCoord2f(1.0, 0.0);
	glVertex3f(-9.9, 10.0, -64.0);
	glEnd();


	glDisable(GL_TEXTURE_2D);

	LoadTexture::FreeCreatedTexture(texture);

	glPopMatrix();
}
