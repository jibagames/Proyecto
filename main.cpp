
package tienda2;


import java.util.Scanner;

public class Tienda2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        Producto[] products = {
            new Laptop("Asus", 1000, "Intel Core i5"),
            new Smartphone("iPhone12", 800, "iOS"),
            new Tablet("iPad Air", 500, "10.9 inches"),
            new TV("Samsung QLED", 1200, 55)
        };

        //mostrar productos disponibles
        System.out.println("Productos disponibles en la tienda:");
        for (Producto product : products) {
            System.out.println(product.getName() + " - $" + product.getPrice());
        }

        // Cuanto es tu presupuesto
        System.out.print("Ingresa tu presupuesto: $");
        int presupuesto = scanner.nextInt();

        // Productos que puedes comprar
        System.out.println("Productos que puedes comprar:");
        for (Producto product : products) {
            if (product.getPrice() <= presupuesto) {
                System.out.println(product.getName() + " - $" + product.getPrice());
            }
        }

        // Cuales productos puedes comprar
        System.out.print("Ingrese el nombre del producto que desea comprar: ");
        String productName = scanner.next();

        //Mirar si el producto esta disponible para comprar
        boolean productoencontrar = false;
        for (Producto product : products) {
            if (productName.equalsIgnoreCase(product.getName())) {
                if (product.getPrice() <= presupuesto) {
                    System.out.println("Tu compraste " + product.getName() + " por el valor $" + product.getPrice() + "!");
                    productoencontrar = true;
                    break;
                } else {
                    System.out.println("Tu no puedes comprar esto " + product.getName() + "!");
                    productoencontrar = false;
                    break;
                }
            }
        } 
    }
}
