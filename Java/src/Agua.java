public class Agua
{
    //se declara el atributo privado:
    private int minutos;//"minutos" de tipo entero
    
    public Agua()
    {
        //se le asigna 0 por defecto al atributo "minuto" en el contructor
        this.minutos = 0;
    }
    
    //Implementacion del metodo para calcular la cantidad de botellas
    public int botellasDeAgua()
    {
        //el calculo es muy sencillo solo debemos multiplicar las 192 onzas que escupe una ducha por minuto
        //por los minutos que digite el usuario y ese resultado lo dividimos entre las 16 onzas de la botella de agua
        int botellas = (192 * minutos) / 16;
        return botellas;//retornamos el resultado
    }
    
    //Implementacion de los metodos Set y Get del atributo "minuto"
    public void setMinutos(int n)
    {
        minutos = n;
    }

    public int getMinutos()
    {
        return minutos;
    }
}