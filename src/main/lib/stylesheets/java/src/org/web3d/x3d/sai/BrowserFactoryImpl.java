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
import java.net.UnknownHostException;
import java.net.InetAddress;
import java.util.Map;

import java.util.*;

/**
 * Implementation of factory class for obtaining references to browser instances.
 * 
 * <br><br>
 * 
<p>
The factory implementation interface for obtaining references to browser
instances.
</p>
<p>
Any implementation of a X3D browser that wishes to provide their own
customised version of the browser factory should must subclass this class.
In particular this is useful if the implementation needs to stay within the
package defined by the application for other reasons.
</p>
<p>
A default implementation of this class is the DefaultBrowserFactoryImpl which
is package access only.
</p>
 * 

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#BrowserFactory" target="_blank">SAI Java Specification: B.5.2 BrowserFactory</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#BrowserFactoryImpl" target="_blank">X3D Tooltips: BrowserFactoryImpl</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface BrowserFactoryImpl
{
    /**
     * Create a X3D browser that can be used as an AWT component. The component
     * returned is guaranteed to be an instance of X3DComponent.
     *
     * @param params Parameters to control the look and feel.
     * @return The component browser initialised to be empty.
     * @exception NotSupportedException The implementation does not support this
     *    type of browser.
     * @see X3DComponent
     */
    X3DComponent createComponent(Map<String, Object> params) throws NotSupportedException;

    /**
     * Get a browser from the given java applet reference as a base in the
     * current HTML page. Used when attempting to access a browser on the current
     * page as this applet and is the first browser on the page. Generically, the
     * same as calling getBrowser(applet, "", 0);
     *
     * @param applet The applet reference to use
     * @return A reference to the Browser implementation
     * @exception NotSupportedException The implementation does not support this
     *    type of X3D browser
     * @exception NoSuchBrowserException Could not locate a X3D browser on the
     *    same page as the applet.
     * @exception ConnectionException An error occurred during the connecting
     *    process
     */
    ExternalBrowser getBrowser(Applet applet) throws NotSupportedException, NoSuchBrowserException, ConnectionException;

    /**
     * Get a browser from the given java applet reference one some named page and
     * at some embed location. Used when attempting to access a browser on
     * another HTML page within a multi-framed environment, or if there are a
     * number of X3D browser instances located on the same page.
     * <p>
     * If the frame name is a zero length string or null then it is assumed to be
     * located on the same HTML page as the applet. The index is the number of
     * the embed X3D browser starting from the top of the page. If there are
     * other non-X3D plugins embedded in the page these are not taken into
     * account in calculating the embed index.
     *
     * @param applet The applet reference to use
     * @param frameName The name of the frame to look into for the browser
     * @param index The embed index of the X3D browser in the page
     * @return A reference to the Browser implementation
     * @exception NotSupportedException The implementation does not support this
     *    type of X3D browser.
     * @exception NoSuchBrowserException Could not locate a X3D browser on the
     *    same page as the applet.
     * @exception ConnectionException An error occurred during the connecting
     *    process
     */
    ExternalBrowser getBrowser(Applet applet,
                               String frameName,
                               int index)
        throws NotSupportedException, NoSuchBrowserException, ConnectionException;

    /**
     * Get a reference to a browser that is located on a remote machine. This
     * a server application to send scene updates to a number of client browsers
     * located on remote machines. If there are a number of browsers running on
     * a remote machine, they can be differentiated by the port number they are
     * listening on.
     * <p>
     * There is no default port number for X3D browsers.
     *
     * @param address The address of the machine to connect to
     * @param port The port number on that machine to connect to.
     * @return A reference to the Browser implementation
     * @exception NotSupportedException The implementation does not support this
     *    type of X3D browser.
     * @exception NoSuchBrowserException Could not locate a X3D browser on the
     *    same page as the applet.
     * @exception UnknownHostException Could not find the machine named in the
     *    address.
     * @exception ConnectionException An error occurred during the connecting
     *    process
     */
    ExternalBrowser getBrowser(InetAddress address, int port)
        throws NotSupportedException, NoSuchBrowserException, UnknownHostException, ConnectionException;
}
