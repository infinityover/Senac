package ado_5;

public class Jaula {
	private Animal animal;

	public Animal getAnimal() {
		return animal;
	}

	public void setAnimal(Animal animal) {
		this.animal = animal;
	}
	
	public void comportamento() {
		this.animal.comportamento();
	};
}
