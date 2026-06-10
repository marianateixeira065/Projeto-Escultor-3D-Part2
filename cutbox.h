#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"

/**
 * @brief Classe concreta para apagar um paralelepípedo (caixa) maciço.
 */
class CutBox : public FiguraGeometrica {
private:
    int x0; /**< @brief Coordenada X inicial */
    int x1; /**< @brief Coordenada X final */
    int y0; /**< @brief Coordenada Y inicial */
    int y1; /**< @brief Coordenada Y final */
    int z0; /**< @brief Coordenada Z inicial */
    int z1; /**< @brief Coordenada Z final */

public:
    /**
     * @brief Construtor da classe CutBox.
     * * @param x0 Coordenada X inicial do intervalo a ser apagado.
     * @param x1 Coordenada X final do intervalo a ser apagado.
     * @param y0 Coordenada Y inicial do intervalo a ser apagado.
     * @param y1 Coordenada Y final do intervalo a ser apagado.
     * @param z0 Coordenada Z inicial do intervalo a ser apagado.
     * @param z1 Coordenada Z final do intervalo a ser apagado.
     */
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
     * @brief Destrutor da classe CutBox.
     */
    ~CutBox() {}

    /**
     * @brief Apaga a caixa na matriz tridimensional.
     * * @param t Referência para o objeto Sculptor.
     */
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
