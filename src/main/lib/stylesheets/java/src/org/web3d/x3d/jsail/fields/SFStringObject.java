/*
Copyright (c) 1995-2017 held by the author(s).  All rights reserved.

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
import org.web3d.x3d.sai.InvalidFieldValueException;

/**
 * This utility class provides a concrete implementation corresponding to SFString X3D field type.
 * 
 * <br><br>
 * SFString defines a single string encoded with the UTF-8 universal character set.
<br><br>
Related field object: {@link MFStringObject}

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString" target="blank">X3D Abstract Specification: SFStringAndMFString</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class SFStringObject extends X3DConcreteField implements org.web3d.x3d.sai.SFString
{
	/** String constant <i>NAME</i> provides name of this element: <i>SFString</i> */
	public static final String NAME = "SFString";

	/** Default value for this field type is an empty String.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final String DEFAULT_VALUE = "";

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private String SFString = DEFAULT_VALUE;

	/**
	 * Constructor for SFStringObject performs value initialization.
	 */
	public SFStringObject ()
	{
		initialize();
	}

	/**
	 * Initialization for SFStringObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		SFString = DEFAULT_VALUE;
	}

	/**
	 * Utility method to determine if string meets NMTOKEN requirements
	 * @param value string to check
	 * @return whether value meets NMTOKEN regex checks
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#type">X3D Resources: type NMTOKEN</a>
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html">X3D Regular Expressions (regexes)</a>
	 */
	public static final boolean isNMTOKEN(String value)
	{
		if ((value == null) || value.trim().isEmpty())
			 return false;
		else return value.matches("[a-zA-Z_][a-zA-Z0-9_.-]*"); // NMTOKEN character regex check
	}
	/**
	 * Utility accessor for SFStringObject using String value
	 * @param newValue is new value to assign
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public SFStringObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			SFString = DEFAULT_VALUE;
			return this;
		}
			SFString = newValue;
		return this;
	}

	/**
	 * Constructor to copy an SFStringObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public SFStringObject(SFStringObject newValue)
	{
		if (newValue == null)
		{
			SFString = DEFAULT_VALUE;
			return;
		}
		SFString = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for SFStringObject using a corresponding Java primitive String as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public SFStringObject (String newValue)
	{SFString = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @see SFStringObject#toStringX3D
	 * @see MFStringObject#toStringX3D
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString">X3D Abstract Specification: 5.3.14 SFString and MFString</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString">X3D XML Encoding: 5.15 SFString and MFString</a>
	 * @see <a href="http://www.web3d.org/x3d/content/X3dTooltips.html#Text">X3D Tooltips: Text</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return XML/X3D-escaped String version of the provided value
	 */
	public static String toString (String value)
	{
		return String.valueOf(value);
	}

	/**
	 * Static utility method to provide String representation of input String, properly escaped using XML-based X3D syntax.
	 * @param value The value to convert to an escaped String
	 * @see SFStringObject#toStringX3D
	 * @see MFStringObject#toStringX3D
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString">X3D Abstract Specification: 5.3.14 SFString and MFString</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString">X3D XML Encoding: 5.15 SFString and MFString</a>
	 * @see <a href="http://www.web3d.org/x3d/content/X3dTooltips.html#Text">X3D Tooltips: Text</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return XML/X3D-escaped String version of the provided value
	 */
	public static String toStringX3D (String value)
	{
		return (new SFStringObject(value)).toString()
				.replaceAll("&","&amp;")	// escape ampersands
				.replaceAll("<","&lt;")		// escape    less-than < signs
				.replaceAll(">","&gt;")		// escape greater-than > signs in XML attributes
				.replaceAll("'","&apos;")	// escape apostrophes since XML attributes in this output are delimited by apostrophes
				.replaceAll("\"","\\\"");	// escape embedded quotation marks
	}

	/**
	 * Provide String representation of this object, properly escaped for XML-based X3D syntax.
	 * @see SFStringObject#toStringX3D(String)
	 * @see MFStringObject#toStringX3D
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return XML/X3D-escaped version of this SFString
	 */
	public String toStringX3D ()
	{
		return SFStringObject.toStringX3D(SFString); // apply escaping to member value of this object
	}

	/**
	 * Get the current value.
	 * @return current value
	 */
	@Override
	public String getValue()
	{
		return SFString;
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public String getPrimitiveValue()
	{
		return SFString;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		return SFString;
	}
	/**
	 * Assign a new value to this field.
	 * @see X3DConcreteField#getTupleSize(String)
	 * @param newValue The replacement value to assign.
	 */
	@Override
	public void setValue(String newValue)
	{
		SFString = newValue;
	}

	/**
	 * Apply an SFStringObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link SFStringObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public SFStringObject setValue(SFStringObject newValue)
	{
		if (newValue == null)
		{
			SFString = DEFAULT_VALUE;
			return this;
		}
		SFString = newValue.getPrimitiveValue();
		return this;
	}								
}
