/*
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (http://www.web3D.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

package org.web3d.x3d.sai;


import java.applet.Applet;
import java.io.InputStream;
import java.io.IOException;
import java.net.InetAddress;
import java.net.UnknownHostException;
import java.security.AccessController;
import java.security.PrivilegedAction;
import java.util.Properties;
import java.util.Map;

import java.util.*;

/**
 * Factory class for obtaining references to browser instances.
 * 
 * <br><br>
 * 
An implementation-independent representation of the class used to access
and create browsers. The model follows that used by java.net.Socket. A
setImpl method is provided for browser writers to provide the internal
implementations of the browser.

An alternative way of doing this is through properties. The class,
when it loads first looks for a System property with the key:
x3d.sai.factory.class
If a non-null value is found for this key, it is used as the name of
the class to load as the default browser implementation. If no matching
System property is found, the initializer looks for the file
x3d.properties in the class path.
(For more information on how this works read
java.lang.ClassLoader.getSystemResourceAsStream()). If found,
and the file contains a non-null value for the x3d.sai.factory.class
key, this value is used as the name of the class to load as the default browser
implementation.

In either case (System properties or x3d.properties file), this name must
represent the full package qualified name of the class.
If a System property with the required key does not exist, or an x3d.properties
file does not exist or the x3d.properties file does not contain a property with
the required key for the name of the factory class, then
the default class name org.web3d.x3d.sai.DefaultBrowserImpl is assigned.

The class is loaded when a call is made to getBrowser() or
createX3DComponent() using the following method:

 Class factory_class = Class.forName(factory_class_name);
 factory = (BrowserFactoryImpl)factory_class.newInstance();
 
If a class cast exception is raised at the end, then an error is printed
but nothing is done about it. The result would be NullPointerExceptions
later in the code. Also, this may cause some security errors in some
web browsers.

To provide a custom implementation of the factory (which all
implementations must do) the user has the choice of the above options
of either setting a System property, making sure that an x3d.properties
file appears in the classpath <i>before</i> the sample implementation
that comes with the classes from the X3DC, or by calling setImpl. If
setBrowserFactoryImpl has not been called at the time that
any of the other methods have been, then the class will attempt to load
the implementation defined in the properties file. Attempting to call the
set implementation method after this point shall result in a X3DException
being generated. Otherwise, it shall use the set implementation.

@author Justin Couch
 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#BrowserFactory" target="_blank">SAI Java Specification: B.5.2 BrowserFactory</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#BrowserFactory" target="_blank">X3D Tooltips: BrowserFactory</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class BrowserFactory
{
    /** The name of the properties file to read things from */
    private static final String PROPERTIES_FILE_NAME = "x3d.properties";

    /** The name of all the properties that are used by this class */
    private static final String FACTORY_CLASS = "x3d.sai.factory.class";

    /** Properties file location that is Xj3D-specific */
    private static final String XJ3D_PROPERTIES_FILE =
        "config/3.0/spec/" + PROPERTIES_FILE_NAME;

    /** The default values of any properties */
    private static final String DEFAULT_FACTORY_CLASS =
        "org.web3d.x3d.sai.DefaultBrowserImpl";

    /** Null browser factory implementation error message */
    private static final String NULL_BROWSER_FACTORY_IMPL_ERR_MSG =
        "Provided factory is null";

    /** Factory has already been defined error message */
    private static final String FACTORY_ALREADY_DEFINED_ERR_MSG =
        "Factory already defined";

    /** Factory class not found error message */
    private static final String FACTORY_CLASS_NOT_FOUND_ERR_MSG =
        "Unable to find X3D player factory implementation\n";

    /** Unable to instantiate factory error message */
    private static final String UNABLE_TO_INSTANTIATE_FACTORY_ERR_MSG =
        "Error instantiating the X3D player factory\n";

    /** Class not a BrowserFactoryImpl error message */
    private static final String CLASS_NOT_A_BROWSER_FACTORY_IMPL_ERR_MSG =
        "The nominated browser factory is not an instance of ";

    /** BrowserFactoryImpl interface class name */
    private static final String BROWSER_FACTORY_IMPL_INTERFACE_CLASSNAME =
        "org.web3d.x3d.sai.BrowserFactoryImpl";

    /** The reference to the factory implementation used */
    private static BrowserFactoryImpl factory = null;

    /** The list of properties needed by this class */
    private final static Properties vrml_properties;

    /**
     * Static initializer method. Used to load the system properties for
     * this class. If there are none then it sets up the default values
     * that are needed.
     * <p>
     * At this stage it does not load the factory class, just in case the
     * user may set something at a later date.
     */
    static {
        vrml_properties = new Properties();

        // first look in System properties
        String factory_class_name = AccessController.doPrivileged(
                new PrivilegedAction<String>( ) {
                    @Override
                	public String run( ) {
                        return System.getProperty( FACTORY_CLASS );
                    }
                } );

        if ( factory_class_name != null ) {
            vrml_properties.put( FACTORY_CLASS, factory_class_name );
        }
        else {
            // a System property was not defined, look for an x3d.properties file
            InputStream is = null;
            try {
                // fetch the properties file as a stream
                is = AccessController.doPrivileged(
                    new PrivilegedAction<InputStream>() {
                        @Override
                    	public InputStream run() {
                            // privileged code goes here, for example:
                            return ClassLoader.getSystemResourceAsStream(PROPERTIES_FILE_NAME);
                        }
                    });

                // Fallback for WebStart
                if(is == null)
                    is = BrowserFactory.class.getClassLoader().getResourceAsStream(PROPERTIES_FILE_NAME);

                // Now try the Xj3D-internal version location.
                if(is == null) {
                    is = AccessController.doPrivileged(
                        new PrivilegedAction<InputStream>() {
                            @Override
                        	public InputStream run() {
                                // privileged code goes here, for example:
                                return ClassLoader.getSystemResourceAsStream(XJ3D_PROPERTIES_FILE);
                            }
                        });
                }

                // Fallback for WebStart
                if(is == null)
                    is = BrowserFactory.class.getClassLoader().getResourceAsStream(XJ3D_PROPERTIES_FILE);

                // If there is no x3d.properties file, then fill the properties list
                // ourselves so that everything works as advertised later on.
                if(is == null)
                    vrml_properties.put(FACTORY_CLASS, DEFAULT_FACTORY_CLASS);
                else {
                    // from that stream load it into a properties table
                    vrml_properties.load(is);
                }
            } catch(IOException ioe) {
                System.err.println(ioe);
            } finally {
                try {
                    is.close();
                } catch(IOException ioe) { }
            }
        }
    }

    /**
     * Remove the constructor from public calling. Should never instantiate
     * this class.
     */
    private BrowserFactory() {
    }

    /**
     * Set the factory implementation to use. If the parameter value is null
     * an exception will be thrown.
     *
     * @param fac - The new implementation to use
     * @throws SecurityException The environment does not allow a factory
     *   to be set
     * @throws IllegalArgumentException The argument factory instance is null
     * @throws X3DException The factory is already defined.
     */
	public static synchronized void setBrowserFactoryImpl( BrowserFactoryImpl fac )
        throws IllegalArgumentException, X3DException, SecurityException {

        if(fac == null)
		{
			String errorNotice = NULL_BROWSER_FACTORY_IMPL_ERR_MSG ;
//			validationResult.append(errorNotice).append("\n");
			throw new IllegalArgumentException(errorNotice);
		}

        if(factory != null)
		{
			String errorNotice =  FACTORY_ALREADY_DEFINED_ERR_MSG ;
//			validationResult.append(errorNotice).append("\n");
			throw new X3DException(errorNotice);
		}

        // Check to see whether we can really set the factory needed.
        SecurityManager security = System.getSecurityManager();
        if(security != null)
            security.checkSetFactory();

        factory = fac;
    }

    /**
     * Create an X3D player that can be used as an AWT component. The component
     * returned is guaranteed to be an instance of X3DComponent.
     *
     * @param params - Parameters to control the look and feel.
     * @return The component browser initialised to be empty.
     * @exception NotSupportedException The implementation does not support this
     *    type of X3D player.
     * @see X3DComponent
     */
	public static X3DComponent createX3DComponent(Map<String, Object> params) throws NotSupportedException
    {
        X3DComponent comp = null;

        try {
            if(factory == null)
                loadFactoryImpl();

            // comp = factory.createComponent(params);  // TODO fix incorrect method signature
        } catch (NotSupportedException nse) {
            System.err.println("Tracing exception for debug:   Factory: " + factory);
            nse.printStackTrace(System.err);
            throw nse;
        }
        return comp;
    }

    /**
     * Get a browser from the given java applet reference as a base in the
     * current HTML page. Used when attempting to access a browser on the current
     * page as this applet and is the first browser on the page. Generically, the
     * same as calling getBrowser(applet, "", 0);
     *
     * @param applet The applet reference to use
     * @return A reference to the Browser implementation
     * @exception NotSupportedException The implementation does not support this
     *    type of X3D player
     * @exception NoSuchBrowserException Could not locate an X3D player on the
     *    same page as the applet.
     * @exception ConnectionException An error occurred during the connecting
     *    process
     */
	public static ExternalBrowser getBrowser(Applet applet)
        throws NotSupportedException, NoSuchBrowserException, ConnectionException {

        if(factory == null)
            loadFactoryImpl();

        // return factory.getBrowser(applet);  // TODO fix incorrect method signature
		return null; // throw NotSupportedException(); // TODO fix incorrect method signature
    }

    /**
     * Get a browser from the given java applet reference one some named page and
     * at some embed location. Used when attempting to access a browser on
     * another HTML page within a multi-framed environment, or if there are a
     * number of X3D player instances located on the same page.
     * <p>
     * If the frame name is a zero length string or null then it is assumed to be
     * located on the same HTML page as the applet. The index is the number of
     * the embed X3D player starting from the top of the page. If there are
     * other non-X3D plugins embedded in the page these are not taken into
     * account in calculating the embed index.
     *
     * @param applet - The applet reference to use
     * @param frameName - The name of the frame to look into for the browser
     * @param index - The embed index of the X3D player in the page
     * @return A reference to the Browser implementation
     * @exception NotSupportedException The implementation does not support this
     *    type of X3D player.
     * @exception NoSuchBrowserException Could not locate an X3D player on the
     *    same page as the applet.
     * @exception ConnectionException An error occurred during the connecting
     *    process
     */
	public static ExternalBrowser getBrowser(Applet applet, String frameName, int index)
        throws NotSupportedException, NoSuchBrowserException, ConnectionException {

        if(factory == null)
            loadFactoryImpl();

        // return factory.getBrowser(applet, frameName, index);  // TODO fix incorrect method signature
		return null;
    }

    /**
     * Get a reference to a browser that is located on a remote machine. This
     * a server application to send scene updates to a number of client browsers
     * located on remote machines. If there are a number of browsers running on
     * a remote machine, they can be differentiated by the port number they are
     * listening on.
     * <p>
     * There is no default port number for X3D players.
     *
     * @param address - The address of the machine to connect to
     * @param port - The port number on that machine to connect to.
     * @return A reference to the Browser implementation
     * @exception NotSupportedException The implementation does not support this
     *    type of X3D player.
     * @exception NoSuchBrowserException Could not locate an X3D player on the
     *    same page as the applet.
     * @exception UnknownHostException Could not find the machine named in the
     *    address.
     * @exception ConnectionException An error occurred during the connecting
     *    process
     */
	public static ExternalBrowser getBrowser(InetAddress address, int port)
        throws NotSupportedException, NoSuchBrowserException, UnknownHostException,
    ConnectionException {

        if(factory == null)
            loadFactoryImpl();

        // return factory.getBrowser(address, port);  // TODO fix incorrect method signature
		return null;
    }

    /**
     * Private method to load the resource file and use the appropriate class
     * defined in the properties file for dealing with the resource management
     * <p>
     * Assumes that the factory reference is currently null as it automatically
     * writes over the top of it.
     */
    private static void loadFactoryImpl( ) {

        try {
            // load the factory class
            String factory_class_name =
            vrml_properties.getProperty( FACTORY_CLASS, DEFAULT_FACTORY_CLASS );

            Class<?> factory_class = Class.forName( factory_class_name );
            factory = (BrowserFactoryImpl)factory_class.newInstance( );

        } catch( ClassNotFoundException cnfe ) {
            System.err.println( FACTORY_CLASS_NOT_FOUND_ERR_MSG );
            //cnfe.printStackTrace(System.err);

        } catch( InstantiationException ie ) {
            System.err.println( UNABLE_TO_INSTANTIATE_FACTORY_ERR_MSG );
            //ie.printStackTrace(System.err);

        } catch( IllegalAccessException iae ) {
            System.err.println( iae );
            //iae.printStackTrace(System.err);

        } catch( ClassCastException cce ) {
            System.err.println( CLASS_NOT_A_BROWSER_FACTORY_IMPL_ERR_MSG +
                BROWSER_FACTORY_IMPL_INTERFACE_CLASSNAME );
            //cce.printStackTrace(System.err);
        }
    }
}
