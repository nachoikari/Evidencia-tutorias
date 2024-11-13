package com.mycompany.tu_5;

public class TU_5 {
    public static void main(String[] args) {
        //System.out.println("Hello World!");
        //saludo("Isaac"); 
//        boolean flag = false;
//        int[] arr = methodReturningArray();
//        for (int i = 0; i < arr.length; i++) {
//            System.out.println(arr[i]);
    //    }
        Persona obj = new Persona("Isaac",20);
        System.out.println(obj.toString());
        int[] arr;
        int opt=0;
        switch(opt){
            case 1:
                
            break;
        }
    }
    public static boolean saludo(String pNombre){
        System.out.println("=================");
        System.out.println("Hola "+pNombre);
        
        System.out.println("=================");
        return true;
    }
    public static int[] methodReturningArray(){
        int[] sample = { 1, 2, 3, 4 };
        //Return del arreglo
        return sample;
    }
}
