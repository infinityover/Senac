package ado_3;

public class jogo {
	
	private int pontuacaoTime1;
	private int pontuacaoTime2;
	
	
	public int getPontuacaoTime1() {
		return pontuacaoTime1;
	}


	public void setPontuacaoTime1(int pontuacaoTime1) {
		this.pontuacaoTime1 = pontuacaoTime1;
	}


	public int getPontuacaoTime2() {
		return pontuacaoTime2;
	}


	public void setPontuacaoTime2(int pontuacaoTime2) {
		this.pontuacaoTime2 = pontuacaoTime2;
	}


	public int iniciaJogo(time time1, time time2) {
		int jogadores1 = time1.getJogadores();
		int jogadores2 = time1.getJogadores();
		if ( jogadores1 >= 11 && jogadores2 >= 11) {
			return 1;
		}
		return -1;
	}
}
