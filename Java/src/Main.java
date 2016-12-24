
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Agua (Instanciaciación)
        Agua obj = new Agua();
        //se declara la variable "minutos"
        int minutos;
        do//preguntaremos al usuario la longitud que dura en la ducha
        {
            //guardamos el valor digitado por el usuario en la variable "minutos"
            minutos = Integer.parseInt(JOptionPane.showInputDialog(null, "Digite la longitud de su duracion en la ducha:"));
            obj.setMinutos(minutos);//llamamos al metodo modificador y le asignamos la variable "minutos"
        }
        while(minutos < 0);//mientras el usurio digite un valor entero menor a 0 repetira las intrucciones
        //mostramos los minutos que dura su ducha y la cantidad de botellas
        JOptionPane.showMessageDialog(null, " Minutos: " + obj.getMinutos() + "\n Botellas: " + obj.botellasDeAgua());
    }
}
