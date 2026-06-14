# Projeto Escultor 3D - Parte 2 

Este repositório contém a **Parte 2** do projeto Escultor 3D, desenvolvido em **C++**. Nesta etapa, a arquitetura do programa evoluiu de uma abordagem procedural para uma **Arquitetura de Orientação a Objetos Avançada**.

A grande novidade desta versão é que as esculturas deixaram de ser programadas rigidamente (hardcoded) no código-fonte. Agora, o programa funciona como um **Interpretador/Leitor**: ele lê um arquivo de texto simples (`.txt`) contendo instruções de desenho e, utilizando conceitos de Herança e Polimorfismo, processa e gera automaticamente a escultura final num arquivo `.OFF`.

## 🚀 O que há de novo nesta versão?
* **Classe Abstrata:** Criação da classe base `FiguraGeometrica` que atua como contrato para os elementos desenháveis.
* **Classes Concretas (Pincéis):** Ferramentas modulares para desenhar e apagar formas, incluindo `PutVoxel`, `CutVoxel`, `PutBox`, `CutBox`, `PutSphere`, `CutSphere`, `PutEllipsoid` e `CutEllipsoid`.
* **Leitura Automática de Arquivos:** O programa lê instruções linha por linha de um arquivo de texto e aloca os objetos dinamicamente num `std::vector` de ponteiros.

## 🛠️ Pré-requisitos

Para compilar e executar este projeto, precisará de ter instalado na sua máquina:
* Um compilador C++ (como o **GCC/MinGW** para Windows ou **Clang** para macOS/Linux).
* Um visualizador de arquivos 3D (recomendamos o software [MeshLab](https://www.meshlab.net/) ou o visualizador online [3D Viewer](https://3dviewer.net/)).

## ⚙️ Como Compilar o Projeto

Como o projeto agora é composto por múltiplas classes e ficheiros, o comando de compilação foi simplificado para abranger todos os arquivos `.cpp` de uma só vez:

1. Faça o clone deste repositório ou baixe todos os arquivos fonte (`.cpp` e `.h`).
2. Abra o terminal (ou prompt de comando) e navegue até à pasta onde os arquivos estão salvos.
3. Digite o seguinte comando para compilar:

   ```bash
   g++ *.cpp -o programa
