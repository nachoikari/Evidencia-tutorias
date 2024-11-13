package tu_clase11;

public class TU_Clase11 {

    public static void main(String[] args) {
        int size = 5;
        int[][] matrix = {
                            {1,  2,  3,  4,  5},
                            {6,  7,  8,  9,  10},
                            {11, 12, 13, 14, 15},
                            {16, 17, 18, 19, 20},
                            {21, 22, 23, 24, 25}
                        };
        
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                System.out.print(matrix[i][j] +" ");
            }
            System.out.println("");
        }
        //DIAGONAL PRINCIPAL
        /*for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if( i == j){
                    System.out.print(matrix[i][j] +" ");
                }
            }
            System.out.println("");
        }
        for(int i = 0; i < size; i++){
            System.out.print(matrix[i][i] +" ");
        }*/
        printCol(matrix, 2, size);
    }
    
    public static void printCol(int[][] matrix, int col, int size){
        for(int i = 0; i < size; i++){
            System.out.print(matrix[i][col] +" ");
        }
    }
}
