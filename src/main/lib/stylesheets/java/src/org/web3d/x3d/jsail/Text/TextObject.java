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

package org.web3d.x3d.jsail.Text;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Text.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.sai.Text.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * <i>X3D node tooltip</i>: Text is a 2D (flat) geometry node that can contain multiple lines of string values. Layout and styling is controlled by a contained FontStyle node.
 * <ul>
 *  <li> <i>Hint:</i> String (computer science) <br> <a href="https://en.wikipedia.org/wiki/String_(computer_science)" target="_blank">https://en.wikipedia.org/wiki/String_(computer_science)</a> </li> 
 *  <li> <i>Hint:</i> full internationalization (i18n) and localization (l10n) features are available for any written language. </li> 
 *  <li> <i>Hint:</i> relates to Internationalization (i18n) <br> <a href="http://www.w3.org/standards/webdesign/i18n" target="_blank">http://www.w3.org/standards/webdesign/i18n</a> </li> 
 *  <li> <i>Hint:</i> insert a Shape node before adding geometry or Appearance. </li> 
 *  <li> <i>Hint:</i>  for advanced extensibility, authors can substitute a type-matched ProtoInstance node (with correct containerField value) for contained node content. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/text.html#Text" target="blank">X3D Abstract Specification: Text</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#Text" target="_blank">X3D Tooltips: Text</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class TextObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Text.Text
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private X3DFontStyleNode fontStyle; // SFNode acceptable node types: X3DFontStyleNode
	private ProtoInstanceObject fontStyleProtoInstance; // allowed alternative for fontStyle field

	private ArrayList<Float> length = new ArrayList<>(); // MFFloat

	private float[] lineBounds; // MFVec2f

	private float maxExtent; // SFFloat

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private float[] origin; // SFVec3f

	private boolean solid; // SFBool

	private ArrayList<String> string = new ArrayList<>(); // MFString

	private float[] textBounds; // SFVec2f

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>Text</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "Text";

	/** Provides name of this element: <i>Text</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>Text</i> element: <i>Text</i> */
	public static final String COMPONENT = "Text";

	/** Defines X3D component for the <i>Text</i> element: <i>Text</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Text</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFFloat field named <i>maxExtent</i> has default value <i>0.0f</i> (Java syntax) or <i>0.0</i> (XML syntax). */
	public static final float MAXEXTENT_DEFAULT_VALUE = 0.0f;

	/** SFBool field named <i>solid</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean SOLID_DEFAULT_VALUE = false;

	/** MFString field named <i>string</i> has default value equal to an empty list. */
	public static final ArrayList<String> STRING_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** Indicate type corresponding to given fieldName.
	 * @param fieldName name of field in this X3D node
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
			case "fontStyle":
				result = "SFNode";
				break;
			case "length":
				result = "MFFloat";
				break;
			case "lineBounds":
				result = "MFVec2f";
				break;
			case "maxExtent":
				result = "SFFloat";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "origin":
				result = "SFVec3f";
				break;
			case "solid":
				result = "SFBool";
				break;
			case "string":
				result = "MFString";
				break;
			case "textBounds":
				result = "SFVec2f";
				break;
			case "DEF":
				result = "SFString";
				break;
			case "USE":
				result = "SFString";
				break;
			case "class":
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
	 * @param fieldName name of field in this X3D node
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
			case "fontStyle":
				result = "inputOutput";
				break;
			case "length":
				result = "inputOutput";
				break;
			case "lineBounds":
				result = "outputOnly";
				break;
			case "maxExtent":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "origin":
				result = "outputOnly";
				break;
			case "solid":
				result = "initializeOnly";
				break;
			case "string":
				result = "inputOutput";
				break;
			case "textBounds":
				result = "outputOnly";
				break;
			case "DEF":
				result = "inputOutput";
				break;
			case "USE":
				result = "inputOutput";
				break;
			case "class":
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

	/** containerField describes typical field relationship of a node to its parent.
	 * Usage is not ordinarily needed when using this API, default value is provided for informational purposes. */
	public String containerField_DEFAULT_VALUE = "geometry";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFNode field named <i>fontStyle</i>. */
	public static final String fromField_FONTSTYLE = "fontStyle";

	/** toField ROUTE name for SFNode field named <i>fontStyle</i>. */
	public static final String toField_FONTSTYLE = "fontStyle";

	/** fromField ROUTE name for MFFloat field named <i>length</i>. */
	public static final String fromField_LENGTH = "length";

	/** toField ROUTE name for MFFloat field named <i>length</i>. */
	public static final String toField_LENGTH = "length";

	/** fromField ROUTE name for MFVec2f field named <i>lineBounds</i>. */
	public static final String fromField_LINEBOUNDS = "lineBounds";

	/** fromField ROUTE name for SFFloat field named <i>maxExtent</i>. */
	public static final String fromField_MAXEXTENT = "maxExtent";

	/** toField ROUTE name for SFFloat field named <i>maxExtent</i>. */
	public static final String toField_MAXEXTENT = "maxExtent";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFVec3f field named <i>origin</i>. */
	public static final String fromField_ORIGIN = "origin";

	/** fromField ROUTE name for MFString field named <i>string</i>. */
	public static final String fromField_STRING = "string";

	/** toField ROUTE name for MFString field named <i>string</i>. */
	public static final String toField_STRING = "string";

	/** fromField ROUTE name for SFVec2f field named <i>textBounds</i>. */
	public static final String fromField_TEXTBOUNDS = "textBounds";

	/** Constructor for TextObject to initialize member variables with default values. */
	public TextObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "geometry" };

		fontStyle = null; // clear out any prior node
		length = new ArrayList<>();
		maxExtent = MAXEXTENT_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		solid = SOLID_DEFAULT_VALUE;
		string = new ArrayList<>(STRING_DEFAULT_VALUE);

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide X3DFontStyleNode instance (using a properly typed node) from inputOutput SFNode field <i>fontStyle</i>.
	 * @see #getFontStyleProtoInstance()
	 * @return value of fontStyle field
	 */
	@Override
	public X3DFontStyleNode getFontStyle()
	{
		return fontStyle;
	}

	/**
	 * Assign X3DFontStyleNode instance (using a properly typed node) to inputOutput SFNode field <i>fontStyle</i>.
	 * @see #setFontStyle(ProtoInstanceObject)
	 * @param newValue is new value for the fontStyle field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextObject setFontStyle(X3DFontStyleNode newValue)
	{
		// set-newValue-validity-checks #0
		fontStyle = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) fontStyle).setParentObject(this); // parentTest15
		}
		if (fontStyleProtoInstance != null)
		{
			fontStyleProtoInstance.setParentObject(null); // housekeeping, clear prior object
			fontStyleProtoInstance = null;
		}
		return this;
	}

	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>fontStyle</i>.
	 * @see #setFontStyle(X3DFontStyleNode)
	 * @param newValue is new value for the fontStyle field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setFontStyle(ProtoInstance newValue)
	{
		fontStyleProtoInstance = (ProtoInstanceObject)newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) fontStyleProtoInstance).setParentObject(this); // parentTest15.5
	    }
		if (fontStyle != null)
		{
			((X3DConcreteElement) fontStyle).setParentObject(null); // housekeeping, clear prior object
			fontStyle = null;
		}
	    return this;
	}
	/**
	 * Utility method to clear SFNode value of fontStyle field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public TextObject clearFontStyle()
	{
		((X3DConcreteElement) fontStyle).clearParentObject(); // remove references to facilitate Java memory management
		fontStyle = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>fontStyle</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DFontStyleNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the fontStyle field
	 * @see #setFontStyle(X3DFontStyleNode)
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public TextObject setFontStyle(ProtoInstanceObject newProtoInstanceNode)
	{
		if (fontStyle != null)
		{
			((X3DConcreteElement) fontStyle).setParentObject(null); // housekeeping, clear prior object
			fontStyle = null;
		}
		fontStyleProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>fontStyle</i>, if available.
	 * @see #getFontStyle()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getFontStyleProtoInstance()
	{
		return fontStyleProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>fontStyle</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getFontStyle()
	 * @see #getFontStyleProtoInstance()
	 */
	public boolean hasFontStyle()
	{
		return (fontStyle != null) || (fontStyleProtoInstance != null);
	}
	/**
	 * Provide array of Float results within allowed range of [0,infinity) from inputOutput MFFloat field named <i>length</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Array of length values for each text string in the local coordinate system. Each string is stretched or compressed to fit.  * <br>

	 * @return value of length field
	 */
	@Override
	public float[] getLength()
	{
		final float[] valuesArray = new float[length.size()];
		int i = 0;
		for (Float arrayElement : length) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat length field, similar to {@link #getLength()}.

	 * @return value of length field
	 */
	public ArrayList<Float> getLengthList()
	{
		return length;
	}

	/**
	 * Assign Float array within allowed range of [0,infinity) to inputOutput MFFloat field named <i>length</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of length values for each text string in the local coordinate system. Each string is stretched or compressed to fit.
	 * @param newValue is new value for the length field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextObject setLength(float[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearLength(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		length.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			length.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat length field, similar to {@link #setLength(float[])}.
	 * @param newValue is new value for the length field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setLength(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearLength(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setLength(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Assign ArrayList value of MFFloat length field, similar to {@link #setLength(float[])}.
	 * @param newValue is new value for the length field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setLength(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearLength(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		length = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of length field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public TextObject clearLength()
	{
		length.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat length field, similar to {@link #setLength(float[])}.
	 * @param newValue is new value for the length field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setLength(int[] newValue)
	{
		if (newValue == null)
		{
			clearLength(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #5
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setLength(holdArray);
		return this;
	}
	/**
	 * Provide array of 2-tuple float results from outputOnly MFVec2f field named <i>lineBounds</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Array of 2D bounding box values for each line of text in the local coordinate system.
 * <ul>
 *  <li> <i> Warning:</i>  it is an error to define this transient outputOnly field in an X3D file. </li> 
 * </ul>
	 * @return value of lineBounds field
	 */
	@Override
	public float[] getLineBounds()
	{
		return lineBounds;
	}
	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>maxExtent</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Limits/compresses all text strings if max string length is longer than maxExtent, as measured in local coordinate system.  * <br>

	 * @return value of maxExtent field
	 */
	@Override
	public float getMaxExtent()
	{
		return maxExtent;
	}

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>maxExtent</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Limits/compresses all text strings if max string length is longer than maxExtent, as measured in local coordinate system.
	 * @param newValue is new value for the maxExtent field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextObject setMaxExtent(float newValue)
	{
		// set-newValue-validity-checks #0
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("Text maxExtent newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		maxExtent = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat maxExtent field, similar to {@link #setMaxExtent(float)}.
	 * @param newValue is new value for the maxExtent field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setMaxExtent(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setMaxExtent(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata()
	{
		return metadata;
	}

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see #setMetadata(ProtoInstanceObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextObject setMetadata(X3DMetadataObject newValue)
	{
		// set-newValue-validity-checks #0
		metadata = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) metadata).setParentObject(this); // parentTest15
		}
		if (metadataProtoInstance != null)
		{
			metadataProtoInstance.setParentObject(null); // housekeeping, clear prior object
			metadataProtoInstance = null;
		}
		return this;
	}

	/**
	 * Utility method to clear SFNode value of metadata field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public TextObject clearMetadata()
	{
		((X3DConcreteElement) metadata).clearParentObject(); // remove references to facilitate Java memory management
		metadata = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>metadata</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DMetadataObject.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the metadata field
	 * @see #setMetadata(X3DMetadataObject)
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public TextObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
	{
		if (metadata != null)
		{
			((X3DConcreteElement) metadata).setParentObject(null); // housekeeping, clear prior object
			metadata = null;
		}
		metadataProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>metadata</i>, if available.
	 * @see #getMetadata()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getMetadataProtoInstance()
	{
		return metadataProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>metadata</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getMetadata()
	 * @see #getMetadataProtoInstance()
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 */
	public boolean hasMetadata()
	{
		return (metadata != null) || (metadataProtoInstance != null);
	}
	/**
	 * Provide array of 3-tuple float results from outputOnly SFVec3f field named <i>origin</i>.
	 * <br><br>
	 * <i>Tooltip:</i> origin of the text local coordinate system, in units of the coordinate system in which the Text node is embedded. The value of the origin field represents the upper left corner of the textBounds.
 * <ul>
 *  <li> <i> Warning:</i>  it is an error to define this transient outputOnly field in an X3D file. </li> 
 * </ul>
	 * @return value of origin field
	 */
	@Override
	public float[] getOrigin()
	{
		return origin;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off).
 * <ul>
 *  <li> <i>Warning:</i> default value true can completely hide geometry if viewed from wrong side! </li> 
 *  <li> <i>Hint:</i> if in doubt, use solid='false' for maximum visibility. </li> 
 *  <li> <i>Warning:</i>  solid false not supported in VRML97. </li> 
 * </ul>
	 * @return value of solid field
	 */
	@Override
	public boolean getSolid()
	{
		return solid;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off). Warning: default value true can completely hide geometry if viewed from wrong side! Hint: if in doubt, use solid='false' for maximum visibility. Warning: solid false not supported in VRML97.
	 * @param newValue is new value for the solid field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextObject setSolid(boolean newValue)
	{
		// set-newValue-validity-checks #0
		solid = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool solid field, similar to {@link #setSolid(boolean)}.
	 * @param newValue is new value for the solid field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setSolid(SFBoolObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setSolid(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide array of String results from inputOutput MFString field named <i>string</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Single or multiple string values to present as Text. Each value in the string array (including empty strings) gets displayed on a separate line.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks. </li> 
 *  <li> <i>Hint:</i> Strings can contain quote marks by first escaping them with a backslash example: "say \"hello\" please" </li> 
 *  <li> <i>Hint:</i> many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character). </li> 
 *  <li> <i>Hint:</i>  relates to Internationalization (i18n) <br> <a href="http://www.w3.org/standards/webdesign/i18n" target="_blank">http://www.w3.org/standards/webdesign/i18n</a> Example: <br> <a href="http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter02-GeometryPrimitives/TextIndex.html" target="_blank">http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter02-GeometryPrimitives/TextIndex.html</a> Example: <br> <a href="http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter02-GeometryPrimitives/TextSpecialCharactersIndex.html" target="_blank">http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter02-GeometryPrimitives/TextSpecialCharactersIndex.html</a> </li> 
 * </ul>
	 * @return value of string field
	 */
	@Override
	public String[] getString()
	{
		final String[] valuesArray = new String[string.size()];
		int i = 0;
		for (String arrayElement : string) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString string field, similar to {@link #getString()}.

	 * @return value of string field
	 */
	public ArrayList<String> getStringList()
	{
		return string;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>string</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Single or multiple string values to present as Text. Each value in the string array (including empty strings) gets displayed on a separate line. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks. Hint: Strings can contain quote marks by first escaping them with a backslash example: "say \"hello\" please" Hint: many XML tools substitute XML character references for special characters automatically if needed within an attribute value (such as &amp;#38; for &amp; ampersand character, or &amp;#34; for " quotation-mark character). Hint: relates to Internationalization (i18n) http://www.w3.org/standards/webdesign/i18n Example: http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter02-GeometryPrimitives/TextIndex.html Example: http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter02-GeometryPrimitives/TextSpecialCharactersIndex.html
	 * @param newValue is new value for the string field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextObject setString(String[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearString(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		string.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			string.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString string field, similar to {@link #setString(String[])}.
	 * @param newValue is new value for the string field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setString(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearString(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setString(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Assign single SFString object value to MFString string field, similar to {@link #setString(String[])}.
	 * @param newValue is new value for the string field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setString(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearString(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #2
		setString(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString string field, similar to {@link #setString(String[])}.
	 * @param newValue is new value for the string field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setString(String newValue)
	{
		if (newValue == null)
		{
			clearString(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #3
		string.clear();
		string.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString string field, similar to {@link #setString(String[])}.
	 * @param newValue is new value for the string field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setString(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearString(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		string = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of string field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public TextObject clearString()
	{
		string.clear(); // reset
		return this;
	}
	/**
	 * Provide array of 2-tuple float results from outputOnly SFVec2f field named <i>textBounds</i>.
	 * <br><br>
	 * <i>Tooltip:</i> 2D bounding box value for all lines of text in the local coordinate system.
 * <ul>
 *  <li> <i> Warning:</i>  it is an error to define this transient outputOnly field in an X3D file. </li> 
 * </ul>
	 * @return value of textBounds field
	 */
	@Override
	public float[] getTextBounds()
	{
		return textBounds;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TextObject setDEF(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to Text
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Text DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("Text DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setDEF(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setDEF(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value). Hint: USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. Warning: do NOT include any child nodes, a DEF attribute, or any other attribute values (except for containerField) when defining a USE attribute. Warning: each USE value must match a corresponding DEF value that is defined earlier in the scene.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TextObject setUSE(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to Text
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Text USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("Text USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setUSE(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setUSE(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final TextObject setCssClass(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		setConcreteCssClass(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString cssClass field, similar to {@link #setCssClass(String)}.
	 * @param newValue is new value for the class field.
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setCssClass(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 skipped, handled by set-primitive method
            setCssClass(newValue.getPrimitiveValue());
            return this;
	}

	// Additional utility methods for this class ==============================

	/**
	 * Assign field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @param newValue is new value for the description field.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextObject setIS(ISObject newValue)
	{
		if (IS != null)
			IS.setParentObject(null); // housekeeping, clear prior object
		IS = newValue;
		IS.setParentObject(this);
		return this;
	}
	/**
	 * Provide field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return current ISObject, if any.
	 */
	@Override
	public ISObject getIS()
	{
		return IS;
	}
	/**
	 * Assign a USE reference to another DEF node of same node type, similar to {@link #setUSE(String)}.
	 * <br ><br >
	 * <i>Warning:</i> note that the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.
	 * <br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param DEFnode must have a DEF value defined
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextObject setUSE(TextObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on TextObject" +
				" that has no DEF name defined, thus a copy cannot be referenced as a USE node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		setUSE(DEFnode.getDEF());
		return this;
	}
	/**
	 * Utility constructor that assigns DEF label after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 */
	public TextObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TextObject addComments (String newComment)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(\"" + newComment + "\")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to contained commentsList.
	 * @param newComments array of comments
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TextObject addComments (String[] newComments)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(" + Arrays.toString(newComments) + ")" + "\n" +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to contained commentsList.
	 * @param newCommentsBlock block of comments to add
	 * @return {@link TextObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public TextObject addComments (CommentsBlock newCommentsBlock)
	{
		if (isUSE())
		{
			String errorNotice = "addComments(CommentsBlock) " +
					"cannot be applied to a USE node (USE='" + getUSE() + "') which only contains a reference to a DEF node";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
								
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
		boolean      hasChild = (IS != null) || (fontStyle != null) || (fontStyleProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<Text"); // start opening tag
		if (hasAttributes)
		{
			if (!getDEF().equals(DEF_DEFAULT_VALUE) && !isUSE())
			{
				stringX3D.append(" DEF='").append(SFStringObject.toString(getDEF())).append("'");
			}
			
			if (!getUSE().equals(USE_DEFAULT_VALUE))
			{
				stringX3D.append(" USE='").append(SFStringObject.toString(getUSE())).append("'");
			}
			
                            if (!getContainerFieldOverride().isEmpty() && !getContainerFieldOverride().equals(containerField_DEFAULT_VALUE))
                            {
                                    stringX3D.append(" containerField='").append(getContainerFieldOverride()).append("'");
                            }
                            
			if (((getLength().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" length='").append(MFFloatObject.toString(getLength())).append("'");
			}
			if (((getMaxExtent() != MAXEXTENT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" maxExtent='").append(SFFloatObject.toString(getMaxExtent())).append("'");
			}
			if (((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" solid='").append(SFBoolObject.toString(getSolid())).append("'");
			}
			if (((getString().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" string='").append(new MFStringObject(getString()).toStringX3D()).append("'");
			}
			if ((!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" class='").append(new SFStringObject(getCssClass()).toStringX3D()).append("'");
			}
		}
		if ((hasChild) && !isUSE()) // has contained node(s), comment(s), IS/connect and/or source code
		{
			stringX3D.append(">").append("\n"); // finish opening tag

			if (getIS() != null)
				stringX3D.append(getIS().toStringX3D(indentLevel + indentIncrement));

			// recursively iterate over child elements
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringX3D.append(commentsBlock.toStringX3D(indentLevel + indentIncrement));
			}
			if      (metadata != null)
			{
				stringX3D.append(((X3DConcreteElement)metadata).toStringX3D(indentLevel + indentIncrement));
			}
			else if (metadataProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)metadataProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (fontStyle != null)
			{
				stringX3D.append(((X3DConcreteElement)fontStyle).toStringX3D(indentLevel + indentIncrement));
			}
			else if (fontStyleProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)fontStyleProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</Text>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (fontStyle != null) || (fontStyleProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
		if (isUSE())
		{
			hasAttributes = false;
			hasChild      = false; // USE nodes include no other fields
		}
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		if (!getDEF().equals(DEF_DEFAULT_VALUE))
		{
			stringClassicVRML.append("DEF ").append(SFStringObject.toString(getDEF())).append(" ");
		}
		if (!getUSE().equals(USE_DEFAULT_VALUE))
		{
			 stringClassicVRML.append("USE ").append(SFStringObject.toString(getUSE())).append("\n");
		}
		else // only have further output if not a USE node
		{
			stringClassicVRML.append("Text").append(" { "); // define node name, node content follows

			if (hasAttributes || hasChild)
			{
				stringClassicVRML.append("\n").append(indent).append(indentCharacter); // fields for this node follow
			}
			if (hasAttributes)
			{

				boolean hasISconnect = (getIS() != null) && !getIS().getConnectList().isEmpty();
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("length"))
						{
							stringClassicVRML.append(indentCharacter).append("length").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getLength().length > 0)
				{
					stringClassicVRML.append("length ").append("[ ").append(MFFloatObject.toString(getLength())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("maxExtent"))
						{
							stringClassicVRML.append(indentCharacter).append("maxExtent").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getMaxExtent() != MAXEXTENT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("maxExtent ").append(SFFloatObject.toString(getMaxExtent())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("solid"))
						{
							stringClassicVRML.append(indentCharacter).append("solid").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("solid ").append(SFBoolObject.toString(getSolid())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("string"))
						{
							stringClassicVRML.append(indentCharacter).append("string").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getString().length > 0)
				{
					stringClassicVRML.append("string ").append("[ ").append(MFStringObject.toString(getString())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("class"))
						{
							stringClassicVRML.append(indentCharacter).append("class").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getCssClass().equals(CLASS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("# class ").append("\"").append(SFStringObject.toString(getCssClass())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
			}
		}
		if (hasChild) // has contained node(s), comment(s), IS/connect and/or source code
		{
			// recursively iterate over child elements
			if (fontStyle != null)
			{
				stringClassicVRML.append(indentCharacter).append("fontStyle").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) fontStyle).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (fontStyleProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("fontStyle").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) fontStyleProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (metadata != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadata).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (metadataProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("metadata").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) metadataProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (!commentsList.isEmpty())
			{
				CommentsBlock commentsBlock = new CommentsBlock(commentsList);
				stringClassicVRML.append(commentsBlock.toStringClassicVRML(indentLevel));
				stringClassicVRML.append(indent); // end SFNode
			}
		}
		if (hasAttributes || hasChild)
		{
			stringClassicVRML.append("}").append("\n"); // finish node content
		}
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
		return toStringClassicVRML(indentLevel);
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
		// no name field available for this element
		X3DConcreteElement referenceElement;
		if (fontStyle != null)
		{
			referenceElement = ((X3DConcreteElement) fontStyle).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (fontStyleProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) fontStyleProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (metadata != null)
		{
			referenceElement = ((X3DConcreteElement) metadata).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (metadataProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) metadataProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
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
		if (getDEF().equals(DEFvalue))
			return this;
		X3DConcreteNode referenceNode;
		if (fontStyle != null)
		{
			referenceNode = ((X3DConcreteElement) fontStyle).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
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

		setLength(getLength()); // exercise field checks, simple types

		setMaxExtent(getMaxExtent()); // exercise field checks, simple types

		setSolid(getSolid()); // exercise field checks, simple types

		setString(getString()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (fontStyle != null)
		{
			setFontStyle(getFontStyle());
			((X3DConcreteElement) fontStyle).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) fontStyle).getValidationResult());
		}
		if (fontStyleProtoInstance != null)
		{
			setFontStyle(getFontStyleProtoInstance());
			((X3DConcreteElement) fontStyleProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) fontStyleProtoInstance).getValidationResult());
		}
		if ((fontStyle != null) && (fontStyleProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both fontStyle and fontStyleProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasFontStyle()) // test USE restrictions
		{
			String errorNotice = "Text USE='" + getUSE() + "' is not allowed to have contained SFNode fontStyle";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "Text USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (metadata != null)
		{
			setMetadata(getMetadata());
			((X3DConcreteElement) metadata).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadata).getValidationResult());
		}
		if (metadataProtoInstance != null)
		{
			setMetadata(getMetadataProtoInstance());
			((X3DConcreteElement) metadataProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) metadataProtoInstance).getValidationResult());
		}
		if ((metadata != null) && (metadataProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both metadata and metadataProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasMetadata()) // test USE restrictions
		{
			String errorNotice = "Text USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "Text USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (getIS() != null)
		{
			if (getIS().getConnectList().isEmpty())
			{
				String errorNotice = "IS statement present, but contains no connect statements";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidProtoException(errorNotice); // report error
			}				
			// TODO also check that this node has ancestor ProtoBody, and that a field with same name also exists, so that IS is legal
		}
		if (!getContainerFieldOverride().isEmpty() &&
			!Arrays.asList(containerField_ALTERNATE_VALUES).contains(getContainerFieldOverride()))
		{
			String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
				": illegal value encountered, containerField='" + getContainerFieldOverride() +
				"' but allowed values are containerField_ALTERNATE_VALUES='" + 
				new MFStringObject(containerField_ALTERNATE_VALUES).toStringX3D() + "'.";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldException(errorNotice); // report error
		}

		// profile validation test, if connected to full scene
		if (findAncestorX3DObject() != null)
		{
			String     modelProfile = findAncestorX3DObject().getProfile();
			headObject modelHead    = findAncestorX3DObject().getHead();
			ArrayList<componentObject> sceneComponentsList = new ArrayList<>();
			if (modelHead != null) 
				sceneComponentsList = modelHead.getComponentList();
			boolean hasSatisfactoryComponent = false;
			for (componentObject nextComponent : sceneComponentsList)
			{
				if ( nextComponent.getName().equals("Text") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Immersive") &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Text' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Text\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
