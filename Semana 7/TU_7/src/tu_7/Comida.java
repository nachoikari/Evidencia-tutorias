/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tu_7;


public class Comida {
    private String name;
    private String tipo;
    private int peso;
    public Comida() {
        this.name = "Indef";
        this.tipo = "Indef";
        this.peso = 0;
    }
    public Comida(String name, String tipoAnimal, int peso) {
        this.name = name;
        this.tipo = tipoAnimal;
        this.peso = peso;
    }
    
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getTipoAnimal() {
        return tipo;
    }

    public void setTipoAnimal(String tipoAnimal) {
        this.tipo = tipoAnimal;
    }

    public int getPeso() {
        return peso;
    }

    public void setPeso(int peso) {
        this.peso = peso;
    }

    @Override
    public String toString() {
        return "Comida{" + "name=" + name + ", tipo=" + tipo + ", peso=" + peso + '}';
    }
    
}
