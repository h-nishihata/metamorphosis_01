#ifndef _OF_PEN
#define _OF_PEN

#include "ofMain.h"

class pen{
    
public:
    
    // stroke
    float centx;
    float centy;
    float radius;
    float ang;
    float rotate;
    
    float thisRadius;
    float radiusNoise;
    float x;
    float y;
    
    int waitCnt;
    int step;
    int speedX;
    int speedY;
    int time;
    bool flag_t;
    
    
    //colors
    bool setEraser;
    bool flag_c;
    float r;
    float g;
    float b;

    int waiting;
    float a;

    int ID;
    
    
    //functions
    pen();
    void setup();
    void update();
    void draw();
    void reset();
    
    void setR(int red);
    void setG(int green);
    void setB(int blue);
    void setID(int ID);

};

#endif
