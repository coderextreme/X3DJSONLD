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

package org.web3d.x3d.jsail.Geospatial;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.Geospatial.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: GeoLOD provides quadtree level-of-detail loading/unloading for multi-resolution terrains. GeoLOD can contain children and GeoOrigin nodes.
 * <ul>
 *  <li> <i>Hint:</i> children nodes expose the scene graph for the currently loaded set of nodes. </li> 
 *  <li> <i>Hint:</i> rootNode specifies the geometry of the root tile. </li> 
 *  <li> <i>Warning:</i> do not use rootUrl and rootNode simultaneously, since each specifies the root tile. </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/GeospatialComponentX3dEarth.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/GeospatialComponentX3dEarth.pdf</a> </li> 
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='Geospatial' level='1'/&amp;gt; </li> 
 *  <li> <i>Warning:</i>  nested LOD (and/or GeoLOD) nodes with overlapping range intervals can lead to unexpected or undefined behavior. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#GeoLOD" target="blank">X3D Abstract Specification: GeoLOD</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#GeoLOD" target="_blank">X3D Tooltips: GeoLOD</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class GeoLODObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Geospatial.GeoLOD
{
	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private double[] center; // SFVec3d

	private ArrayList<String> child1Url = new ArrayList<>(); // MFString

	private ArrayList<String> child2Url = new ArrayList<>(); // MFString

	private ArrayList<String> child3Url = new ArrayList<>(); // MFString

	private ArrayList<String> child4Url = new ArrayList<>(); // MFString

	private ArrayList<X3DChildNode> children = new ArrayList<>(); // MFNode acceptable node types: X3DChildNode

	private GeoOrigin geoOrigin; // SFNode acceptable node types: GeoOrigin
	private ProtoInstanceObject geoOriginProtoInstance; // allowed alternative for geoOrigin field

	private ArrayList<String> geoSystem = new ArrayList<>(); // MFString

	private int level; // SFInt32

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private float range; // SFFloat

	private ArrayList<X3DChildNode> rootNode = new ArrayList<>(); // MFNode acceptable node types: X3DChildNode

	private ArrayList<String> rootUrl = new ArrayList<>(); // MFString

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>GeoLOD</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "GeoLOD";

	/** Provides name of this element: <i>GeoLOD</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>GeoLOD</i> element: <i>Geospatial</i> */
	public static final String COMPONENT = "Geospatial";

	/** Defines X3D component for the <i>GeoLOD</i> element: <i>Geospatial</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Geospatial</i> component level for this element: <i>1</i> */
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

	/** SFVec3d field named <i>center</i> has default value <i>{0,0,0}</i> (Java syntax) or <i>0 0 0</i> (XML syntax). */
	public static final double[] CENTER_DEFAULT_VALUE = {0,0,0};

	/** MFString field named <i>child1Url</i> has default value equal to an empty list. */
	public static final ArrayList<String> CHILD1URL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>child2Url</i> has default value equal to an empty list. */
	public static final ArrayList<String> CHILD2URL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>child3Url</i> has default value equal to an empty list. */
	public static final ArrayList<String> CHILD3URL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>child4Url</i> has default value equal to an empty list. */
	public static final ArrayList<String> CHILD4URL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

	/** MFString field named <i>geoSystem</i> has default quoted value <i>new String[] {"GD","WE"}</i> (Java syntax) or quoted value <i>"GD" "WE"</i> (XML syntax). */
	public static final ArrayList<String> GEOSYSTEM_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList("GD","WE"));

	/** SFFloat field named <i>range</i> has default value <i>10f</i> (Java syntax) or <i>10</i> (XML syntax). */
	public static final float RANGE_DEFAULT_VALUE = 10f;

	/** MFString field named <i>rootUrl</i> has default value equal to an empty list. */
	public static final ArrayList<String> ROOTURL_DEFAULT_VALUE = new ArrayList<String>(Arrays.<String>asList());

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
				result = "SFVec3d";
				break;
			case "child1Url":
				result = "MFString";
				break;
			case "child2Url":
				result = "MFString";
				break;
			case "child3Url":
				result = "MFString";
				break;
			case "child4Url":
				result = "MFString";
				break;
			case "children":
				result = "MFNode";
				break;
			case "geoOrigin":
				result = "SFNode";
				break;
			case "geoSystem":
				result = "MFString";
				break;
			case "level":
				result = "SFInt32";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "range":
				result = "SFFloat";
				break;
			case "rootNode":
				result = "MFNode";
				break;
			case "rootUrl":
				result = "MFString";
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
				result = "initializeOnly";
				break;
			case "child1Url":
				result = "initializeOnly";
				break;
			case "child2Url":
				result = "initializeOnly";
				break;
			case "child3Url":
				result = "initializeOnly";
				break;
			case "child4Url":
				result = "initializeOnly";
				break;
			case "children":
				result = "outputOnly";
				break;
			case "geoOrigin":
				result = "initializeOnly";
				break;
			case "geoSystem":
				result = "initializeOnly";
				break;
			case "level_changed":
				result = "outputOnly";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "range":
				result = "initializeOnly";
				break;
			case "rootNode":
				result = "initializeOnly";
				break;
			case "rootUrl":
				result = "initializeOnly";
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

	/** fromField ROUTE name for MFNode field named <i>children</i>. */
	public static final String fromField_CHILDREN = "children";

	/** fromField ROUTE name for SFInt32 field named <i>level_changed</i>. */
	public static final String fromField_LEVEL_CHANGED = "level_changed";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** Constructor for GeoLODObject to initialize member variables with default values. */
	public GeoLODObject()
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
		child1Url = new ArrayList<>(CHILD1URL_DEFAULT_VALUE);
		child2Url = new ArrayList<>(CHILD2URL_DEFAULT_VALUE);
		child3Url = new ArrayList<>(CHILD3URL_DEFAULT_VALUE);
		child4Url = new ArrayList<>(CHILD4URL_DEFAULT_VALUE);
		geoOrigin = null; // clear out any prior node
		geoSystem = GEOSYSTEM_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		range = RANGE_DEFAULT_VALUE;
		rootNode = new ArrayList<>();
		rootUrl = new ArrayList<>(ROOTURL_DEFAULT_VALUE);
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoLOD bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setBboxCenter(float x, float y, float z)
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoLOD bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoLOD bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of 3-tuple double results from initializeOnly SFVec3d field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Viewer range from geographic-coordinates center triggers quadtree loading/unloading.  * <br>

	 * @return value of center field
	 */
	@Override
	public double[] getCenter()
	{
		return center;
	}

	/**
	 * Assign 3-tuple double array to initializeOnly SFVec3d field named <i>center</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Viewer range from geographic-coordinates center triggers quadtree loading/unloading.
	 * @param newValue is new value for the center field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setCenter(double[] newValue)
	{
		if (newValue == null)
			newValue = new double[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoLOD center newValue=" + SFVec3dObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		center = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3d center field, similar to {@link #setCenter(double[])}.
	 * @param newValue is new value for the center field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setCenter(SFVec3dObject newValue)
	{
		setCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3d center field, similar to {@link #setCenter(double[])}.
	 * @param x first component
	 * @param y second component

	 * @param z third component

	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setCenter(double x, double y, double z)
	{
		setCenter(new double[] {x, y, z});
		return this;
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child1Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child1Url field
	 */
	@Override
	public String[] getChild1Url()
	{
		final String[] valuesArray = new String[child1Url.size()];
		int i = 0;
		for (String arrayElement : child1Url) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString child1Url field, similar to {@link #getChild1Url()}.

	 * @return value of child1Url field
	 */
	public ArrayList<String> getChild1UrlList()
	{
		return child1Url;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>child1Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child1Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setChild1Url(String[] newValue)
	{
		if (newValue == null)
		{
			clearChild1Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child1Url.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			child1Url.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString child1Url field, similar to {@link #setChild1Url(String[])}.
	 * @param newValue is new value for the child1Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild1Url(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild1Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild1Url(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString child1Url field, similar to {@link #setChild1Url(String[])}.
	 * @param newValue is new value for the child1Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild1Url(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild1Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild1Url(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString child1Url field, similar to {@link #setChild1Url(String[])}.
	 * @param newValue is new value for the child1Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild1Url(String newValue)
	{
		if (newValue == null)
		{
			clearChild1Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child1Url.clear();
		child1Url.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString child1Url field, similar to {@link #setChild1Url(String[])}.
	 * @param newValue is new value for the child1Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild1Url(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearChild1Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child1Url = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of child1Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject clearChild1Url()
	{
		child1Url.clear(); // reset
		return this;
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child2Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child2Url field
	 */
	@Override
	public String[] getChild2Url()
	{
		final String[] valuesArray = new String[child2Url.size()];
		int i = 0;
		for (String arrayElement : child2Url) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString child2Url field, similar to {@link #getChild2Url()}.

	 * @return value of child2Url field
	 */
	public ArrayList<String> getChild2UrlList()
	{
		return child2Url;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>child2Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child2Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setChild2Url(String[] newValue)
	{
		if (newValue == null)
		{
			clearChild2Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child2Url.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			child2Url.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString child2Url field, similar to {@link #setChild2Url(String[])}.
	 * @param newValue is new value for the child2Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild2Url(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild2Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild2Url(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString child2Url field, similar to {@link #setChild2Url(String[])}.
	 * @param newValue is new value for the child2Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild2Url(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild2Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild2Url(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString child2Url field, similar to {@link #setChild2Url(String[])}.
	 * @param newValue is new value for the child2Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild2Url(String newValue)
	{
		if (newValue == null)
		{
			clearChild2Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child2Url.clear();
		child2Url.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString child2Url field, similar to {@link #setChild2Url(String[])}.
	 * @param newValue is new value for the child2Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild2Url(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearChild2Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child2Url = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of child2Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject clearChild2Url()
	{
		child2Url.clear(); // reset
		return this;
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child3Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child3Url field
	 */
	@Override
	public String[] getChild3Url()
	{
		final String[] valuesArray = new String[child3Url.size()];
		int i = 0;
		for (String arrayElement : child3Url) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString child3Url field, similar to {@link #getChild3Url()}.

	 * @return value of child3Url field
	 */
	public ArrayList<String> getChild3UrlList()
	{
		return child3Url;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>child3Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child3Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setChild3Url(String[] newValue)
	{
		if (newValue == null)
		{
			clearChild3Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child3Url.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			child3Url.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString child3Url field, similar to {@link #setChild3Url(String[])}.
	 * @param newValue is new value for the child3Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild3Url(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild3Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild3Url(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString child3Url field, similar to {@link #setChild3Url(String[])}.
	 * @param newValue is new value for the child3Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild3Url(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild3Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild3Url(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString child3Url field, similar to {@link #setChild3Url(String[])}.
	 * @param newValue is new value for the child3Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild3Url(String newValue)
	{
		if (newValue == null)
		{
			clearChild3Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child3Url.clear();
		child3Url.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString child3Url field, similar to {@link #setChild3Url(String[])}.
	 * @param newValue is new value for the child3Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild3Url(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearChild3Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child3Url = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of child3Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject clearChild3Url()
	{
		child3Url.clear(); // reset
		return this;
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>child4Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  quadtree geometry loaded when viewer is within range.  * <br>

	 * @return value of child4Url field
	 */
	@Override
	public String[] getChild4Url()
	{
		final String[] valuesArray = new String[child4Url.size()];
		int i = 0;
		for (String arrayElement : child4Url) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString child4Url field, similar to {@link #getChild4Url()}.

	 * @return value of child4Url field
	 */
	public ArrayList<String> getChild4UrlList()
	{
		return child4Url;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>child4Url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> quadtree geometry loaded when viewer is within range.
	 * @param newValue is new value for the child4Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setChild4Url(String[] newValue)
	{
		if (newValue == null)
		{
			clearChild4Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child4Url.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			child4Url.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString child4Url field, similar to {@link #setChild4Url(String[])}.
	 * @param newValue is new value for the child4Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild4Url(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild4Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild4Url(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString child4Url field, similar to {@link #setChild4Url(String[])}.
	 * @param newValue is new value for the child4Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild4Url(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearChild4Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setChild4Url(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString child4Url field, similar to {@link #setChild4Url(String[])}.
	 * @param newValue is new value for the child4Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild4Url(String newValue)
	{
		if (newValue == null)
		{
			clearChild4Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child4Url.clear();
		child4Url.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString child4Url field, similar to {@link #setChild4Url(String[])}.
	 * @param newValue is new value for the child4Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setChild4Url(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearChild4Url(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		child4Url = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of child4Url field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject clearChild4Url()
	{
		child4Url.clear(); // reset
		return this;
	}
	/**
	 * Provide array of X3DChildNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from outputOnly MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of children field
	 */
	@Override
	public X3DNode[] getChildren()
	{
		final X3DNode[] valuesArray = new X3DNode[children.size()];
		int i = 0;
		for (X3DChildNode arrayElement : children) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode children field, similar to {@link #getChildren()}.

	 * @return value of children field
	 */
	public ArrayList<X3DChildNode> getChildrenList()
	{
		return children;
	}

	/**
	 * Add comment as CommentsBlock to children field
	 * @param newComment initial value
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public GeoLODObject addComments (String newComment)
	{
		if (newComment == null) return this;
		children.add(new CommentsBlock (newComment));
		return this;
	}
	/**
	 * Add comments as String[] array to children field
	 * @param newComments array of comments
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public GeoLODObject addComments (String[] newComments)
	{
		if (newComments == null) return this;
		children.add(new CommentsBlock (newComments));
		return this;
	}
	/**
	 * Add CommentsBlock to children field
	 * @param newCommentsBlock block of comments to add
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public GeoLODObject addComments (CommentsBlock newCommentsBlock)
	{
		if (newCommentsBlock == null) return this;
		children.add(newCommentsBlock);
		return this;
	}
											/**
	 * Provide GeoOrigin instance (using a properly typed node) (deprecated node, optional) from initializeOnly SFNode field <i>geoOrigin</i>.
	 * @see #getGeoOriginProtoInstance()
	 * @return value of geoOrigin field
	 */
	@Override
	public GeoOrigin getGeoOrigin()
	{
		return geoOrigin;
	}

	/**
	 * Assign GeoOrigin instance (using a properly typed node) (deprecated node, optional) to initializeOnly SFNode field <i>geoOrigin</i>.
	 * @see #setGeoOrigin(ProtoInstanceObject)
	 * @param newValue is new value for the geoOrigin field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setGeoOrigin(GeoOrigin newValue)
	{
		geoOrigin = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) geoOrigin).setParentObject(this); // parentTest15
		}
		if (geoOriginProtoInstance != null)
		{
			geoOriginProtoInstance.setParentObject(null); // housekeeping, clear prior object
			geoOriginProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of geoOrigin field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public GeoLODObject clearGeoOrigin()
	{
		((X3DConcreteElement) geoOrigin).clearParentObject(); // remove references to facilitate Java memory management
		geoOrigin = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>geoOrigin</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type GeoOrigin.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the geoOrigin field
	 * @see #setGeoOrigin(GeoOrigin)
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject setGeoOrigin(ProtoInstanceObject newProtoInstanceNode)
	{
		if (geoOrigin != null)
		{
			((X3DConcreteElement) geoOrigin).setParentObject(null); // housekeeping, clear prior object
			geoOrigin = null;
		}
		geoOriginProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for initializeOnly SFNode field <i>geoOrigin</i>, if available.
	 * @see #getGeoOrigin()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getGeoOriginProtoInstance()
	{
		return geoOriginProtoInstance;
	}

	/**
	 * Indicate whether an object is available for initializeOnly SFNode field <i>geoOrigin</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getGeoOrigin()
	 * @see #getGeoOriginProtoInstance()
	 */
	public boolean hasGeoOrigin()
	{
		return (geoOrigin != null) || (geoOriginProtoInstance != null);
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type.
 * <ul>
 *  <li> <i>Hint:</i> see X3D Specification 25.2.2 Spatial reference frames <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes</a> </li> 
 *  <li> <i>Hint:</i> see X3D Specification 25.2.4 Specifying geospatial coordinates <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords</a> </li> 
 *  <li> <i>Hint:</i> UTM is Universal Transverse Mercator coordinate system <br> <a href="https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system" target="_blank">https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system</a> </li> 
 *  <li> <i>Warning:</i>  deprecated values are GDC (replaced by GD) and GCC (replaced by GC). </li> 
 * </ul>
	 * @return value of geoSystem field
	 */
	@Override
	public String[] getGeoSystem()
	{
		final String[] valuesArray = new String[geoSystem.size()];
		int i = 0;
		for (String arrayElement : geoSystem) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString geoSystem field, similar to {@link #getGeoSystem()}.

	 * @return value of geoSystem field
	 */
	public ArrayList<String> getGeoSystemList()
	{
		return geoSystem;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>geoSystem</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Identifies spatial reference frame: Geodetic (GD), Geocentric (GC), Universal Transverse Mercator (UTM). Supported values: "GD" "UTM" or "GC" followed by additional quoted string parameters as appropriate for the type. Hint: see X3D Specification 25.2.2 Spatial reference frames http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Spatialreferenceframes Hint: see X3D Specification 25.2.4 Specifying geospatial coordinates http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geodata.html#Specifyinggeospatialcoords Hint: UTM is Universal Transverse Mercator coordinate system https://en.wikipedia.org/wiki/Universal_Transverse_Mercator_coordinate_system Warning: deprecated values are GDC (replaced by GD) and GCC (replaced by GC).
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setGeoSystem(String[] newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			geoSystem.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setGeoSystem(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setGeoSystem(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setGeoSystem(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setGeoSystem(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setGeoSystem(String newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem.clear();
		geoSystem.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString geoSystem field, similar to {@link #setGeoSystem(String[])}.
	 * @param newValue is new value for the geoSystem field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setGeoSystem(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearGeoSystem(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		geoSystem = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of geoSystem field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject clearGeoSystem()
	{
		geoSystem.clear(); // reset
		return this;
	}
	/**
	 * Provide int value from outputOnly SFInt32 field named <i>level_changed</i>.
	 * @return value of level_changed field
	 */
	@Override
	public int getLevel()
	{
		return level;
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public GeoLODObject clearMetadata()
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide float value within allowed range of [0,infinity) from initializeOnly SFFloat field named <i>range</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Viewer range from geographic-coordinates center triggers quadtree loading/unloading.
 * <ul>
 *  <li> <i> Hint:</i>  not setting range values indicates that level switching can be optimized automatically based on performance. </li> 
 * </ul>
	 * @return value of range field
	 */
	@Override
	public float getRange()
	{
		return range;
	}

	/**
	 * Assign float value within allowed range of [0,infinity) to initializeOnly SFFloat field named <i>range</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Viewer range from geographic-coordinates center triggers quadtree loading/unloading. Hint: not setting range values indicates that level switching can be optimized automatically based on performance.
	 * @param newValue is new value for the range field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setRange(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoLOD range newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		range = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat range field, similar to {@link #setRange(float)}.
	 * @param newValue is new value for the range field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setRange(SFFloatObject newValue)
	{
		setRange(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of X3DChildNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from initializeOnly MFNode field <i>rootNode</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of rootNode field
	 */
	@Override
	public X3DNode[] getRootNode()
	{
		final X3DNode[] valuesArray = new X3DNode[rootNode.size()];
		int i = 0;
		for (X3DChildNode arrayElement : rootNode) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode rootNode field, similar to {@link #getRootNode()}.

	 * @return value of rootNode field
	 */
	public ArrayList<X3DChildNode> getRootNodeList()
	{
		return rootNode;
	}

	/**
	 * Assign X3DChildNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to initializeOnly MFNode field <i>rootNode</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value for the rootNode field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setRootNode(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearRootNode(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rootNode.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DChildNode)
			{
				rootNode.add((X3DChildNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DChildNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode rootNode field, similar to {@link #setRootNode(X3DNode[])}.
	 * @param newValue is new value for the rootNode field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setRootNode(ArrayList<X3DChildNode> newValue)
	{
		if (newValue == null)
		{
			clearRootNode(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rootNode = newValue;
		for (X3DChildNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child rootNode node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value to be appended the rootNode field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public GeoLODObject addRootNode(X3DChildNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		rootNode.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child rootNode nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value array to be appended the rootNode field.
	 */
	@Override
	public void addRootNode(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DChildNode)
			{
				rootNode.add((X3DChildNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DChildNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child rootNode node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DChildNode.
	 * @param newValue is new node for the rootNode field (restricted to X3DChildNode)
	 */
	@Override
	public void setRootNode(X3DNode newValue)
	{
		if (newValue == null)
		{
			rootNode.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DChildNode)
		{
			for (X3DChildNode element : rootNode)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			rootNode.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			rootNode.add((X3DChildNode)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DChildNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of rootNode field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject clearRootNode()
	{
		for (X3DChildNode element : rootNode)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		rootNode.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for initializeOnly MFNode field <i>rootNode</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getRootNode()
	 */
	public boolean hasRootNode()
	{
		return (!rootNode.isEmpty());
	}
	/**
	 * Provide array of String results from initializeOnly MFString field named <i>rootUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Use either rootNode or rootUrl to specify root geometry, not both.  * <br>

	 * @return value of rootUrl field
	 */
	@Override
	public String[] getRootUrl()
	{
		final String[] valuesArray = new String[rootUrl.size()];
		int i = 0;
		for (String arrayElement : rootUrl) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFString rootUrl field, similar to {@link #getRootUrl()}.

	 * @return value of rootUrl field
	 */
	public ArrayList<String> getRootUrlList()
	{
		return rootUrl;
	}

	/**
	 * Assign String array to initializeOnly MFString field named <i>rootUrl</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Use either rootNode or rootUrl to specify root geometry, not both.
	 * @param newValue is new value for the rootUrl field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setRootUrl(String[] newValue)
	{
		if (newValue == null)
		{
			clearRootUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rootUrl.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			rootUrl.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFString rootUrl field, similar to {@link #setRootUrl(String[])}.
	 * @param newValue is new value for the rootUrl field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setRootUrl(MFStringObject newValue)
	{
		if (newValue == null)
		{
			clearRootUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setRootUrl(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign single SFString object value to MFString rootUrl field, similar to {@link #setRootUrl(String[])}.
	 * @param newValue is new value for the rootUrl field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setRootUrl(SFStringObject newValue)
	{
		if (newValue == null)
		{
			clearRootUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setRootUrl(newValue.getValue());
		return this;
	}
	/**
	 * Assign singleton String value to MFString rootUrl field, similar to {@link #setRootUrl(String[])}.
	 * @param newValue is new value for the rootUrl field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setRootUrl(String newValue)
	{
		if (newValue == null)
		{
			clearRootUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rootUrl.clear();
		rootUrl.add(newValue);
		return this;
	}
	/**
	 * Assign ArrayList value of MFString rootUrl field, similar to {@link #setRootUrl(String[])}.
	 * @param newValue is new value for the rootUrl field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setRootUrl(ArrayList<String> newValue)
	{
		if (newValue == null)
		{
			clearRootUrl(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		rootUrl = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFString value of rootUrl field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public GeoLODObject clearRootUrl()
	{
		rootUrl.clear(); // reset
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final GeoLODObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to GeoLOD
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoLOD DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("GeoLOD DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setDEF(SFStringObject newValue)
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final GeoLODObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to GeoLOD
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("GeoLOD USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("GeoLOD USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final GeoLODObject setCssClass(String newValue)
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setCssClass(SFStringObject newValue)
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public GeoLODObject setIS(ISObject newValue)
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
	 * @return {@link GeoLODObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public GeoLODObject setUSE(GeoLODObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on GeoLODObject" +
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
	public GeoLODObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
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
		boolean      hasChild = (IS != null) || (geoOrigin != null) || (geoOriginProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (!rootNode.isEmpty());

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<GeoLOD"); // start opening tag
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
				stringX3D.append(" center='").append(SFVec3dObject.toString(getCenter())).append("'");
			}
			if (((getChild1Url().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" child1Url='").append(new MFStringObject(getChild1Url()).toStringX3D()).append("'");
			}
			if (((getChild2Url().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" child2Url='").append(new MFStringObject(getChild2Url()).toStringX3D()).append("'");
			}
			if (((getChild3Url().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" child3Url='").append(new MFStringObject(getChild3Url()).toStringX3D()).append("'");
			}
			if (((getChild4Url().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" child4Url='").append(new MFStringObject(getChild4Url()).toStringX3D()).append("'");
			}
			if (((getGeoSystem().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" geoSystem='").append(new MFStringObject(getGeoSystem()).toStringX3D()).append("'");
			}
			if (((getRange() != RANGE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" range='").append(SFFloatObject.toString(getRange())).append("'");
			}
			if (((getRootUrl().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" rootUrl='").append(new MFStringObject(getRootUrl()).toStringX3D()).append("'");
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
			if      (metadata != null)
			{
				stringX3D.append(((X3DConcreteElement)metadata).toStringX3D(indentLevel + indentIncrement));
			}
			else if (metadataProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)metadataProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (geoOrigin != null)
			{
				stringX3D.append(((X3DConcreteElement)geoOrigin).toStringX3D(indentLevel + indentIncrement));
			}
			else if (geoOriginProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)geoOriginProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (X3DChildNode element : rootNode)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</GeoLOD>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (geoOrigin != null) || (geoOriginProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (!rootNode.isEmpty());
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
			stringClassicVRML.append("GeoLOD").append(" { "); // define node name, node content follows

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
					stringClassicVRML.append("center ").append(SFVec3dObject.toString(getCenter())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("child1Url"))
						{
							stringClassicVRML.append(indentCharacter).append("child1Url").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getChild1Url().length > 0)
				{
					stringClassicVRML.append("child1Url ").append("[ ").append(MFStringObject.toString(getChild1Url())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("child2Url"))
						{
							stringClassicVRML.append(indentCharacter).append("child2Url").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getChild2Url().length > 0)
				{
					stringClassicVRML.append("child2Url ").append("[ ").append(MFStringObject.toString(getChild2Url())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("child3Url"))
						{
							stringClassicVRML.append(indentCharacter).append("child3Url").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getChild3Url().length > 0)
				{
					stringClassicVRML.append("child3Url ").append("[ ").append(MFStringObject.toString(getChild3Url())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("child4Url"))
						{
							stringClassicVRML.append(indentCharacter).append("child4Url").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getChild4Url().length > 0)
				{
					stringClassicVRML.append("child4Url ").append("[ ").append(MFStringObject.toString(getChild4Url())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("geoSystem"))
						{
							stringClassicVRML.append(indentCharacter).append("geoSystem").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getGeoSystem().length > 0)
				{
					stringClassicVRML.append("geoSystem ").append("[ ").append(MFStringObject.toString(getGeoSystem())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("range"))
						{
							stringClassicVRML.append(indentCharacter).append("range").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getRange() != RANGE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("range ").append(SFFloatObject.toString(getRange())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("rootUrl"))
						{
							stringClassicVRML.append(indentCharacter).append("rootUrl").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getRootUrl().length > 0)
				{
					stringClassicVRML.append("rootUrl ").append("[ ").append(MFStringObject.toString(getRootUrl())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
			if (geoOrigin != null)
			{
				stringClassicVRML.append(indentCharacter).append("geoOrigin").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) geoOrigin).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (geoOriginProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("geoOrigin").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) geoOriginProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
			if (rootNode.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("rootNode").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DChildNode element : rootNode)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
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
		if (geoOrigin != null)
		{
			referenceElement = ((X3DConcreteElement) geoOrigin).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (geoOriginProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) geoOriginProtoInstance).findElementByNameValue(nameValue, elementName);
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
		for (X3DChildNode element : rootNode) // MFNode
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
		if (geoOrigin != null)
		{
			referenceNode = ((X3DConcreteElement) geoOrigin).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (X3DChildNode element : rootNode) // MFNode
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

		setChild1Url(getChild1Url()); // exercise field checks, simple types

		setChild2Url(getChild2Url()); // exercise field checks, simple types

		setChild3Url(getChild3Url()); // exercise field checks, simple types

		setChild4Url(getChild4Url()); // exercise field checks, simple types

		setGeoSystem(getGeoSystem()); // exercise field checks, simple types

		setRange(getRange()); // exercise field checks, simple types

		setRootUrl(getRootUrl()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (geoOrigin != null)
		{
			setGeoOrigin(getGeoOrigin());
			((X3DConcreteElement) geoOrigin).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) geoOrigin).getValidationResult());
		}
		if (geoOriginProtoInstance != null)
		{
			setGeoOrigin(getGeoOriginProtoInstance());
			((X3DConcreteElement) geoOriginProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) geoOriginProtoInstance).getValidationResult());
		}
		if ((geoOrigin != null) && (geoOriginProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both geoOrigin and geoOriginProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasGeoOrigin()) // test USE restrictions
		{
			String errorNotice = "GeoLOD USE='" + getUSE() + "' is not allowed to have contained SFNode geoOrigin";
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
			String errorNotice = "GeoLOD USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		for (X3DChildNode element : rootNode) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setRootNode(getRootNode()); // also test getter/setter validation

		if (isUSE() && hasRootNode()) // test USE restrictions
		{
			String errorNotice = "GeoLOD USE='" + getUSE() + "' is not allowed to have contained MFNode rootNode";
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
				if ( nextComponent.getName().equals("Geospatial") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Geospatial' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Geospatial\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
