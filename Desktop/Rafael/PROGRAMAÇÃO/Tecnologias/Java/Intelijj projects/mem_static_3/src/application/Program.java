package application;

import utilitario.Calculadora;

import java.util.Locale;
import java.util.Scanner;

public class Program {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        //Calculadora calc = new Calculadora(); //Instanciando o objeto do tipo da classe por que não é estatico

        System.out.println("Informe o raio: ");
        double raio = sc.nextDouble();
        double c = Calculadora.circunferencia(raio); // chamada da minha função
        double v = Calculadora.volume(raio);

        System.out.printf("%nA circunferencia com o raio %.1f é: %.2f%n", raio, c);
        System.out.printf("%nO volume com o raio %.1f é: %.2f%n", raio, v);
        System.out.printf("%nO valor de PI é: %.4f%n", Calculadora.PI);

        sc.close();
    }
}
