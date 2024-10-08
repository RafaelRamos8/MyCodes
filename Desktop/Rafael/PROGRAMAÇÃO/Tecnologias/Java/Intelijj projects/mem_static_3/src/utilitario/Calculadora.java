package utilitario;

public class Calculadora {
    public static double PI = 3.1415;

    public static double circunferencia (double raio){
        return 2.0 * PI * raio;
    }

    public static double volume (double raio){
        return 4.0 * PI * raio * raio * raio / 3;
    }
}