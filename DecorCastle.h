/**
 * \file DecorCastle.h
 *
 * \author Chris Nastoski
 *
 * A class that describes a castle decor piece in an aquarium.
 */



#pragma once


#include "Item.h"
#include <memory>


/**
 * implements a decor castle piece
 */
class CDecorCastle : public CItem
{
public:
	CDecorCastle(CAquarium* aquarium);

	/// Default constructor (disabled)
	CDecorCastle() = delete;

	/// Copy constructor (disabled)
	CDecorCastle(const CDecorCastle&) = delete;

	//saves the castle to an xml format
	virtual std::shared_ptr<xmlnode::CXmlNode>
		XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;
};

