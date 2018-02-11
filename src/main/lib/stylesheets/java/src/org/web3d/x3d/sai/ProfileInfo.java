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
Description of a single profile, which is a collection of components.
A profile defines the player or tool support needed for a particular scene.

 * 

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#ProfileInfo" target="_blank">SAI Java Specification: B.6.2 ProfileInfo</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#PROFILEStatement" target="blank">X3D Abstract Specification: 7.2.5.3 PROFILE statement</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ProfileInfo" target="_blank">X3D Tooltips: ProfileInfo</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface ProfileInfo
{
    /**
     * Get the name of this component.
     *
     * @return name The name of the component
     */
	public String getName();
				
    /**
     * Get the title of this component. This is a long-form version that can
     * be used in a UI.
     *
     * @return The title string of this component
     */
	public String getTitle();
				
    /**
     * Get the list of defined components for this profile. A profile will
     * always have one or more components.
     *
     * @return An array of ComponentInfo definitions for this profile
     */
	public ComponentInfo[] getComponents();

    /**
     * Return a formatted string version of this component that conforms to
     * the X3D specification for X3D file encoding. The string will start
     * with the <code>PROFILE</code> keyword, as per specification.
     *
     * @return A correctly formatted string
     */
	public String toX3DString(); // TODO re-check: toStringX3D
}
