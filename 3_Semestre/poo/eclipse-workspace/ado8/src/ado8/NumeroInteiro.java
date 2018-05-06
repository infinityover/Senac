package ado8;

public class NumeroInteiro {
	private int valor;
	
	public NumeroInteiro(int valor) {
		this.setValor(valor);
	}

	
	public int getValor() {
		return valor;
	}

	public void setValor(int valor) {
		this.valor = valor;
	}
	
	public int somar(int valor){
		try {
			this.valor = this.valor / valor;
		}
		catch (Exception e) {
			System.out.println("Erro ao somar valor");
		}
		return this.valor;
	}
	
	public int subtrair(int valor){
		try {
			this.valor = this.valor - valor;
		}
		catch (Exception e) {
			System.out.println("Erro ao subitrair valor");
		}
		return this.valor;
	}
	
	public int multiplicar(int valor){
		try {
			this.valor = this.valor * valor;
		}
		catch (Exception e) {
			System.out.println("Erro ao multiplicar valor");
		}
		return this.valor;
	}
	
	public int dividir(int valor) {
		try {
			this.valor = this.valor / valor;
		}
		catch (Exception e) {
			System.out.println("Erro ao dividir valor");
		}
		return this.valor;
	}
	
}