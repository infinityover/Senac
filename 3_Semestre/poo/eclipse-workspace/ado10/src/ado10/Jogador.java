package ado10;

import java.util.Random;

public class Jogador extends Thread{
	private String nome;
	private int tempo_final;

	
	public Jogador(String nome) {
		this.setNome(nome);
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}
	public void run() {
		int tempo_final = 0;
		try {
			for(int i = 0;i <11;i++) {
				Random rand = new Random();
				int velocidade = rand.nextInt(50) + 1;
				Thread.sleep(50 - velocidade);
				System.out.println("Tempo " + this.nome +" - " + velocidade);
				tempo_final = (50 - velocidade) + tempo_final;
			}
		}catch (InterruptedException e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		System.out.println("Tempo final - "+this.nome+ " - " + tempo_final);
	}
}