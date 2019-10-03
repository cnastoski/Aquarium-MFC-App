#include "pch.h"
#include "FishAngel.h"
#include <string>

using namespace std;
using namespace Gdiplus;

//fish filename
const wstring FishAngelImageName = L"images/angelfish.png";

/** Constructor
 * \param aquarium The aquarium this is a member of
*/
CFishAngel::CFishAngel(CAquarium* aquarium) :
	CFish(aquarium, FishAngelImageName)
{
}

/**
 * Save this item to an XML node
 * \param node The node we are going to be a child of
 */
std::shared_ptr<xmlnode::CXmlNode>
CFishAngel::XmlSave(const std::shared_ptr<xmlnode::CXmlNode>& node)
{
	auto itemNode = CFish::XmlSave(node);

	itemNode->SetAttribute(L"type", L"angel");

	return itemNode;
}
