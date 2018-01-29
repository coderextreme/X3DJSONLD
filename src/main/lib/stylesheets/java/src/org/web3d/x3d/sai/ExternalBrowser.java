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

import java.util.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * 
<p>
Browser interface that represents the additional abilities an external
application is granted to the X3D browser.
</p>
<p>
A number of the methods in this application can take strings representing URLs.
relative URL strings contained in URL fields of nodes or these method
arguments are interpreted as follows:
</p>

 * 

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#BrowserFactory" target="_blank">SAI Java Specification: B.5.2 BrowserFactory</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ExternalBrowser" target="_blank">X3D Tooltips: ExternalBrowser</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface ExternalBrowser
{
    /**
     * Lock the output from the external interface to the browser as the code
     * is about to begin a series of updates. No events will be passed to the
     * X3D world. They will be buffered pending release due to a subsequent
     * call to endUpdate.
     * <p>
     * This call is a nesting call which means subsequent calls to beginUpdate
     * are kept on a stack. No events will be released to the X3D browser
     * until as many endUpdates have been called as beginUpdate.
     *
     * @exception InvalidBrowserException The dispose method has been called on
     *    this browser reference.
     * @exception ConnectionException An error occurred in the connection to the
     *    browser.
     */
    void beginUpdate() throws InvalidBrowserException;

    /**
     * Release the output of events from the external interface into the
     * X3D browser. All events posted to this point from the last time that
     * beginUpdate was called are released into the X3D browser for
     * processing at the next available opportunity.
     * <p>
     * This call is a nesting call which means subsequent calls to beginUpdate
     * are kept on a stack. No events will be released to the X3D browser
     * until as many endUpdates have been called as beginUpdate.
     * <p>
     * If no beginUpdate has been called before calling this method, it has
     * no effect.
     *
     * @exception InvalidBrowserException The dispose method has been called on
     *    this browser reference.
     * @exception ConnectionException An error occurred in the connection to the
     *    browser.
     */
    void endUpdate() throws InvalidBrowserException;

    /**
     * Add a listener for browser events. Any changes in the browser will be
     * sent to this listener. The order of calling listeners is not guaranteed.
     * Checking is performed on whether the nominated listener is already
     * registered to ensure that multiple registration cannot take place.
     * Therefore it is possible to multiply register the one class
     * instance while only receiving one event.
     *
     * @param l The listener to add.
     * @exception NullPointerException If the provided listener reference is
     *     null
     * @exception InvalidBrowserException The dispose method has been called on
     *    this browser reference.
     * @exception ConnectionException An error occurred in the connection to the
     *    browser.
     */
    void addBrowserListener(BrowserListener l) throws InvalidBrowserException;

    /**
     * Remove a listener for browser events. After calling this method, the
     * listener will no longer receive events from this browser instance. If the
     * listener passed as an argument is not currently registered, the method
     * will silently exit.
     *
     * @param l The listener to remove
     * @exception NullPointerException If the provided listener reference is
     *     null
     * @exception InvalidBrowserException The dispose method has been called on
     *    this browser reference.
     * @exception ConnectionException An error occurred in the connection to the
     *    browser.
     */
    void removeBrowserListener(BrowserListener l) throws InvalidBrowserException;

    /**
     * Dispose the resources that are used by this instance. Should be called
     * just prior to leaving the application.
     */
    void dispose();
}
