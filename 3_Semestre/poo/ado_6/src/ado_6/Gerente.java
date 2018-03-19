package ado_6;

public class Gerente extends Funcionario implements Prioridade{
	private String departamento;

	public String getDepartamento() {
		return departamento;
	}

	public void setDepartamento(String departamento) {
		this.departamento = departamento;
	}
	
	
	@Override
	public boolean autentica() {
		if(departamento == "RH" || departamento == "Compras" || departamento == "Departamento Pessoal") return true;
		return false;
	}
}
