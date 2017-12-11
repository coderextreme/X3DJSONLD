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

package org.web3d.x3d.jsail;


import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.InvalidFieldValueException;
import java.util.*;

/**
 * Concrete class that enables developers to set custom configuration properties when using X3D Java SAI Library (X3DJSAIL). Output serialization support is provided for indentation, X3D Canonicalization (C14N) and showing default attributes. TODO more to follow!
 * 
 * <br><br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class ConfigurationProperties
{
	/** required by internal interface, empty list provided since no children array present in this class */
        private ArrayList<String> commentsList; 
	// TODO enable user-specified properties file
				
	// TODO singleton pattern

// ==========================================================================================
	
	/** Default character-count increment for serializing scene output. */
	public static final int indentIncrement_DEFAULT = 2;
				
	private static int indentIncrement = indentIncrement_DEFAULT; // static initialization

	/** Whitespace character for indenting when serializing scene output. */
	public static final char indentCharacter_SPACE = ' ';
				
	/** Alternative whitespace character for indenting when serializing scene output. */
	public static final char indentCharacter_TAB   = '\t';
				
	/** Default character for indenting when serializing scene output, initial value is indentCharacter_SPACE. */
	public static final char indentCharacter_DEFAULT = indentCharacter_SPACE;
				
	private static char indentCharacter = indentCharacter_DEFAULT; // static initialization
				
	/** Default XML document encoding, used in the XML document declaration appearing in the first line of an XML file.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#X3D">X3D Tooltips: X3D</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Validation">X3D Scene Authoring Hints: Validation of X3D Scenes using DTD and XML Schema</a>
	*/
	public static final String XML_ENCODING_DECLARATION_DEFAULT = "UTF-8"; // this must be exact!
				
	// TODO add additional encoding declarations as string constants, along with mutatable configuration property.
	
	/** Error message if configuration of X3DJSAIL is incorrect: CLASSPATH missing jar or other error.
	 */
	public static final String ERROR_CONFIGURATION_X3DJSAIL = "ERROR_CONFIGURATION_X3DJSAIL";

	/** Error message if an illegal value is provided as a method parameter.
	 */
	public static final String ERROR_ILLEGAL_VALUE = "ERROR_ILLEGAL_VALUE";
				
	/** Error message if an element is not currently connected to an existing scene graph object, and necessary checking  for model validation is not possible.
		Example: <i>fieldObject</i> or <i>fieldValueObject</i> creation may fail validation() if the field types cannot be checked in a 
		corresponding <i>ProtoDeclareObject</i> or <i>ExternProtoDeclareObject</i>.
	 */
	public static final String ERROR_NOT_CONNECTED_TO_SCENE_GRAPH = "ERROR_NOT_CONNECTED_TO_SCENE_GRAPH";

	/** Error message if a field is required but no value is found.
	 */
	public static final String ERROR_VALUE_NOT_FOUND = "ERROR_VALUE_NOT_FOUND";
	
	/** Error message if incorrect field accessType value encountered
	 * @see org.web3d.x3d.jsail.Core.fieldObject#getAccessType()
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#accessType">X3D Tooltips: accessType</a>
	 */
	public static final String ERROR_UNKNOWN_FIELD_ACCESSTYPE = "ERROR_UNKNOWN_FIELD_ACCESSTYPE";
	
	/** Error message if incorrect field type value encountered
	 * @see org.web3d.x3d.jsail.Core.fieldObject#getType()
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 */
	public static final String ERROR_UNKNOWN_FIELD_TYPE = "ERROR_UNKNOWN_FIELD_TYPE";

	/** Error message if node type of ProtoDeclareObject is not found
	 * @see ProtoDeclareObject
	 * @see ExternProtoDeclareObject
	 * @see ProtoInstanceObject
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/abstracts.html#InvalidProtoException">X3D SAI: B.7.13 InvalidProtoException</a>
	 */
	public static final String ERROR_UNKNOWN_PROTODECLARE_NODE_TYPE = "ERROR_UNKNOWN_PROTODECLARE_NODE_TYPE"; // not defined in X3D Java SAI

	/** Error message if node type of ExternProtoDeclareObject is not found
	 * @see ExternProtoDeclareObject
	 * @see ProtoDeclareObject
	 * @see ProtoInstanceObject
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/abstracts.html#InvalidProtoException">X3D SAI: B.7.13 InvalidProtoException</a>
	 */
	public static final String ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE = "ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE"; // not defined in X3D Java SAI

	/** Error message if node type of ProtoInstanceObject is not found
	 * @see ProtoInstanceObject
	 * @see ProtoDeclareObject
	 * @see ExternProtoDeclareObject
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/abstracts.html#InvalidProtoException">X3D SAI: B.7.13 InvalidProtoException</a>
	 */
	public static final String ERROR_UNKNOWN_PROTOINSTANCE_NODE_TYPE = "ERROR_UNKNOWN_PROTOINSTANCE_NODE_TYPE"; // not defined in X3D Java SAI

// ==========================================================================================
				
	/** Default mode for debugging results, initial value is false. */
	public static boolean debugModeActive  = false;
				
	/** Whether to show default attribute values when serializing scene output, initial value is <i>false</i>. */
	public static final boolean showDefaultAttributes_DEFAULT   = false;
				
	private static boolean showDefaultAttributes = showDefaultAttributes_DEFAULT; // static initialization
				
	/** Set whether to allow partial output if validation exception occurs when serializing scene output, initial value is <i>false</i>. */
	public static final boolean validationExceptionAllowed_DEFAULT   = false;
				
	private static boolean validationExceptionAllowed = validationExceptionAllowed_DEFAULT; // static initialization
				
	/** Set whether to allow partial output if validation exception occurs when creating an object, initial value is <i>true</i>. */
	public static final boolean creationConnectionValidationExceptionAllowed_DEFAULT   = true;
				
	private static boolean creationConnectionValidationExceptionAllowed = creationConnectionValidationExceptionAllowed_DEFAULT; // static initialization

	/** Set whether to allow overwriting previously existing files, initial value is <i>true</i>. */
	public static final boolean overwriteExistingFiles_DEFAULT   = true;
				
	private static boolean overwriteExistingFiles = overwriteExistingFiles_DEFAULT; // static initialization

	// ==========================================================================================
				
	/** X3DJSAIL name
	 * @see <a href="http://www.web3d.org/specifications/java/X3DJSAIL.html">http://www.web3d.org/specifications/java/X3DJSAIL.html</a> */
	public static final String NAME_X3DJSAIL     = "X3D Java Scene Access Interface Library (X3DJSAIL)";
				
	/** X3DJSAIL documentation page
	 * @see <a href="http://www.web3d.org/specifications/java/X3DJSAIL.html">http://www.web3d.org/specifications/java/X3DJSAIL.html</a> */
	public static final String URL_X3DJSAIL     = "http://www.web3d.org/specifications/java/X3DJSAIL.html";
                            
	/** X3D Resources documentation page
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> */
	public static final String URL_X3DRESOURCES = "http://www.web3d.org/x3d/content/examples/X3dResources.html";
                            
	/** X3D Tooltips documentation pages
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html">http://www.web3d.org/x3d/tooltips/X3dTooltips.html</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#Tooltips">X3D Resources: Tooltips (multiple languages)</a> */
	public static final String URL_X3DTOOLTIPS = "http://www.web3d.org/x3d/tooltips/X3dTooltips.html";
				
	/** XSLT stylesheet to create pretty-print HTML documentation page from X3D scene: <i>../lib/stylesheets/X3dToXhtml.xslt</i> */
	public static final String STYLESHEET_htmlDocumentation   = "X3dToXhtml.xslt";
				
	/** XSLT stylesheet to create Extrusion node cross sections in SVG from X3D scene: <i>../lib/stylesheets/X3dExtrusionToSvgViaXslt1.1.xslt</i> */
	public static final String STYLESHEET_extrusionCrossSectionSVG   = "X3dExtrusionToSvgViaXslt1.1.xslt";
				
	/** XSLT stylesheet to create X3DOM XHTML page or X3DOM HTML page from X3D scene: <i>../lib/stylesheets/X3dToX3dom.xslt</i> */
	public static final String STYLESHEET_X3DOM    = "X3dToX3dom.xslt";
				
	/** XSLT stylesheet to create X_ITE XHTML page or X_ITE HTML page from X3D scene: <i>../lib/stylesheets/X3dToX3dom.xslt</i> 
            TODO disambiguation needed?
	 * @see <a href="http://create3000.de/x_ite">X_ITE open-source X3D player</a>
         */
	public static final String STYLESHEET_X_ITE    = "X3dToX3dom.xslt";
				
	/** XSLT stylesheet Cobweb (now X_ITE)
	 * @see <a href="http://create3000.de/x_ite">X_ITE open-source X3D player</a>
         */
        @Deprecated
	public static final String STYLESHEET_COBWEB   = "X3dToX3dom.xslt";
				
	/** XSLT stylesheet to create Java source code (using X3DJSAIL library) from X3D scene: <i>../lib/stylesheets/X3dToJava.xslt</i>.
	 * TODO: documentation.
	 */
	public static final String STYLESHEET_JAVA   = "X3dToJava.xslt";
				
	/** XSLT stylesheet to create JSON encoding from X3D scene: <i>../lib/stylesheets/X3dToJson.xslt</i>
	 * @see <a href="http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding">X3D JSON Encoding</a>
	 * @see <a href="http://www.web3d.org/x3d/stylesheets/X3dToJson.html">X3D to JSON Stylesheet Converter</a> */
	public static final String STYLESHEET_JSON   = "X3dToJson.xslt";
		
	/** List of officially released X3DJSAIL jar files.
	 */
        // https://stackoverflow.com/questions/21696784/how-to-declare-an-arraylist-with-values
        public static final ArrayList<String> X3DJSAIL_JAR_RELEASE_VERSIONS = 
            new ArrayList<>(Arrays.asList("X3DJSAIL.3.3.classes.jar", "X3DJSAIL.3.3.full.jar"));

// ==========================================================================================
				
	/** Whether to delete intermediate files generated as part of various transformations, this property can be helpful for debugging. */
	private static boolean deleteIntermediateFiles_DEFAULT = true;
				
	/** Whether to delete intermediate files generated as part of various transformations, this property can be helpful for debugging. */
	private static boolean deleteIntermediateFiles = deleteIntermediateFiles_DEFAULT;
				
	/** Indicate whether to delete intermediate files generated as part of various transformations, this property method can be helpful can be helpful for debugging.
	 * @return configuration setting whether intermediate files are deleted
	 */
	public static final boolean isDeleteIntermediateFiles()
	{
		return deleteIntermediateFiles;
	}
	/** Set whether to delete intermediate files generated as part of various transformations, this property method can be helpful can be helpful for debugging.
	 * @param newValue is new value to assign
	 */
	public static final void setDeleteIntermediateFiles(boolean newValue)
	{
		deleteIntermediateFiles = newValue;
	}	
// ==========================================================================================
				
	/** Whether to omit trailing zeros from floating-point or double-precision output. */
	private static boolean stripTrailingZeroes_DEFAULT = true;
				
	/** Whether to omit trailing zeros from floating-point or double-precision output. */
	private static boolean stripTrailingZeroes = stripTrailingZeroes_DEFAULT;
				
	/** Indicates whether trailing zeros are omitted from output of floating-point or double-precision values, this property can be helpful for debugging.
	 * @return configuration setting whether trailing zeros are stripped
	 */
	public static final boolean isStripTrailingZeroes()
	{
		return stripTrailingZeroes;
	}
	/** Set whether to omit trailing zeros from floating-point or double-precision output, this property can be helpful for debugging.
	 * @param newValue is new value to assign
	 */
	public static final void setStripTrailingZeroes(boolean newValue)
	{
		stripTrailingZeroes = newValue;
	}

// ==========================================================================================
	 
	/** XSLT transformation engine: SAXON
	 * @see <a href="http://saxon.sourceforge.net/#F9.7HE">Saxon-HE 9.7</a>
	 * @see <a href="https://sourceforge.net/projects/saxon/files">Saxon distribution</a>
	 * @see <a href="http://www.saxonica.com/documentation/index.html#!using-xsl/embedding">Saxonica &gt; Saxon &gt; Using XSLT &gt; Invoking XSLT from an application</a>
	 */
	public static final String XSLT_ENGINE_SAXON = "SAXON9HE";
				
	/** XSLT transformation engine: native Java
	 * @see <a href="https://docs.oracle.com/javase/tutorial/jaxp/xslt/transformingXML.html">Java Tutorials: Transforming XML Data with XSLT</a>
	 * @see <a href="https://docs.oracle.com/javase/tutorial/jaxp/examples/xslt_samples.zip">Java Tutorials: Transforming XML Data with XSLT, sample files</a>
	 * @see <a href="https://docs.oracle.com/javase/tutorial/essential/io/file.html#textfiles">Buffered I/O Methods for Text Files</a>
	 */
	public static final String XSLT_ENGINE_NATIVE_JAVA = "NATIVE_JAVA";
				
	/** XSLT transformation engine setting: default <i>XSLT_ENGINE_SAXON</i>. */
	private static String xsltEngine = XSLT_ENGINE_SAXON;
				
	/** Get preference for XSLT transformation engine to use: {@link XSLT_ENGINE_SAXON} or {@link XSLT_ENGINE_NATIVE_JAVA}.
	 * @return String constant regarding current configuration: XSLT_ENGINE_SAXON (default) or XSLT_ENGINE_NATIVE_JAVA
	 */
	public static final String getXsltEngine()
	{
		return xsltEngine;
	}
	/** Set preference for XSLT transformation engine to use: {@link XSLT_ENGINE_SAXON} or {@link XSLT_ENGINE_NATIVE_JAVA}.
	 * @param newValue is new value to assign */
	public static final void setXsltEngine(String newValue)
	{
		if (newValue.equals(XSLT_ENGINE_SAXON) || newValue.equals(XSLT_ENGINE_NATIVE_JAVA))
			xsltEngine = newValue;
		else
		{
			String errorNotice = "Invalid setXsltEngine(String newValue) invocation, newValue='" + newValue + 
								 "', legal values are ConfigurationProperties.XSLT_ENGINE_SAXON or ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA";
//			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
	}

// ==========================================================================================
	 
	/** EXI transformation engine: OpenEXI Nagasena
	 * @see <a href="http://openexi.sourceforge.net">OpenEXI Nagasena</a>
	 * @see <a href="http://openexi.sourceforge.net/tutorial">Nagasena Tutorial</a>
	 * @see <a href="https://www.youtube.com/watch?v=Rig2z9veUv0">Video: OpenEXI, A Quick Introduction</a>
	 * @see ConfigurationProperties#getExiEngine()
	 * @see ConfigurationProperties#setExiEngine(String)
	 * @see ConfigurationProperties#EXI_ENGINE_EXIFICIENT
	 */
	public static final String EXI_ENGINE_OPENEXI = "OPENEXI";
				
	/** XSLT transformation engine: EXIficient
	 * @see <a href="https://github.com/EXIficient">EXIficient project page</a>
	 * @see <a href="https://github.com/EXIficient/exificient/blob/master/README.md">EXIficient README</a>
	 * @see ConfigurationProperties#getExiEngine()
	 * @see ConfigurationProperties#setExiEngine(String)
	 * @see ConfigurationProperties#EXI_ENGINE_OPENEXI
	 */
	public static final String EXI_ENGINE_EXIFICIENT = "EXIFICIENT";
				
	/** EXI transformation engine setting: default <i>EXI_ENGINE_EXIFICIENT</i>. */
	private static String exiEngine = EXI_ENGINE_EXIFICIENT;
				
	/** Get preference for XSLT transformation engine to use: {@link EXI_ENGINE_EXIFICIENT} or {@link EXI_ENGINE_OPENEXI}.
	 * @return String constant regarding current configuration: EXI_ENGINE_EXIFICIENT} (default) or EXI_ENGINE_OPENEXI
	 * @see ConfigurationProperties#EXI_ENGINE_EXIFICIENT
	 * @see ConfigurationProperties#EXI_ENGINE_OPENEXI
	 * @see ConfigurationProperties#setExiEngine(String)
	 */
	public static final String getExiEngine()
	{
		return exiEngine;
	}
	/** Set preference for EXI transformation engine to use: {@link EXI_ENGINE_EXIFICIENT} or {@link EXI_ENGINE_OPENEXI}.
	 * @param newValue is new value to assign
	 * @see ConfigurationProperties#EXI_ENGINE_EXIFICIENT
	 * @see ConfigurationProperties#EXI_ENGINE_OPENEXI
	 * @see ConfigurationProperties#getExiEngine()
     */
	public static final void setExiEngine(String newValue)
	{
		if (newValue.equals(EXI_ENGINE_EXIFICIENT) || newValue.equals(EXI_ENGINE_OPENEXI))
			xsltEngine = newValue;
		else
		{
			String errorNotice = "Invalid setExiEngine(String newValue) invocation, newValue='" + newValue + 
								 "', legal values are ConfigurationProperties.EXI_ENGINE_EXIFICIENT or ConfigurationProperties.EXI_ENGINE_OPENEXI";
//			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		}
	}

// ==========================================================================================
			
	/** Initialize this ConfigurationProperties instance to default values. */
	public static final void initialize()
	{
		indentIncrement            = indentIncrement_DEFAULT;
		indentCharacter            = indentCharacter_DEFAULT;
		showDefaultAttributes      = showDefaultAttributes_DEFAULT;
		validationExceptionAllowed = validationExceptionAllowed_DEFAULT;
		deleteIntermediateFiles    = deleteIntermediateFiles_DEFAULT;
		stripTrailingZeroes	       = stripTrailingZeroes_DEFAULT;
	}
	/**
	 * Get current system CLASSPATH value.  Note that some version of X3DJSAIL.*.jar is expected to be in the current CLASSPATH.
	 * @see <a href="https://docs.oracle.com/javase/8/docs/technotes/tools/windows/classpath.html">Java documentation: Setting the Class Path</a>
	 * @see <a href="https://docs.oracle.com/javase/tutorial/essential/environment/paths.html">Java Documentation: PATH and CLASSPATH</a>
	 * @return system CLASSPATH value. */
	public static String getClassPath()
	{
		return System.getProperty("java.class.path");
	}
	/**
	 * Get indentCharacter used when serializing scene output.
	 * @see #setIndentCharacter(char)
	 * @see #setIndentIncrement(int)
	 * @return indentCharacter (either indentCharacter_SPACE or indentCharacter_TAB). */
	public static char getIndentCharacter()
	{
		return indentCharacter;
	}
	/**
	 * Set indentCharacter used when serializing scene output.
	 * @param newIndentCharacter is new indent value (non-negative).
	 * @see #setX3dCanonicalForm() */
	public static void setIndentCharacter (char newIndentCharacter)
	{
		if  ((newIndentCharacter == indentCharacter_SPACE) || (newIndentCharacter == indentCharacter_TAB))
			 indentCharacter = newIndentCharacter;
		else 
		{
			String errorNotice = "Invalid indentCharacter='" + newIndentCharacter + 
								 "' provided to ConfigurationProperties, expected indentCharacter_SPACE or indentCharacter_TAB";
//			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice);
		} 
	}
	/**
	 * Get number of characters to indent when serializing scene output.
	 * @see #setIndentCharacter(char)
	 * @see #setIndentIncrement(int)
	 * @return number of characters (non-negative). */
	public static int getIndentIncrement()
	{
		return indentIncrement;
	}
	/**
	 * Set number of characters to indent when serializing scene output.
	 * @param newIndentIncrement is new indentIncrement value (non-negative).
	 * @see #setX3dCanonicalForm() */
	public static void setIndentIncrement (int newIndentIncrement)
	{
		if  (newIndentIncrement >= 0)
			 indentIncrement = newIndentIncrement;
		else
		{
			indentIncrement = 0;
			String errorNotice = "Invalid indentIncrement=" + indentIncrement + " provided to ConfigurationProperties";
//			validationResult.append(errorNotice).append("\n");
			throw new IllegalArgumentException(errorNotice);
		}
	}
	/**
	 * Indicate whether X3D Canonical Form is used for toStringX3D() XML output.
	 * @see #setIndentCharacter(char)
	 * @see #setIndentIncrement(int)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed binary encoding, 4.2.3 X3D canonical form</a>
	 * @see <a href="https://www.w3.org/TR/xml-c14n">Canonical XML</a>
	 * @see <a href="https://www.w3.org/TR/exi-c14n">Canonical EXI</a>
	 * @see <a href="http://santuario.apache.org">Apache Santuario</a>
	 * @see <a href="http://www.web3d.org/x3d/tools/canonical/doc/x3dTools.htm">X3D Canonicalization (C14N)</a>
	 * @return whether X3D Canonical Form is used. */
	public static boolean isX3dCanonicalForm()
	{
		return ((indentIncrement == indentIncrement_DEFAULT) &&
			    (indentCharacter == indentCharacter_DEFAULT));
	}
	/**
	 * Ensure that X3D Canonical Form is used for XML output, resetting default values for indentation.
	 * @see #setIndentIncrement(int)
	 * @see #setIndentCharacter(char)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed binary encoding, 4.2.3 X3D canonical form</a>
	 * @see <a href="https://www.w3.org/TR/xml-c14n">Canonical XML</a>
	 * @see <a href="https://www.w3.org/TR/exi-c14n">Canonical EXI</a>
	 * @see <a href="http://santuario.apache.org">Apache Santuario</a>
	 * @see <a href="http://www.web3d.org/x3d/tools/canonical/doc/x3dTools.htm">X3D Canonicalization (C14N)</a>
	 */
	public static void setX3dCanonicalForm()
	{
		indentIncrement = indentIncrement_DEFAULT;
		indentCharacter = indentCharacter_DEFAULT;
	}
	/**
	 * Indicate whether debug mode is active.
	 * @return whether debug mode is active. */
	public static boolean isDebugModeActive()
	{
		return debugModeActive;
	}
	/**
	 * Set whether debug mode is active.
	 * @param newDebugModeActive whether debug mode is active. */
	public static void setDebugModeActive(boolean newDebugModeActive)
	{
		debugModeActive = newDebugModeActive;
	}
	/**
	 * Indicate whether default attributes (and their values) are shown when serializing scene output.
	 * @return whether default attributes are shown. */
	public static boolean isShowDefaultAttributes()
	{
		return showDefaultAttributes;
	}
	/**
	 * Set whether default attributes (and their values) are shown when serializing scene output.
	 * @param newShowDefaultAttributes whether default attributes are shown. */
	public static void setShowDefaultAttributes(boolean newShowDefaultAttributes)
	{
		showDefaultAttributes = newShowDefaultAttributes;
	}
	/**
	 * Indicate whether partial results are allowed if validation exception occurs when serializing scene output.
	 * @return whether validation exceptions are allowed (and operation continues) */
	public static boolean isValidationExceptionAllowed()
	{
		return validationExceptionAllowed;
	}
	/**
	 * Set whether partial results are allowed (and operation continues) if validation exception occurs when serializing scene output.
	 * Can be useful technique for debugging, default value is <i>false</i> for strict operation.
	 * <i>Warning:</i> setting value to <i>true</i> permits creation of an invalid scene graph.
	 * @param newValidationExceptionAllowed whether validation exceptions are allowed (and operation continues) */
	public static void setValidationExceptionAllowed(boolean newValidationExceptionAllowed)
	{
		validationExceptionAllowed = newValidationExceptionAllowed;
	}
	/**
	 * Indicate whether continuation is allowed if validation exception occurs when creating an object.
	 * <i>Warning:</i> TODO experimental.
	 * @return whether validation exceptions are allowed (and operation continues) during object creation */
	public static boolean isCreationConnectionValidationExceptionAllowed()
	{
		return creationConnectionValidationExceptionAllowed;
	}
	/**
	 * Set whether partial results are allowed (and operation continues) if validation exception occurs when creating an object.
	 * Can be useful technique for debugging, default value is <i>true</i> for permissive order of object creation.
	 * <i>Warning:</i> be sure to validate() this scene once construction is complete.
	 * <i>Warning:</i> TODO experimental.
	 * @param newCreationConnectionValidationExceptionAllowed whether validation exceptions are allowed (and object creation continues) */
	public static void setCreationConnectionValidationExceptionAllowed(boolean newCreationConnectionValidationExceptionAllowed)
	{
		creationConnectionValidationExceptionAllowed = newCreationConnectionValidationExceptionAllowed;
	}
	/**
	 * Indicate whether to allow overwriting previously existing files.
	 * @see overwriteExistingFiles_DEFAULT
	 * @return whether creation of new files can overwrite prior versions */
	public static boolean isOverwriteExistingFiles()
	{
		return overwriteExistingFiles;
	}
	/**
	 * Set whether to allow overwriting previously existing files.
	 * @see overwriteExistingFiles_DEFAULT
	 * @param newOverwriteExistingFiles whether creation of new files can overwrite prior versions */
	public static void setOverwriteExistingFiles(boolean newOverwriteExistingFiles)
	{
		overwriteExistingFiles = newOverwriteExistingFiles;
	}
}
