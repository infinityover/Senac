package ado11;

import static org.junit.Assert.*;
import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.Test;

public class testCalc {

	@Test
	public void testSoma() {
		Calculadora calcsoma = new Calculadora(10, 10);
		
		calcsoma.getSoma();
		
		assertEquals(20, calcsoma.getSoma());
	}
	
	@Test
	public void testDiv() {

		Calculadora calcdiv = new Calculadora(10, 1);
		calcdiv.getDivisao();
		assertEquals(10, calcdiv.getDivisao());
	}
	
	@Test
	public void testMult() {

		Calculadora calcmult = new Calculadora(2, 3);
		calcmult.getMultiplicacao();
		assertEquals(6, calcmult.getMultiplicacao());
	}
	
	@Test
	public void testSub() {
		Calculadora calcsub = new Calculadora(10, 10);
		calcsub.getSubtracao();
		assertEquals(0, calcsub.getSubtracao());
		
	}

}
