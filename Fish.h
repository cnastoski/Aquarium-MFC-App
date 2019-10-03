/**
 * \file Fish.h
 *
 * \author Chris Nastoski
 *
 * The base class  for all of the fish in the aquarium
 */


#pragma once


#include "Item.h"


 /// Maximum speed in the X direction in
 /// in pixels per second

const double MaxSpeedX = 50; //<max horizontal speed of the fish.
const double MaxSpeedY = 50; //<max veritcal speed of the fish.

/**
 * Base class for a fish
 * This applies to all of the fish, but not the decor
 * items in the aquarium.
 */
class CFish :  public CItem
{
public:
	/// Default constructor (disabled)
	CFish() = delete;

	/// Copy constructor (disabled)
	CFish(const CFish&) = delete;

	virtual void Update(double elapsed);

	std::shared_ptr<xmlnode::CXmlNode> XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node);

	void XmlLoad(const std::shared_ptr<xmlnode::CXmlNode>& node);

	/// Get the horizeoontal speed of a fish
	/// \returns fish horizontal speed
	double GetSpeedX() const { return mSpeedX; }

	

protected:
	/**
	* Constructor
	* \param aquarium The aquarium we are in
	* \param filename Filename for the image we use
	*/
	CFish::CFish(CAquarium* aquarium, const std::wstring& filename) :
		CItem(aquarium, filename)
	{
		mSpeedX = ((double)rand() / RAND_MAX) * MaxSpeedX;
		mSpeedY = ((double)rand() / RAND_MAX) * MaxSpeedY;
	}

private:
	/// Fish speed in the X direction
	double mSpeedX;

	/// Fish speed in the Y direction
	double mSpeedY;

};

