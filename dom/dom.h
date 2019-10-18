#include <vector>
#include <string>
#include <map>

class DomNode
{
private:
    int id;
    std::vector<DomNode *> children;

public:
    DomNode();
    DomNode(int id);
    int getId();
    void setId(int newId);
    void addChild(DomNode *kid);
    std::vector<DomNode *> getChildren();
    virtual ~DomNode();
};

class ElementNode : public DomNode
{
private:
    std::string tagName;
    std::map<std::string, std::string> attributes;

public:
    ElementNode(std::string tagName, std::map<std::string, std::string> attr);
    std::string getTagName();
    std::map<std::string, std::string> getAttributes();
    void setTagName(std::string name);
    void setAttributes(std::map<std::string, std::string> attr);
};

class TextNode : public DomNode
{
private:
    std::string data;

public:
    TextNode(std::string newData);
    std::string getData();
    void setData(std::string newData);
};