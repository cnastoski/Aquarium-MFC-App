/**
 * \file FishBeta.h
 *
 * \author Chris Nastoski
 *
 * class that implements a Stinky fish.
 */



#pragma once

#include <memory>
#include "Fish.h"


 /**
  * Implements a Beta fish
  */
class CFishStinky : public CFish
{
public:
	CFishStinky(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishStinky() = delete;

	/// Copy constructor (disabled)
	CFishStinky(const CFishStinky&) = delete;

	/**
	* saves the speed of the fish to an xml format
	*/
	virtual std::shared_ptr<xmlnode::CXmlNode>
		XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;
};
