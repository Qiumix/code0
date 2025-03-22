import java.util.Scanner;e

public class array {
    public static final int[] addIndex(int[] array, int num, int index) {
        int[] array1 = new int[array.length + 1];
        for (int i = 0; i < index; i++) {
            array1[i] = array[i];
        }
        array1[index] = num;
        for (int i = index + 1; i < array1.length; i++) {
            array1[i] = array[i - 1];
        }
        return array1;
    }

    public static void main(String[] args) {
        int[] array = new int[5];
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("输入五个数值");
        for (int i = 0; i < 5; i++) {
            array[i] = scanner.nextInt();
        }
        System.out.println("输入数值为：");
        for (int i = 0; i < 5; i++) {
            System.out.print(array[i] + " ");
        }
        int insert = scanner.nextInt();
        int index = scanner.nextInt();
        array = addIndex(array, insert, index);
        System.out.println("插入后：");
        for (int i = 0; i < 6; i++) {
            System.out.print(array[i] + " ");
        }
        scanner.close();
    }
}
