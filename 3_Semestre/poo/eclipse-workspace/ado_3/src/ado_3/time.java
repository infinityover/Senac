package ado_3;

import java.util.ArrayList;

public class time {
	//Cria array de jogador com o tipo jogador
	ArrayList<jogador> time = new ArrayList<jogador>();
	private String nome;
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void addJogador(jogador jogador) {
		time.add(jogador);
	}
	public int getJogadores(){
		return this.time.size();
	}
}