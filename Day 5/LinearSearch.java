package mycls; // use the package folder to execute the file

public class myclss {
    public static void main(String[] args) {
        int arr[] = {2,3,5,7,8,12,11,15,20,200,14,45,156};
        int target = 14;
        for (int i = 0; i < arr.length;i++) {
            if (target == arr[i]) {
                System.out.println("You founded the target");
            }
        }
    }
}
