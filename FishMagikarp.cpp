#include "pch.h"
#include <string>
#include "FishMagikarp.h"

using namespace std;
using namespace Gdiplus;

/// Fish filename 
const wstring FishMagikarpImageName = L"images/magikarp.png";

/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CFishMagikarp::CFishMagikarp(CAquarium* aquarium) :
	CFish(aquarium, FishMagikarpImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CFishMagikarp::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	auto itemNode = CFish::XmlSave(node);

	itemNode->SetAttribute(L"type", L"magikarp");

	return itemNode;
}