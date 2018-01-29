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

package org.web3d.x3d.jsail.fields;

import org.web3d.x3d.sai.*;  // making sure #2

/**
 * Concrete implementation class corresponding to X3DField.
 * 
 * <br><br>

 * <p>
 * Representation of a node's field definition.
 * </p>
 * <p>
 * The field definition holds static field information such as the field
 * access type, data type and name of the field.
 * </p>
 * <p>
 * The implementation of the toString() method of this class shall return the
 * full IDL declaration of the field as per the specification, not the UTF8 or
 * XML format. Implementation of <code>.equals()</code> shall return true if
 * the two field definitions share the same access type, data type and name. It
 * shall not include the underlying field's values at that point in time.
 * </p>
 *
 * @author Justin Couch

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public abstract class X3DConcreteFieldDefinition implements org.web3d.x3d.sai.X3DFieldDefinition
{
	// Member value declarations are encapsulated and private, using preferred Java types for concretes library
										
	private String    name = "";
										
	private int accessType = X3DFieldTypes.INPUT_OUTPUT;
										
	private int  fieldType = X3DFieldTypes.SFSTRING;
					
    /**
     * Get the name of this field. This will be something like "children"
     * or "translation". If the field is an exposed field then the name
     * give will be the base name without any <i>set_</i> or <i>_changed</i>
     * added to the name, regardless of how the initial field was fetched.
     *
     * @return The name of this field
     */
	@Override
	public String getName()
	{
		return name;
	}
						
	public void setName(String newValue)
	{
		if (name.contains(" ")) // TODO other validity checks for name
		name = newValue;
	}
			
    /**
     * Get the access type of the field. This will be one of field,
     * exposedField, eventIn or eventOut constants described in the
     * X3DFieldTypes interface.
     *
     * @see X3DFieldTypes
     * @return The access type of this field
     */			
	@Override
	public int getAccessType()
	{
		return accessType;
	}
    /**
     * Set the access type of the field. This will be one of field,
     * exposedField, eventIn or eventOut constants described in the
     * X3DFieldTypes interface.
     *
     * @see X3DFieldTypes
     * @throws InvalidFieldValueException Illegal value provided, no change made
     * @param newValue The access type of this field
     */
	public void setAccessType(int newValue)
	{
		if ((newValue >= X3DFieldTypes.INPUT_ONLY) && (newValue <= X3DFieldTypes.OUTPUT_ONLY))
			accessType = newValue;
		else
		{
			String errorNotice = "Illegal value " + newValue + " for field type";
//			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
	}
					
    /**
     * Get the field type. This string represents the field type such as
     * MFNode, SFInt32. The definition of the returned int value is
     * described in the X3DFieldType interface.
     *
     * @return A constant describing the field type
     * @see X3DFieldTypes
     */	
	@Override
	public int getFieldType()
	{
		return fieldType;
	}

    /**
     * Set the field type of the field. This will be one of SFBool,
     * SFInt32, MFString (etc.) constants described in the
     * X3DFieldTypes interface.
     *
     * @see X3DFieldTypes
     * @throws InvalidFieldValueException Illegal value provided, no change made
     * @param newValue The access type of this field
     */
	public void setFieldType(int newValue)
	{
		if ((newValue >= X3DFieldTypes.SFBOOL) && (newValue <= X3DFieldTypes.MFMATRIX4D))
			fieldType = newValue;
		else
		{
			String errorNotice = "Illegal value " + newValue + " for field type";
//			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
	}

    /**
     * Get the field type. This string represents the field type such as
     * MFNode, SFInt32, etc. A string is used to allow full extensibility.
     *
     * @return A string describing the field type
     */	
	@Override
	public String getFieldTypeString()
	{
		return X3DConcreteFieldTypes.toFieldString(fieldType);
	}
}
