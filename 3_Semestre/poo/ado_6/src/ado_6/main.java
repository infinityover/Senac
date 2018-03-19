package ado_6;

public class main {
	public static void main(String[] args) {
		Secretaria Joyce = new Secretaria();
		
		Joyce.setIdioma("Ingles");
		System.out.println(Joyce.autentica());
		Secretaria Craudia = new Secretaria();
		Craudia.setIdioma("Russo");
		System.out.println(Craudia.autentica());
		
	}
}
