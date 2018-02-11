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

import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.InvalidFieldValueException;
import org.web3d.x3d.sai.Core.*;  // making sure #0

/**
 * This utility class provides a concrete implementation corresponding to SFNode X3D field type.
 * 
 * <br><br>
 * The SFNode field specifies an X3D node; the default value of an uninitialized SFNode field is NULL.
<br><br>
Related field object: {@link MFNodeObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFNode">X3D Tooltips: type SFNode</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFNodeAndMFNode" target="blank">X3D Abstract Specification: SFNodeAndMFNode</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFNodeObject extends X3DConcreteField implements org.web3d.x3d.sai.SFNode
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFNode</i> */
	public static final String NAME = "SFNode";

	/** Default value for this field type is a null node.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final X3DNode DEFAULT_VALUE = null;

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private X3DNode SFNode = DEFAULT_VALUE;

	/**
	 * Constructor for SFNodeObject performs value initialization.
	 */
	public SFNodeObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFNodeObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFNode = DEFAULT_VALUE;
	}

	/**
	 * Constructor to copy an SFNodeObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFNodeObject(SFNodeObject newValue)
	{
		if (newValue == null)
		{
			SFNode = DEFAULT_VALUE;
			return;
		}
		SFNode = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFNodeObject using a corresponding Java primitive X3DNode as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFNodeObject (X3DNode newValue)
	{SFNode = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (X3DNode value)
	{
		return String.valueOf(value);
	}

	/**
	 * Get the current value.
	 * @return current value
	 */
	@Override
	public X3DNode getValue()
	{
		return SFNode;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public X3DNode getPrimitiveValue()
	{
		return SFNode;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFNode">X3D Tooltips: type SFNode</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		return "TODO"; // unimplemented type toString()
	}
	/**
	 * Assign a new value to this field.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(X3DNode newValue)
	{
		SFNode = newValue;
	}

	/**
	 * Apply an SFNodeObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFNodeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFNodeObject setValue(SFNodeObject newValue)
	{
		if (newValue == null)
		{
			SFNode = DEFAULT_VALUE;
			return this;
		}
		SFNode = newValue.getPrimitiveValue();
		return this;
	}								

	/**
	 * Utility method to clear all contained children including nodes, statements and comments (if any).
	 * @return {@link SFNodeObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public SFNodeObject clearChildren()
	{
		SFNode = DEFAULT_VALUE;
		return this;
	}
}
