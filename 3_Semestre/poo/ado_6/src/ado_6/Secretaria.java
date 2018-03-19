package ado_6;

public class Secretaria extends Funcionario implements Prioridade{
	private String idioma;

	public String getIdioma() {
		return idioma;
	}

	public void setIdioma(String idioma) {
		this.idioma = idioma;
	}

	@Override
	public boolean autentica() {
		if(idioma == "Ingles") return true;
		return false;
	}
	
}
