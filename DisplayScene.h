#ifndef _DISPLAYSCENE_H
#define _DISPLAYSCENE_H

//define different textures values from 1 to 8
enum MyTextures
{
	DEFAULT = 0x01,
	ANIMATION=0x02,
	BUILDINGS=0x03,
	HORROR=0x04,
	GREENY=0x05,
	WOODS=0x06,
	ROCKS=0x07,
	CIRCUIT=0x08
};


//class to display whole scene
class DisplayGameScene
{
public:
	//define function to display a whole scene
	//first int is texture int
	//second int is used for where to show Roof or not
	//third BOOL is used to whether show outerwall or not
	static void DisplayTexturedGameScene(int,int,BOOL);
};



#endif
