package ado_5;

public class Zoologico {
	
	public static void main(String[] args) {
		Jaula jaula1 = new Jaula();
		Jaula jaula2 = new Jaula();
		Jaula jaula3 = new Jaula();
		Jaula jaula4 = new Jaula();
		Jaula jaula5 = new Jaula();
		Jaula jaula6 = new Jaula();
		Jaula jaula7 = new Jaula();
		Jaula jaula8 = new Jaula();
		Jaula jaula9 = new Jaula();
		Jaula jaula10 = new Jaula();
		
		jaula1.setAnimal(new Cavalo());
		jaula2.setAnimal(new Cobra());
		jaula3.setAnimal(new Coruja());
		jaula4.setAnimal(new Koala());
		jaula5.setAnimal(new Leao());
		jaula6.setAnimal(new Lemori());
		jaula7.setAnimal(new Macaco());
		jaula8.setAnimal(new Sapo());
		jaula9.setAnimal(new Vaca());
		jaula10.setAnimal(new Zebra());
		
		jaula1.comportamento();
		jaula2.comportamento();
		jaula3.comportamento();
		jaula4.comportamento();
		jaula5.comportamento();
		jaula6.comportamento();
		jaula7.comportamento();
		jaula8.comportamento();
		jaula9.comportamento();
		jaula10.comportamento();
	}
	
}
