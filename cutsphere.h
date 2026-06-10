#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"

class CutSphere : public FiguraGeometrica {
private:
    int xcenter, ycenter, zcenter, radius;
public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    ~CutSphere() {}
    void draw(Sculptor &t);
};

#endif