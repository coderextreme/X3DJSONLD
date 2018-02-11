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
 * Base representation of an X3D field type.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/types.html#X3DField" target="_blank">SAI Java Specification: B.4.5 X3DField</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIField" target="blank">SAI Abstract Specification: 5.2.13 SAIField</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#FieldSemantics" target="blank">X3D Abstract Specification: 4.4.2.2 Field semantics</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface X3DField
{
    /**
     * Get the definition of this field.
     *
     * @return The field definition to use
     */
    X3DFieldDefinition getDefinition();

    /**
     * Check to see if this field is readable. This may return two different
     * sets of values depending on the use. If this field is the field of a
     * script that has been passed to a script implementation, it will return
     * true if the field is an eventIn, exposedField or field and false for an
     * eventOut. If it is a field of any other circumstance (ie an external
     * application querying a node or a script querying another node it has a
     * reference to) it shall return true for eventOuts, exposedFields and
     * false for eventIn or field.
     *
     * @return true if the values of this field are readable
     */
    boolean isReadable();

    /**
     * Check to see if this field is writable. This may return two different
     * sets of values depending on the use. If this field is the field of a
     * script that has been passed to a script implementation, it will return
     * true if the field is an eventOut, exposedField or field and false for an
     * eventIn. If it is a field of any other circumstance (ie an external
     * application querying a node or a script querying another node it has a
     * reference to) it shall return true for eventIns, exposedFields and
     * false for eventOut or field.
     *
     * @return true if the values of this field are readable
     */
    boolean isWritable();

    /**
     * 
     * Add a listener for changes in this field. This works for listening to
     * changes in a readable field. A future extension to the specification,
     * or a browser-specific extension, may allow for listeners to be added
     * to writable nodes as well.
     * 
     * 
     * A listener instance cannot have multiple simultaneous registrations.
     * If the listener instance is currently registered, this request shall
     * be silently ignored.
     * 
     *
     * @param listener The listener to add
     */
    void addX3DEventListener(X3DFieldEventListener listener);

    /**
     * Remove a listener for changes in the readable field. If the listener is
     * not currently registered, this request shall be silently ignored.
     *
     * @param listener The listener to remove
     */
    void removeX3DEventListener(X3DFieldEventListener listener);

}
