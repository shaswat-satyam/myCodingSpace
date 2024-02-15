package Lab3;

import java.util.Arrays;

public class reverse {
    public static void main(String[] args) {
        if (args.length < 4) {
            System.out.println("Please enter atleast 4 elements!");
            return;
        }
        int[][] mat = new int[2][2];
        mat[0][0] = Integer.parseInt(args[0]);
        mat[0][1] = Integer.parseInt(args[1]);
        mat[1][0] =Integer.parseInt(args[2]);
        mat[1][1] = Integer.parseInt(args[3]);
        System.out.println("Original Array :");
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2;j++){
                System.out.print(mat[i][j] + " ");
            }
            System.out.println("");
        }

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < mat[i].length/2; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[i][mat[i].length/2 - j] ;
                mat[i][mat[i].length/2-j] = temp;
            }
        }
        for (int i = 0; i < 1; i++) {
            for(int j = 0; j < 2; j++){
               int temp = mat[i][j];
               mat[i][j] = mat[1-i][j];
               mat[1-i][j] = temp; 
            }
        }
        
        System.out.println("Reversed Matrix :");
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2;j++){
                System.out.print(mat[i][j] + " ");
            }
            System.out.println("");
        }
    }
}
