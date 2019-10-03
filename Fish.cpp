/**
 * \file Fish.cpp
 *
 * \author Chris Nastoski
 *
 *A class that is the base class for all of the fish in the aquarium
 */



#include "pch.h"
#include "Fish.h"
#include "Aquarium.h"
#include <cmath>


/**
 * Handle updates in time of our fish
 *
 * This is called before we draw and allows us to
 * move our fish. We add our speed times the amount
 * of time that has elapsed.
 * \param elapsed Time elapsed since the class call
 */
void CFish::Update(double elapsed)
{
	SetLocation(GetX() + mSpeedX * elapsed,
		GetY() + mSpeedY * elapsed);

	if (mSpeedX > 0 && GetX() >= GetAquarium()->GetWidth()-10-this->GetWidth()/2)
	{
		mSpeedX = -mSpeedX;
		SetMirror(mSpeedX < 0);
	}

	if (mSpeedX < 0 && GetX()<= 10+this->GetWidth()/2)
	{
		mSpeedX = -mSpeedX;
		SetMirror(mSpeedX < 0);
	}

	if (mSpeedY > 0 && GetY() >= GetAquarium()->GetHeight() - 10 - this->GetHeight() / 2)
	{
		mSpeedY = -mSpeedY;
	}

	if (mSpeedY < 0 && GetY() <= 10 + this->GetHeight() / 2)
	{
		mSpeedY = -mSpeedY;
	}
}


/**
 * saves the speed of the fish to an xml format
 */
std::shared_ptr<xmlnode::CXmlNode>
CFish::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	auto itemNode = CItem::XmlSave(node);
	
	itemNode->SetAttribute(L"SpeedX", mSpeedX);
	itemNode->SetAttribute(L"SpeedY", mSpeedY);


	return itemNode;
}

/**
 * Load the attributes for an item node.
 *
 * This is the  base class version that loads the attributes
 * common to all items. Override this to load custom attributes
 * for specific items.
 *
 * \param node The Xml node we are loading the item from
 */
void CFish::XmlLoad(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	CItem::XmlLoad(node);
	mSpeedX = node->GetAttributeDoubleValue(L"SpeedX", 0);
	mSpeedY = node->GetAttributeDoubleValue(L"SpeedY", 0);
	SetMirror(mSpeedX < 0);
}