package ado9;

import java.io.Serializable;

public class Placa implements Serializable{
	private String cor;
	private String numero;
	private String estado;
	
	
	public Placa(String cor, String numero, String estado) {
		this.cor = cor;
		this.numero = numero;
		this.estado = estado;
	}
	
	public String getCor() {
		return cor;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
	public String getNumero() {
		return numero;
	}
	public void setNumero(String numero) {
		this.numero = numero;
	}
	public String getEstado() {
		return estado;
	}
	public void setEstado(String estado) {
		this.estado = estado;
	}
	public String toString() {
		return "Cor - " + this.cor + "\nNumero - " + this.numero + "\nEstado - " +this.estado;
	}
	
}
