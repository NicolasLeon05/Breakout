#include "Scene_MainMenu.h"
#include "Constants.h"
#include "sl.h"
#include "Color.h"

namespace Bton = Button;
using namespace Bton;
using namespace Constants;
using namespace Colors;

namespace MainMenu
{

	Bton::Button play;
	Bton::Button controls;
	Bton::Button exit;

	void Init()
	{
		const float width = 300;
		play = Create("Play", screenWidth / 2, screenHeight / 5 * 3, width, 60);
		controls = Create("Controls", screenWidth / 2, screenHeight / 5 * 2, width, 60);
		exit = Create("Exit", screenWidth / 2, screenHeight / 5, width, 60);
	}

	void Draw()
	{
		slSetFontSize(100);
		SetColor(COLOR::RED);
		slText(screenWidth / 2, screenHeight / 5 * 4, "BreakDaBlocks");
		slSetFontSize(baseFontSize);

		Bton::Draw(play);
		Bton::Draw(controls);
		Bton::Draw(exit);

		slSetFontSize(25);
		float textX = slGetTextWidth("Developed by: Nicolas Leon") / 2;
		SetColor(COLOR::BLUE);
		slText(textX + 25, 25, "Developed by: Nicolas Leon");
		slSetFontSize(baseFontSize);
	}
}
