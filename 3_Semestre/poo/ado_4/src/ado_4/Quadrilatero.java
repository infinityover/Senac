package ado_4;

public class Quadrilatero extends Figura {
	private int area;
	
	public Quadrilatero() {
		super.setVertices(4);
	}
	public int getArea() {
		return area;
	}

	public void setArea(int area) {
		this.area = area;
	}
}
