/**
 * \file FishBeta.h
 *
 * \author Chris Nastoski
 *
 * class that implements an Angel fish.
 */



#pragma once

#include <memory>
#include "Fish.h"



/**
 * class that implements an Angel fish.
 */
class CFishAngel : public CFish
{
public:
	CFishAngel(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishAngel() = delete;

	/// Copy constructor (disabled)
	CFishAngel(const CFishAngel&) = delete;

	/**
	* saves the speed of the fish to an xml format
	*/
	virtual std::shared_ptr<xmlnode::CXmlNode>
		XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;
};

