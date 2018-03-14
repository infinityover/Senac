package ado_4;

public class Quadrado extends Quadrilatero {
	private int lado;
	
	public int getLado() {
		return lado;
	}

	public void setLado(int lado) {
		this.setArea(lado * lado);
		this.lado = lado;
	}

}
