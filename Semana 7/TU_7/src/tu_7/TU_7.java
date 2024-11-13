package tu_7;
import java.util.Scanner;
public class TU_7 {
    public static Gato gato=new Gato("Wiskas",6);
    public static void main(String[] args) {
        //menu();
        setComida();
    }
    public void opciones(int opt){
        switch(opt){
            case 1:
                suma(3,5);
                break;          
        }
    }
    public static void suma(int  a, int b){
        System.out.println(a+b);
    }
    public static void restar(int  a, int b){
        System.out.println(a-b);
    }
    public static void multiplicar(int  a, int b){
        System.out.println(a*b);
    }
    public static void dividir(int  a, int b){
        System.out.println(a/b);
    }
    public static void menu() {
        Scanner scanner = new Scanner(System.in);
        int opcion, a, b;
        boolean loop = true;
        while (loop) {
            System.out.println("Primer numero");
            a = scanner.nextInt();
            System.out.println("Segundo numero");
            b = scanner.nextInt();
            System.out.println("1-sumar");
            System.out.println("2-restar");
            System.out.println("3-multiplicar");
            System.out.println("4-dividir");
            System.out.println("5-Salr");
            opcion = scanner.nextInt();
            switch (opcion) {
                case 1:
                    suma(a, b);
                    break;
                case 2:
                    restar(a, b);
                    break;
                case 3:
                    multiplicar(a, b);
                    break;
                case 4:
                    dividir(a, b);
                    break;
                case 5:
                    System.out.println("Saliendo");
                    loop=false;
                    break;}
        }
    }   
    public static void setComida(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Ingrese el nombre del alimento");
        String nameAlimento= scanner.nextLine();
        System.out.println("Ingrese peso de la bolsa");
        int peso=scanner.nextInt();
        /*
        PONER SCANNER.NEXTLINE() DESPUES DE UN NEXTINT()
        */
        scanner.nextLine();
        System.out.println("Ingrese el tipo de alimento");
        String tipo = scanner.nextLine();
        gato.setComida(tipo,nameAlimento, peso);
        System.out.println(gato.toString());
    }
}
