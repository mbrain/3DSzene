#ifndef _DRAWSCENE_H
#define _DRAWSCENE_H

//declare GameScene class & functions which needs to draw
class GameScene
{
public:
	void Draw_OuterWall(GLuint,BOOL);

	void Draw_InnerRoom_1(GLuint);

	void Draw_InnerRoom_2(GLuint,GLuint);

	void Draw_InnerRoom_3(GLuint,GLuint);

	void Draw_InnerRoom_4(GLuint,GLuint);

	void Draw_InnerRoom_5(GLuint,GLuint);

	void Draw_Roof(GLuint, int,float);

	void Draw_Floor(GLuint, float);

	void Draw_Pipes(GLuint);

	void Draw_WoodBoxes(GLuint);

	void Display_Text(GLuint);

};


#endif