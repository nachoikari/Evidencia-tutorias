package tu_7;
import java.util.Scanner;
public class Gato {
    private String name;
    private int age;
    private Comida alimento=new Comida();
    public Gato(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void setComida(String tipo, String name, int peso){
       this.alimento.setTipoAnimal(tipo);
       this.alimento.setName(name);
       this.alimento.setPeso(peso);
    }
    @Override
    public String toString() {
        return "Gato{" + "name=" + name + ", age=" + age + '}'+this.alimento.toString();
    }
    
}
