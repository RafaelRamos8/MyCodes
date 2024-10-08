package application;

import java.util.Locale;
import java.util.Scanner;

public class Program {
    public static double PI = 3.1415;
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe o raio: ");
        double raio = sc.nextDouble();
        double c = circunferencia(raio); // chamada da minha função
        double v = volume(raio);

        System.out.printf("%nA circunferencia com o raio %.1f é: %.2f%n", raio, c);
        System.out.printf("%nO volume com o raio %.1f é: %.2f%n", raio, v);
        System.out.printf("%nO valor de PI é: %.4f%n", PI);

    sc.close();
    }

    public static double circunferencia (double raio){
        return 2.0 * PI * raio;
    }

    public static double volume (double raio){
        return 4.0 * PI * raio * raio * raio / 3;
    }
}
