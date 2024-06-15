import java.util.Arrays;
import java.util.Scanner;


public class ModulGemastik1 {
    public static void main(String[] args) {
        Scanner baca = new Scanner(System.in);
        
        int jumlah;
        
        System.out.print("Masukkan Jumlah Data: ");
        jumlah = baca.nextInt();
        
        int[] angka = new int[jumlah];
        
        for(int i = 0; i < jumlah; i++){
            System.out.print("Masukkan Elemen ke-" + (i + 1) + ": ");
            angka[i] = baca.nextInt();
        }
        
        System.out.println("\nIsi Array: ");
        for(int i = 0; i < jumlah; i++){
            System.out.println("Elemen ke-" + (i + 1) + ": " + angka[i]);
        }
        
        Arrays.sort(angka);
        
        System.out.println("\nArray setelah Sorting: ");
        for(int i = 0; i < jumlah; i++){
            System.out.println("Elemen ke-" + (i + 1) + ": " + angka[i]);
        }
        
        baca.close();    
}
}
