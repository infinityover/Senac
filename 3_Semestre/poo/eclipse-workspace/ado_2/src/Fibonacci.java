public class Fibonacci {
	public static int calculaFibonacci(int elemento) {
		if (elemento <= 2) {
			return elemento;
		}else {
			return calculaFibonacci(elemento - 1) + calculaFibonacci(elemento -2);
		}
			
	}
}
