#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para apagar um elipsoide maciço.
 */
class CutEllipsoid : public FiguraGeometrica {
private:
    int xcenter; /**< @brief Coordenada X do centro do elipsoide */
    int ycenter; /**< @brief Coordenada Y do centro do elipsoide */
    int zcenter; /**< @brief Coordenada Z do centro do elipsoide */
    int rx;      /**< @brief Raio do elipsoide no eixo X */
    int ry;      /**< @brief Raio do elipsoide no eixo Y */
    int rz;      /**< @brief Raio do elipsoide no eixo Z */

public:
    /**
     * @brief Construtor da classe CutEllipsoid.
     * * @param xcenter Coordenada X do centro.
     * @param ycenter Coordenada Y do centro.
     * @param zcenter Coordenada Z do centro.
     * @param rx Raio no eixo X.
     * @param ry Raio no eixo Y.
     * @param rz Raio no eixo Z.
     */
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
     * @brief Destrutor da classe CutEllipsoid.
     */
    ~CutEllipsoid() {}

    /**
     * @brief Apaga o elipsoide na matriz tridimensional.
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
