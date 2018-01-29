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

package org.web3d.x3d.jsail.Core;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.*; // again making sure #2

import java.util.Arrays;
import org.web3d.x3d.sai.Core.*;  // making sure #3
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;

import org.web3d.x3d.jsail.fields.*; // making sure #4

/**
 * Functional summary: the meta statement provides metadata information about a scene, where name and content attributes provide attribute=value metadata pairs. This concrete class represents an X3D meta statement.
 * 
 * <br><br>
 * <i>X3D statement tooltip</i>: The meta statement provides metadata information about the scene and uses the same definitions as HTML's meta tag. The name and content attributes provide attribute=value metadata pairs.
 * <ul>
 *  <li> <i>Hint:</i> X3D XML Encoding <br> <a href="http://www.web3d.org/files/specifications/19776-1/V3.2/Part01/concepts.html#Header" target="_blank">http://www.web3d.org/files/specifications/19776-1/V3.2/Part01/concepts.html#Header</a> </li> 
 *  <li> <i>Hint:</i> X3D Scene Authoring Hints, meta Statements <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements</a> </li> 
 *  <li> <i>Hint:</i> W3C HTML5 Recommendation, 4.2.5 The meta element <br> <a href="https://www.w3.org/TR/html5/document-metadata.html#the-meta-element" target="_blank">https://www.w3.org/TR/html5/document-metadata.html#the-meta-element</a> </li> 
 *  <li> <i>Warning:</i>  the META statement is capitalized in the ClassicVRML Encoding. </li> 
 * </ul>
 *  Metadata terms for consistent referencing:
 * <ul>
 * <li> Dublin Core Metadata Initiative (DCMI): <a href="http://www.dublincore.org/documents/dcmi-terms" target="_blank">Terms</a> and  <a href="http://www.dublincore.org/documents/dces" target="_blank">Element Set</a> </li>
 * <li> HTML5 section 4.2.5: <a href="https://www.w3.org/TR/html5/document-metadata.html#the-meta-element" target="_blank">The meta element</a> </li>
 * <li> HTML4 section 7.4.4: <a href="http://www.w3.org/TR/html4/struct/global.html#h-7.4.4" target="_blank">Meta data</a> </li>
 * <li> <a href="http://vancouver-webpages.com/META" target="_blank">Dictionary of HTML META Tags</a>    (<a href="http://vancouver-webpages.com/META/about-mk-metas2.html" target="_blank">About</a>) </li>
 * </ul>
 *  Metadata terms for language codes:
 * <ul>
 * <li> IETF Best Current Practice (BCP) 47: <a href="https://tools.ietf.org/html/bcp47" target="_blank">Tags for Identifying Languages</a> </li>
 * <li> ISO 639-2: <a href="http://www.loc.gov/standards/iso639-2/langhome.html" target="_blank">Codes for the Representation of Names of Languages</a> </li>
 * <li> Internet Assigned Numbers Authority (IANA) Protocol Registries: <a href="http://www.iana.org/protocols#index_L" target="_blank">Language Tags</a> </li>
 * </ul>

 * <br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#Header" target="blank">X3D Abstract Specification: meta</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#meta" target="_blank">X3D Tooltips: meta</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: metaStatements</a>
 */
public class metaObject extends org.web3d.x3d.jsail.X3DConcreteStatement
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private String content; // SFString

	private String dir; // SFString

	private String http_equiv; // SFString

	private String lang; // SFString

	private String name; // SFString

	private String scheme; // SFString

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>dir</i> can equal this enumeration value <i>"rtl"</i> (Java syntax) or <i>rtl</i> (XML syntax). */
	public static final String DIR_RTL = "rtl";

	/** SFString field named <i>dir</i> can equal this enumeration value <i>"ltr"</i> (Java syntax) or <i>ltr</i> (XML syntax). */
	public static final String DIR_LTR = "ltr";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"accessRights"</i> (Java syntax) or <i>accessRights</i> (XML syntax). */
	public static final String NAME_ACCESSRIGHTS = "accessRights";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"contributor"</i> (Java syntax) or <i>contributor</i> (XML syntax). */
	public static final String NAME_CONTRIBUTOR = "contributor";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"created"</i> (Java syntax) or <i>created</i> (XML syntax). */
	public static final String NAME_CREATED = "created";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"creator"</i> (Java syntax) or <i>creator</i> (XML syntax). */
	public static final String NAME_CREATOR = "creator";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"description"</i> (Java syntax) or <i>description</i> (XML syntax). */
	public static final String NAME_DESCRIPTION = "description";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"drawing"</i> (Java syntax) or <i>drawing</i> (XML syntax). */
	public static final String NAME_DRAWING = "drawing";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"error"</i> (Java syntax) or <i>error</i> (XML syntax). */
	public static final String NAME_ERROR = "error";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"generator"</i> (Java syntax) or <i>generator</i> (XML syntax). */
	public static final String NAME_GENERATOR = "generator";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"hint"</i> (Java syntax) or <i>hint</i> (XML syntax). */
	public static final String NAME_HINT = "hint";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"identifier"</i> (Java syntax) or <i>identifier</i> (XML syntax). */
	public static final String NAME_IDENTIFIER = "identifier";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Image"</i> (Java syntax) or <i>Image</i> (XML syntax). */
	public static final String NAME_IMAGE = "Image";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"info"</i> (Java syntax) or <i>info</i> (XML syntax). */
	public static final String NAME_INFO = "info";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"license"</i> (Java syntax) or <i>license</i> (XML syntax). */
	public static final String NAME_LICENSE = "license";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"modified"</i> (Java syntax) or <i>modified</i> (XML syntax). */
	public static final String NAME_MODIFIED = "modified";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"MovingImage"</i> (Java syntax) or <i>MovingImage</i> (XML syntax). */
	public static final String NAME_MOVINGIMAGE = "MovingImage";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"photo"</i> (Java syntax) or <i>photo</i> (XML syntax). */
	public static final String NAME_PHOTO = "photo";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"reference"</i> (Java syntax) or <i>reference</i> (XML syntax). */
	public static final String NAME_REFERENCE = "reference";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"requires"</i> (Java syntax) or <i>requires</i> (XML syntax). */
	public static final String NAME_REQUIRES = "requires";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"rights"</i> (Java syntax) or <i>rights</i> (XML syntax). */
	public static final String NAME_RIGHTS = "rights";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"robots"</i> (Java syntax) or <i>robots</i> (XML syntax). */
	public static final String NAME_ROBOTS = "robots";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Sound"</i> (Java syntax) or <i>Sound</i> (XML syntax). */
	public static final String NAME_SOUND = "Sound";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"specificationSection"</i> (Java syntax) or <i>specificationSection</i> (XML syntax). */
	public static final String NAME_SPECIFICATIONSECTION = "specificationSection";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"specificationUrl"</i> (Java syntax) or <i>specificationUrl</i> (XML syntax). */
	public static final String NAME_SPECIFICATIONURL = "specificationUrl";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"subject"</i> (Java syntax) or <i>subject</i> (XML syntax). */
	public static final String NAME_SUBJECT = "subject";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"Text"</i> (Java syntax) or <i>Text</i> (XML syntax). */
	public static final String NAME_TEXT = "Text";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"title"</i> (Java syntax) or <i>title</i> (XML syntax). */
	public static final String NAME_TITLE = "title";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"TODO"</i> (Java syntax) or <i>TODO</i> (XML syntax). */
	public static final String NAME_TODO = "TODO";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"translator"</i> (Java syntax) or <i>translator</i> (XML syntax). */
	public static final String NAME_TRANSLATOR = "translator";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"translated"</i> (Java syntax) or <i>translated</i> (XML syntax). */
	public static final String NAME_TRANSLATED = "translated";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"version"</i> (Java syntax) or <i>version</i> (XML syntax). */
	public static final String NAME_VERSION = "version";

	/** SFString field named <i>name</i> can equal this enumeration value <i>"warning"</i> (Java syntax) or <i>warning</i> (XML syntax). */
	public static final String NAME_WARNING = "warning";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>meta</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "meta";

	/** Provides name of this element: <i>meta</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>meta</i> element: <i>Core</i> */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for the <i>meta</i> element: <i>Core</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Core</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFString field named <i>content</i> has default value equal to an empty string. */
	public static final String CONTENT_DEFAULT_VALUE = "";

	/** SFString field named <i>dir</i> has default value equal to an empty string. */
	public static final String DIR_DEFAULT_VALUE = "";

	/** SFString field named <i>http_equiv</i> has default value equal to an empty string. */
	public static final String HTTP_EQUIV_DEFAULT_VALUE = "";

	/** SFString field named <i>lang</i> has default value equal to an empty string. */
	public static final String LANG_DEFAULT_VALUE = "";

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

	/** SFString field named <i>scheme</i> has default value equal to an empty string. */
	public static final String SCHEME_DEFAULT_VALUE = "";

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_TYPE
	 * @return X3D type (SFvec3f etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE if not recognized
	 */
	@Override		
	public String getFieldType(String fieldName)
	{
		String result;

		switch (fieldName)
		{
			// String constants for exact field type values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing type-matching checks
											
			case "containerField":
				result = "SFString";
				break;
			case "content":
				result = "SFString";
				break;
			case "dir":
				result = "SFString";
				break;
			case "http_equiv":
				result = "SFString";
				break;
			case "lang":
				result = "SFString";
				break;
			case "name":
				result = "SFString";
				break;
			case "scheme":
				result = "SFString";
				break;
			default:
			{
				// if fieldName has a prefix "set_" prepended (or a suffix "_changed" appended) then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getFieldType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getFieldType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_TYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Indicate accessType corresponding to given fieldName.
	 * @param fieldName name of field in this X3D statement
	 * @see ConfigurationProperties#ERROR_UNKNOWN_FIELD_ACCESSTYPE
	 * @return X3D accessType (inputOnly etc.), otherwise ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE if not recognized
	 */
	@Override
	public String getAccessType(String fieldName)
	{
		String result; // set by following checks
		switch (fieldName)
		{
			// String constants for field accessType values matching X3D Schema definitions,
			// thus avoiding spelling errors and allowing accessType-matching checks
			case "content":
				result = "inputOutput";
				break;
			case "dir":
				result = "inputOutput";
				break;
			case "http_equiv":
				result = "inputOutput";
				break;
			case "lang":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "scheme":
				result = "inputOutput";
				break;
			default:
			{
				// if user has added a prefix "set_" or suffix "_changed" then try again by stripping it and recursing once
				if      (fieldName.trim().startsWith("set_"))
						 result = getAccessType(fieldName.trim().substring(4)); // after "set_"
				else if (fieldName.trim().endsWith("_changed"))
						 result = getAccessType(fieldName.trim().substring(0, fieldName.length() - 8)); // before "_changed"
				else     result = ConfigurationProperties.ERROR_UNKNOWN_FIELD_ACCESSTYPE; // unique return value avoids mistaken matches
			}
		}
		return result;
	}

	/** Constructor for metaObject to initialize member variables with default values. */
	public metaObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		content = CONTENT_DEFAULT_VALUE;
		dir = DIR_DEFAULT_VALUE;
		http_equiv = HTTP_EQUIV_DEFAULT_VALUE;
		lang = LANG_DEFAULT_VALUE;
		name = NAME_DEFAULT_VALUE;
		scheme = SCHEME_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide String value from inputOutput SFString field named <i>content</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The content attribute provides metadata information relevant to the name attribute provided. The name and content attributes provide attribute=value metadata pairs.
 * <ul>
 *  <li> <i>Hint:</i> use Dublin Core metadata terms for name/content values. <br> <a href="http://www.dublincore.org/documents/dcmi-terms" target="_blank">http://www.dublincore.org/documents/dcmi-terms</a> </li> 
 *  <li> <i>Hint:</i> alternatively the content attribute can support the http-equiv attribute. </li> 
 *  <li> <i>Hint:</i>  many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character). </li> 
 * </ul>
	 * @return value of content field
	 */
	public String getContent()
	{
		return content;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>content</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The content attribute provides metadata information relevant to the name attribute provided. The name and content attributes provide attribute=value metadata pairs. Hint: use Dublin Core metadata terms for name/content values. http://www.dublincore.org/documents/dcmi-terms Hint: alternatively the content attribute can support the http-equiv attribute. Hint: many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character).
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: meta Statements</a>
	 * @param newValue is new value for the content field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setContent(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		content = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString content field, similar to {@link #setContent(String)}.
	 * @param newValue is new value for the content field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setContent(SFStringObject newValue)
	{
		setContent(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['rtl'|'ltr'] from inputOutput SFString field named <i>dir</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Direction for weak/neutral text (ltr=left-to-right, rtl=right-to-left). See  &lt;br&gt; &lt;a href="http://www.w3.org/TR/html4/struct/dirlang.html#adef-dir" target="_blank"&gt;http://www.w3.org/TR/html4/struct/dirlang.html#adef-dir&lt;/a&gt;  * <br>

	 * <br><br>
	 * Available enumeration values for string comparison: {@link #DIR_RTL RTL}, {@link #DIR_LTR LTR}.
	 * @return value of dir field
	 */
	public String getDir()
	{
		return dir;
	}

	/**
	 * Assign String enumeration value ("rtl"|"ltr") ['rtl'|'ltr'] to inputOutput SFString field named <i>dir</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #DIR_RTL RTL}, {@link #DIR_LTR LTR}).
	 * <br><br>
	 * <i>Tooltip:</i> Direction for weak/neutral text (ltr=left-to-right, rtl=right-to-left). See http://www.w3.org/TR/html4/struct/dirlang.html#adef-dir
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: meta Statements</a>
	 * @param newValue is new value for the dir field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setDir(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(DIR_RTL) ||
			newValue.equals(DIR_LTR))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("meta dir newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		dir = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString dir field, similar to {@link #setDir(String)}.
	 * @param newValue is new value for the dir field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setDir(SFStringObject newValue)
	{
		setDir(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>http-equiv</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The http-equiv attribute provides an HTTP header for the value of the content attribute. Example: &amp;lt;meta http-equiv='Expires' content='Tue, 20 Aug 1996 14:25:27 GMT'&amp;gt;.
 * <ul>
 *  <li> <i>Hint:</i> the http-equiv attribute can be used to simulate an HTTP response header. </li> 
 *  <li> <i>Hint:</i> if the name attribute is set, the http-equiv attribute should not be set. </li> 
 *  <li> <i>Hint:</i>  see <br> <a href="http://www.w3.org/TR/html4/struct/global.html#adef-http-equiv" target="_blank">http://www.w3.org/TR/html4/struct/global.html#adef-http-equiv</a> </li> 
 * </ul>
	 * @return value of http-equiv field
	 */
	public String getHttp_equiv()
	{
		return http_equiv;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>http-equiv</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The http-equiv attribute provides an HTTP header for the value of the content attribute. Example: &lt;meta http-equiv='Expires' content='Tue, 20 Aug 1996 14:25:27 GMT'&gt;. Hint: the http-equiv attribute can be used to simulate an HTTP response header. Hint: if the name attribute is set, the http-equiv attribute should not be set. Hint: see http://www.w3.org/TR/html4/struct/global.html#adef-http-equiv
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: meta Statements</a>
	 * @param newValue is new value for the http-equiv field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setHttp_equiv(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		http_equiv = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString http_equiv field, similar to {@link #setHttp_equiv(String)}.
	 * @param newValue is new value for the http-equiv field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setHttp_equiv(SFStringObject newValue)
	{
		setHttp_equiv(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>lang</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Language code, as per [IETF BCP47/RFC5646] <br> <a href="http://www.rfc-editor.org/rfc/bcp/bcp47.txt" target="_blank">http://www.rfc-editor.org/rfc/bcp/bcp47.txt</a> and described in <br> <a href="http://www.w3.org/International/articles/language-elements" target="_blank">http://www.w3.org/International/articles/language-elements</a>
 * <ul>
 *  <li> <i> Hint:</i>  Language Subtag Lookup at <br> <a href="http://people.w3.org/rishida/utils/subelements" target="_blank">http://people.w3.org/rishida/utils/subelements</a> </li> 
 * </ul>
	 * @return value of lang field
	 */
	public String getLang()
	{
		return lang;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>lang</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Language code, as per [IETF BCP47/RFC5646] http://www.rfc-editor.org/rfc/bcp/bcp47.txt and described in http://www.w3.org/International/articles/language-elements Hint: Language Subtag Lookup at http://people.w3.org/rishida/utils/subelements
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: meta Statements</a>
	 * @param newValue is new value for the lang field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setLang(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		lang = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString lang field, similar to {@link #setLang(String)}.
	 * @param newValue is new value for the lang field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setLang(SFStringObject newValue)
	{
		setLang(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['accessRights'|'contributor'|'created'|'creator'|'description'|'drawing'|'error'|'generator'|'hint'|'identifier'|'Image'|'info'|'license'|'modified'|'MovingImage'|'photo'|'reference'|'requires'|'rights'|'robots'|'Sound'|'specificationSection'|'specificationUrl'|'subject'|'Text'|'title'|'TODO'|'translator'|'translated'|'version'|'warning'|'etc.'] from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Keyword name of the meta (metadata) attribute.
 * <ul>
 *  <li> <i>Hint:</i> use Dublin Core metadata terms for name/content values. <br> <a href="http://www.dublincore.org/documents/dcmi-terms" target="_blank">http://www.dublincore.org/documents/dcmi-terms</a> </li> 
 *  <li> <i>Hint:</i> if the name attribute is set, the http-equiv attribute should not be set. </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #NAME_ACCESSRIGHTS ACCESSRIGHTS}, {@link #NAME_CONTRIBUTOR CONTRIBUTOR}, {@link #NAME_CREATED CREATED}, {@link #NAME_CREATOR CREATOR}, {@link #NAME_DESCRIPTION DESCRIPTION}, {@link #NAME_DRAWING DRAWING}, {@link #NAME_ERROR ERROR}, {@link #NAME_GENERATOR GENERATOR}, {@link #NAME_HINT HINT}, {@link #NAME_IDENTIFIER IDENTIFIER}, {@link #NAME_IMAGE IMAGE}, {@link #NAME_INFO INFO}, {@link #NAME_LICENSE LICENSE}, {@link #NAME_MODIFIED MODIFIED}, {@link #NAME_MOVINGIMAGE MOVINGIMAGE}, {@link #NAME_PHOTO PHOTO}, {@link #NAME_REFERENCE REFERENCE}, {@link #NAME_REQUIRES REQUIRES}, {@link #NAME_RIGHTS RIGHTS}, {@link #NAME_ROBOTS ROBOTS}, {@link #NAME_SOUND SOUND}, {@link #NAME_SPECIFICATIONSECTION SPECIFICATIONSECTION}, {@link #NAME_SPECIFICATIONURL SPECIFICATIONURL}, {@link #NAME_SUBJECT SUBJECT}, {@link #NAME_TEXT TEXT}, {@link #NAME_TITLE TITLE}, {@link #NAME_TODO TODO}, {@link #NAME_TRANSLATOR TRANSLATOR}, {@link #NAME_TRANSLATED TRANSLATED}, {@link #NAME_VERSION VERSION}, {@link #NAME_WARNING WARNING}.
	 * @return value of name field
	 */
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String enumeration value ("accessRights"|"contributor"|"created"|"creator"|"description"|"drawing"|"error"|"generator"|"hint"|"identifier"|"Image"|"info"|"license"|"modified"|"MovingImage"|"photo"|"reference"|"requires"|"rights"|"robots"|"Sound"|"specificationSection"|"specificationUrl"|"subject"|"Text"|"title"|"TODO"|"translator"|"translated"|"version"|"warning") ['accessRights'|'contributor'|'created'|'creator'|'description'|'drawing'|'error'|'generator'|'hint'|'identifier'|'Image'|'info'|'license'|'modified'|'MovingImage'|'photo'|'reference'|'requires'|'rights'|'robots'|'Sound'|'specificationSection'|'specificationUrl'|'subject'|'Text'|'title'|'TODO'|'translator'|'translated'|'version'|'warning'|'etc.'] to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #NAME_ACCESSRIGHTS ACCESSRIGHTS}, {@link #NAME_CONTRIBUTOR CONTRIBUTOR}, {@link #NAME_CREATED CREATED}, {@link #NAME_CREATOR CREATOR}, {@link #NAME_DESCRIPTION DESCRIPTION}, {@link #NAME_DRAWING DRAWING}, {@link #NAME_ERROR ERROR}, {@link #NAME_GENERATOR GENERATOR}, {@link #NAME_HINT HINT}, {@link #NAME_IDENTIFIER IDENTIFIER}, {@link #NAME_IMAGE IMAGE}, {@link #NAME_INFO INFO}, {@link #NAME_LICENSE LICENSE}, {@link #NAME_MODIFIED MODIFIED}, {@link #NAME_MOVINGIMAGE MOVINGIMAGE}, {@link #NAME_PHOTO PHOTO}, {@link #NAME_REFERENCE REFERENCE}, {@link #NAME_REQUIRES REQUIRES}, {@link #NAME_RIGHTS RIGHTS}, {@link #NAME_ROBOTS ROBOTS}, {@link #NAME_SOUND SOUND}, {@link #NAME_SPECIFICATIONSECTION SPECIFICATIONSECTION}, {@link #NAME_SPECIFICATIONURL SPECIFICATIONURL}, {@link #NAME_SUBJECT SUBJECT}, {@link #NAME_TEXT TEXT}, {@link #NAME_TITLE TITLE}, {@link #NAME_TODO TODO}, {@link #NAME_TRANSLATOR TRANSLATOR}, {@link #NAME_TRANSLATED TRANSLATED}, {@link #NAME_VERSION VERSION}, {@link #NAME_WARNING WARNING}).
	 * <br><br>
	 * <i>Tooltip:</i> Keyword name of the meta (metadata) attribute. Hint: use Dublin Core metadata terms for name/content values. http://www.dublincore.org/documents/dcmi-terms Hint: if the name attribute is set, the http-equiv attribute should not be set. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: meta Statements</a>
	 * @param newValue is new value for the name field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public final metaObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>scheme</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  The scheme attribute allows authors to provide user agents more context for the correct interpretation of meta data. For example, &amp;lt;meta scheme="ISBN" name="identifier" content="0-8230-2355-9"&amp;gt; See  &lt;br&gt; &lt;a href="http://www.w3.org/TR/html4/struct/global.html#idx-scheme" target="_blank"&gt;http://www.w3.org/TR/html4/struct/global.html#idx-scheme&lt;/a&gt;  * <br>

	 * @return value of scheme field
	 */
	public String getScheme()
	{
		return scheme;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>scheme</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The scheme attribute allows authors to provide user agents more context for the correct interpretation of meta data. For example, &lt;meta scheme="ISBN" name="identifier" content="0-8230-2355-9"&gt; See http://www.w3.org/TR/html4/struct/global.html#idx-scheme
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: meta Statements</a>
	 * @param newValue is new value for the scheme field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setScheme(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		scheme = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString scheme field, similar to {@link #setScheme(String)}.
	 * @param newValue is new value for the scheme field.
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public metaObject setScheme(SFStringObject newValue)
	{
		setScheme(newValue.getPrimitiveValue());
		return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Utility constructor that assigns name-value pair for name and content attributes.
	 * @param newName  name for this meta element
	 * @param newContent content value for this meta element
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#meta">X3D Tooltips: meta</a>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#metaStatements" target="_blank">X3D Scene Authoring Hints: meta Statements</a>
	 */
	public metaObject (String newName, String newContent)
	{
		initialize();
		setName   (newName);
		setContent(newContent);
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public metaObject addComments (String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public metaObject addComments (String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link metaObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public metaObject addComments (CommentsBlock newCommentsBlock)
	{
		commentsList.addAll(newCommentsBlock.toStringList());
		return this;
	}
		
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see X3DObject#toStringXML()
	 * @see X3DObject#toFileXML(String)
	 * @see X3DObject#toFileX3D(String)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	@Override
	public String toStringX3D(int indentLevel)
	{
		boolean hasAttributes = true; // TODO check for non-default attribute values
		boolean      hasChild = !commentsList.isEmpty();

		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<meta"); // start opening tag
		if (hasAttributes)
		{
			if (!getName().equals(NAME_DEFAULT_VALUE))
			{
				stringX3D.append(" name='").append(SFStringObject.toString(getName())).append("'");
			}
			
			if ((!getContent().equals(CONTENT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" content='").append(new SFStringObject(getContent()).toStringX3D()).append("'");
			}
			if ((!getDir().equals(DIR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" dir='").append(new SFStringObject(getDir()).toStringX3D()).append("'");
			}
			if ((!getHttp_equiv().equals(HTTP_EQUIV_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" http_equiv='").append(new SFStringObject(getHttp_equiv()).toStringX3D()).append("'");
			}
			if ((!getLang().equals(LANG_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" lang='").append(new SFStringObject(getLang()).toStringX3D()).append("'");
			}
			if ((!getScheme().equals(SCHEME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()))
			{
				stringX3D.append(" scheme='").append(new SFStringObject(getScheme()).toStringX3D()).append("'");
			}
		}
		if ((hasChild)) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag


			// recursively iterate over child element
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</meta>").append("\n"); // finish closing tag
		}
		else
		{
			stringX3D.append("/>").append("\n"); // otherwise finish singleton tag
		}
		return stringX3D.toString();
	}

	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	@Override
	public String toStringClassicVRML(int indentLevel)
	{
		StringBuilder stringClassicVRML = new StringBuilder();
		boolean hasAttributes = true; // TODO further refinement
		boolean      hasChild = !commentsList.isEmpty();
		// http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/concepts.html#METAStatementSyntax
		stringClassicVRML.append("META \"").append(name).append("\" \"").append(content).append("\"").append("\n");
		
		return stringClassicVRML.toString();
	}

	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */
	@Override
	public String toStringVRML97(int indentLevel)
	{
		return toStringClassicVRML(indentLevel).replaceAll("META ","#META "); // hide unavailable X3D feature
	}

	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue)
	{
		return findElementByNameValue(nameValue, ""); // empty string is wildcard, any element match is allowed
	}
								
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue, String elementName)
	{
		if ((nameValue == null) || nameValue.isEmpty())
		{
			String errorNotice = "findElementByNameValue(\"\", " + elementName + ") cannot use empty string to find a name attribute";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		if (elementName == null)
			elementName = "";
		if (getName().equals(nameValue) &&
			(elementName.isEmpty() || elementName.equals(getElementName())))
			return this;
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node or statement with given name attribute is found, meaning both objects are attached to same scene graph.
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @see #findElementByNameValue(String, String)
	 * @return whether node is found
	 */
	public boolean hasElementByNameValue(String nameValue, String elementName)
	{
		return (findElementByNameValue(nameValue, elementName) != null);
	}

	/**
	 * Recursive method to provide object reference to node by DEF, if found as this node or in a contained node.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same DEF, this method does not handle that case.
	 * @see #findElementByNameValue(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found node, null otherwise
	 */
	@Override
	public X3DConcreteNode findNodeByDEF(String DEFvalue)
	{
		if ((DEFvalue == null) || DEFvalue.isEmpty())
		{
			String errorNotice = "findNodeByDEF(\"\") cannot use empty string to find a name";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node with DEFvalue is found, meaning both objects are attached to same scene graph.
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @see #findNodeByDEF(String)
	 * @return whether node is found
	 */
	public boolean hasNodeByDEF(String DEFvalue)
	{
		return (findNodeByDEF(DEFvalue) != null);
	}

		
	/**
	 * Recursive method to validate this element plus all contained nodes and statements.
	 * @return validation results (if any)
	 */
	@Override
	public String validate()
	{
		validationResult = new StringBuilder(); // prepare for updated results

		if (getContent().isEmpty()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " content field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setContent(getContent()); // exercise field checks, simple types

		setDir(getDir()); // exercise field checks, simple types

		setHttp_equiv(getHttp_equiv()); // exercise field checks, simple types

		setLang(getLang()); // exercise field checks, simple types

		setName(getName()); // exercise field checks, simple types

		setScheme(getScheme()); // exercise field checks, simple types

		return validationResult.toString();
	}
}
