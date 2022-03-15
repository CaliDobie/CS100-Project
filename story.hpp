#ifndef _STORY_H_
#define _STORY_H_

using namespace std;

class story  {

private:

    int rumor;
    bool trial1;
    bool trial2;
    bool trial3;
   

public:

    story() {};

    virtual int get_rumor() = 0;
    virtual bool get_trial1() = 0;
    virtual bool get_trial() = 0 ;
    virtual void set_trial(bool pass, int number ) = 0;
    virtual void set_rumor(int inout) = 0;
    
};
#endif
