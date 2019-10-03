/**
 * \file FishBeta.h
 *
 * \author Chris Nastoski
 *
 * class that implements Magikarp.
 */



#pragma once

#include <memory>
#include "Fish.h"


/**
 * Implements Magikarp
 */
class CFishMagikarp : public CFish
{
public:
	CFishMagikarp(CAquarium* aquarium);

	/// Default constructor (disabled)
	CFishMagikarp() = delete;

	/// Copy constructor (disabled)
	CFishMagikarp(const CFishMagikarp&) = delete;


	/**
	* saves the speed of the fish to an xml format
	*/
	virtual std::shared_ptr<xmlnode::CXmlNode>
		XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node) override;
};

