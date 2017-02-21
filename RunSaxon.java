class RunSaxon {
protected static class ExitException extends SecurityException 
    {
        public final int status;
        public ExitException(int status) 
        {
            super("There is no escape!");
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
				try {
					System.err.println("BEGIN "+args[a]);
														     String out = args[a];
					if (out.lastIndexOf("www.web3d.org") >= 0) {
						out = out.substring(out.lastIndexOf("www.web3d.org"));
					}
					out = out.substring(0, out.lastIndexOf("."))+".json";
					net.sf.saxon.Transform.main(new String[] {
								"-warnings:recover",
								"-o",
								out,
								args[a],
								"X3dToJson.xslt" });
					// -t  #timing -c # compiled
					System.err.println("END "+args[a]);
				} catch (Throwable e) {
					System.err.println("FATAL "+args[a]);
					System.err.println(e.getMessage());
				}
			}
			System.setSecurityManager(null); // or save and restore original
		} catch (ExitException ee) {
			ee.printStackTrace();
		}
	}
}
