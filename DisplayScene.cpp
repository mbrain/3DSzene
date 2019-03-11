
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

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/plain2.bmp"), outerwall);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/blocks.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/blocks.bmp"), LoadTexture::LoadTextureImageFile("textures/blocks2.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/blocks.bmp"), LoadTexture::LoadTextureImageFile("textures/blocks2.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/blocks.bmp"), LoadTexture::LoadTextureImageFile("textures/blocks2.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/blocks.bmp"), LoadTexture::LoadTextureImageFile("textures/blocks2.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/plain.bmp"), rooftype,2.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/blocks3.bmp"), 6.0);
		gs.Draw_Pipes(LoadTexture::LoadTextureImageFile("textures/plain.bmp"));
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/roughwood.bmp"));
		gs.Display_Text(LoadTexture::LoadTextureImageFile("textures/text.bmp"));

		break;

	case ANIMATION :

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/blocks4.bmp"), outerwall);
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


	case BUILDINGS :

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/metal.bmp"), outerwall);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/building.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/building.bmp"), LoadTexture::LoadTextureImageFile("textures/building.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/building.bmp"), LoadTexture::LoadTextureImageFile("textures/building.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/blocks9.bmp"), LoadTexture::LoadTextureImageFile("textures/building.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/blocks9.bmp"), LoadTexture::LoadTextureImageFile("textures/building.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/plain2.bmp"), rooftype,2.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/blocks8.bmp"), 1.0);
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/blocks.bmp"));
		gs.Display_Text(LoadTexture::LoadTextureImageFile("textures/text.bmp"));

		break;


	case HORROR :

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/horror2.bmp"), outerwall);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/horror1.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/horror4.bmp"), LoadTexture::LoadTextureImageFile("textures/horrorbabies.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/horror1.bmp"), LoadTexture::LoadTextureImageFile("textures/horrorbabies.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/skull2.bmp"), LoadTexture::LoadTextureImageFile("textures/horrorbabies.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/skull2.bmp"), LoadTexture::LoadTextureImageFile("textures/horrorbabies.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/roughwood.bmp"), rooftype,1.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/horror_floor.bmp"), 1.0);
		gs.Draw_Pipes(LoadTexture::LoadTextureImageFile("textures/horror3.bmp"));
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/skull2.bmp"));
		gs.Display_Text(LoadTexture::LoadTextureImageFile("textures/text.bmp"));

		break;

	case GREENY :

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/beans.bmp"), outerwall);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/grass2.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/leaves.bmp"), LoadTexture::LoadTextureImageFile("textures/green5.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/leaves.bmp"), LoadTexture::LoadTextureImageFile("textures/green5.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/grass2.bmp"), LoadTexture::LoadTextureImageFile("textures/green5.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/grass2.bmp"), LoadTexture::LoadTextureImageFile("textures/green5.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/grass.bmp"), rooftype,1.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/grass.bmp"), 1.0);
		gs.Draw_Pipes(LoadTexture::LoadTextureImageFile("textures/leaves.bmp"));
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/sky001.bmp"));
		gs.Display_Text(LoadTexture::LoadTextureImageFile("textures/text.bmp"));

		break;

	case WOODS :

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/plain.bmp"), outerwall);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/roughwood.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/roughwood.bmp"), LoadTexture::LoadTextureImageFile("textures/plainwood.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/roughwood.bmp"), LoadTexture::LoadTextureImageFile("textures/plainwood.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/roughwood.bmp"), LoadTexture::LoadTextureImageFile("textures/plainwood.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/roughwood.bmp"), LoadTexture::LoadTextureImageFile("textures/plainwood.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/plain2.bmp"), rooftype,1.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/blocks8.bmp"), 1.0);
		gs.Draw_Pipes(LoadTexture::LoadTextureImageFile("textures/plainwood.bmp"));
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/wood2.bmp"));
		gs.Display_Text(LoadTexture::LoadTextureImageFile("textures/text.bmp"));

		break;

	case ROCKS :

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/blocks8.bmp"), outerwall);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/rocks.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/rocks2.bmp"), LoadTexture::LoadTextureImageFile("textures/rocks.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/rocks2.bmp"), LoadTexture::LoadTextureImageFile("textures/rocks.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/rocks.bmp"), LoadTexture::LoadTextureImageFile("textures/rocks2.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/rocks.bmp"), LoadTexture::LoadTextureImageFile("textures/rocks2.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/plain2.bmp"), rooftype,1.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/blocks9.bmp"), 1.0);
		gs.Draw_Pipes(LoadTexture::LoadTextureImageFile("textures/blocks9.bmp"));
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/blocks.bmp"));
		gs.Display_Text(LoadTexture::LoadTextureImageFile("textures/text.bmp"));

		break;

	case CIRCUIT:

		gs.Draw_OuterWall(LoadTexture::LoadTextureImageFile("textures/circuitboard3.bmp"), outerwall);
		gs.Draw_InnerRoom_1(LoadTexture::LoadTextureImageFile("textures/circuitboard4.bmp"));
		gs.Draw_InnerRoom_2(LoadTexture::LoadTextureImageFile("textures/circuitboard2.bmp"), LoadTexture::LoadTextureImageFile("textures/circuitboard6.bmp"));
		gs.Draw_InnerRoom_3(LoadTexture::LoadTextureImageFile("textures/circuitboard5.bmp"), LoadTexture::LoadTextureImageFile("textures/circuitboard6.bmp"));
		gs.Draw_InnerRoom_4(LoadTexture::LoadTextureImageFile("textures/circuitboard4.bmp"), LoadTexture::LoadTextureImageFile("textures/circuitboard6.bmp"));
		gs.Draw_InnerRoom_5(LoadTexture::LoadTextureImageFile("textures/circuitboard4.bmp"), LoadTexture::LoadTextureImageFile("textures/circuitboard6.bmp"));
		gs.Draw_Roof(LoadTexture::LoadTextureImageFile("textures/circuitboard5.bmp"), rooftype, 1.0);
		gs.Draw_Floor(LoadTexture::LoadTextureImageFile("textures/circuit.bmp"), 1.0);
		gs.Draw_WoodBoxes(LoadTexture::LoadTextureImageFile("textures/circuitboard5.bmp"));

		break;
	}
}
