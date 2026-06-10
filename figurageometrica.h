#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"

/**
 * @brief Classe base abstrata para representação de figuras geométricas.
 * * Serve como molde/contrato para todas as classes concretas de desenho,
 * garantindo que todas possuam o método polimórfico draw().
 */
class FiguraGeometrica {
protected:
    float r; /**< @brief Intensidade da cor vermelha (0.0 a 1.0) */
    float g; /**< @brief Intensidade da cor verde (0.0 a 1.0) */
    float b; /**< @brief Intensidade da cor azul (0.0 a 1.0) */
    float a; /**< @brief Transparência / Canal Alfa (0.0 a 1.0) */

public:
    /**
     * @brief Destrutor virtual da classe FiguraGeometrica.
     */
    virtual ~FiguraGeometrica() {}

    /**
     * @brief Método virtual puro para desenhar a figura.
     * * @param t Referência para o objeto Sculptor (a nossa tela de pintura).
     */
    virtual void draw(Sculptor &t) = 0;
};

#endif // FIGURAGEOMETRICA_H
