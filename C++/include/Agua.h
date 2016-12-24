#ifndef AGUA_H
#define AGUA_H


class Agua
{
    public:
        Agua();
        virtual ~Agua();
        //se declaran los metodos publicos:
        int botellasDeAgua();//botellasDeAgua() de tipo entero

        //se definen los metodos Set y Get del atributo "minutos"
        void setMinutos(int n);
        int getMinutos();
    protected:

    private://se declara el atributo privado:
        int minutos;//"minutos" de tipo entero
};

#endif // AGUA_H
