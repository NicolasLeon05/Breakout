#pragma once
#include <sl.h>
#include "Rectangle.h"

namespace Button
{
	struct Button
	{
		Rectangle::Rec rectangle;
		const char* text;
		bool isSelected;
	};

	void Draw(Button button);

	Button Create(const char* text, float recX, float recY, float recWidth, float recHeight);

	bool IsButtonSelected(Button& button);

	bool IsButtonPressed(Button& button);

	float GetSpaceBetween(float width, int buttons);
}

