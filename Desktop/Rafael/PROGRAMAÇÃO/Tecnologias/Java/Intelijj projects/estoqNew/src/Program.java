import entities.Product;
import java.util.Locale;
import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        char option;
        do {
            Product product = new Product();

            System.out.println("Enter product data:");
            System.out.print("Name: ");
            product.name = sc.next();
            System.out.print("Price: ");
            product.price = sc.nextDouble();
            System.out.print("Quantity in Stock: ");
            product.quantity = sc.nextInt();
            System.out.println();
            System.out.println("Product data: " + product);
            System.out.println();

            System.out.print("Enter the number of products to be added in stock: ");
            int quantity = sc.nextInt();
            product.addProducts(quantity);
            System.out.println();

            System.out.println("Updated data: " + product);
            System.out.println();

            System.out.print("Enter the number of products to be removed from stock: ");
            quantity = sc.nextInt();
            product.removeProducts(quantity);
            System.out.println();

            System.out.println("Updated data: " + product);
            System.out.println();
            System.out.println("Continue? s/n");

            option = sc.next().charAt(0);

        } while (option != 'n');


        sc.close();
    }
}
