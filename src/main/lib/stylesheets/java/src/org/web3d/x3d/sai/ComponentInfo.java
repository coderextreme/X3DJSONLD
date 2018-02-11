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
Description of a single component.1188311883
A component description contains useful pieces of information about
the requirements. Of primary importance is the specification component name and level.
Additional information includes title and URL for the component provider.

 * 

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#ComponentInfo" target="_blank">SAI Java Specification: B.6.1 ComponentInfo</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#COMPONENTStatement" target="blank">X3D Abstract Specification: 7.2.5.4 COMPONENT statement</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ComponentInfo" target="_blank">X3D Tooltips: ComponentInfo</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface ComponentInfo
{
    /**
     * Get the name of this component.
     * @return name The name of the component
     */
	public String getName();
				
    /**
     * Get the level of the component. A level is always greater than zero.
     * The level information may represent one of two things, depending on
     * how the component info was created. When created as part of a file that
     * is requesting a specific level of support, the level will indicate the
     * requested level, not the maximum available on the system. When this is
     * returned from a query of the system to see what components are available
     * then the level is maximum supported by the implementation.
     *
     * @return The level value for the component
	 */
	public int getLevel();
				
    /**
     * Get the title of this component. This is a long-form version that can
     * be used in a UI. If no title is set, will return null.
     *
     * @return The title string of the component
     */
	public String getTitle();
				
    /**
     * Get the URL of the provider. This is used for user interface information
     * to point an end user at someone who has implemented this bit of
     * functionality. It is not used by the system to download the component
     * or its definition.
     *
     * @return The URL of the provider as a string
     */
	public String getProviderURL();
				
    /**
     * Return a formatted string version of this component that conforms to
     * the X3D specification for X3D file encoding. The string will start
     * with the <code>COMPONENT</code> keyword, as per specification.
     *
     * @return A correctly formatted string.
     */
	public String toX3DString(); // TODO re-check: toStringX3D
}
