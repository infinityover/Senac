import java.lang.Math;

public class ln {
	public static void main(String[] args){
		double valor_anterior = 0;
		for(int x = 1; x < 100; x++) {
			int positivo = (int) Math.pow(-1, x+1);
			valor_anterior = valor_anterior + ((positivo * Math.pow(0.3, x))/x);
		}
		System.out.println(valor_anterior);
	}
}
