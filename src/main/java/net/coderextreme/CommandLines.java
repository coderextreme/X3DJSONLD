package net.coderextreme;

import org.web3d.x3d.jsail.CommandLine;

public class CommandLines {
	public static void main(String args[]) {
		String stylesheet = "src/main/lib/stylesheets/X3dToJson.xslt";
		for (int a = 0; a < args.length; a++) {
			try {
				String source = args[a];
				org.web3d.x3d.jsail.CommandLine.main(new String[] {
					"-validate",
					source
				});
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
}

