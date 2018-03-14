package ado_4;

public class Trapezio extends Quadrilatero {
	protected String tipo;
	private int lado_esquerdo;
	private int lado_direito;
	
	public int getLado_esquerdo() {
		return lado_esquerdo;
	}

	public void setLado_esquerdo(int lado_esquerdo) {
		this.lado_esquerdo = lado_esquerdo;
	}

	public int getLado_direito() {
		return lado_direito;
	}

	public void setLado_direito(int lado_direito) {
		this.lado_direito = lado_direito;
	}

	public int getBase_menor() {
		return base_menor;
	}

	public void setBase_menor(int base_menor) {
		this.base_menor = base_menor;
	}

	public int getBase_maior() {
		return base_maior;
	}

	public void setBase_maior(int base_maior) {
		this.base_maior = base_maior;
	}

	private int base_menor;
	private int base_maior;
	
	public String getTipo() {
		return tipo;
	}

	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

}
