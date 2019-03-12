#ifndef _DISPLAYSCENE_H
#define _DISPLAYSCENE_H

enum MyTextures
{
	DEFAULT = 0x01,
	ANIMATION=0x02,
};

class DisplayGameScene
{
public:
	//texture, roof, outerwall
	static void DisplayTexturedGameScene(int,int,BOOL);
};



#endif
