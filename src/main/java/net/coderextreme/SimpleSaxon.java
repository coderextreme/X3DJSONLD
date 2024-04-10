package net.coderextreme;

import java.io.*;
import java.net.*;

class SimpleSaxon {
	public static void main(String args[]) {
		try {
			net.sf.saxon.Transform.main(new String[] {
				"-t",
				"-warnings:recover",
				"-expand:on",
				"-o:"+args[0]+".json",
				"-s:"+args[0],
				"-xsl:../lib/stylesheets/X3dToJson.xslt"
				});
		} catch (Exception e) {
			e.printStackTrace(System.err);
		}
	}
}
