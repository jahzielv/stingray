#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "dom.h"
DomNode::DomNode() : id(0) {}
DomNode::DomNode(int i) : id(i) {}
int DomNode::getId()
{
    return id;
}

void DomNode::setId(int newId)
{
    id = newId;
}

void DomNode::addChild(DomNode *kid)
{
    this->children.push_back(kid);
}
std::vector<DomNode *> DomNode::getChildren()
{
    return children;
}

DomNode::~DomNode()
{
    std::cout << "destructor";
}

ElementNode::ElementNode(std::string tag, std::map<std::string, std::string> attr) : tagName(tag), attributes(attr) {}

std::string ElementNode::getTagName()
{
    return tagName;
}
std::map<std::string, std::string> ElementNode::getAttributes()
{
    return attributes;
}
void ElementNode::setTagName(std::string name)
{
    tagName = name;
}
void ElementNode::setAttributes(std::map<std::string, std::string> attr)
{
    attributes = attr;
}

TextNode::TextNode(std::string newData) : data(newData) {}
std::string TextNode::getData()
{
    return data;
}
void TextNode::setData(std::string newData)
{
    data = newData;
}
