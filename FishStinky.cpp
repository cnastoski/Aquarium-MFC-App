#include "pch.h"
#include <string>
#include "FishStinky.h"

using namespace std;
using namespace Gdiplus;

/// Fish filename 
const wstring FishStinkyImageName = L"images/stinky.png";

/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CFishStinky::CFishStinky(CAquarium* aquarium) :
	CFish(aquarium, FishStinkyImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CFishStinky::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	auto itemNode = CFish::XmlSave(node);

	itemNode->SetAttribute(L"type", L"stinky");

	return itemNode;
}