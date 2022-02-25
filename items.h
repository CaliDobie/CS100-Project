#ifndef _ITEMS_H_
#define _ITEMS_H_

#include <string>
#include <vector>

using namespace std;

class items {

private:

    string name;
    int category;
    int effect;

public:

    items();
    virtual string getName() = 0;
    virtual void setName(string newName) = 0;
    virtual int getCategory() = 0;
    virtual void setCategory(int newCategory) = 0;
    virtual int getEffect() = 0;
    virtual void setEffect(int newEffect) = 0;

};
#endif

