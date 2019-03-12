
#include"LoadImageFile.h"
#include"DrawScene.h"
#include"DisplayScene.h"

//define function from class DisplayGameScene()
//call all function which wants to draw from class GameScene
void DisplayGameScene::DisplayTexturedGameScene(int type,int rooftype,BOOL outerwall)
{
	switch (type)
	{
		GameScene gs;

	case DEFAULT :

		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/plain.bmp"), rooftype,2.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/blocks3.bmp"), 6.0);
		gs.Draw_Pipes(LoadTexture::LoadTextureImageFile("textures/plain.bmp"));
		break;

	case ANIMATION :

		gs.Draw_OuterWall(1, true);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/blocks5.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/blocks7.bmp"), LoadTexture::LoadTextureImageFile("textures/cartoon1.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/blocks7.bmp"), LoadTexture::LoadTextureImageFile("textures/cartoon2.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/blocks5.bmp"), LoadTexture::LoadTextureImageFile("textures/cartoon3.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/blocks5.bmp"), LoadTexture::LoadTextureImageFile("textures/cartoon4.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/blocks5.bmp"), rooftype,0.5);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/blocks5.bmp"), 0.5);
		gs.Draw_Pipes(LoadTexture::LoadTextureImageFile("textures/blocks7.bmp"));
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/blocks7.bmp"));
		gs.Display_Text(LoadTexture::LoadTextureImageFile("textures/text.bmp"));

		break;

	}
}
