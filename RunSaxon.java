import java.io.*;

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
				System.err.println("BEGIN "+args[a]);
				String out = args[a];
				try {
					if (out.lastIndexOf("www.web3d.org") >= 0) {
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
								"-s:"+args[a],
								"-xsl:X3dToJson.xslt" });
					// -t  #timing -c # compiled
					System.err.println("END "+args[a]);
				} catch (Throwable e) {
					System.err.println("FATAL "+args[a]+" > "+out);
					System.err.println(e.getMessage());
				}
			}
			System.setSecurityManager(null); // or save and restore original
		} catch (ExitException ee) {
			ee.printStackTrace();
		}
	}
}
