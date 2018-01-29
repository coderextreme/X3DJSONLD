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
 * Class representing events that happen in the Browser object.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#BrowserEvent" target="_blank">SAI Java Specification: B.5.1 BrowserEvent</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIBrowserEvent" target="blank">SAI Abstract Specification: 5.4.1.2 SAI_Browser_Event</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#BrowserEvent" target="_blank">X3D Tooltips: BrowserEvent</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class BrowserEvent extends java.util.EventObject
{
    /**
     * The X3D player has completed initial loading of the world. Event is generated
     * just after the scene has been loaded and just before the first event has been sent.
     */
	public static final int INITIALIZED = 0;

    /**
     * The currently loaded world is about to be unloaded. Called just before
     * the scene is about to be unloaded. If another world is going to replace this,
     * then an initialize event will be generated following this one.
     */
	public static final int SHUTDOWN = 1;

    /**
     * An error occurred in loading a scene from a URL call. Origin can be either
     * a createVrmlFromURL call or loadURL.
     */
	public static final int URL_ERROR = 2;

    /**
     * An error has occurred that has caused the connection between the X3D player
     * and the external application to fail. Potential causes include X3D player
     * failure or a lost network connection.
     */
	public static final int CONNECTION_ERROR = 10;

    /**
     * The number of reserved identifier numbers for event conditions. Any
     * value below this is considered to be a general specification-defined event as
     * found in the Java Scene Authoring Interface (SAI) specification. Any values
     * above this value are browser-specific messages.
     */
	public static final int LAST_IDENTIFIER = 100;
		
    /** The identifier of the event that this class instance represents */
    private int id;
	
	/** Error message if incorrect Browser event value encountered.
	 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#BrowserEvent">X3D Java SAI: B.5.1 BrowserEvent</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/concepts.html#Browser">X3D SAI: 4.4.6 Browser</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/concepts.html#Events">X3D SAI: 4.5 Events</a>
	 */
	public static final String ERROR_UNKNOWN_BROWSER_EVENT_VALUE = "ERROR_UNKNOWN_BROWSER_EVENT_VALUE"; // not defined in X3D Java SAI

	/**
     * Get the type of event that has occurred.
     *
     * @return The type of event as defined by the types
     * @see #INITIALIZED
     * @see #SHUTDOWN
     * @see #URL_ERROR
     * @see #CONNECTION_ERROR
     * @see #LAST_IDENTIFIER
     */
	public int getID()
    {
        return id;
	}

    /**
     * Create a new browser event.
     *
     * @param browser The source of the browser that generated this event
     * @param action The event type to create
     * @exception IllegalArgumentException if the action or browser id are not legal values
     */
	public BrowserEvent(Object browser, int action)
    {
        super(browser);

        if (browser == null)
		{
			String errorNotice = "Null browser reference";
//			validationResult.append(errorNotice).append("\n");
			throw new IllegalArgumentException(errorNotice);
		}

        if (action < 0)
		{
            String errorNotice = "Invalid event action type " + action;
//			validationResult.append(errorNotice).append("\n");
			throw new IllegalArgumentException(errorNotice);
		}

        id = action;
    }
				
    /**
     * Utility method providing the name of this event value.
     * @param value The BrowserEvent value of interest.
     * @return The name of this BrowserEvent value.
     */
	public String toString (int value)
	{
		switch (value)
		{
			case INITIALIZED:
				return "INITIALIZED";
			case SHUTDOWN:
				return "SHUTDOWN";
			case URL_ERROR:
				return "URL_ERROR";
			case CONNECTION_ERROR:
				return "CONNECTION_ERROR";
			case LAST_IDENTIFIER:
				return "LAST_IDENTIFIER";
			default:
				String message = BrowserEvent.ERROR_UNKNOWN_BROWSER_EVENT_VALUE + " " + value;
				System.err.println ("BrowserEvent.toString(" + value + ") " + message);
				return message; // TODO throw exception?
		}
	}
}
