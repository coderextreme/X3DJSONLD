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

/**
 * This utility class provides a concrete implementation corresponding to SFString X3D field type.
 * 
 * <br><br>
 * SFString defines a single string encoded with the UTF-8 universal character set.
<br><br>
Related field object: {@link MFStringObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFString">X3D Tooltips: type SFString</a>

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


        // TODO better collect all regular expressions (regexes)
/*
        Names and Tokens https://www.w3.org/TR/xml11/#sec-common-syn
[4]   	NameStartChar	::=   	":" | [A-Z] | "_" | [a-z] | [#xC0-#xD6] | [#xD8-#xF6] | [#xF8-#x2FF] | [#x370-#x37D] | [#x37F-#x1FFF] | [#x200C-#x200D] | [#x2070-#x218F] | [#x2C00-#x2FEF] | [#x3001-#xD7FF] | [#xF900-#xFDCF] | [#xFDF0-#xFFFD] | [#x10000-#xEFFFF]
[4a]   	NameChar	::=   	NameStartChar | "-" | "." | [0-9] | #xB7 | [#x0300-#x036F] | [#x203F-#x2040]
[5]   	Name		::=   	NameStartChar (NameChar)*
[7]   	Nmtoken		::=   	(NameChar)+
*/
        /**
         * XML Regular Expression NameStartChar.
         * TODO integrate special-character support into regex.
         * [4]   	NameStartChar	::=   	":" | [A-Z] | "_" | [a-z] | [#xC0-#xD6] | [#xD8-#xF6] | [#xF8-#x2FF] | [#x370-#x37D] | [#x37F-#x1FFF] | [#x200C-#x200D] | [#x2070-#x218F] | [#x2C00-#x2FEF] | [#x3001-#xD7FF] | [#xF900-#xFDCF] | [#xFDF0-#xFFFD] | [#x10000-#xEFFFF]
         * @see <a href="https://www.w3.org/TR/xml11/#NT-NameStartChar">XML 1.1 NameStartChar</a>
	 */
	public static final String NameStartCharFilter = "A-Z_a-z"; // TODO [\u00C0-\u00D6][\u00D8-\u00F6][\u00F8-\u02FF][\u0370-\u037D][\u037F-\u1FFF][\u200C-\u200D][\u2070-\u218F][\u2C00-\u2FEF][\u3001-\uD7FF][\uF900-\uFDCF][\uFDF0-\uFFFD][\u10000-\uEFFFF]";

        /**
         * XML Regular Expression NameChar.
         * TODO integrate special-character support into regex.
         * [4a]   	NameChar	::=   	NameStartChar | "-" | "." | [0-9] | #xB7 | [#x0300-#x036F] | [#x203F-#x2040]
         * @see <a href="https://www.w3.org/TR/xml11/#NT-NameChar">XML 1.1 NameChar</a>
	 */
        public static final String NameCharFilter = NameStartCharFilter + "-.0-9"; // TODO \u00B7[\u0300-\u036F][\u0203F-\u2040]";

        /**
         * XML Regular Expression NameFilter.
         * TODO integrate special-character support into regex.
         * [5]   	Name		::=   	NameStartChar (NameChar)*
         * @see <a href="https://www.w3.org/TR/xml11/#NT-NameFilter">XML 1.1 NameFilter</a>
	 */
        public static final String NameFilter = "[" + NameStartCharFilter + "][" + NameCharFilter + "]*"; // "[A-Z_a-z][A-Z_a-z-.0-9]*"

        /**
         * XML Regular Expression Nmtoken.
         * TODO integrate special-character support into regex.
         * [7]   	Nmtoken		::=   	(NameChar)+
         * @see <a href="https://www.w3.org/TR/xml11/#NT-Nmtoken">XML 1.1 Nmtoken</a>
	 */
        public static final String NmtokenFilter = "[" + NameCharFilter + "]+"; // "[A-Z_a-z-.0-9]+"

        /**
	 * Utility method to determine if string meets XML NMTOKEN requirements
	 * @param value string to check
	 * @return whether value meets NMTOKEN regex checks
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dTooltips.html#NMTOKEN">X3D Tooltips: type NMTOKEN</a>
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html">X3D Regular Expressions (regexes)</a>
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html">X3D Regular Expressions (regexes)</a>
	 * @see <a href="https://www.w3.org/TR/REC-xml/#sec-common-syn">XML 1.1 Common Syntactic Constructs</a>
	 * @see <a href="https://www.w3.org/TR/xml11/#NT-Nmtoken">XML 1.1 NMTOKEN</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @see <a href="https://docs.oracle.com/javase/specs/jls/se7/html/jls-3.html#jls-3.2" target="_blank">Java Language Specification: 3 Lexical Structure, 3.2. Lexical Translations</a>
	 * @see <a href="https://docs.oracle.com/javase/tutorial/i18n/text/unicode.html" target="_blank">Java Tutorials: Unicode</a>
	 * @see <a href="http://www.oracle.com/us/technologies/java/supplementary-142654.html" target="_blank">Java and Unicode: Supplementary Characters in the Java Platform</a>
	 */
	public static final boolean isNMTOKEN(String value)
	{
            if ((value == null) || value.trim().isEmpty())
                return false;
            // NMTOKEN character regex check
            boolean result = value.matches(NmtokenFilter);

/* original was simpler and not strictly correct
                boolean result = value.matches("[a-zA-Z_][a-zA-Z0-9_]*"); // NMTOKEN character regex check
                if (value.startsWith(".") || value.startsWith("-"))       // NameStartChar restrictions
                    result = false;
*/
		return result;
	}

        /**
	 * Utility method to determine if string meets suggested X3D naming conventions
	 * @param value string to check
	 * @return whether value meets suggested X3D naming requirements
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dTooltips.html#NMTOKEN">X3D Tooltips: type NMTOKEN</a>
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html">X3D Regular Expressions (regexes)</a>
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html">X3D Regular Expressions (regexes)</a>
	 * @see <a href="https://www.w3.org/TR/REC-xml/#sec-common-syn">XML 1.1 Common Syntactic Constructs</a>
	 * @see <a href="https://www.w3.org/TR/xml11/#NT-Nmtoken">XML 1.1 NMTOKEN</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @see <a href="https://docs.oracle.com/javase/specs/jls/se7/html/jls-3.html#jls-3.2" target="_blank">Java Language Specification: 3 Lexical Structure, 3.2. Lexical Translations</a>
	 * @see <a href="https://docs.oracle.com/javase/tutorial/i18n/text/unicode.html" target="_blank">Java Tutorials: Unicode</a>
	 * @see <a href="http://www.oracle.com/us/technologies/java/supplementary-142654.html" target="_blank">Java and Unicode: Supplementary Characters in the Java Platform</a>
	 */
	public static final boolean meetsX3dNamingConventions(String value)
	{
            if ((value == null) || value.trim().isEmpty())
                return false;
            // TODO continue improving character regex checks.  Not identical to NMTOKEN.
            boolean result = // value.matches(NameFilter) &&               // XML Name
                                value.matches("[a-zA-Z_][a-zA-Z0-9_.-]*"); // X3D SAH; TODO reconcile guidance . and -

/* original was simpler and not strictly correct
                boolean result = value.matches("[a-zA-Z_][a-zA-Z0-9_]*"); // NMTOKEN character regex check
                if (value.startsWith(".") || value.startsWith("-"))       // NameStartChar restrictions
                    result = false;
*/
		return result;
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
	 * Provide String representation of this object, properly escaped for XML-based X3D syntax and conforming to X3D Canonical Form.
	 * @see SFStringObject#toStringX3D(String)
	 * @see MFStringObject#toStringX3D
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFString">X3D Tooltips: type SFString</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
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
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#SFString">X3D Tooltips: type SFString</a>
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
