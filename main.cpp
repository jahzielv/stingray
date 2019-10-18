#include <iostream>
#include "dom/dom.h"
int main(void)
{
    std::cout << "Hello world!\n";
    DomNode *d = new DomNode(4);
    std::cout << d->getId() << std::endl;
    TextNode *tn = new TextNode("my data");
    tn->setId(5);
    std::cout << tn->getData() << "\n";
    DomNode *kid = new TextNode("child data");
    tn->addChild(kid);
    TextNode *gotChild = dynamic_cast<TextNode *>(tn->getChildren()[0]);
    std::cout << gotChild->getData() << "\n";
    return 0;
}
