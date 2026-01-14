package net.coderextreme;

import java.io.*;
import java.net.*;

class SimpleSaxon {
	public static void main(String args[]) throws URISyntaxException, MalformedURLException, IOException {
		net.sf.saxon.Transform.main(new String[] {
					"-warnings:recover",
					"-o:"+args[0]+".json",
					"-s:"+args[0],
					"-xsl:../../../lib/stylesheets/X3dToJson.xslt",
					"packageName=net.x3djsonld.data",
					"className=abox"
		});
	}
}
