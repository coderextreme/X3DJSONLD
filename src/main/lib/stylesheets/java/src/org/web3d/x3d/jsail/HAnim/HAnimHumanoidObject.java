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

package org.web3d.x3d.jsail.HAnim;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.HAnim.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.HAnim.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: The HAnimHumanoid node is used to: (a) store references to the joints, segments, sites, skeleton, optional skin, and fixed viewpoints, (b) serve as a container for the entire humanoid, (c) provide a convenient way of moving the humanoid through its environment, and (d) store human-readable metadata such as name, version, author, copyright, age, gender and other information. HAnimHumanoid contains a skeleton consisting of HAnimJoint, HAnimSegment and HAnimSite nodes. HAnimHumanoid can also contain an optional skin consisting of an IndexedFaceSet mesh with corresponding skinCoord Coordinate|CoordinateDouble vertices and skinNormal Normal vectors.
 * <ul>
 *  <li> <i>Hint:</i> MFNode arrays for the joints, segments, sites, and viewpoints fields provide lists for all HAnim nodes found in the skeleton hierarchy and thus only contain USE node references. </li> 
 *  <li> <i>Hint:</i> H-Anim Specification <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/HAnimArchitecture.html</a> </li> 
 *  <li> <i>Hint:</i> H-Anim Specification, Humanoid <br> <a href="http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Humanoid" target="_blank">http://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/ObjectInterfaces.html#Humanoid</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/HumanoidAnimation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='H-Anim' level='1'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html#HAnimHumanoid" target="blank">X3D Abstract Specification: HAnimHumanoid</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimHumanoid" target="_blank">X3D Tooltips: HAnimHumanoid</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class HAnimHumanoidObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.HAnim.HAnimHumanoid
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private float[] center; // SFVec3f

	private ArrayList<String> info = new ArrayList<>(); // MFString

	private ArrayList<HAnimJoint> joints = new ArrayList<>(); // MFNode acceptable node types: HAnimJoint

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private String name; // SFString

	private float[] rotation; // SFRotation

	private float[] scale; // SFVec3f

	private float[] scaleOrientation; // SFRotation

	private ArrayList<HAnimSegment> segments = new ArrayList<>(); // MFNode acceptable node types: HAnimSegment

	private ArrayList<HAnimSite> sites = new ArrayList<>(); // MFNode acceptable node types: HAnimSite

	private ArrayList<X3DNode> skeleton = new ArrayList<>(); // MFNode acceptable node types: HAnimJoint|HAnimSite

	private ArrayList<X3DNode> skin = new ArrayList<>(); // MFNode acceptable node types: Group|Transform|Shape|IndexedFaceSet

	private X3DCoordinateNode skinCoord; // SFNode acceptable node types: X3DCoordinateNode
	private ProtoInstanceObject skinCoordProtoInstance; // allowed alternative for skinCoord field

	private X3DNormalNode skinNormal; // SFNode acceptable node types: X3DNormalNode
	private ProtoInstanceObject skinNormalProtoInstance; // allowed alternative for skinNormal field

	private float[] translation; // SFVec3f

	private String version; // SFString

	private ArrayList<HAnimSite> viewpoints = new ArrayList<>(); // MFNode acceptable node types: HAnimSite

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>version</i> can equal this enumeration value <i>"2.0"</i> (Java syntax) or <i>2.0</i> (XML syntax). */
	public static final String VERSION_2_0 = "2.0";

	/** SFString field named <i>version</i> can equal this enumeration value <i>"2.2"</i> (Java syntax) or <i>2.2</i> (XML syntax). */
	public static final String VERSION_2_2 = "2.2";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>HAnimHumanoid</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "HAnimHumanoid";

	/** Provides name of this element: <i>HAnimHumanoid</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>HAnimHumanoid</i> element: <i>H-Anim</i> */
	public static final String COMPONENT = "H-Anim";

	/** Defines X3D component for the <i>HAnimHumanoid</i> element: <i>H-Anim</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>H-Anim</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFVec3f field named <i>bboxCenter</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] BBOXCENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** SFVec3f field named <i>bboxSize</i> has default value <i>{-1f,-1f,-1f}</i> (Java syntax) or <i>-1 -1 -1</i> (XML syntax). */
	public static final float[] BBOXSIZE_DEFAULT_VALUE = {-1f,-1f,-1f};

	/** SFVec3f field named <i>center</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] CENTER_DEFAULT_VALUE = {0f,0f,0f};

	/** MFString field named <i>info</i> has default value equal to an empty list. */
	public static final ArrayList<String> INFO_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** SFString field named <i>name</i> has default value equal to an empty string. */
	public static final String NAME_DEFAULT_VALUE = "";

	/** SFRotation field named <i>rotation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] ROTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** SFVec3f field named <i>scale</i> has default value <i>{1f,1f,1f}</i> (Java syntax) or <i>1 1 1</i> (XML syntax). */
	public static final float[] SCALE_DEFAULT_VALUE = {1f,1f,1f};

	/** SFRotation field named <i>scaleOrientation</i> has default value <i>{0f,0f,1f,0f}</i> (Java syntax) or <i>0 0 1 0</i> (XML syntax). */
	public static final float[] SCALEORIENTATION_DEFAULT_VALUE = {0f,0f,1f,0f};

	/** SFVec3f field named <i>translation</i> has default value <i>{0f,0f,0f}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final float[] TRANSLATION_DEFAULT_VALUE = {0f,0f,0f};

	/** SFString field named <i>version</i> has default value <i>"2.2"</i> (Java syntax) or <i>2.2</i> (XML syntax). */
	public static final String VERSION_DEFAULT_VALUE = "2.2";

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
			case "bboxCenter":
				result = "SFVec3f";
				break;
			case "bboxSize":
				result = "SFVec3f";
				break;
			case "center":
				result = "SFVec3f";
				break;
			case "info":
				result = "MFString";
				break;
			case "joints":
				result = "MFNode";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "name":
				result = "SFString";
				break;
			case "rotation":
				result = "SFRotation";
				break;
			case "scale":
				result = "SFVec3f";
				break;
			case "scaleOrientation":
				result = "SFRotation";
				break;
			case "segments":
				result = "MFNode";
				break;
			case "sites":
				result = "MFNode";
				break;
			case "skeleton":
				result = "MFNode";
				break;
			case "skin":
				result = "MFNode";
				break;
			case "skinCoord":
				result = "SFNode";
				break;
			case "skinNormal":
				result = "SFNode";
				break;
			case "translation":
				result = "SFVec3f";
				break;
			case "version":
				result = "SFString";
				break;
			case "viewpoints":
				result = "MFNode";
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
			case "bboxCenter":
				result = "initializeOnly";
				break;
			case "bboxSize":
				result = "initializeOnly";
				break;
			case "center":
				result = "inputOutput";
				break;
			case "info":
				result = "inputOutput";
				break;
			case "joints":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "name":
				result = "inputOutput";
				break;
			case "rotation":
				result = "inputOutput";
				break;
			case "scale":
				result = "inputOutput";
				break;
			case "scaleOrientation":
				result = "inputOutput";
				break;
			case "segments":
				result = "inputOutput";
				break;
			case "sites":
				result = "inputOutput";
				break;
			case "skeleton":
				result = "inputOutput";
				break;
			case "skin":
				result = "inputOutput";
				break;
			case "skinCoord":
				result = "inputOutput";
				break;
			case "skinNormal":
				result = "inputOutput";
				break;
			case "translation":
				result = "inputOutput";
				break;
			case "version":
				result = "inputOutput";
				break;
			case "viewpoints":
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

	/** fromField ROUTE name for SFVec3f field named <i>center</i>. */
	public static final String fromField_CENTER = "center";

	/** toField ROUTE name for SFVec3f field named <i>center</i>. */
	public static final String toField_CENTER = "center";

	/** fromField ROUTE name for MFString field named <i>info</i>. */
	public static final String fromField_INFO = "info";

	/** toField ROUTE name for MFString field named <i>info</i>. */
	public static final String toField_INFO = "info";

	/** fromField ROUTE name for MFNode field named <i>joints</i>. */
	public static final String fromField_JOINTS = "joints";

	/** toField ROUTE name for MFNode field named <i>joints</i>. */
	public static final String toField_JOINTS = "joints";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFString field named <i>name</i>. */
	public static final String fromField_NAME = "name";

	/** toField ROUTE name for SFString field named <i>name</i>. */
	public static final String toField_NAME = "name";

	/** fromField ROUTE name for SFRotation field named <i>rotation</i>. */
	public static final String fromField_ROTATION = "rotation";

	/** toField ROUTE name for SFRotation field named <i>rotation</i>. */
	public static final String toField_ROTATION = "rotation";

	/** fromField ROUTE name for SFVec3f field named <i>scale</i>. */
	public static final String fromField_SCALE = "scale";

	/** toField ROUTE name for SFVec3f field named <i>scale</i>. */
	public static final String toField_SCALE = "scale";

	/** fromField ROUTE name for SFRotation field named <i>scaleOrientation</i>. */
	public static final String fromField_SCALEORIENTATION = "scaleOrientation";

	/** toField ROUTE name for SFRotation field named <i>scaleOrientation</i>. */
	public static final String toField_SCALEORIENTATION = "scaleOrientation";

	/** fromField ROUTE name for MFNode field named <i>segments</i>. */
	public static final String fromField_SEGMENTS = "segments";

	/** toField ROUTE name for MFNode field named <i>segments</i>. */
	public static final String toField_SEGMENTS = "segments";

	/** fromField ROUTE name for MFNode field named <i>sites</i>. */
	public static final String fromField_SITES = "sites";

	/** toField ROUTE name for MFNode field named <i>sites</i>. */
	public static final String toField_SITES = "sites";

	/** fromField ROUTE name for MFNode field named <i>skeleton</i>. */
	public static final String fromField_SKELETON = "skeleton";

	/** toField ROUTE name for MFNode field named <i>skeleton</i>. */
	public static final String toField_SKELETON = "skeleton";

	/** fromField ROUTE name for MFNode field named <i>skin</i>. */
	public static final String fromField_SKIN = "skin";

	/** toField ROUTE name for MFNode field named <i>skin</i>. */
	public static final String toField_SKIN = "skin";

	/** fromField ROUTE name for SFNode field named <i>skinCoord</i>. */
	public static final String fromField_SKINCOORD = "skinCoord";

	/** toField ROUTE name for SFNode field named <i>skinCoord</i>. */
	public static final String toField_SKINCOORD = "skinCoord";

	/** fromField ROUTE name for SFNode field named <i>skinNormal</i>. */
	public static final String fromField_SKINNORMAL = "skinNormal";

	/** toField ROUTE name for SFNode field named <i>skinNormal</i>. */
	public static final String toField_SKINNORMAL = "skinNormal";

	/** fromField ROUTE name for SFVec3f field named <i>translation</i>. */
	public static final String fromField_TRANSLATION = "translation";

	/** toField ROUTE name for SFVec3f field named <i>translation</i>. */
	public static final String toField_TRANSLATION = "translation";

	/** fromField ROUTE name for SFString field named <i>version</i>. */
	public static final String fromField_VERSION = "version";

	/** toField ROUTE name for SFString field named <i>version</i>. */
	public static final String toField_VERSION = "version";

	/** fromField ROUTE name for MFNode field named <i>viewpoints</i>. */
	public static final String fromField_VIEWPOINTS = "viewpoints";

	/** toField ROUTE name for MFNode field named <i>viewpoints</i>. */
	public static final String toField_VIEWPOINTS = "viewpoints";

	/** Constructor for HAnimHumanoidObject to initialize member variables with default values. */
	public HAnimHumanoidObject()
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

		bboxCenter = BBOXCENTER_DEFAULT_VALUE;
		bboxSize = BBOXSIZE_DEFAULT_VALUE;
		center = CENTER_DEFAULT_VALUE;
		info = new ArrayList<>(INFO_DEFAULT_VALUE);
		joints = new ArrayList<>();
		metadata = null; // clear out any prior node
		name = NAME_DEFAULT_VALUE;
		rotation = ROTATION_DEFAULT_VALUE;
		scale = SCALE_DEFAULT_VALUE;
		scaleOrientation = SCALEORIENTATION_DEFAULT_VALUE;
		segments = new ArrayList<>();
		sites = new ArrayList<>();
		skeleton = new ArrayList<>();
		skin = new ArrayList<>();
		skinCoord = null; // clear out any prior node
		skinNormal = null; // clear out any prior node
		translation = TRANSLATION_DEFAULT_VALUE;
		version = VERSION_DEFAULT_VALUE;
		viewpoints = new ArrayList<>();

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 3-tuple float results from initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxCenter field
	 */
	@Override
	public float[] getBboxCenter()
	{
		return bboxCenter;
	}

	/**
	 * Assign 3-tuple float array to initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box center accompanies bboxSize and provides an optional hint for bounding box position offset from origin of local coordinate system. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setBboxCenter(float x, float y, float z)
	{
		setBboxCenter(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results within allowed range of [0,infinity), or default value [-1 -1 -1], from initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint.
 * <ul>
 *  <li> <i>Hint:</i> can be useful for collision computations or inverse-kinematics (IK) engines. </li> 
 *  <li> <i>Hint:</i>  precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size. </li> 
 * </ul>
	 * @return value of bboxSize field
	 */
	@Override
	public float[] getBboxSize()
	{
		return bboxSize;
	}

	/**
	 * Assign 3-tuple float array within allowed range of [0,infinity), or default value [-1 -1 -1], to initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Bounding box size is usually omitted, and can easily be calculated automatically by an X3D player at scene-loading time with minimal computational cost. Bounding box size can also be defined as an optional authoring hint that suggests an optimization or constraint. Hint: can be useful for collision computations or inverse-kinematics (IK) engines. Hint: precomputation and inclusion of bounding box information can speed up the initialization of large detailed models, with a corresponding cost of increased file size.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Translation offset from origin of local coordinate system.  * <br>

	 * @return value of center field
	 */
	@Override
	public float[] getCenter()
	{
		return center;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Translation offset from origin of local coordinate system.
	 * @param newValue is new value for the center field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid center newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		center = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f center field, similar to {@link #setCenter(float[])}.
	 * @param newValue is new value for the center field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setCenter(SFVec3fObject newValue)
	{
		setCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f center field, similar to {@link #setCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setCenter(float x, float y, float z)
	{
		setCenter(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of String results from inputOutput MFString field named <i>info</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains metadata keyword=value pairs, where approved keyword terms are humanoidVersion authorName authorEmail copyright creationDate usageRestrictions age gender height and weight.
 * <ul>
 *  <li> <i> Hint:</i>  alternate metadata keywords are also allowed. </li> 
 * </ul>
	 * @return value of info field
	 */
	@Override
	public String[] getInfo()
	{
		final String[] valuesArray = new String[info.size()];
		int i = 0;
		for (String arrayElement : info) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString info field, similar to {@link #getInfo()}.

	 * @return value of info field
	 */
	public ArrayList<String> getInfoList()
	{
		return info;
	}

	/**
	 * Assign String array to inputOutput MFString field named <i>info</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Contains metadata keyword=value pairs, where approved keyword terms are humanoidVersion authorName authorEmail copyright creationDate usageRestrictions age gender height and weight. Hint: alternate metadata keywords are also allowed.
	 * @param newValue is new value for the info field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setInfo(String[] newValue)
	{
		if (newValue == null)
		{
			clearInfo(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		info.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			info.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString info field, similar to {@link #setInfo(String[])}.
	 * @param newValue is new value for the info field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setInfo(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearInfo(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setInfo(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString info field, similar to {@link #setInfo(String[])}.
	 * @param newValue is new value for the info field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setInfo(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearInfo(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setInfo(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString info field, similar to {@link #setInfo(String[])}.
	 * @param newValue is new value for the info field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setInfo(String newValue)
	{
		if (newValue == null)
		{
			clearInfo(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		info.clear();
		info.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString info field, similar to {@link #setInfo(String[])}.
	 * @param newValue is new value for the info field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setInfo(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearInfo(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		info = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of info field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject clearInfo()
	{
		info.clear(); // reset
		return this;
	}
	/**
	 * Provide array of HAnimJoint results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint] joints field contains a list of USE references for all HAnimJoint node instances found within the skeleton hierarchy.
 * <ul>
 *  <li> <i>Hint:</i> order is irrelevant since names are contained in the original DEF objects. </li> 
 *  <li> <i>Hint:</i> these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. </li> 
 *  <li> <i>Warning:</i> the number of contained &amp;lt;HAnimJoint USE='*' containerField='joints'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimJoint USE nodes must include containerField='joints' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimJointObject
	 * @return value of joints field
	 */
	@Override
	public X3DNode[] getJoints()
	{
		final X3DNode[] valuesArray = new X3DNode[joints.size()];
		int i = 0;
		for (HAnimJoint arrayElement : joints) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode joints field, similar to {@link #getJoints()}.

	 * @return value of joints field
	 */
	public ArrayList<HAnimJoint> getJointsList()
	{
		return joints;
	}

	/**
	 * Assign HAnimJoint array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>joints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint] joints field contains a list of USE references for all HAnimJoint node instances found within the skeleton hierarchy. Hint: order is irrelevant since names are contained in the original DEF objects. Hint: these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. Warning: the number of contained &lt;HAnimJoint USE='*' containerField='joints'/&gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimJoint node instances found within the skeleton hierarchy. Warning: top-level HAnimJoint USE nodes must include containerField='joints' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint.
	 * @param newValue is new value for the joints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setJoints(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearJoints(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		joints.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimJoint)
			{
				joints.add((HAnimJoint)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimJoint; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode joints field, similar to {@link #setJoints(X3DNode[])}.
	 * @param newValue is new value for the joints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setJoints(ArrayList<HAnimJoint> newValue)
	{
		if (newValue == null)
		{
			clearJoints(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		joints = newValue;
		for (HAnimJoint element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child joints node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint.
	 * @param newValue is new value to be appended the joints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimHumanoidObject addJoints(HAnimJointObject newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		joints.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child joints nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint.
	 * @param newValue is new value array to be appended the joints field.
	 */
	@Override
	public void addJoints(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimJoint)
			{
				joints.add((HAnimJoint)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimJoint; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child joints node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to HAnimJoint.
	 * @param newValue is new node for the joints field (restricted to HAnimJoint)
	 */
	@Override
	public void setJoints(X3DNode newValue)
	{
		if (newValue == null)
		{
			joints.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof HAnimJoint)
		{
			for (HAnimJoint element : joints)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			joints.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			joints.add((HAnimJoint)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof HAnimJoint; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of joints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject clearJoints()
	{
		for (HAnimJoint element : joints)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		joints.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>joints</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getJoints()
	 */
	public boolean hasJoints()
	{
		return (!joints.isEmpty());
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public HAnimHumanoidObject clearMetadata()
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide String value from inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that each HAnimHumanoid node in a scene can be identified at run time for animation purposes.
 * <ul>
 *  <li> <i>Hint:</i> this same name is a required name prefix for all other HAnim nodes within the HAnimHumanoid. </li> 
 *  <li> <i>Warning:</i> name is not included if this instance is a USE node. </li> 
 *  <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Naming Conventions <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions</a> </li> 
 * </ul>
	 * @return value of name field
	 */
	@Override
	public String getName()
	{
		return name;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>name</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Unique name attribute must be defined so that each HAnimHumanoid node in a scene can be identified at run time for animation purposes. Hint: this same name is a required name prefix for all other HAnim nodes within the HAnimHumanoid. Warning: name is not included if this instance is a USE node. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>@see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimHumanoidObject setName(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimHumanoid
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid name newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimHumanoid name newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		name = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString name field, similar to {@link #setName(String)}.
	 * @param newValue is new value for the name field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setName(SFStringObject newValue)
	{
		setName(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system.
 * <ul>
 *  <li> <i> Warning:</i>  default pose is typically empty (or an identity rotation) to avoid distorted body animations. </li> 
 * </ul>
	 * @return value of rotation field
	 */
	@Override
	public float[] getRotation()
	{
		return rotation;
	}

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>rotation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Orientation of children relative to local coordinate system. Warning: default pose is typically empty (or an identity rotation) to avoid distorted body animations.
	 * @param newValue is new value for the rotation field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setRotation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid rotation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		rotation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation rotation field, similar to {@link #setRotation(float[])}.
	 * @param newValue is new value for the rotation field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setRotation(SFRotationObject newValue)
	{
		setRotation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFRotation rotation field, similar to {@link #setRotation(float[])}.

	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis

	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setRotation(float x, float y, float z, float angleRadians)
	{
		setRotation(new float[] {x, y, z, angleRadians});
		return this;
	}
	/**
	 * Provide array of 3-tuple float results within allowed range of (0,infinity) from inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.  * <br>

	 * @return value of scale field
	 */
	@Override
	public float[] getScale()
	{
		return scale;
	}

	/**
	 * Assign 3-tuple float array within allowed range of (0,infinity) to inputOutput SFVec3f field named <i>scale</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Non-uniform x-y-z scale of child coordinate system, adjusted by center and scaleOrientation.
	 * @param newValue is new value for the scale field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setScale(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid scale newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if ((newValue[0] <= 0f) || (newValue[1] <= 0f) || (newValue[2] <= 0f)) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid scale newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
            }
		scale = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f scale field, similar to {@link #setScale(float[])}.
	 * @param newValue is new value for the scale field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setScale(SFVec3fObject newValue)
	{
		setScale(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f scale field, similar to {@link #setScale(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setScale(float x, float y, float z)
	{
		setScale(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 4-tuple float results unit axis, angle (in radians) from inputOutput SFRotation field named <i>scaleOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Preliminary rotation of coordinate system before scaling (to allow scaling around arbitrary orientations).  * <br>

	 * @return value of scaleOrientation field
	 */
	@Override
	public float[] getScaleOrientation()
	{
		return scaleOrientation;
	}

	/**
	 * Assign 4-tuple float array unit axis, angle (in radians) to inputOutput SFRotation field named <i>scaleOrientation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Preliminary rotation of coordinate system before scaling (to allow scaling around arbitrary orientations).
	 * @param newValue is new value for the scaleOrientation field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setScaleOrientation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 4) // 4-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid scaleOrientation newValue=" + SFRotationObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 4");
		}
		scaleOrientation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFRotation scaleOrientation field, similar to {@link #setScaleOrientation(float[])}.
	 * @param newValue is new value for the scaleOrientation field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setScaleOrientation(SFRotationObject newValue)
	{
		setScaleOrientation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFRotation scaleOrientation field, similar to {@link #setScaleOrientation(float[])}.

	 * @param x first component of axis
	 * @param y second component of axis
	 * @param z third component of axis
	 * @param angleRadians fourth component of rotation around axis

	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setScaleOrientation(float x, float y, float z, float angleRadians)
	{
		setScaleOrientation(new float[] {x, y, z, angleRadians});
		return this;
	}
	/**
	 * Provide array of HAnimSegment results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>segments</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSegment] segments field contains a list of USE references for all HAnimSegment node instances found within the skeleton hierarchy.
 * <ul>
 *  <li> <i>Hint:</i> order is irrelevant since names are contained in the original DEF objects. </li> 
 *  <li> <i>Hint:</i> these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. </li> 
 *  <li> <i>Warning:</i> the number of contained &amp;lt;HAnimSegment USE='*' containerField='segments'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSegment node instances found within the skeleton hierarchy. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimSegment USE nodes must include containerField='segments' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSegment.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSegmentObject
	 * @return value of segments field
	 */
	@Override
	public X3DNode[] getSegments()
	{
		final X3DNode[] valuesArray = new X3DNode[segments.size()];
		int i = 0;
		for (HAnimSegment arrayElement : segments) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode segments field, similar to {@link #getSegments()}.

	 * @return value of segments field
	 */
	public ArrayList<HAnimSegment> getSegmentsList()
	{
		return segments;
	}

	/**
	 * Assign HAnimSegment array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>segments</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSegment] segments field contains a list of USE references for all HAnimSegment node instances found within the skeleton hierarchy. Hint: order is irrelevant since names are contained in the original DEF objects. Hint: these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. Warning: the number of contained &lt;HAnimSegment USE='*' containerField='segments'/&gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSegment node instances found within the skeleton hierarchy. Warning: top-level HAnimSegment USE nodes must include containerField='segments' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSegment.
	 * @param newValue is new value for the segments field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setSegments(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearSegments(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		segments.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimSegment)
			{
				segments.add((HAnimSegment)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimSegment; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode segments field, similar to {@link #setSegments(X3DNode[])}.
	 * @param newValue is new value for the segments field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setSegments(ArrayList<HAnimSegment> newValue)
	{
		if (newValue == null)
		{
			clearSegments(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		segments = newValue;
		for (HAnimSegment element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child segments node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSegment.
	 * @param newValue is new value to be appended the segments field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimHumanoidObject addSegments(HAnimSegmentObject newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		segments.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child segments nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSegment.
	 * @param newValue is new value array to be appended the segments field.
	 */
	@Override
	public void addSegments(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimSegment)
			{
				segments.add((HAnimSegment)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimSegment; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child segments node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to HAnimSegment.
	 * @param newValue is new node for the segments field (restricted to HAnimSegment)
	 */
	@Override
	public void setSegments(X3DNode newValue)
	{
		if (newValue == null)
		{
			segments.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof HAnimSegment)
		{
			for (HAnimSegment element : segments)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			segments.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			segments.add((HAnimSegment)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof HAnimSegment; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of segments field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject clearSegments()
	{
		for (HAnimSegment element : segments)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		segments.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>segments</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getSegments()
	 */
	public boolean hasSegments()
	{
		return (!segments.isEmpty());
	}
	/**
	 * Provide array of HAnimSite results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>sites</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] sites field contains a list of USE references for all HAnimSite node instances found within the skeleton hierarchy.
 * <ul>
 *  <li> <i>Hint:</i> order is irrelevant since names are contained in the original DEF objects. </li> 
 *  <li> <i>Hint:</i> these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. </li> 
 *  <li> <i>Warning:</i> the number of contained &amp;lt;HAnimSite USE='*' containerField='sites'/&amp;gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSite node instances found within the skeleton hierarchy. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimSite USE nodes must include containerField='sites' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of sites field
	 */
	@Override
	public X3DNode[] getSites()
	{
		final X3DNode[] valuesArray = new X3DNode[sites.size()];
		int i = 0;
		for (HAnimSite arrayElement : sites) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode sites field, similar to {@link #getSites()}.

	 * @return value of sites field
	 */
	public ArrayList<HAnimSite> getSitesList()
	{
		return sites;
	}

	/**
	 * Assign HAnimSite array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>sites</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] sites field contains a list of USE references for all HAnimSite node instances found within the skeleton hierarchy. Hint: order is irrelevant since names are contained in the original DEF objects. Hint: these USE nodes can be utilitized by inverse kinematics (IK) and animation engines. Warning: the number of contained &lt;HAnimSite USE='*' containerField='sites'/&gt; nodes at top level of HAnimHumanoid needs to match the number of corresponding HAnimSite node instances found within the skeleton hierarchy. Warning: top-level HAnimSite USE nodes must include containerField='sites' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value for the sites field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setSites(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearSites(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		sites.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimSite)
			{
				sites.add((HAnimSite)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimSite; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode sites field, similar to {@link #setSites(X3DNode[])}.
	 * @param newValue is new value for the sites field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setSites(ArrayList<HAnimSite> newValue)
	{
		if (newValue == null)
		{
			clearSites(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		sites = newValue;
		for (HAnimSite element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child sites node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value to be appended the sites field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimHumanoidObject addSites(HAnimSiteObject newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		sites.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child sites nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value array to be appended the sites field.
	 */
	@Override
	public void addSites(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimSite)
			{
				sites.add((HAnimSite)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimSite; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child sites node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to HAnimSite.
	 * @param newValue is new node for the sites field (restricted to HAnimSite)
	 */
	@Override
	public void setSites(X3DNode newValue)
	{
		if (newValue == null)
		{
			sites.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof HAnimSite)
		{
			for (HAnimSite element : sites)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			sites.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			sites.add((HAnimSite)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof HAnimSite; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of sites field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject clearSites()
	{
		for (HAnimSite element : sites)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		sites.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>sites</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getSites()
	 */
	public boolean hasSites()
	{
		return (!sites.isEmpty());
	}
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSite, from inputOutput MFNode field <i>skeleton</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint, HAnimSite] skeleton field contains the HumanoidRoot Joint object and the entire hierarchy of HAnimJoint/HAnimSegment nodes making up the articulated skeleton.
 * <ul>
 *  <li> <i>Hint:</i> immediate children in the skeleton field can also include top-level HAnimSite node declarations, which are landmarks for the overall humanoid figure that are not affected by HAnimJoint movement. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimJoint and HAnimSite nodes must include containerField='skeleton' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimJointObject
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of skeleton field
	 */
	@Override
	public X3DNode[] getSkeleton()
	{
		final X3DNode[] valuesArray = new X3DNode[skeleton.size()];
		int i = 0;
		for (X3DNode arrayElement : skeleton) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode skeleton field, similar to {@link #getSkeleton()}.

	 * @return value of skeleton field
	 */
	public ArrayList<X3DNode> getSkeletonList()
	{
		return skeleton;
	}

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to HAnimJoint|HAnimSite, to inputOutput MFNode field <i>skeleton</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimJoint, HAnimSite] skeleton field contains the HumanoidRoot Joint object and the entire hierarchy of HAnimJoint/HAnimSegment nodes making up the articulated skeleton. Hint: immediate children in the skeleton field can also include top-level HAnimSite node declarations, which are landmarks for the overall humanoid figure that are not affected by HAnimJoint movement. Warning: top-level HAnimJoint and HAnimSite nodes must include containerField='skeleton' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSite.
	 * @param newValue is new value for the skeleton field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setSkeleton(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearSkeleton(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes HAnimJoint|HAnimSite; newValue["+i+"]=" + newValue[i]);
			}
		}
		skeleton.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				skeleton.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode skeleton field, similar to {@link #setSkeleton(X3DNode[])}.
	 * @param newValue is new value for the skeleton field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setSkeleton(ArrayList<X3DNode> newValue)
	{
		if (newValue == null)
		{
			clearSkeleton(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayListAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #3
		for (X3DNode element : newValue)
		{
			boolean isNodeTypeAllowed = 
				(element instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(element instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] element is not instanceof " +
					"acceptableNodeTypes HAnimJoint|HAnimSite; element=" + element);
			}
		}
		skeleton = newValue;
		for (X3DNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child skeleton node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSite.
	 * @param newValue is new value to be appended the skeleton field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimHumanoidObject addSkeleton(X3DNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes HAnimJoint|HAnimSite; newValue=" + newValue);
		}
		skeleton.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child skeleton nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimJoint|HAnimSite.
	 * @param newValue is new value array to be appended the skeleton field.
	 */
	@Override
	public void addSkeleton(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes HAnimJoint|HAnimSite; newValue["+i+"]=" + newValue[i]);
			}
		}
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				skeleton.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child skeleton node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to HAnimJoint|HAnimSite.
	 * @param newValue is new node for the skeleton field (restricted to HAnimJoint|HAnimSite)
	 */
	@Override
	public void setSkeleton(X3DNode newValue)
	{
		if (newValue == null)
		{
			skeleton.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimJointObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.HAnim.HAnimSiteObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes HAnimJoint|HAnimSite; newValue=" + newValue);
		}
		if  (newValue instanceof X3DNode)
		{
			for (X3DNode element : skeleton)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			skeleton.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			skeleton.add(newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of skeleton field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject clearSkeleton()
	{
		for (X3DNode element : skeleton)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		skeleton.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>skeleton</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getSkeleton()
	 */
	public boolean hasSkeleton()
	{
		return (!skeleton.isEmpty());
	}
	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to Group|Transform|Shape|IndexedFaceSet, from inputOutput MFNode field <i>skin</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [IndexedFaceSet|Group|Transform|Shape] skin field contains one or more IndexedFaceSet definitions. Those IndexedFaceSet definitions utilize the point and normal data that is defined within the skinCoord and skinNormal fields, respectively, of the Humanoid object.
 * <ul>
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Warning:</i>  top-level node must include containerField='skin' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Group|Transform|Shape|IndexedFaceSet.
	 * @see org.web3d.x3d.jsail.Grouping.GroupObject
	 * @see org.web3d.x3d.jsail.Grouping.TransformObject
	 * @see org.web3d.x3d.jsail.Shape.ShapeObject
	 * @see org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject
	 * @return value of skin field
	 */
	@Override
	public X3DNode[] getSkin()
	{
		final X3DNode[] valuesArray = new X3DNode[skin.size()];
		int i = 0;
		for (X3DNode arrayElement : skin) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode skin field, similar to {@link #getSkin()}.

	 * @return value of skin field
	 */
	public ArrayList<X3DNode> getSkinList()
	{
		return skin;
	}

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) with acceptable node types limited to Group|Transform|Shape|IndexedFaceSet, to inputOutput MFNode field <i>skin</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [IndexedFaceSet|Group|Transform|Shape] skin field contains one or more IndexedFaceSet definitions. Those IndexedFaceSet definitions utilize the point and normal data that is defined within the skinCoord and skinNormal fields, respectively, of the Humanoid object. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. Warning: top-level node must include containerField='skin' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Group|Transform|Shape|IndexedFaceSet.
	 * @param newValue is new value for the skin field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setSkin(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearSkin(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Grouping.GroupObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Grouping.TransformObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Shape.ShapeObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes Group|Transform|Shape|IndexedFaceSet; newValue["+i+"]=" + newValue[i]);
			}
		}
		skin.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				skin.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode skin field, similar to {@link #setSkin(X3DNode[])}.
	 * @param newValue is new value for the skin field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setSkin(ArrayList<X3DNode> newValue)
	{
		if (newValue == null)
		{
			clearSkin(); // newValueNullSetDEFAULT_VALUE
			return this;
		}

		// newValueArrayListAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #3
		for (X3DNode element : newValue)
		{
			boolean isNodeTypeAllowed = 
				(element instanceof org.web3d.x3d.jsail.Grouping.GroupObject) || 
				(element instanceof org.web3d.x3d.jsail.Grouping.TransformObject) || 
				(element instanceof org.web3d.x3d.jsail.Shape.ShapeObject) || 
				(element instanceof org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] element is not instanceof " +
					"acceptableNodeTypes Group|Transform|Shape|IndexedFaceSet; element=" + element);
			}
		}
		skin = newValue;
		for (X3DNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child skin node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Group|Transform|Shape|IndexedFaceSet.
	 * @param newValue is new value to be appended the skin field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimHumanoidObject addSkin(X3DNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Grouping.GroupObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Grouping.TransformObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Shape.ShapeObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes Group|Transform|Shape|IndexedFaceSet; newValue=" + newValue);
		}
		skin.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child skin nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Group|Transform|Shape|IndexedFaceSet.
	 * @param newValue is new value array to be appended the skin field.
	 */
	@Override
	public void addSkin(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid

		// newValueArrayAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #2
		for (int i = 0; i < newValue.length; i++)
		{
			boolean isNodeTypeAllowed = 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Grouping.GroupObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Grouping.TransformObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Shape.ShapeObject) || 
				(((X3DConcreteNode)newValue[i]) instanceof org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject);
			if  (!isNodeTypeAllowed)
			{
				throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof " +
					"acceptableNodeTypes Group|Transform|Shape|IndexedFaceSet; newValue["+i+"]=" + newValue[i]);
			}
		}
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DNode)
			{
				skin.add(newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child skin node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to Group|Transform|Shape|IndexedFaceSet.
	 * @param newValue is new node for the skin field (restricted to Group|Transform|Shape|IndexedFaceSet)
	 */
	@Override
	public void setSkin(X3DNode newValue)
	{
		if (newValue == null)
		{
			skin.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}

		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Grouping.GroupObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Grouping.TransformObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Shape.ShapeObject) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.Geometry3D.IndexedFaceSetObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes Group|Transform|Shape|IndexedFaceSet; newValue=" + newValue);
		}
		if  (newValue instanceof X3DNode)
		{
			for (X3DNode element : skin)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			skin.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			skin.add(newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of skin field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject clearSkin()
	{
		for (X3DNode element : skin)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		skin.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>skin</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getSkin()
	 */
	public boolean hasSkin()
	{
		return (!skin.isEmpty());
	}
	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>skinCoord</i>.
	 * @see #getSkinCoordProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] skinCoord field contains a single sequence of points, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry.
 * <ul>
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Warning:</i> top-level Coordinate or CoordinateDouble node must include containerField='skinCoord' for proper validation and operation. </li> 
 *  <li> <i>Hint:</i>  a single node is used so that coordIndex references are consistent for all references to these coordinates. </li> 
 * </ul>
	 * @return value of skinCoord field
	 */
	@Override
	public X3DCoordinateNode getSkinCoord()
	{
		return skinCoord;
	}

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>skinCoord</i>.
	 * @see #setSkinCoord(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [X3DCoordinateNode] skinCoord field contains a single sequence of points, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. Warning: top-level Coordinate or CoordinateDouble node must include containerField='skinCoord' for proper validation and operation. Hint: a single node is used so that coordIndex references are consistent for all references to these coordinates.
	 * @param newValue is new value for the skinCoord field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setSkinCoord(X3DCoordinateNode newValue)
	{
		skinCoord = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) skinCoord).setParentObject(this); // parentTest15
		}
		if (skinCoordProtoInstance != null)
		{
			skinCoordProtoInstance.setParentObject(null); // housekeeping, clear prior object
			skinCoordProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of skinCoord field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public HAnimHumanoidObject clearSkinCoord()
	{
		((X3DConcreteElement) skinCoord).clearParentObject(); // remove references to facilitate Java memory management
		skinCoord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>skinCoord</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DCoordinateNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the skinCoord field
	 * @see #setSkinCoord(X3DCoordinateNode)
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject setSkinCoord(ProtoInstanceObject newProtoInstanceNode)
	{
		if (skinCoord != null)
		{
			((X3DConcreteElement) skinCoord).setParentObject(null); // housekeeping, clear prior object
			skinCoord = null;
		}
		skinCoordProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>skinCoord</i>, if available.
	 * @see #getSkinCoord()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getSkinCoordProtoInstance()
	{
		return skinCoordProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>skinCoord</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getSkinCoord()
	 * @see #getSkinCoordProtoInstance()
	 */
	public boolean hasSkinCoord()
	{
		return (skinCoord != null) || (skinCoordProtoInstance != null);
	}
	/**
	 * Provide X3DNormalNode instance (using a properly typed node) from inputOutput SFNode field <i>skinNormal</i>.
	 * @see #getSkinNormalProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i> [X3DNormalNode] skinNormal field contains a single sequence of normal values, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry.
 * <ul>
 *  <li> <i>Warning:</i> index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. </li> 
 *  <li> <i>Warning:</i>  top-level Normal node must include containerField='skinNormal' for proper validation and operation. </li> 
 * </ul>
	 * @return value of skinNormal field
	 */
	@Override
	public X3DNormalNode getSkinNormal()
	{
		return skinNormal;
	}

	/**
	 * Assign X3DNormalNode instance (using a properly typed node) to inputOutput SFNode field <i>skinNormal</i>.
	 * @see #setSkinNormal(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [X3DNormalNode] skinNormal field contains a single sequence of normal values, used by internal HAnimHumanoid mechanisms to create appropriate surface deformations as well as by the indexed face set definitions within the skin field that perform the actual rendering of surface geometry. Warning: index values for HanimHumanoid skin IndexedFaceSet, skinCoord and skinNormal nodes must all be consistently defined together with HAnimJoint HAnimSegment and HAnimDisplacer nodes for proper skin animation. Warning: top-level Normal node must include containerField='skinNormal' for proper validation and operation.
	 * @param newValue is new value for the skinNormal field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setSkinNormal(X3DNormalNode newValue)
	{
		skinNormal = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) skinNormal).setParentObject(this); // parentTest15
		}
		if (skinNormalProtoInstance != null)
		{
			skinNormalProtoInstance.setParentObject(null); // housekeeping, clear prior object
			skinNormalProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of skinNormal field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public HAnimHumanoidObject clearSkinNormal()
	{
		((X3DConcreteElement) skinNormal).clearParentObject(); // remove references to facilitate Java memory management
		skinNormal = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>skinNormal</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DNormalNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the skinNormal field
	 * @see #setSkinNormal(X3DNormalNode)
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject setSkinNormal(ProtoInstanceObject newProtoInstanceNode)
	{
		if (skinNormal != null)
		{
			((X3DConcreteElement) skinNormal).setParentObject(null); // housekeeping, clear prior object
			skinNormal = null;
		}
		skinNormalProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>skinNormal</i>, if available.
	 * @see #getSkinNormal()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getSkinNormalProtoInstance()
	{
		return skinNormalProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>skinNormal</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getSkinNormal()
	 * @see #getSkinNormalProtoInstance()
	 */
	public boolean hasSkinNormal()
	{
		return (skinNormal != null) || (skinNormalProtoInstance != null);
	}
	/**
	 * Provide array of 3-tuple float results from inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system.
 * <ul>
 *  <li> <i> Hint:</i>  since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid. </li> 
 * </ul>
	 * @return value of translation field
	 */
	@Override
	public float[] getTranslation()
	{
		return translation;
	}

	/**
	 * Assign 3-tuple float array to inputOutput SFVec3f field named <i>translation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Position of children relative to local coordinate system. Hint: since default pose faces along +Z axis, -x values are right side and +x values are left side within HAnimHumanoid.
	 * @param newValue is new value for the translation field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setTranslation(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid translation newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		translation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f translation field, similar to {@link #setTranslation(float[])}.
	 * @param newValue is new value for the translation field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setTranslation(SFVec3fObject newValue)
	{
		setTranslation(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f translation field, similar to {@link #setTranslation(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setTranslation(float x, float y, float z)
	{
		setTranslation(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide String enumeration value ['2.0'|'2.2'|'etc.'] from inputOutput SFString field named <i>version</i>.
	 * <br><br>
	 * <i>Tooltip:</i> HAnimHumanoid version, where value is 2.0 for standardized ISO 19774 initial version from 2006, and value is 2.2 for draft ISO 19774 version from 2018.
 * <ul>
 *  <li> <i> Warning:</i>  prior versions of HAnim nodes might not validate correctly due to small changes in the contained-node content model. </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #VERSION_2_0 2_0}, {@link #VERSION_2_2 2_2}.
	 * @return value of version field
	 */
	@Override
	public String getVersion()
	{
		return version;
	}

	/**
	 * Assign String enumeration value ("2.0"|"2.2") ['2.0'|'2.2'|'etc.'] to inputOutput SFString field named <i>version</i>.
	 * <br><br>
	 * <i>Hint:</i> authors have option to choose from an extendible list of predefined enumeration values ({@link #VERSION_2_0 2_0}, {@link #VERSION_2_2 2_2}).
	 * <br><br>
	 * <i>Tooltip:</i> HAnimHumanoid version, where value is 2.0 for standardized ISO 19774 initial version from 2006, and value is 2.2 for draft ISO 19774 version from 2018. Warning: prior versions of HAnim nodes might not validate correctly due to small changes in the contained-node content model.
	 * @param newValue is new value for the version field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setVersion(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		version = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString version field, similar to {@link #setVersion(String)}.
	 * @param newValue is new value for the version field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setVersion(SFStringObject newValue)
	{
		setVersion(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of HAnimSite results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>viewpoints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] The viewpoints field contains zero or more special HAnimSite nodes that are only affected by HAnimHumanoid transformations (and no HAnimJoint transformations). Each HAnimSite can contain a Viewpoint as virtual camera in the HAnimHumanoid reference frame (such as viewing the face or profile of the human figure).
 * <ul>
 *  <li> <i>Warning:</i> these are actual node declarations, not USE nodes. </li> 
 *  <li> <i>Hint:</i> the viewpoint field has different functionality than the joints, segments and sites fields. </li> 
 *  <li> <i>Hint:</i> the viewpoints field connects internal Site nodes that in turn hold relative Viewpoint nodes, such as &amp;lt;HAnimSite USE='ObserveFaceSite_view' containerField='viewpoints'/&amp;gt; which has corresponding counterpart nodes &amp;lt;HAnimSite DEF='ObserveFaceSite_view' name='ObserveFaceSite_view' containerField='children'&amp;gt; &amp;lt;Viewpoint description='look at me!'/&amp;gt; &amp;lt;/HAnimSite&amp;gt;. </li> 
 *  <li> <i>Warning:</i>  top-level HAnimSite nodes (in turn containing Viewpoint nodes) must include containerField='viewpoints' for proper validation and operation. </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @see org.web3d.x3d.jsail.HAnim.HAnimSiteObject
	 * @return value of viewpoints field
	 */
	@Override
	public X3DNode[] getViewpoints()
	{
		final X3DNode[] valuesArray = new X3DNode[viewpoints.size()];
		int i = 0;
		for (HAnimSite arrayElement : viewpoints) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode viewpoints field, similar to {@link #getViewpoints()}.

	 * @return value of viewpoints field
	 */
	public ArrayList<HAnimSite> getViewpointsList()
	{
		return viewpoints;
	}

	/**
	 * Assign HAnimSite array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>viewpoints</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [HAnimSite] The viewpoints field contains zero or more special HAnimSite nodes that are only affected by HAnimHumanoid transformations (and no HAnimJoint transformations). Each HAnimSite can contain a Viewpoint as virtual camera in the HAnimHumanoid reference frame (such as viewing the face or profile of the human figure). Warning: these are actual node declarations, not USE nodes. Hint: the viewpoint field has different functionality than the joints, segments and sites fields. Hint: the viewpoints field connects internal Site nodes that in turn hold relative Viewpoint nodes, such as &lt;HAnimSite USE='ObserveFaceSite_view' containerField='viewpoints'/&gt; which has corresponding counterpart nodes &lt;HAnimSite DEF='ObserveFaceSite_view' name='ObserveFaceSite_view' containerField='children'&gt; &lt;Viewpoint description='look at me!'/&gt; &lt;/HAnimSite&gt;. Warning: top-level HAnimSite nodes (in turn containing Viewpoint nodes) must include containerField='viewpoints' for proper validation and operation.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value for the viewpoints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setViewpoints(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearViewpoints(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		viewpoints.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimSite)
			{
				viewpoints.add((HAnimSite)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimSite; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode viewpoints field, similar to {@link #setViewpoints(X3DNode[])}.
	 * @param newValue is new value for the viewpoints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setViewpoints(ArrayList<HAnimSite> newValue)
	{
		if (newValue == null)
		{
			clearViewpoints(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		viewpoints = newValue;
		for (HAnimSite element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child viewpoints node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value to be appended the viewpoints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public HAnimHumanoidObject addViewpoints(HAnimSiteObject newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		viewpoints.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child viewpoints nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to HAnimSite.
	 * @param newValue is new value array to be appended the viewpoints field.
	 */
	@Override
	public void addViewpoints(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof HAnimSite)
			{
				viewpoints.add((HAnimSite)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof HAnimSite; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child viewpoints node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to HAnimSite.
	 * @param newValue is new node for the viewpoints field (restricted to HAnimSite)
	 */
	@Override
	public void setViewpoints(X3DNode newValue)
	{
		if (newValue == null)
		{
			viewpoints.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof HAnimSite)
		{
			for (HAnimSite element : viewpoints)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			viewpoints.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			viewpoints.add((HAnimSite)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof HAnimSite; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of viewpoints field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public HAnimHumanoidObject clearViewpoints()
	{
		for (HAnimSite element : viewpoints)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		viewpoints.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>viewpoints</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getViewpoints()
	 */
	public boolean hasViewpoints()
	{
		return (!viewpoints.isEmpty());
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimHumanoidObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimHumanoid
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimHumanoid DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setDEF(SFStringObject newValue)
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimHumanoidObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to HAnimHumanoid
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("HAnimHumanoid USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("HAnimHumanoid USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final HAnimHumanoidObject setCssClass(String newValue)
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setCssClass(SFStringObject newValue)
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public HAnimHumanoidObject setIS(ISObject newValue)
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public HAnimHumanoidObject setUSE(HAnimHumanoidObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on HAnimHumanoidObject" +
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
	public HAnimHumanoidObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Utility constructor that assigns both DEF label and name, after initializing member variables with default values.
	 * @param DEFlabel unique DEF name for this X3D node
	 * @param newName  name for this meta element
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#HAnimHumanoidObject">X3D Tooltips: HAnimHumanoidObject</a>
	 */
	public HAnimHumanoidObject (String DEFlabel, String newName)
	{
		initialize();
		setDEF  (DEFlabel);
		setName (newName);
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimHumanoidObject addComments (String newComment)
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimHumanoidObject addComments (String[] newComments)
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
	 * @return {@link HAnimHumanoidObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public HAnimHumanoidObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (!joints.isEmpty()) || (metadata != null) || (metadataProtoInstance != null) || (!segments.isEmpty()) || (!sites.isEmpty()) || (!skeleton.isEmpty()) || (!skin.isEmpty()) || (skinCoord != null) || (skinCoordProtoInstance != null) || (skinNormal != null) || (skinNormalProtoInstance != null) || (!viewpoints.isEmpty()) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<HAnimHumanoid"); // start opening tag
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
			
			if (!getName().equals(NAME_DEFAULT_VALUE) && !isUSE())
			{
				stringX3D.append(" name='").append(SFStringObject.toString(getName())).append("'");
			}
			
                            if (!getContainerFieldOverride().isEmpty() && !getContainerFieldOverride().equals(containerField_DEFAULT_VALUE))
                            {
                                    stringX3D.append(" containerField='").append(getContainerFieldOverride()).append("'");
                            }
                            
			if ((!Arrays.equals(getBboxCenter(), BBOXCENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxCenter='").append(SFVec3fObject.toString(getBboxCenter())).append("'");
			}
			if ((!Arrays.equals(getBboxSize(), BBOXSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" bboxSize='").append(SFVec3fObject.toString(getBboxSize())).append("'");
			}
			if ((!Arrays.equals(getCenter(), CENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" center='").append(SFVec3fObject.toString(getCenter())).append("'");
			}
			if (((getInfo().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" info='").append(new MFStringObject(getInfo()).toStringX3D()).append("'");
			}
			if ((!Arrays.equals(getRotation(), ROTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rotation='").append(SFRotationObject.toString(getRotation())).append("'");
			}
			if ((!Arrays.equals(getScale(), SCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" scale='").append(SFVec3fObject.toString(getScale())).append("'");
			}
			if ((!Arrays.equals(getScaleOrientation(), SCALEORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" scaleOrientation='").append(SFRotationObject.toString(getScaleOrientation())).append("'");
			}
			if ((!Arrays.equals(getTranslation(), TRANSLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" translation='").append(SFVec3fObject.toString(getTranslation())).append("'");
			}
			if ((true) /* required attribute */  && !isUSE())
			{
				stringX3D.append(" version='").append(new SFStringObject(getVersion()).toStringX3D()).append("'");
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
			for (HAnimJoint element : joints)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			for (HAnimSegment element : segments)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			for (HAnimSite element : sites)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			for (X3DNode element : skeleton)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			for (X3DNode element : skin)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			if      (skinCoord != null)
			{
				stringX3D.append(((X3DConcreteElement)skinCoord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (skinCoordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)skinCoordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (skinNormal != null)
			{
				stringX3D.append(((X3DConcreteElement)skinNormal).toStringX3D(indentLevel + indentIncrement));
			}
			else if (skinNormalProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)skinNormalProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (HAnimSite element : viewpoints)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</HAnimHumanoid>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!joints.isEmpty()) || (metadata != null) || (metadataProtoInstance != null) || (!segments.isEmpty()) || (!sites.isEmpty()) || (!skeleton.isEmpty()) || (!skin.isEmpty()) || (skinCoord != null) || (skinCoordProtoInstance != null) || (skinNormal != null) || (skinNormalProtoInstance != null) || (!viewpoints.isEmpty()) || !commentsList.isEmpty();
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
			stringClassicVRML.append("HAnimHumanoid").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("bboxCenter"))
						{
							stringClassicVRML.append(indentCharacter).append("bboxCenter").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getBboxCenter(), BBOXCENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("bboxCenter ").append(SFVec3fObject.toString(getBboxCenter())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("bboxSize"))
						{
							stringClassicVRML.append(indentCharacter).append("bboxSize").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getBboxSize(), BBOXSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("bboxSize ").append(SFVec3fObject.toString(getBboxSize())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("center"))
						{
							stringClassicVRML.append(indentCharacter).append("center").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getCenter(), CENTER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("center ").append(SFVec3fObject.toString(getCenter())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("info"))
						{
							stringClassicVRML.append(indentCharacter).append("info").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getInfo().length > 0)
				{
					stringClassicVRML.append("info ").append("[ ").append(MFStringObject.toString(getInfo())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("name"))
						{
							stringClassicVRML.append(indentCharacter).append("name").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getName().equals(NAME_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("name ").append("\"").append(SFStringObject.toString(getName())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("rotation"))
						{
							stringClassicVRML.append(indentCharacter).append("rotation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getRotation(), ROTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("rotation ").append(SFRotationObject.toString(getRotation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("scale"))
						{
							stringClassicVRML.append(indentCharacter).append("scale").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getScale(), SCALE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("scale ").append(SFVec3fObject.toString(getScale())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("scaleOrientation"))
						{
							stringClassicVRML.append(indentCharacter).append("scaleOrientation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getScaleOrientation(), SCALEORIENTATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("scaleOrientation ").append(SFRotationObject.toString(getScaleOrientation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("translation"))
						{
							stringClassicVRML.append(indentCharacter).append("translation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getTranslation(), TRANSLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("translation ").append(SFVec3fObject.toString(getTranslation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("version"))
						{
							stringClassicVRML.append(indentCharacter).append("version").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (true) /* required attribute */ 
				{
					stringClassicVRML.append("version ").append("\"").append(SFStringObject.toString(getVersion())).append("\"").append("\n").append(indent).append(indentCharacter);
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
			if (joints.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("joints").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (HAnimJoint element : joints)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
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
			if (segments.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("segments").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (HAnimSegment element : segments)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (sites.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("sites").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (HAnimSite element : sites)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (skeleton.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("skeleton").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DNode element : skeleton)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (skin.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("skin").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DNode element : skin)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (skinCoord != null)
			{
				stringClassicVRML.append(indentCharacter).append("skinCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) skinCoord).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (skinCoordProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("skinCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) skinCoordProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (skinNormal != null)
			{
				stringClassicVRML.append(indentCharacter).append("skinNormal").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) skinNormal).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (skinNormalProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("skinNormal").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) skinNormalProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (viewpoints.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("viewpoints").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (HAnimSite element : viewpoints)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
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
		if (elementName == null)
			elementName = "";
		if (getName().equals(nameValue) &&
			(elementName.isEmpty() || elementName.equals(getElementName())))
			return this;
		X3DConcreteElement referenceElement;
		for (HAnimJoint element : joints) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
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
		for (HAnimSegment element : segments) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		for (HAnimSite element : sites) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		for (X3DNode element : skeleton) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		for (X3DNode element : skin) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		if (skinCoord != null)
		{
			referenceElement = ((X3DConcreteElement) skinCoord).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (skinCoordProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) skinCoordProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (skinNormal != null)
		{
			referenceElement = ((X3DConcreteElement) skinNormal).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (skinNormalProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) skinNormalProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		for (HAnimSite element : viewpoints) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
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
		for (HAnimJoint element : joints) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (HAnimSegment element : segments) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		for (HAnimSite element : sites) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		for (X3DNode element : skeleton) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		for (X3DNode element : skin) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		if (skinCoord != null)
		{
			referenceNode = ((X3DConcreteElement) skinCoord).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (skinNormal != null)
		{
			referenceNode = ((X3DConcreteElement) skinNormal).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (HAnimSite element : viewpoints) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
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

		setBboxCenter(getBboxCenter()); // exercise field checks, simple types

		setBboxSize(getBboxSize()); // exercise field checks, simple types

		setCenter(getCenter()); // exercise field checks, simple types

		setInfo(getInfo()); // exercise field checks, simple types

		if (getName().isEmpty() && !isUSE()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " name field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setName(getName()); // exercise field checks, simple types

		setRotation(getRotation()); // exercise field checks, simple types

		setScale(getScale()); // exercise field checks, simple types

		setScaleOrientation(getScaleOrientation()); // exercise field checks, simple types

		setTranslation(getTranslation()); // exercise field checks, simple types

		if (getVersion().isEmpty() && !isUSE()) // required attribute
		{
			String errorNotice = ConfigurationProperties.ERROR_VALUE_NOT_FOUND + 
									", " + NAME + " version field is required but no value found. ";
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		// TODO duplicate name checks in setValue() method
		setVersion(getVersion()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		for (HAnimJoint element : joints) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setJoints(getJoints()); // also test getter/setter validation

		if (isUSE() && hasJoints()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained MFNode joints";
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
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		for (HAnimSegment element : segments) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setSegments(getSegments()); // also test getter/setter validation

		if (isUSE() && hasSegments()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained MFNode segments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		for (HAnimSite element : sites) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setSites(getSites()); // also test getter/setter validation

		if (isUSE() && hasSites()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained MFNode sites";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		for (X3DNode element : skeleton) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setSkeleton(getSkeleton()); // also test getter/setter validation

		if (isUSE() && hasSkeleton()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained MFNode skeleton";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		for (X3DNode element : skin) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setSkin(getSkin()); // also test getter/setter validation

		if (isUSE() && hasSkin()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained MFNode skin";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		if (skinCoord != null)
		{
			setSkinCoord(getSkinCoord());
			((X3DConcreteElement) skinCoord).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) skinCoord).getValidationResult());
		}
		if (skinCoordProtoInstance != null)
		{
			setSkinCoord(getSkinCoordProtoInstance());
			((X3DConcreteElement) skinCoordProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) skinCoordProtoInstance).getValidationResult());
		}
		if ((skinCoord != null) && (skinCoordProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both skinCoord and skinCoordProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasSkinCoord()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained SFNode skinCoord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (skinNormal != null)
		{
			setSkinNormal(getSkinNormal());
			((X3DConcreteElement) skinNormal).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) skinNormal).getValidationResult());
		}
		if (skinNormalProtoInstance != null)
		{
			setSkinNormal(getSkinNormalProtoInstance());
			((X3DConcreteElement) skinNormalProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) skinNormalProtoInstance).getValidationResult());
		}
		if ((skinNormal != null) && (skinNormalProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both skinNormal and skinNormalProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasSkinNormal()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained SFNode skinNormal";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		for (HAnimSite element : viewpoints) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setViewpoints(getViewpoints()); // also test getter/setter validation

		if (isUSE() && hasViewpoints()) // test USE restrictions
		{
			String errorNotice = "HAnimHumanoid USE='" + getUSE() + "' is not allowed to have contained MFNode viewpoints";
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
				if ( nextComponent.getName().equals("HAnim") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='HAnim' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"HAnim\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
