/**
 * \file FishBeta.h
 *
 * \author Chris Nastoski
 *
 * class that implements a Beta fish.
 */



#pragma once

#include <memory>
#include "Fish.h"


 /**
  * Implements a Beta fish
  */
class CFishBeta : public CFish
{
public:
	CFishBeta(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishBeta() = delete;

	/// Copy constructor (disabled)
	CFishBeta(const CFishBeta&) = delete;


	/**
	* saves the speed of the fish to an xml format
	 */
	virtual std::shared_ptr<xmlnode::CXmlNode>
		XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;

};

