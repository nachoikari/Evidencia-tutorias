package com.mycompany.tu_5;

public class Persona {
    private String nombre;
    private int edad;

    public Persona(String pNombre, int pEdad) {
        this.nombre = pNombre;
        this.edad = pEdad;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String pNombre) {
        this.nombre = pNombre;
    }

    public int getEdad() {
        return edad;
    }

    public void setEdad(int pEdad) {
        this.edad = pEdad;
    }

    @Override
    public String toString() {
        return "Persona{" + "nombre=" + nombre + ", edad=" + edad + '}';
    }
    

   
}
