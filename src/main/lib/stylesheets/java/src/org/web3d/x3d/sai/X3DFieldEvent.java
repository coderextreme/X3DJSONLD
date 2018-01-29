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
 * The event type is implemented as the class X3DFieldEvent. This class contains methods for obtaining the source of the event, the time (in X3D time) and any user defined data that occurred with the event.
 * 
 * <br><br>
 *  @author Justin Couch

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/types.html#EventTypesSAIFieldEvent" target="_blank">SAI Java Specification: B.4.2 X3DFieldEvent</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldEvent" target="blank">SAI Abstract Specification: 5.4.2 SAIFieldEvent</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class X3DFieldEvent extends java.util.EventObject
{
		/** The time stamp, in X3D time, that this event occurred at */
		protected double timeStamp;

		/** Passed field data for this event */
		protected Object eventDataObject;

		/**
		 * Construct a new X3DFieldEvent instance.
		 *
		 * @param sourceField The source field that generated this event
		 * @param newTimeStamp The timestamp of the event, in X3D time
		 * @param neweventDataObject Any user associated data with this event
		 */
		public X3DFieldEvent(Object sourceField, double newTimeStamp, Object neweventDataObject)
		{
			super(sourceField);

			timeStamp = newTimeStamp;
			eventDataObject = neweventDataObject;
		}

		/**
		 * Get the timestamp that this event occurred at.
		 * @return The time of this event, in X3D time coordinates.
		 */
		public double getTime() 
		{
			return timeStamp;
		}

		/**
		 * Get data with this event.
		 * @return eventDataObject
		 */
		public Object getData()
		{
			return eventDataObject;
		}
	}
