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

package org.web3d.x3d.jsail.Navigation;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Navigation.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;

/**
 * <i>X3D node tooltip</i>: NavigationInfo describes the user's viewing model, user navigation-interaction modalities, and also dimensional characteristics of the user's (typically invisible) avatar.
 * <ul>
 *  <li> <i>Hint:</i> for inspection of simple objects, usability often improves with type="EXAMINE" "ANY" </li> 
 *  <li> <i>Hint:</i> NavigationInfo, Background, TextureBackground, Fog, GeoViewpoint, OrthoViewpoint and Viewpoint are bindable nodes, meaning that no more than one of each node type can be active at a given time. </li> 
 *  <li> <i>Hint:</i> NavigationInfo types '"WALK" "FLY"' support camera-to-object collision detection. </li> 
 *  <li> <i>Warning:</i> results are undefined if a bindable node (Viewpoint, OrthoViewpoint, NavigationInfo, Fog, Background, TextureBackground) is a contained child of LOD or Switch. </li> 
 *  <li> <i>Hint:</i> Regardless of viewpoint jump value at bind time, the relative viewing transformation between user's view and defined position/orientation is stored for later use when un-jumping (returning to the viewpoint when subsequent viewpoint is unbound). </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Viewpoints <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/navigation.html#NavigationInfo" target="blank">X3D Abstract Specification: NavigationInfo</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#NavigationInfo" target="_blank">X3D Tooltips: NavigationInfo</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Viewpoints" target="_blank">X3D Scene Authoring Hints: Viewpoints</a>
 */
public class NavigationInfoObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Navigation.NavigationInfo
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private ArrayList<Float> avatarSize = new ArrayList<>(); // MFFloat

	private double bindTime; // SFTime

	private boolean headlight; // SFBool

	private boolean isBound; // SFBool

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private boolean bind; // SFBool

	private float speed; // SFFloat

	private boolean transitionComplete; // SFBool

	private double transitionTime; // SFTime

	private ArrayList<String> transitionType = new ArrayList<>(); // MFString

	private ArrayList<String> type = new ArrayList<>(); // MFString

	private float visibilityLimit; // SFFloat

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** MFString field named <i>transitionType</i> is an array that can include this quoted enumeration value <i>new String[] {"TELEPORT"}</i> (Java syntax) or <i>'"TELEPORT"'</i> (XML syntax). */
	public static final ArrayList<String> TRANSITIONTYPE_TELEPORT = new ArrayList<String>(Arrays.<String>asList("TELEPORT"));

	/** MFString field named <i>transitionType</i> is an array that can include this quoted enumeration value <i>new String[] {"LINEAR"}</i> (Java syntax) or <i>'"LINEAR"'</i> (XML syntax). */
	public static final ArrayList<String> TRANSITIONTYPE_LINEAR = new ArrayList<String>(Arrays.<String>asList("LINEAR"));

	/** MFString field named <i>transitionType</i> is an array that can include this quoted enumeration value <i>new String[] {"ANIMATE"}</i> (Java syntax) or <i>'"ANIMATE"'</i> (XML syntax). */
	public static final ArrayList<String> TRANSITIONTYPE_ANIMATE = new ArrayList<String>(Arrays.<String>asList("ANIMATE"));

	/** MFString field named <i>type</i> is an array that can include this quoted enumeration value <i>new String[] {"ANY"}</i> (Java syntax) or <i>'"ANY"'</i> (XML syntax). */
	public static final ArrayList<String> TYPE_ANY = new ArrayList<String>(Arrays.<String>asList("ANY"));

	/** MFString field named <i>type</i> is an array that can include this quoted enumeration value <i>new String[] {"WALK"}</i> (Java syntax) or <i>'"WALK"'</i> (XML syntax). */
	public static final ArrayList<String> TYPE_WALK = new ArrayList<String>(Arrays.<String>asList("WALK"));

	/** MFString field named <i>type</i> is an array that can include this quoted enumeration value <i>new String[] {"EXAMINE"}</i> (Java syntax) or <i>'"EXAMINE"'</i> (XML syntax). */
	public static final ArrayList<String> TYPE_EXAMINE = new ArrayList<String>(Arrays.<String>asList("EXAMINE"));

	/** MFString field named <i>type</i> is an array that can include this quoted enumeration value <i>new String[] {"FLY"}</i> (Java syntax) or <i>'"FLY"'</i> (XML syntax). */
	public static final ArrayList<String> TYPE_FLY = new ArrayList<String>(Arrays.<String>asList("FLY"));

	/** MFString field named <i>type</i> is an array that can include this quoted enumeration value <i>new String[] {"LOOKAT"}</i> (Java syntax) or <i>'"LOOKAT"'</i> (XML syntax). */
	public static final ArrayList<String> TYPE_LOOKAT = new ArrayList<String>(Arrays.<String>asList("LOOKAT"));

	/** MFString field named <i>type</i> is an array that can include this quoted enumeration value <i>new String[] {"NONE"}</i> (Java syntax) or <i>'"NONE"'</i> (XML syntax). */
	public static final ArrayList<String> TYPE_NONE = new ArrayList<String>(Arrays.<String>asList("NONE"));

	/** MFString field named <i>type</i> is an array that can include this quoted enumeration value <i>new String[] {"EXPLORE"}</i> (Java syntax) or <i>'"EXPLORE"'</i> (XML syntax). */
	public static final ArrayList<String> TYPE_EXPLORE = new ArrayList<String>(Arrays.<String>asList("EXPLORE"));

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>NavigationInfo</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "NavigationInfo";

	/** Provides name of this element: <i>NavigationInfo</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>NavigationInfo</i> element: <i>Navigation</i> */
	public static final String COMPONENT = "Navigation";

	/** Defines X3D component for the <i>NavigationInfo</i> element: <i>Navigation</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Navigation</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** MFFloat field named <i>avatarSize</i> has default value <i>{0.25f,1.6f,0.75f}</i> (Java syntax) or <i>0.25 1.6 0.75</i> (XML syntax). */
	public static final ArrayList<Float> AVATARSIZE_DEFAULT_VALUE = new ArrayList<>(Arrays.asList(0.25f,1.6f,0.75f));

	/** SFBool field named <i>headlight</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean HEADLIGHT_DEFAULT_VALUE = true;

	/** SFFloat field named <i>speed</i> has default value <i>1f</i> (Java syntax) or <i>1</i> (XML syntax). */
	public static final float SPEED_DEFAULT_VALUE = 1f;

	/** SFTime field named <i>transitionTime</i> has default value <i>1.0</i> (Java syntax) or <i>1.0</i> (XML syntax). */
	public static final double TRANSITIONTIME_DEFAULT_VALUE = 1.0;

	/** MFString field named <i>transitionType</i> has default quoted value <i>new String[] {"LINEAR"}</i> (Java syntax) or quoted value <i>"LINEAR"</i> (XML syntax). */
	public static final ArrayList<String> TRANSITIONTYPE_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("LINEAR"));

	/** MFString field named <i>type</i> has default quoted value <i>new String[] {"EXAMINE","ANY"}</i> (Java syntax) or quoted value <i>"EXAMINE" "ANY"</i> (XML syntax). */
	public static final ArrayList<String> TYPE_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("EXAMINE","ANY"));

	/** SFFloat field named <i>visibilityLimit</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float VISIBILITYLIMIT_DEFAULT_VALUE = 0f;

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
			case "avatarSize":
				result = "MFFloat";
				break;
			case "bindTime":
				result = "SFTime";
				break;
			case "headlight":
				result = "SFBool";
				break;
			case "isBound":
				result = "SFBool";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "bind":
				result = "SFBool";
				break;
			case "speed":
				result = "SFFloat";
				break;
			case "transitionComplete":
				result = "SFBool";
				break;
			case "transitionTime":
				result = "SFTime";
				break;
			case "transitionType":
				result = "MFString";
				break;
			case "type":
				result = "MFString";
				break;
			case "visibilityLimit":
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
			case "avatarSize":
				result = "inputOutput";
				break;
			case "bindTime":
				result = "outputOnly";
				break;
			case "headlight":
				result = "inputOutput";
				break;
			case "isBound":
				result = "outputOnly";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "set_bind":
				result = "inputOnly";
				break;
			case "speed":
				result = "inputOutput";
				break;
			case "transitionComplete":
				result = "outputOnly";
				break;
			case "transitionTime":
				result = "inputOutput";
				break;
			case "transitionType":
				result = "inputOutput";
				break;
			case "type":
				result = "inputOutput";
				break;
			case "visibilityLimit":
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

	/** fromField ROUTE name for MFFloat field named <i>avatarSize</i>. */
	public static final String fromField_AVATARSIZE = "avatarSize";

	/** toField ROUTE name for MFFloat field named <i>avatarSize</i>. */
	public static final String toField_AVATARSIZE = "avatarSize";

	/** fromField ROUTE name for SFTime field named <i>bindTime</i>. */
	public static final String fromField_BINDTIME = "bindTime";

	/** fromField ROUTE name for SFBool field named <i>headlight</i>. */
	public static final String fromField_HEADLIGHT = "headlight";

	/** toField ROUTE name for SFBool field named <i>headlight</i>. */
	public static final String toField_HEADLIGHT = "headlight";

	/** fromField ROUTE name for SFBool field named <i>isBound</i>. */
	public static final String fromField_ISBOUND = "isBound";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** toField ROUTE name for SFBool field named <i>set_bind</i>. */
	public static final String toField_SET_BIND = "set_bind";

	/** fromField ROUTE name for SFFloat field named <i>speed</i>. */
	public static final String fromField_SPEED = "speed";

	/** toField ROUTE name for SFFloat field named <i>speed</i>. */
	public static final String toField_SPEED = "speed";

	/** fromField ROUTE name for SFBool field named <i>transitionComplete</i>. */
	public static final String fromField_TRANSITIONCOMPLETE = "transitionComplete";

	/** fromField ROUTE name for SFTime field named <i>transitionTime</i>. */
	public static final String fromField_TRANSITIONTIME = "transitionTime";

	/** toField ROUTE name for SFTime field named <i>transitionTime</i>. */
	public static final String toField_TRANSITIONTIME = "transitionTime";

	/** fromField ROUTE name for MFString field named <i>transitionType</i>. */
	public static final String fromField_TRANSITIONTYPE = "transitionType";

	/** toField ROUTE name for MFString field named <i>transitionType</i>. */
	public static final String toField_TRANSITIONTYPE = "transitionType";

	/** fromField ROUTE name for MFString field named <i>type</i>. */
	public static final String fromField_TYPE = "type";

	/** toField ROUTE name for MFString field named <i>type</i>. */
	public static final String toField_TYPE = "type";

	/** fromField ROUTE name for SFFloat field named <i>visibilityLimit</i>. */
	public static final String fromField_VISIBILITYLIMIT = "visibilityLimit";

	/** toField ROUTE name for SFFloat field named <i>visibilityLimit</i>. */
	public static final String toField_VISIBILITYLIMIT = "visibilityLimit";

	/** Constructor for NavigationInfoObject to initialize member variables with default values. */
	public NavigationInfoObject()
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

		avatarSize = AVATARSIZE_DEFAULT_VALUE;
		headlight = HEADLIGHT_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		speed = SPEED_DEFAULT_VALUE;
		transitionTime = TRANSITIONTIME_DEFAULT_VALUE;
		transitionType = TRANSITIONTYPE_DEFAULT_VALUE;
		type = TYPE_DEFAULT_VALUE;
		visibilityLimit = VISIBILITYLIMIT_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of Float results within allowed range of [0,infinity) from inputOutput MFFloat field named <i>avatarSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> avatarSize triplet values are: (a) collision distance between user and geometry (near clipping plane of the view frustrum) (b) viewer height above terrain (c) tallest height viewer can WALK over.
 * <ul>
 *  <li> <i>Warning:</i> X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. </li> 
 *  <li> <i>Hint:</i> keep (visibilityLimit / avatarSize.CollisionDistance) &amp;lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). </li> 
 *  <li> <i>Hint:</i>  Aliasing <br> <a href="https://en.wikipedia.org/wiki/Aliasing" target="_blank">https://en.wikipedia.org/wiki/Aliasing</a> Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of avatarSize field
	 */
	@Override
	public float[] getAvatarSize()
	{
		final float[] valuesArray = new float[avatarSize.size()];
		int i = 0;
		for (Float arrayElement : avatarSize) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat avatarSize field, similar to {@link #getAvatarSize()}.

	 * @return value of avatarSize field
	 */
	public ArrayList<Float> getAvatarSizeList()
	{
		return avatarSize;
	}

	/**
	 * Assign Float array within allowed range of [0,infinity) to inputOutput MFFloat field named <i>avatarSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> avatarSize triplet values are: (a) collision distance between user and geometry (near clipping plane of the view frustrum) (b) viewer height above terrain (c) tallest height viewer can WALK over. Warning: X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. Hint: keep (visibilityLimit / avatarSize.CollisionDistance) &lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). Hint: Aliasing https://en.wikipedia.org/wiki/Aliasing Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the avatarSize field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setAvatarSize(float[] newValue)
	{
		if (newValue == null)
		{
			clearAvatarSize(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		avatarSize.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			avatarSize.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat avatarSize field, similar to {@link #setAvatarSize(float[])}.
	 * @param newValue is new value for the avatarSize field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setAvatarSize(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearAvatarSize(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setAvatarSize(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat avatarSize field, similar to {@link #setAvatarSize(float[])}.
	 * @param newValue is new value for the avatarSize field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setAvatarSize(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearAvatarSize(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		avatarSize = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of avatarSize field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NavigationInfoObject clearAvatarSize()
	{
		avatarSize.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat avatarSize field, similar to {@link #setAvatarSize(float[])}.
	 * @param newValue is new value for the avatarSize field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setAvatarSize(int[] newValue)
	{
		if (newValue == null)
		{
			clearAvatarSize(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setAvatarSize(holdArray);
		return this;
	}
	/**
	 * Provide double value in seconds from outputOnly SFTime field named <i>bindTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Event sent reporting timestamp when node becomes active/inactive.  * <br>

	 * @return value of bindTime field
	 */
	@Override
	public double getBindTime()
	{
		return bindTime;
	}
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>headlight</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enable/disable directional light that always points in the direction the user is looking.  * <br>

	 * @return value of headlight field
	 */
	@Override
	public boolean getHeadlight()
	{
		return headlight;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>headlight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enable/disable directional light that always points in the direction the user is looking.
	 * @param newValue is new value for the headlight field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setHeadlight(boolean newValue)
	{
		headlight = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool headlight field, similar to {@link #setHeadlight(boolean)}.
	 * @param newValue is new value for the headlight field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setHeadlight(SFBoolObject newValue)
	{
		setHeadlight(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>isBound</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Output event true gets sent when node becomes bound and activated, otherwise output event false gets sent when node becomes unbound and deactivated.
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public NavigationInfoObject clearMetadata()
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NavigationInfoObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>speed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Default rate at which viewer travels through scene, meters/second.
 * <ul>
 *  <li> <i> Warning:</i>  default 1 m/s usually seems slow for ordinary navigation. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of speed field
	 */
	@Override
	public float getSpeed()
	{
		return speed;
	}

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>speed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Default rate at which viewer travels through scene, meters/second. Warning: default 1 m/s usually seems slow for ordinary navigation. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the speed field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setSpeed(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("NavigationInfo speed newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		speed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat speed field, similar to {@link #setSpeed(float)}.
	 * @param newValue is new value for the speed field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setSpeed(SFFloatObject newValue)
	{
		setSpeed(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from outputOnly SFBool field named <i>transitionComplete</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Event signaling viewpoint transition complete. Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of transitionComplete field
	 */
	@Override
	public boolean getTransitionComplete()
	{
		return transitionComplete;
	}
	/**
	 * Provide double value in seconds within allowed range of [0,infinity) from inputOutput SFTime field named <i>transitionTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.1 or later) Duration of viewpoint transition in seconds.
 * <ul>
 *  <li> <i> Hint:</i>  If transitionType is "ANIMATE", transitionTime provides browser-dependent animation parameters. Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of transitionTime field
	 */
	@Override
	public double getTransitionTime()
	{
		return transitionTime;
	}

	/**
	 * Assign double value in seconds within allowed range of [0,infinity) to inputOutput SFTime field named <i>transitionTime</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (X3D version 3.1 or later) Duration of viewpoint transition in seconds. Hint: If transitionType is "ANIMATE", transitionTime provides browser-dependent animation parameters. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the transitionTime field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setTransitionTime(double newValue)
	{
		transitionTime = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFTime transitionTime field, similar to {@link #setTransitionTime(double)}.
	 * @param newValue is new value for the transitionTime field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setTransitionTime(SFTimeObject newValue)
	{
		setTransitionTime(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of String enumeration results with quoted value(s) ["TELEPORT","LINEAR","ANIMATE",...] from inputOutput MFString field named <i>transitionType</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Camera transition between viewpoints. Enter one or more quoted SFString values: "ANIMATE" "TELEPORT" "LINEAR".
 * <ul>
 *  <li> <i> Hint:</i>  "ANIMATE" behavior is browser-specific, "TELEPORT" is immediate, and "LINEAR" may proceed directly through intervening objects. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #TRANSITIONTYPE_TELEPORT TELEPORT}, {@link #TRANSITIONTYPE_LINEAR LINEAR}, {@link #TRANSITIONTYPE_ANIMATE ANIMATE}.
	 * @return value of transitionType field
	 */
	@Override
	public String[] getTransitionType()
	{
		final String[] valuesArray = new String[transitionType.size()];
		int i = 0;
		for (String arrayElement : transitionType) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString transitionType field, similar to {@link #getTransitionType()}.

	 * @return value of transitionType field
	 */
	public ArrayList<String> getTransitionTypeList()
	{
		return transitionType;
	}

	/**
	 * Assign String enumeration array (""TELEPORT""|""LINEAR""|""ANIMATE"") with quoted value(s) ["TELEPORT","LINEAR","ANIMATE",...] to inputOutput MFString field named <i>transitionType</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #TRANSITIONTYPE_TELEPORT TELEPORT}, {@link #TRANSITIONTYPE_LINEAR LINEAR}, {@link #TRANSITIONTYPE_ANIMATE ANIMATE}).
	 * <br><br>
	 * <i>Tooltip:</i> Camera transition between viewpoints. Enter one or more quoted SFString values: "ANIMATE" "TELEPORT" "LINEAR". Hint: "ANIMATE" behavior is browser-specific, "TELEPORT" is immediate, and "LINEAR" may proceed directly through intervening objects.
	 * @param newValue is new value for the transitionType field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setTransitionType(String[] newValue)
	{
		if (newValue == null)
		{
			clearTransitionType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		transitionType.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			transitionType.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString transitionType field, similar to {@link #setTransitionType(String[])}.
	 * @param newValue is new value for the transitionType field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setTransitionType(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearTransitionType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setTransitionType(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString transitionType field, similar to {@link #setTransitionType(String[])}.
	 * @param newValue is new value for the transitionType field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setTransitionType(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearTransitionType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setTransitionType(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString transitionType field, similar to {@link #setTransitionType(String[])}.
	 * @param newValue is new value for the transitionType field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setTransitionType(String newValue)
	{
		if (newValue == null)
		{
			clearTransitionType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setTransitionType(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString transitionType field, similar to {@link #setTransitionType(String[])}.
	 * @param newValue is new value for the transitionType field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setTransitionType(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearTransitionType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		transitionType = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of transitionType field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NavigationInfoObject clearTransitionType()
	{
		transitionType.clear(); // reset
		return this;
	}
	/**
	 * Provide array of String enumeration results with quoted value(s) ["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] from inputOutput MFString field named <i>type</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enter one or more quoted SFString values: "EXAMINE" "WALK" "FLY" "LOOKAT" "EXPLORE" "ANY" "NONE".
 * <ul>
 *  <li> <i>Hint:</i> for inspection of simple objects, usability often improves with type="EXAMINE" "ANY". </li> 
 *  <li> <i>Hint:</i> types WALK and FLY force strict camera-to-object collision detection. </li> 
 *  <li> <i>Hint:</i> see Collision node for further details on camera-to-object collision detection. </li> 
 *  <li> <i>Hint:</i>  MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." ] Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #TYPE_ANY ANY}, {@link #TYPE_WALK WALK}, {@link #TYPE_EXAMINE EXAMINE}, {@link #TYPE_FLY FLY}, {@link #TYPE_LOOKAT LOOKAT}, {@link #TYPE_NONE NONE}, {@link #TYPE_EXPLORE EXPLORE}.
	 * @return value of type field
	 */
	@Override
	public String[] getType()
	{
		final String[] valuesArray = new String[type.size()];
		int i = 0;
		for (String arrayElement : type) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString type field, similar to {@link #getType()}.

	 * @return value of type field
	 */
	public ArrayList<String> getTypeList()
	{
		return type;
	}

	/**
	 * Assign String enumeration array (""ANY""|""WALK""|""EXAMINE""|""FLY""|""LOOKAT""|""NONE""|""EXPLORE"") with quoted value(s) ["ANY","WALK","EXAMINE","FLY","LOOKAT","NONE","EXPLORE",...] to inputOutput MFString field named <i>type</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #TYPE_ANY ANY}, {@link #TYPE_WALK WALK}, {@link #TYPE_EXAMINE EXAMINE}, {@link #TYPE_FLY FLY}, {@link #TYPE_LOOKAT LOOKAT}, {@link #TYPE_NONE NONE}, {@link #TYPE_EXPLORE EXPLORE}).
	 * <br><br>
	 * <i>Tooltip:</i> Enter one or more quoted SFString values: "EXAMINE" "WALK" "FLY" "LOOKAT" "EXPLORE" "ANY" "NONE". Hint: for inspection of simple objects, usability often improves with type="EXAMINE" "ANY". Hint: types WALK and FLY force strict camera-to-object collision detection. Hint: see Collision node for further details on camera-to-object collision detection. Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." ] Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the type field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setType(String[] newValue)
	{
		if (newValue == null)
		{
			clearType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		type.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			type.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString type field, similar to {@link #setType(String[])}.
	 * @param newValue is new value for the type field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setType(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setType(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString type field, similar to {@link #setType(String[])}.
	 * @param newValue is new value for the type field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setType(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setType(MFStringObject.cleanupEnumerationValues(newValue.toString())); // enumeration values
		return this;
	}
	/**
	 * Assign singleton String value to MFString type field, similar to {@link #setType(String[])}.
	 * @param newValue is new value for the type field.
	 * @see MFStringObject#cleanupEnumerationValues(String)
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setType(String newValue)
	{
		if (newValue == null)
		{
			clearType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setType(MFStringObject.cleanupEnumerationValues(newValue)); // enumeration values
		return this;
	}
	/**
	 * Assign ArrayList value of MFString type field, similar to {@link #setType(String[])}.
	 * @param newValue is new value for the type field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setType(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearType(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		type = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of type field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NavigationInfoObject clearType()
	{
		type.clear(); // reset
		return this;
	}
	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>visibilityLimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Geometry beyond the visibilityLimit may not be rendered (far clipping plane of the view frustrum).
 * <ul>
 *  <li> <i>Hint:</i> visibilityLimit=0.0 indicates an infinite visibility limit (no far clipping plane). </li> 
 *  <li> <i>Hint:</i> keep visibilityLimit &amp;gt;= zero. </li> 
 *  <li> <i>Warning:</i> X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. </li> 
 *  <li> <i>Hint:</i> keep (visibilityLimit / avatarSize.CollisionDistance) &amp;lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). </li> 
 *  <li> <i>Hint:</i>  Aliasing <br> <a href="https://en.wikipedia.org/wiki/Aliasing" target="_blank">https://en.wikipedia.org/wiki/Aliasing</a> Interchange profile hint: this field may be ignored, applying the default value regardless. </li> 
 * </ul>
	 * @return value of visibilityLimit field
	 */
	@Override
	public float getVisibilityLimit()
	{
		return visibilityLimit;
	}

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>visibilityLimit</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Geometry beyond the visibilityLimit may not be rendered (far clipping plane of the view frustrum). Hint: visibilityLimit=0.0 indicates an infinite visibility limit (no far clipping plane). Hint: keep visibilityLimit &gt;= zero. Warning: X3D specification recommends that browsers set near clipping plane to one-half of avatarSize.CollisionDistance value. Hint: keep (visibilityLimit / avatarSize.CollisionDistance) &lt; 10,000 to avoid aliasing artifacts (i.e. polygon "tearing"). Hint: Aliasing https://en.wikipedia.org/wiki/Aliasing Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the visibilityLimit field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setVisibilityLimit(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("NavigationInfo visibilityLimit newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		visibilityLimit = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat visibilityLimit field, similar to {@link #setVisibilityLimit(float)}.
	 * @param newValue is new value for the visibilityLimit field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setVisibilityLimit(SFFloatObject newValue)
	{
		setVisibilityLimit(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final NavigationInfoObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to NavigationInfo
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("NavigationInfo DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("NavigationInfo DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setDEF(SFStringObject newValue)
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final NavigationInfoObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to NavigationInfo
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("NavigationInfo USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("NavigationInfo USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final NavigationInfoObject setCssClass(String newValue)
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setCssClass(SFStringObject newValue)
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NavigationInfoObject setIS(ISObject newValue)
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NavigationInfoObject setUSE(NavigationInfoObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on NavigationInfoObject" +
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
	public NavigationInfoObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public NavigationInfoObject addComments (String newComment)
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public NavigationInfoObject addComments (String[] newComments)
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
	 * @return {@link NavigationInfoObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public NavigationInfoObject addComments (CommentsBlock newCommentsBlock)
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

		stringX3D.append(indent).append("<NavigationInfo"); // start opening tag
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
                            
			if (((getAvatarSize().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" avatarSize='").append(MFFloatObject.toString(getAvatarSize())).append("'");
			}
			if (((getHeadlight() != HEADLIGHT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" headlight='").append(SFBoolObject.toString(getHeadlight())).append("'");
			}
			if (((getSpeed() != SPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" speed='").append(SFFloatObject.toString(getSpeed())).append("'");
			}
			if (((getTransitionTime() != TRANSITIONTIME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" transitionTime='").append(SFTimeObject.toString(getTransitionTime())).append("'");
			}
			if (((getTransitionType().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" transitionType='").append(new MFStringObject(getTransitionType()).toStringX3D()).append("'");
			}
			if (((getType().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" type='").append(new MFStringObject(getType()).toStringX3D()).append("'");
			}
			if (((getVisibilityLimit() != VISIBILITYLIMIT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" visibilityLimit='").append(SFFloatObject.toString(getVisibilityLimit())).append("'");
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
			stringX3D.append(indent).append("</NavigationInfo>").append("\n"); // finish closing tag
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
			stringClassicVRML.append("NavigationInfo").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("avatarSize"))
						{
							stringClassicVRML.append(indentCharacter).append("avatarSize").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getAvatarSize().length > 0)
				{
					stringClassicVRML.append("avatarSize ").append("[ ").append(MFFloatObject.toString(getAvatarSize())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("headlight"))
						{
							stringClassicVRML.append(indentCharacter).append("headlight").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getHeadlight() != HEADLIGHT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("headlight ").append(SFBoolObject.toString(getHeadlight())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("speed"))
						{
							stringClassicVRML.append(indentCharacter).append("speed").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSpeed() != SPEED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("speed ").append(SFFloatObject.toString(getSpeed())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("transitionTime"))
						{
							stringClassicVRML.append(indentCharacter).append("transitionTime").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getTransitionTime() != TRANSITIONTIME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("transitionTime ").append(SFTimeObject.toString(getTransitionTime())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("transitionType"))
						{
							stringClassicVRML.append(indentCharacter).append("transitionType").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getTransitionType().length > 0)
				{
					stringClassicVRML.append("transitionType ").append("[ ").append(MFStringObject.toString(getTransitionType())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("type"))
						{
							stringClassicVRML.append(indentCharacter).append("type").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getType().length > 0)
				{
					stringClassicVRML.append("type ").append("[ ").append(MFStringObject.toString(getType())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("visibilityLimit"))
						{
							stringClassicVRML.append(indentCharacter).append("visibilityLimit").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getVisibilityLimit() != VISIBILITYLIMIT_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("visibilityLimit ").append(SFFloatObject.toString(getVisibilityLimit())).append("\n").append(indent).append(indentCharacter);
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

		setAvatarSize(getAvatarSize()); // exercise field checks, simple types

		setHeadlight(getHeadlight()); // exercise field checks, simple types

		setSpeed(getSpeed()); // exercise field checks, simple types

		setTransitionTime(getTransitionTime()); // exercise field checks, simple types

		setTransitionType(getTransitionType()); // exercise field checks, simple types

		setType(getType()); // exercise field checks, simple types

		setVisibilityLimit(getVisibilityLimit()); // exercise field checks, simple types

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
			String errorNotice = "NavigationInfo USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "NavigationInfo USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("Navigation") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Interchange") &&
				!modelProfile.equals("CADInterchange") &&
				!modelProfile.equals("Interactive") &&
				!modelProfile.equals("Interactive") &&
				!modelProfile.equals("Immersive") &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("MPEG4Interactive") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Navigation' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Navigation\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
