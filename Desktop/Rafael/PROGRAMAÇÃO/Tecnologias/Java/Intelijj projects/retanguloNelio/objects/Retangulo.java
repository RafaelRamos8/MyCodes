public class Retangulo {
    public double a;
    public double b;

    public double diagonal(){
        double c = Math.pow(a, 2) * Math.pow(b, 2);
        return Math.sqrt(c);
    }

    public double area(){
        return a * b;
    }

    public double perimeter(){
        return a + b;
    }

    public String toString(){
        return "AREA = "
                + String.format("%.2f", area())
                + "\nPERIMETER = "
                + perimeter()
                + "\nDIAGONAL"
                + diagonal();
        }

    }

}
