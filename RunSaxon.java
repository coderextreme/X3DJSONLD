import java.io.*;
import java.net.*;
import javax.net.ssl.*;

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

	public static void main(String args[]) {
		try {
			System.setSecurityManager(new NoExitSecurityManager());
			for (int a = 0; a < args.length; a++) {
				String source = args[a];
				System.err.println("BEGIN "+source);
				String out = "";
				try {
					if (source.startsWith("http")) {

						// Create a new trust manager that trust all certificates
						TrustManager[] trustAllCerts = new TrustManager[]{
						    new X509TrustManager() {
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
						};

						// Activate the new trust manager
						try {
						    SSLContext sc = SSLContext.getInstance("SSL");
						    sc.init(null, trustAllCerts, new java.security.SecureRandom());
						    HttpsURLConnection.setDefaultSSLSocketFactory(sc.getSocketFactory());
						} catch (Exception e) {
						}
						

						URL u = new URL(source);
						if (source.lastIndexOf("savage.nps.edu") >= 0) {
							source = "examples"+source.substring(source.lastIndexOf("savage.nps.edu")+14);
						}
						if (source.lastIndexOf("www.web3d.org") >= 0) {
							source = source.substring(source.lastIndexOf("www.web3d.org"));
						}
						BufferedReader br = null;
						PrintWriter bw = null;
						try {
							br = new BufferedReader(new InputStreamReader(u.openStream()));
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
					if ((out.startsWith("http://") || out.startsWith("https://")) && out.lastIndexOf("www.web3d.org") >= 0) {
						out = out.substring(out.lastIndexOf("www.web3d.org"));
					}
					out = out.substring(0, out.lastIndexOf("."))+".json";
					System.err.println("WRITING "+out);
					if (out.lastIndexOf("/") > 0) {
						File dir = new File(out.substring(0, out.lastIndexOf("/")));
						dir.mkdirs();
					}
					net.sf.saxon.Transform.main(new String[] {

								"-warnings:recover",
								"-o:"+out,
								"-s:"+source,
								"-xsl:X3dToJson.xslt" });
					// -t  #timing -c # compiled
					System.err.println("END "+source);
				} catch (Throwable e) {
					System.err.println("FATAL "+source+" > "+out);
					System.err.println(e.getMessage());
				}
			}
			System.setSecurityManager(null); // or save and restore original
		} catch (ExitException ee) {
			ee.printStackTrace();
		}
	}
}
