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
 * Representation of a node's field definition.
 * 
 * <br><br>
 * 
The field definition holds the static field information such as the field
access type, the data type and the name of the field.

The implementation of the toString() method of this class shall return the
full IDL declaration of the field as per the specification, not the UTF8 or
XML format. Implementation of .equals() shall return true if
the two field definitions share the same access type, data type and name. It
shall not include the underlying field's values at that point in time.


@author Justin Couch

 * 

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/types.html#X3DFieldDefinition" target="_blank">SAI Java Specification: B.4.4 X3DFieldDefinition</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/types.html#SAIFieldDefinition" target="blank">SAI Abstract Specification: 6.3.10 SAIFieldDefinition</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface X3DFieldDefinition
{
    /**
     * Get the name of this field. This will be something like "children"
     * or "translation". If the field is an exposed field then the name
     * give will be the base name without any <i>set_</i> or <i>_changed</i>
     * added to the name, regardless of how the initial field was fetched.
     *
     * @return The name of this field
     */
	public String getName();

    /**
     * Get the access type of the field. This will be one of field,
     * exposedField, eventIn or eventOut constants described in the
     * X3DFieldTypes interface.
     *
     * @return The access type of this node
     * @see X3DFieldTypes
     */
	public int getAccessType();

    /**
     * Get the field type. This string represents the field type such as
     * MFNode, SFInt32. The definition of the returned int value is
     * described in the X3DFieldType interface.
     *
     * @return A constant describing the field type
     * @see X3DFieldTypes
     */
	public int getFieldType();

    /**
     * Get the field type. This string represents the field type such as
     * MFNode, SFInt32, etc. A string is used to allow full extensibility.
     *
     * @return A string describing the field type
     */
	public String getFieldTypeString();
}
