package ado_3;

public class main {
	public static void main(String[] args) {
		time time1 = new time();
		time time2 = new time();
		jogo jogo = new jogo();
		
		time1.setNome("Craudio Team's");
		System.out.println(time1.getNome());
		
		time2.setNome("Guusta1 e Amigos");
		System.out.println(time2.getNome());
		
		for(int i =0; i <= 11; i++) {
			jogador jogador = new jogador("Roberval","");
			time1.addJogador(jogador);
		}
		for(int i =0; i <= 12; i++) {
			jogador jogador = new jogador("Guusta","");
			time1.addJogador(jogador);
		}
		System.out.println(jogo.iniciaJogo(time1, time2));
		
	}
}