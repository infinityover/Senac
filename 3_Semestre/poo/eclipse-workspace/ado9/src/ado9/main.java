package ado9;

import java.io.*;
import java.util.*;

public class main {

	public static void main(String[] args) {
		
		Placa placa = new Placa("Rosa","3122","AFU");
		Placa placa2 = new Placa("Rosa1","31222","AFU2");
		
		Map<Integer,Placa> mapa = new TreeMap<Integer,Placa>();
		mapa.put(1, placa);
		mapa.put(2, placa2);
		
		FileOutputStream fluxo;
		try {
			fluxo = new FileOutputStream("Placa.ser");
			ObjectOutputStream objarq = new ObjectOutputStream(fluxo);
			objarq.writeObject(mapa);
			objarq.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch(IOException e) {
			e.printStackTrace();
		}
		
		Placa retorno;
		FileInputStream fluxovolta;
		try {
			fluxovolta = new FileInputStream("Placa.ser");
			ObjectInputStream objarqvolta = new ObjectInputStream(fluxovolta);
			TreeMap<Integer,Placa> mapaRet = (TreeMap<Integer, Placa>) objarqvolta.readObject();
			objarqvolta.close();
			
			System.out.println(mapa.toString());
			
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch(IOException e) {
			e.printStackTrace();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}

	}

}
