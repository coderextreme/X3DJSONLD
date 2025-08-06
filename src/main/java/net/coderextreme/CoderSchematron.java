package net.coderextreme;

import org.web3d.x3d.jsail.CommandLine;

public class CoderSchematron {
	public static void main(String args[]) {
		for (int a = 0; a < args.length; a++) {
			try {
				String source = args[a];
				org.web3d.x3d.jsail.CommandLine.main(new String[] {
					"-schematron",
					source,
					"-tofile",
					source+".new.schematron.txt"
				});
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
}

