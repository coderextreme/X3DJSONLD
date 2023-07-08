package net.coderextreme;

import java.io.*;
import java.net.*;
import javax.net.ssl.*;

/**
 * If an argument starts with a --, it is taken as a stylesheet for the
 * If an argument starts with a -, it is taken as the new extension (beware)
 * following files.
 * Caveat emptor
 */


/*
class MyTrustManager extends X509TrustManager {
	public static void main(String args[]) {
	}
	public java.security.cert.X509Certificate[] getAcceptedIssuers() {
	    return null;
	}
	public void checkClientTrusted(
	    java.security.cert.X509Certificate[] certs, String authType) {
	}
	public void checkServerTrusted(
	    java.security.cert.X509Certificate[] certs, String authType) {
	}
}
*/

class RunSaxon {
protected static class ExitException extends SecurityException 
    {
        public final int status;
        public ExitException(int status) 
        {
            super("There is no escape! "+status);
            this.status = status;
        }
    }

/*
    private static class NoExitSecurityManager extends SecurityManager 
    {
        @Override
        public void checkPermission(java.security.Permission perm) 
        {
            // allow anything.
        }
        @Override
        public void checkPermission(java.security.Permission perm, Object context) 
        {
            // allow anything.
        }
        @Override
        public void checkExit(int status) 
        {
            super.checkExit(status);
            throw new ExitException(status);
        }
    }
   */

	public static void main(String args[]) {
		try {
			String stylesheet = "src/main/lib/stylesheets/X3dToJson.xslt";
			String extension = "json";
			boolean overwrite = false;
			boolean silent = false;
			String outdir = "./";
			// System.setSecurityManager(new NoExitSecurityManager());
			for (int a = 0; a < args.length; a++) {
				String source = args[a];
				if (source.startsWith("---overwrite")) {
					overwrite = true;
					continue;
				}
				if (source.startsWith("---silent")) {
					silent = true;
					continue;
				}
				if (source.startsWith("---")) {
					outdir = source.substring(3);
					continue;
				}
				if (source.startsWith("--")) {
					stylesheet = source.substring(2);
					continue;
				}
				if (source.startsWith("-")) {
					extension = source.substring(1);
					continue;
				}
				String out = "";
				try {
					if (source.startsWith("http")) {
						/*

						// Create a new trust manager that trust all certificates
						TrustManager[] trustAllCerts = new TrustManager[]{
							new MyTrustManager()
						};

						// Activate the new trust manager
						try {
						    SSLContext sc = SSLContext.getInstance("SSL");
						    sc.init(null, trustAllCerts, new java.security.SecureRandom());
						    HttpsURLConnection.setDefaultSSLSocketFactory(sc.getSocketFactory());
						} catch (Exception e) {
						}
						
						*/

						System.err.println("URL is "+source);
						URL u = new URL(source);
						if (source.indexOf("https://") == 0) {
							source = "C:/x3d-code/"+source.substring(8);
						} else if (source.indexOf("http://") == 0) {
							source = "C:/x3d-code/"+source.substring(7);
						}
						BufferedReader br = null;
						PrintWriter bw = null;
						try {
							br = new BufferedReader(new InputStreamReader(u.openStream()));
							System.err.println("Downloading URL to "+source);
							if (source.lastIndexOf("/") > 0) {
								File dir = new File(source.substring(0, source.lastIndexOf("/")));
								dir.mkdirs();
							}
							bw = new PrintWriter(new FileWriter(source));
							String line = null;
							while ((line = br.readLine()) != null) {
								bw.println(line);
							}
						} catch (IOException ioe) {
							ioe.printStackTrace();
						} finally {
							if (br != null) {
								br.close();
							}
							if (bw != null) {
								bw.close();
							}
						}
					}
					out = source;
					out = outdir+out.substring(0, out.lastIndexOf("."))+"."+extension;
					if (overwrite) {
						System.err.print("BEGIN "+source+" > "+extension+", ");
						if (out.lastIndexOf("/") > 0) {
							File dir = new File(out.substring(0, out.lastIndexOf("/")));
							dir.mkdirs();
						}
						net.sf.saxon.Transform.main(new String[] {
									"-warnings:recover",
									"-o:"+out,
									"-s:"+source,
									"-xsl:"+stylesheet,
									"packageName=net.x3djsonld.data",
									"className="+out.substring(out.lastIndexOf("/")+1, out.lastIndexOf(".")).replace(".", "_")
						});
						// -t  #timing -c # compiled
						System.err.println("END "+source);
						if (!silent) {
							System.out.println(out);
						}
					} else if (!new File(out).exists()) {
						System.err.println("BEGIN "+source);
						if (out.lastIndexOf("/") > 0) {
							File dir = new File(out.substring(0, out.lastIndexOf("/")));
							dir.mkdirs();
						}
						net.sf.saxon.Transform.main(new String[] {
									"-warnings:recover",
									"-o:"+out,
									"-s:"+source,
									"-xsl:"+stylesheet,
									"packageName=net.x3djsonld.data",
									"className="+out.substring(out.lastIndexOf("/")+1, out.lastIndexOf(".")).replace(".", "_")
						});
						// -t  #timing -c # compiled
						System.err.println("END "+source);
						if (!silent) {
							System.out.println(out);
						}
					} else {
						if (!silent) {
							System.err.println("EXISTS.  DELETE?   "+out);
							System.out.println(out);
						}
					}
				} catch (Throwable e) {
					System.err.println("FATAL "+source+" > "+out);
					e.printStackTrace();
				}
			}
			//System.setSecurityManager(null); // or save and restore original
		} catch (ExitException ee) {
			ee.printStackTrace();
		}
	}
}
