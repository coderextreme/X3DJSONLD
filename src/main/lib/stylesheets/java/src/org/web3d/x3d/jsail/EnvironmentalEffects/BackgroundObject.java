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

package org.web3d.x3d.jsail.EnvironmentalEffects;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.EnvironmentalEffects.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * <i>X3D node tooltip</i>: Background simulates ground and sky, using vertical arrays of wraparound color values, Background can also provide backdrop textures on all six sides.
 * <ul>
 *  <li> <i>Hint:</i> NavigationInfo, Background, TextureBackground, Fog, GeoViewpoint, OrthoViewpoint and Viewpoint are bindable nodes, meaning that no more than one of each node type can be active at a given time. </li> 
 *  <li> <i>Warning:</i> results are undefined if a bindable node (Viewpoint, OrthoViewpoint, NavigationInfo, Fog, Background, TextureBackground) is a contained child of LOD or Switch. </li> 
 *  <li> <i>Hint:</i>  X3D Example Archives, Basic, Universal Media Panoramas <br> <a href="http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas</a> </li> 
 * </ul>
 * <br>
 * Note that {@linkplain SFColorObject#ALICEBLUE SFColorObject} provides a variety of color constants.
 * <br>

 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/enveffects.html#Background" target="blank">X3D Abstract Specification: Background</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#Background" target="_blank">X3D Tooltips: Background</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class BackgroundObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.EnvironmentalEffects.Background
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private ArrayList<String> backUrl = new ArrayList<>(); // MFString

	private double bindTime; // SFTime

	private ArrayList<String> bottomUrl = new ArrayList<>(); // MFString

	private ArrayList<String> frontUrl = new ArrayList<>(); // MFString

	private ArrayList<Float> groundAngle = new ArrayList<>(); // MFFloat

	private float[] groundColor; // MFColor

	private boolean isBound; // SFBool

	private ArrayList<String> leftUrl = new ArrayList<>(); // MFString

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private ArrayList<String> rightUrl = new ArrayList<>(); // MFString

	private boolean bind; // SFBool

	private ArrayList<Float> skyAngle = new ArrayList<>(); // MFFloat

	private float[] skyColor; // MFColor

	private ArrayList<String> topUrl = new ArrayList<>(); // MFString

	private float transparency; // SFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>Background</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "Background";

	/** Provides name of this element: <i>Background</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>Background</i> element: <i>EnvironmentalEffects</i> */
	public static final String COMPONENT = "EnvironmentalEffects";

	/** Defines X3D component for the <i>Background</i> element: <i>EnvironmentalEffects</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>EnvironmentalEffects</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** MFString field named <i>backUrl</i> has default value equal to an empty list. */
	public static final ArrayList<String> BACKURL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>bottomUrl</i> has default value equal to an empty list. */
	public static final ArrayList<String> BOTTOMURL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>frontUrl</i> has default value equal to an empty list. */
	public static final ArrayList<String> FRONTURL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>leftUrl</i> has default value equal to an empty list. */
	public static final ArrayList<String> LEFTURL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>rightUrl</i> has default value equal to an empty list. */
	public static final ArrayList<String> RIGHTURL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFColor field named <i>skyColor</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] SKYCOLOR_DEFAULT_VALUE = {0f,0f,0f};

	/** MFString field named <i>topUrl</i> has default value equal to an empty list. */
	public static final ArrayList<String> TOPURL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** SFFloat field named <i>transparency</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float TRANSPARENCY_DEFAULT_VALUE = 0f;

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
			case "backUrl":
				result = "MFString";
				break;
			case "bindTime":
				result = "SFTime";
				break;
			case "bottomUrl":
				result = "MFString";
				break;
			case "frontUrl":
				result = "MFString";
				break;
			case "groundAngle":
				result = "MFFloat";
				break;
			case "groundColor":
				result = "MFColor";
				break;
			case "isBound":
				result = "SFBool";
				break;
			case "leftUrl":
				result = "MFString";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "rightUrl":
				result = "MFString";
				break;
			case "bind":
				result = "SFBool";
				break;
			case "skyAngle":
				result = "MFFloat";
				break;
			case "skyColor":
				result = "MFColor";
				break;
			case "topUrl":
				result = "MFString";
				break;
			case "transparency":
				result = "SFFloat";
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
			case "backUrl":
				result = "inputOutput";
				break;
			case "bindTime":
				result = "outputOnly";
				break;
			case "bottomUrl":
				result = "inputOutput";
				break;
			case "frontUrl":
				result = "inputOutput";
				break;
			case "groundAngle":
				result = "inputOutput";
				break;
			case "groundColor":
				result = "inputOutput";
				break;
			case "isBound":
				result = "outputOnly";
				break;
			case "leftUrl":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "rightUrl":
				result = "inputOutput";
				break;
			case "set_bind":
				result = "inputOnly";
				break;
			case "skyAngle":
				result = "inputOutput";
				break;
			case "skyColor":
				result = "inputOutput";
				break;
			case "topUrl":
				result = "inputOutput";
				break;
			case "transparency":
				result = "inputOutput";
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
	String containerField_DEFAULT_VALUE = "children";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for MFString field named <i>backUrl</i>. */
	public static final String fromField_BACKURL = "backUrl";

	/** toField ROUTE name for MFString field named <i>backUrl</i>. */
	public static final String toField_BACKURL = "backUrl";

	/** fromField ROUTE name for SFTime field named <i>bindTime</i>. */
	public static final String fromField_BINDTIME = "bindTime";

	/** fromField ROUTE name for MFString field named <i>bottomUrl</i>. */
	public static final String fromField_BOTTOMURL = "bottomUrl";

	/** toField ROUTE name for MFString field named <i>bottomUrl</i>. */
	public static final String toField_BOTTOMURL = "bottomUrl";

	/** fromField ROUTE name for MFString field named <i>frontUrl</i>. */
	public static final String fromField_FRONTURL = "frontUrl";

	/** toField ROUTE name for MFString field named <i>frontUrl</i>. */
	public static final String toField_FRONTURL = "frontUrl";

	/** fromField ROUTE name for MFFloat field named <i>groundAngle</i>. */
	public static final String fromField_GROUNDANGLE = "groundAngle";

	/** toField ROUTE name for MFFloat field named <i>groundAngle</i>. */
	public static final String toField_GROUNDANGLE = "groundAngle";

	/** fromField ROUTE name for MFColor field named <i>groundColor</i>. */
	public static final String fromField_GROUNDCOLOR = "groundColor";

	/** toField ROUTE name for MFColor field named <i>groundColor</i>. */
	public static final String toField_GROUNDCOLOR = "groundColor";

	/** fromField ROUTE name for SFBool field named <i>isBound</i>. */
	public static final String fromField_ISBOUND = "isBound";

	/** fromField ROUTE name for MFString field named <i>leftUrl</i>. */
	public static final String fromField_LEFTURL = "leftUrl";

	/** toField ROUTE name for MFString field named <i>leftUrl</i>. */
	public static final String toField_LEFTURL = "leftUrl";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for MFString field named <i>rightUrl</i>. */
	public static final String fromField_RIGHTURL = "rightUrl";

	/** toField ROUTE name for MFString field named <i>rightUrl</i>. */
	public static final String toField_RIGHTURL = "rightUrl";

	/** toField ROUTE name for SFBool field named <i>set_bind</i>. */
	public static final String toField_SET_BIND = "set_bind";

	/** fromField ROUTE name for MFFloat field named <i>skyAngle</i>. */
	public static final String fromField_SKYANGLE = "skyAngle";

	/** toField ROUTE name for MFFloat field named <i>skyAngle</i>. */
	public static final String toField_SKYANGLE = "skyAngle";

	/** fromField ROUTE name for MFColor field named <i>skyColor</i>. */
	public static final String fromField_SKYCOLOR = "skyColor";

	/** toField ROUTE name for MFColor field named <i>skyColor</i>. */
	public static final String toField_SKYCOLOR = "skyColor";

	/** fromField ROUTE name for MFString field named <i>topUrl</i>. */
	public static final String fromField_TOPURL = "topUrl";

	/** toField ROUTE name for MFString field named <i>topUrl</i>. */
	public static final String toField_TOPURL = "topUrl";

	/** fromField ROUTE name for SFFloat field named <i>transparency</i>. */
	public static final String fromField_TRANSPARENCY = "transparency";

	/** toField ROUTE name for SFFloat field named <i>transparency</i>. */
	public static final String toField_TRANSPARENCY = "transparency";

	/** Constructor for BackgroundObject to initialize member variables with default values. */
	public BackgroundObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "children" };

		backUrl = new ArrayList<>(BACKURL_DEFAULT_VALUE);
		bottomUrl = new ArrayList<>(BOTTOMURL_DEFAULT_VALUE);
		frontUrl = new ArrayList<>(FRONTURL_DEFAULT_VALUE);
		groundAngle = new ArrayList<>();
		groundColor =  new float[] { };
		leftUrl = new ArrayList<>(LEFTURL_DEFAULT_VALUE);
		metadata = null; // clear out any prior node
		rightUrl = new ArrayList<>(RIGHTURL_DEFAULT_VALUE);
		skyAngle = new ArrayList<>();
		skyColor = SKYCOLOR_DEFAULT_VALUE;
		topUrl = new ArrayList<>(TOPURL_DEFAULT_VALUE);
		transparency = TRANSPARENCY_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of String results from inputOutput MFString field named <i>backUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i>  can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of backUrl field
	 */
	@Override
	public String[] getBackUrl()
	{
		final String[] valuesArray = new String[backUrl.size()];
		int i = 0;
		for (String arrayElement : backUrl) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString backUrl field, similar to {@link #getBackUrl()}.

	 * @return value of backUrl field
	 */
	public ArrayList<String> getBackUrlList()
	{
		return backUrl;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>backUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the backUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setBackUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearBackUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		backUrl.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			backUrl.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString backUrl field, similar to {@link #setBackUrl(String[])}.
	 * @param newValue is new value for the backUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBackUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearBackUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setBackUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString backUrl field, similar to {@link #setBackUrl(String[])}.
	 * @param newValue is new value for the backUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBackUrl(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearBackUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setBackUrl(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString backUrl field, similar to {@link #setBackUrl(String[])}.
	 * @param newValue is new value for the backUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBackUrl(String newValue)
	{
		if (newValue == null)
		{
			clearBackUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		backUrl.clear();
		backUrl.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString backUrl field, similar to {@link #setBackUrl(String[])}.
	 * @param newValue is new value for the backUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBackUrl(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearBackUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		backUrl = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of backUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearBackUrl()
	{
		backUrl.clear(); // reset
		return this;
	}
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>bindTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  event sent when node becomes active/inactive.  * <br>

	 * @return value of bindTime field
	 */
	@Override
	public double getBindTime()
	{
		return bindTime;
	}
	/**
	 * Provide array of String results from inputOutput MFString field named <i>bottomUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i>  can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of bottomUrl field
	 */
	@Override
	public String[] getBottomUrl()
	{
		final String[] valuesArray = new String[bottomUrl.size()];
		int i = 0;
		for (String arrayElement : bottomUrl) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString bottomUrl field, similar to {@link #getBottomUrl()}.

	 * @return value of bottomUrl field
	 */
	public ArrayList<String> getBottomUrlList()
	{
		return bottomUrl;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>bottomUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the bottomUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setBottomUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearBottomUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		bottomUrl.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			bottomUrl.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString bottomUrl field, similar to {@link #setBottomUrl(String[])}.
	 * @param newValue is new value for the bottomUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBottomUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearBottomUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setBottomUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString bottomUrl field, similar to {@link #setBottomUrl(String[])}.
	 * @param newValue is new value for the bottomUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBottomUrl(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearBottomUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setBottomUrl(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString bottomUrl field, similar to {@link #setBottomUrl(String[])}.
	 * @param newValue is new value for the bottomUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBottomUrl(String newValue)
	{
		if (newValue == null)
		{
			clearBottomUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		bottomUrl.clear();
		bottomUrl.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString bottomUrl field, similar to {@link #setBottomUrl(String[])}.
	 * @param newValue is new value for the bottomUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setBottomUrl(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearBottomUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		bottomUrl = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of bottomUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearBottomUrl()
	{
		bottomUrl.clear(); // reset
		return this;
	}
	/**
	 * Provide array of String results from inputOutput MFString field named <i>frontUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i>  can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of frontUrl field
	 */
	@Override
	public String[] getFrontUrl()
	{
		final String[] valuesArray = new String[frontUrl.size()];
		int i = 0;
		for (String arrayElement : frontUrl) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString frontUrl field, similar to {@link #getFrontUrl()}.

	 * @return value of frontUrl field
	 */
	public ArrayList<String> getFrontUrlList()
	{
		return frontUrl;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>frontUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the frontUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setFrontUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearFrontUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		frontUrl.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			frontUrl.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString frontUrl field, similar to {@link #setFrontUrl(String[])}.
	 * @param newValue is new value for the frontUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setFrontUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearFrontUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setFrontUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString frontUrl field, similar to {@link #setFrontUrl(String[])}.
	 * @param newValue is new value for the frontUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setFrontUrl(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearFrontUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setFrontUrl(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString frontUrl field, similar to {@link #setFrontUrl(String[])}.
	 * @param newValue is new value for the frontUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setFrontUrl(String newValue)
	{
		if (newValue == null)
		{
			clearFrontUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		frontUrl.clear();
		frontUrl.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString frontUrl field, similar to {@link #setFrontUrl(String[])}.
	 * @param newValue is new value for the frontUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setFrontUrl(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearFrontUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		frontUrl = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of frontUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearFrontUrl()
	{
		frontUrl.clear(); // reset
		return this;
	}
	/**
	 * Provide array of Float results unit axis, angle (in radians) within allowed range of [0,1.5708] from inputOutput MFFloat field named <i>groundAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,pi/2] The angle array values increase from 0.0 nadir (straight down) to pi/2=1.570796 (horizon).
 * <ul>
 *  <li> <i>Warning:</i> you must have one more groundColor value than groundAngle values. </li> 
 *  <li> <i>Warning:</i>  colors at groundAngle=0 are ignored. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of groundAngle field
	 */
	@Override
	public float[] getGroundAngle()
	{
		final float[] valuesArray = new float[groundAngle.size()];
		int i = 0;
		for (Float arrayElement : groundAngle) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat groundAngle field, similar to {@link #getGroundAngle()}.

	 * @return value of groundAngle field
	 */
	public ArrayList<Float> getGroundAngleList()
	{
		return groundAngle;
	}

	/**
	 * Assign Float array unit axis, angle (in radians) within allowed range of [0,1.5708] to inputOutput MFFloat field named <i>groundAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,pi/2] The angle array values increase from 0.0 nadir (straight down) to pi/2=1.570796 (horizon). Warning: you must have one more groundColor value than groundAngle values. Warning: colors at groundAngle=0 are ignored. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the groundAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setGroundAngle(float[] newValue)
	{
		if (newValue == null)
		{
			clearGroundAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		groundAngle.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			groundAngle.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat groundAngle field, similar to {@link #setGroundAngle(float[])}.
	 * @param newValue is new value for the groundAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setGroundAngle(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearGroundAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setGroundAngle(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat groundAngle field, similar to {@link #setGroundAngle(float[])}.
	 * @param newValue is new value for the groundAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setGroundAngle(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearGroundAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		groundAngle = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of groundAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearGroundAngle()
	{
		groundAngle.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat groundAngle field, similar to {@link #setGroundAngle(float[])}.
	 * @param newValue is new value for the groundAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setGroundAngle(int[] newValue)
	{
		if (newValue == null)
		{
			clearGroundAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setGroundAngle(holdArray);
		return this;
	}
	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput MFColor field named <i>groundColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Color of the ground at the various angles on the ground partial sphere. First value is color of ground at 0.0 radians representing the nadir (straight down).
 * <ul>
 *  <li> <i>Hint:</i> setting the same color at two consecutive angles produces a solid color band. </li> 
 *  <li> <i>Warning:</i> you must have one more groundColor value than groundAngle values. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of groundColor field
	 */
	@Override
	public float[] getGroundColor()
	{
		return groundColor;
	}

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput MFColor field named <i>groundColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Color of the ground at the various angles on the ground partial sphere. First value is color of ground at 0.0 radians representing the nadir (straight down). Hint: setting the same color at two consecutive angles produces a solid color band. Warning: you must have one more groundColor value than groundAngle values. Interchange profile hint: this field may be ignored, applying the default value regardless. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the groundColor field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setGroundColor(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 3 != 0) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Background groundColor newValue=" + MFColorObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 3");
		}
		groundColor = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFColor groundColor field, similar to {@link #setGroundColor(float[])}.
	 * @param newValue is new value for the groundColor field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setGroundColor(MFColorObject newValue)
	{
		setGroundColor(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isBound</i>.
	 * <br><br>
	 * <i>Tooltip:</i> event true sent when node becomes active, event false sent when unbound by another node.
 * <ul>
 *  <li> <i> Hint:</i>  paired node operations can be established by connecting set_bind and isBound fields of corresponding bindable nodes. </li> 
 * </ul>
	 * @return value of isBound field
	 */
	@Override
	public boolean getIsBound()
	{
		return isBound;
	}
	/**
	 * Provide array of String results from inputOutput MFString field named <i>leftUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i>  can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of leftUrl field
	 */
	@Override
	public String[] getLeftUrl()
	{
		final String[] valuesArray = new String[leftUrl.size()];
		int i = 0;
		for (String arrayElement : leftUrl) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString leftUrl field, similar to {@link #getLeftUrl()}.

	 * @return value of leftUrl field
	 */
	public ArrayList<String> getLeftUrlList()
	{
		return leftUrl;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>leftUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the leftUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setLeftUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearLeftUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		leftUrl.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			leftUrl.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString leftUrl field, similar to {@link #setLeftUrl(String[])}.
	 * @param newValue is new value for the leftUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setLeftUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearLeftUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setLeftUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString leftUrl field, similar to {@link #setLeftUrl(String[])}.
	 * @param newValue is new value for the leftUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setLeftUrl(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearLeftUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setLeftUrl(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString leftUrl field, similar to {@link #setLeftUrl(String[])}.
	 * @param newValue is new value for the leftUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setLeftUrl(String newValue)
	{
		if (newValue == null)
		{
			clearLeftUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		leftUrl.clear();
		leftUrl.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString leftUrl field, similar to {@link #setLeftUrl(String[])}.
	 * @param newValue is new value for the leftUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setLeftUrl(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearLeftUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		leftUrl = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of leftUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearLeftUrl()
	{
		leftUrl.clear(); // reset
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setMetadata(X3DMetadataObject newValue)
	{
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public BackgroundObject clearMetadata()
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide array of String results from inputOutput MFString field named <i>rightUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i>  can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of rightUrl field
	 */
	@Override
	public String[] getRightUrl()
	{
		final String[] valuesArray = new String[rightUrl.size()];
		int i = 0;
		for (String arrayElement : rightUrl) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString rightUrl field, similar to {@link #getRightUrl()}.

	 * @return value of rightUrl field
	 */
	public ArrayList<String> getRightUrlList()
	{
		return rightUrl;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>rightUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the rightUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setRightUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearRightUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rightUrl.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			rightUrl.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString rightUrl field, similar to {@link #setRightUrl(String[])}.
	 * @param newValue is new value for the rightUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setRightUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearRightUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setRightUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString rightUrl field, similar to {@link #setRightUrl(String[])}.
	 * @param newValue is new value for the rightUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setRightUrl(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearRightUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setRightUrl(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString rightUrl field, similar to {@link #setRightUrl(String[])}.
	 * @param newValue is new value for the rightUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setRightUrl(String newValue)
	{
		if (newValue == null)
		{
			clearRightUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rightUrl.clear();
		rightUrl.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString rightUrl field, similar to {@link #setRightUrl(String[])}.
	 * @param newValue is new value for the rightUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setRightUrl(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearRightUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rightUrl = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of rightUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearRightUrl()
	{
		rightUrl.clear(); // reset
		return this;
	}
	/**
	 * Provide array of Float results unit axis, angle (in radians) within allowed range of [0,3.1416] from inputOutput MFFloat field named <i>skyAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,pi] The angle array values increase from 0.0 zenith (straight up) to pi/2=1.570796 (horizon) to pi=3.14159 (nadir).
 * <ul>
 *  <li> <i>Warning:</i> you must have one more skyColor value than skyAngle values. </li> 
 *  <li> <i>Warning:</i>  colors at skyAngle=0 are ignored. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of skyAngle field
	 */
	@Override
	public float[] getSkyAngle()
	{
		final float[] valuesArray = new float[skyAngle.size()];
		int i = 0;
		for (Float arrayElement : skyAngle) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat skyAngle field, similar to {@link #getSkyAngle()}.

	 * @return value of skyAngle field
	 */
	public ArrayList<Float> getSkyAngleList()
	{
		return skyAngle;
	}

	/**
	 * Assign Float array unit axis, angle (in radians) within allowed range of [0,3.1416] to inputOutput MFFloat field named <i>skyAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,pi] The angle array values increase from 0.0 zenith (straight up) to pi/2=1.570796 (horizon) to pi=3.14159 (nadir). Warning: you must have one more skyColor value than skyAngle values. Warning: colors at skyAngle=0 are ignored. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the skyAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setSkyAngle(float[] newValue)
	{
		if (newValue == null)
		{
			clearSkyAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		skyAngle.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			skyAngle.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat skyAngle field, similar to {@link #setSkyAngle(float[])}.
	 * @param newValue is new value for the skyAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setSkyAngle(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearSkyAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setSkyAngle(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat skyAngle field, similar to {@link #setSkyAngle(float[])}.
	 * @param newValue is new value for the skyAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setSkyAngle(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearSkyAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		skyAngle = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of skyAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearSkyAngle()
	{
		skyAngle.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat skyAngle field, similar to {@link #setSkyAngle(float[])}.
	 * @param newValue is new value for the skyAngle field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setSkyAngle(int[] newValue)
	{
		if (newValue == null)
		{
			clearSkyAngle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setSkyAngle(holdArray);
		return this;
	}
	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput MFColor field named <i>skyColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Color of the sky at various angles on the sky sphere. First value is color of sky at 0.0 radians representing the zenith (straight up).
 * <ul>
 *  <li> <i>Hint:</i> setting the same color at two consecutive angles produces a solid color band. </li> 
 *  <li> <i>Warning:</i> you must have one more skyColor value than skyAngle values. Interchange profile hint: only one color might be rendered, others can be ignored. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of skyColor field
	 */
	@Override
	public float[] getSkyColor()
	{
		return skyColor;
	}

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput MFColor field named <i>skyColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Color of the sky at various angles on the sky sphere. First value is color of sky at 0.0 radians representing the zenith (straight up). Hint: setting the same color at two consecutive angles produces a solid color band. Warning: you must have one more skyColor value than skyAngle values. Interchange profile hint: only one color might be rendered, others can be ignored. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the skyColor field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setSkyColor(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length % 3 != 0) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Background skyColor newValue=" + MFColorObject.toString(newValue) + " has length=" + newValue.length + ", must be a multiple of 3");
		}
		skyColor = newValue;
		return this;
	}

	/**
	 * Assign typed object value to MFColor skyColor field, similar to {@link #setSkyColor(float[])}.
	 * @param newValue is new value for the skyColor field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setSkyColor(MFColorObject newValue)
	{
		setSkyColor(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of String results from inputOutput MFString field named <i>topUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry.
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i>  can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of topUrl field
	 */
	@Override
	public String[] getTopUrl()
	{
		final String[] valuesArray = new String[topUrl.size()];
		int i = 0;
		for (String arrayElement : topUrl) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString topUrl field, similar to {@link #getTopUrl()}.

	 * @return value of topUrl field
	 */
	public ArrayList<String> getTopUrlList()
	{
		return topUrl;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>topUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Image background panorama between ground/sky backdrop and scene's geometry. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the topUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setTopUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearTopUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		topUrl.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			topUrl.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString topUrl field, similar to {@link #setTopUrl(String[])}.
	 * @param newValue is new value for the topUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setTopUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearTopUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setTopUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString topUrl field, similar to {@link #setTopUrl(String[])}.
	 * @param newValue is new value for the topUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setTopUrl(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearTopUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setTopUrl(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString topUrl field, similar to {@link #setTopUrl(String[])}.
	 * @param newValue is new value for the topUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setTopUrl(String newValue)
	{
		if (newValue == null)
		{
			clearTopUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		topUrl.clear();
		topUrl.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString topUrl field, similar to {@link #setTopUrl(String[])}.
	 * @param newValue is new value for the topUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setTopUrl(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearTopUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		topUrl = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of topUrl field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BackgroundObject clearTopUrl()
	{
		topUrl.clear(); // reset
		return this;
	}
	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>transparency</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] (X3D version 3.2 or later) how "clear" the background is, allows underlying page to show through: 1.0 is completely transparent, 0.0 is completely opaque. Interchange profile hint: transparency &amp;lt; .5 opaque, transparency &amp;gt; .5 transparent.  * <br>

	 * @return value of transparency field
	 */
	@Override
	public float getTransparency()
	{
		return transparency;
	}

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>transparency</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] (X3D version 3.2 or later) how "clear" the background is, allows underlying page to show through: 1.0 is completely transparent, 0.0 is completely opaque. Interchange profile hint: transparency &lt; .5 opaque, transparency &gt; .5 transparent.
	 * @param newValue is new value for the transparency field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setTransparency(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("Background transparency newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
            if (newValue > 1f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("Background transparency newValue=" + SFFloatObject.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=1");
            }
		transparency = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat transparency field, similar to {@link #setTransparency(float)}.
	 * @param newValue is new value for the transparency field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setTransparency(SFFloatObject newValue)
	{
		setTransparency(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final BackgroundObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to Background
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Background DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("Background DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setDEF(SFStringObject newValue)
	{
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final BackgroundObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to Background
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Background USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("Background USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final BackgroundObject setCssClass(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		setConcreteCssClass(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString cssClass field, similar to {@link #setCssClass(String)}.
	 * @param newValue is new value for the class field.
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setCssClass(SFStringObject newValue)
	{
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BackgroundObject setIS(ISObject newValue)
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BackgroundObject setUSE(BackgroundObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on BackgroundObject" +
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
	public BackgroundObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public BackgroundObject addComments (String newComment)
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public BackgroundObject addComments (String[] newComments)
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
	 * @return {@link BackgroundObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public BackgroundObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<Background"); // start opening tag
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
                            
			if (((getBackUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" backUrl='").append(new MFStringObject(getBackUrl()).toStringX3D()).append("'");
			}
			if (((getBottomUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bottomUrl='").append(new MFStringObject(getBottomUrl()).toStringX3D()).append("'");
			}
			if (((getFrontUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" frontUrl='").append(new MFStringObject(getFrontUrl()).toStringX3D()).append("'");
			}
			if (((getGroundAngle().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" groundAngle='").append(MFFloatObject.toString(getGroundAngle())).append("'");
			}
			if ((getGroundColor().length > 0) && !isUSE())
			{
				stringX3D.append(" groundColor='").append(MFColorObject.toString(getGroundColor())).append("'");
			}
			if (((getLeftUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" leftUrl='").append(new MFStringObject(getLeftUrl()).toStringX3D()).append("'");
			}
			if (((getRightUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rightUrl='").append(new MFStringObject(getRightUrl()).toStringX3D()).append("'");
			}
			if (((getSkyAngle().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" skyAngle='").append(MFFloatObject.toString(getSkyAngle())).append("'");
			}
			if ((!Arrays.equals(getSkyColor(), SKYCOLOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" skyColor='").append(MFColorObject.toString(getSkyColor())).append("'");
			}
			if (((getTopUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" topUrl='").append(new MFStringObject(getTopUrl()).toStringX3D()).append("'");
			}
			if (((getTransparency() != TRANSPARENCY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" transparency='").append(SFFloatObject.toString(getTransparency())).append("'");
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

			// recursively iterate over child element
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
			stringX3D.append(indent).append("</Background>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("Background").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("backUrl"))
						{
							stringClassicVRML.append(indentCharacter).append("backUrl").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getBackUrl().length > 0)
				{
					stringClassicVRML.append("backUrl ").append("[ ").append(MFStringObject.toString(getBackUrl())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("bottomUrl"))
						{
							stringClassicVRML.append(indentCharacter).append("bottomUrl").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getBottomUrl().length > 0)
				{
					stringClassicVRML.append("bottomUrl ").append("[ ").append(MFStringObject.toString(getBottomUrl())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("frontUrl"))
						{
							stringClassicVRML.append(indentCharacter).append("frontUrl").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getFrontUrl().length > 0)
				{
					stringClassicVRML.append("frontUrl ").append("[ ").append(MFStringObject.toString(getFrontUrl())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("groundAngle"))
						{
							stringClassicVRML.append(indentCharacter).append("groundAngle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getGroundAngle().length > 0)
				{
					stringClassicVRML.append("groundAngle ").append("[ ").append(MFFloatObject.toString(getGroundAngle())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("groundColor"))
						{
							stringClassicVRML.append(indentCharacter).append("groundColor").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getGroundColor().length > 0) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("groundColor ").append("[ ").append(MFColorObject.toString(getGroundColor())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("leftUrl"))
						{
							stringClassicVRML.append(indentCharacter).append("leftUrl").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getLeftUrl().length > 0)
				{
					stringClassicVRML.append("leftUrl ").append("[ ").append(MFStringObject.toString(getLeftUrl())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("rightUrl"))
						{
							stringClassicVRML.append(indentCharacter).append("rightUrl").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getRightUrl().length > 0)
				{
					stringClassicVRML.append("rightUrl ").append("[ ").append(MFStringObject.toString(getRightUrl())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("skyAngle"))
						{
							stringClassicVRML.append(indentCharacter).append("skyAngle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getSkyAngle().length > 0)
				{
					stringClassicVRML.append("skyAngle ").append("[ ").append(MFFloatObject.toString(getSkyAngle())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("skyColor"))
						{
							stringClassicVRML.append(indentCharacter).append("skyColor").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getSkyColor(), SKYCOLOR_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("skyColor ").append("[ ").append(MFColorObject.toString(getSkyColor())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("topUrl"))
						{
							stringClassicVRML.append(indentCharacter).append("topUrl").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getTopUrl().length > 0)
				{
					stringClassicVRML.append("topUrl ").append("[ ").append(MFStringObject.toString(getTopUrl())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("transparency"))
						{
							stringClassicVRML.append(indentCharacter).append("transparency").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTransparency() != TRANSPARENCY_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("transparency ").append(SFFloatObject.toString(getTransparency())).append("\n").append(indent).append(indentCharacter);
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
			// recursively iterate over child element
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

		setBackUrl(getBackUrl()); // exercise field checks, simple types

		setBottomUrl(getBottomUrl()); // exercise field checks, simple types

		setFrontUrl(getFrontUrl()); // exercise field checks, simple types

		setGroundAngle(getGroundAngle()); // exercise field checks, simple types

		setGroundColor(getGroundColor()); // exercise field checks, simple types

		setLeftUrl(getLeftUrl()); // exercise field checks, simple types

		setRightUrl(getRightUrl()); // exercise field checks, simple types

		setSkyAngle(getSkyAngle()); // exercise field checks, simple types

		setSkyColor(getSkyColor()); // exercise field checks, simple types

		setTopUrl(getTopUrl()); // exercise field checks, simple types

		setTransparency(getTransparency()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

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
			String errorNotice = "Background USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "Background USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("EnvironmentalEffects") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Interchange") &&
				!modelProfile.equals("Interactive") &&
				!modelProfile.equals("Immersive") &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("MPEG4Interactive") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='EnvironmentalEffects' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"EnvironmentalEffects\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
