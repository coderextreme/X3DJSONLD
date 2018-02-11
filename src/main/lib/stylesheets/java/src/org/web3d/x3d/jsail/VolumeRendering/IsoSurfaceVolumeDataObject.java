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

package org.web3d.x3d.jsail.VolumeRendering;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.VolumeRendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.sai.VolumeRendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.VolumeRendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.VolumeRendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.sai.VolumeRendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Texturing3D.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: (X3D version 3.3 or later) IsoSurfaceVolumeData displays one or more surfaces extracted from a voxel dataset. A surface is defined as the boundary between regions in the volume where the voxel values are larger than a given value (the iso value) on one side of the boundary and smaller on the other side, and the gradient magnitude is larger than surfaceTolerance.
 * <ul>
 *  <li> <i>Hint:</i> IsoSurfaceVolumeData can contain a single Texture3D node with containerField='gradients' that is used to provide explicit per-voxel gradient direction information for determining surface boundaries, rather than having values implicitly calculated by the implementation. </li> 
 *  <li> <i>Hint:</i> IsoSurfaceVolumeData can contain another Texture3D node with containerField='voxels' containing voxel data. </li> 
 *  <li> <i>Hint:</i>  IsoSurfaceVolumeData can contain multiple VolumeStyle nodes. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#IsoSurfaceVolumeData" target="blank">X3D Abstract Specification: IsoSurfaceVolumeData</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IsoSurfaceVolumeData" target="_blank">X3D Tooltips: IsoSurfaceVolumeData</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Volume" target="_blank">X3D Scene Authoring Hints: Volume</a>
 */
public class IsoSurfaceVolumeDataObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.VolumeRendering.IsoSurfaceVolumeData
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private float[] bboxCenter; // SFVec3f

	private float[] bboxSize; // SFVec3f

	private float contourStepSize; // SFFloat

	private float[] dimensions; // SFVec3f

	private X3DTexture3DNode gradients; // SFNode acceptable node types: X3DTexture3DNode
	private ProtoInstanceObject gradientsProtoInstance; // allowed alternative for gradients field

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private ArrayList<X3DVolumeRenderStyleNode> renderStyle = new ArrayList<>(); // MFNode acceptable node types: X3DVolumeRenderStyleNode

	private float surfaceTolerance; // SFFloat

	private ArrayList<Float> surfaceValues = new ArrayList<>(); // MFFloat

	private X3DTexture3DNode voxels; // SFNode acceptable node types: X3DTexture3DNode
	private ProtoInstanceObject voxelsProtoInstance; // allowed alternative for voxels field

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>IsoSurfaceVolumeData</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "IsoSurfaceVolumeData";

	/** Provides name of this element: <i>IsoSurfaceVolumeData</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>IsoSurfaceVolumeData</i> element: <i>VolumeRendering</i> */
	public static final String COMPONENT = "VolumeRendering";

	/** Defines X3D component for the <i>IsoSurfaceVolumeData</i> element: <i>VolumeRendering</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>VolumeRendering</i> component level for this element: <i>2</i> */
	public static final int LEVEL = 2;

	/** Provides default X3D component level for this element: <i>2</i>
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

	/** SFFloat field named <i>contourStepSize</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float CONTOURSTEPSIZE_DEFAULT_VALUE = 0f;

	/** SFVec3f field named <i>dimensions</i> has default value <i>{1f,1f,1f}</i> (Java syntax) or <i>1 1 1</i> (XML syntax). */
	public static final float[] DIMENSIONS_DEFAULT_VALUE = {1f,1f,1f};

	/** SFFloat field named <i>surfaceTolerance</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float SURFACETOLERANCE_DEFAULT_VALUE = 0f;

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
			case "contourStepSize":
				result = "SFFloat";
				break;
			case "dimensions":
				result = "SFVec3f";
				break;
			case "gradients":
				result = "SFNode";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "renderStyle":
				result = "MFNode";
				break;
			case "surfaceTolerance":
				result = "SFFloat";
				break;
			case "surfaceValues":
				result = "MFFloat";
				break;
			case "voxels":
				result = "SFNode";
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
			case "contourStepSize":
				result = "inputOutput";
				break;
			case "dimensions":
				result = "inputOutput";
				break;
			case "gradients":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "renderStyle":
				result = "inputOutput";
				break;
			case "surfaceTolerance":
				result = "inputOutput";
				break;
			case "surfaceValues":
				result = "inputOutput";
				break;
			case "voxels":
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

	/** fromField ROUTE name for SFFloat field named <i>contourStepSize</i>. */
	public static final String fromField_CONTOURSTEPSIZE = "contourStepSize";

	/** toField ROUTE name for SFFloat field named <i>contourStepSize</i>. */
	public static final String toField_CONTOURSTEPSIZE = "contourStepSize";

	/** fromField ROUTE name for SFVec3f field named <i>dimensions</i>. */
	public static final String fromField_DIMENSIONS = "dimensions";

	/** toField ROUTE name for SFVec3f field named <i>dimensions</i>. */
	public static final String toField_DIMENSIONS = "dimensions";

	/** fromField ROUTE name for SFNode field named <i>gradients</i>. */
	public static final String fromField_GRADIENTS = "gradients";

	/** toField ROUTE name for SFNode field named <i>gradients</i>. */
	public static final String toField_GRADIENTS = "gradients";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for MFNode field named <i>renderStyle</i>. */
	public static final String fromField_RENDERSTYLE = "renderStyle";

	/** toField ROUTE name for MFNode field named <i>renderStyle</i>. */
	public static final String toField_RENDERSTYLE = "renderStyle";

	/** fromField ROUTE name for SFFloat field named <i>surfaceTolerance</i>. */
	public static final String fromField_SURFACETOLERANCE = "surfaceTolerance";

	/** toField ROUTE name for SFFloat field named <i>surfaceTolerance</i>. */
	public static final String toField_SURFACETOLERANCE = "surfaceTolerance";

	/** fromField ROUTE name for MFFloat field named <i>surfaceValues</i>. */
	public static final String fromField_SURFACEVALUES = "surfaceValues";

	/** toField ROUTE name for MFFloat field named <i>surfaceValues</i>. */
	public static final String toField_SURFACEVALUES = "surfaceValues";

	/** fromField ROUTE name for SFNode field named <i>voxels</i>. */
	public static final String fromField_VOXELS = "voxels";

	/** toField ROUTE name for SFNode field named <i>voxels</i>. */
	public static final String toField_VOXELS = "voxels";

	/** Constructor for IsoSurfaceVolumeDataObject to initialize member variables with default values. */
	public IsoSurfaceVolumeDataObject()
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
		contourStepSize = CONTOURSTEPSIZE_DEFAULT_VALUE;
		dimensions = DIMENSIONS_DEFAULT_VALUE;
		gradients = null; // clear out any prior node
		metadata = null; // clear out any prior node
		renderStyle = new ArrayList<>();
		surfaceTolerance = SURFACETOLERANCE_DEFAULT_VALUE;
		surfaceValues = new ArrayList<>();
		voxels = null; // clear out any prior node

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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setBboxCenter(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData bboxCenter newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		bboxCenter = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setBboxCenter(SFVec3fObject newValue)
	{
		setBboxCenter(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxCenter field, similar to {@link #setBboxCenter(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setBboxCenter(float x, float y, float z)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setBboxSize(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
		// Check legal value for bounding box bboxSize
		if (((newValue[0] < 0) || (newValue[1] < 0) || (newValue[2] < 0)) && !((newValue[0] == -1) && (newValue[1] == -1) && (newValue[2] == -1))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData bboxSize newValue=" + SFVec3fObject.toString(newValue) + " has negative value but is not equal to sentinel {-1,-1,-1} value.");
		}
		bboxSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setBboxSize(SFVec3fObject newValue)
	{
		setBboxSize(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f bboxSize field, similar to {@link #setBboxSize(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setBboxSize(float x, float y, float z)
	{
		setBboxSize(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide float value from inputOutput SFFloat field named <i>contourStepSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> If contourStepSize is non-zero, also render all isosurfaces that are multiples of that step size from initial surface value.
 * <ul>
 *  <li> <i> Hint:</i>  contourStepSize can be negative so that steppping can proceed in a negative direction. </li> 
 * </ul>
	 * @return value of contourStepSize field
	 */
	@Override
	public float getContourStepSize()
	{
		return contourStepSize;
	}

	/**
	 * Assign float value to inputOutput SFFloat field named <i>contourStepSize</i>.
	 * <br><br>
	 * <i>Tooltip:</i> If contourStepSize is non-zero, also render all isosurfaces that are multiples of that step size from initial surface value. Hint: contourStepSize can be negative so that steppping can proceed in a negative direction.
	 * @param newValue is new value for the contourStepSize field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setContourStepSize(float newValue)
	{
		contourStepSize = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat contourStepSize field, similar to {@link #setContourStepSize(float)}.
	 * @param newValue is new value for the contourStepSize field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setContourStepSize(SFFloatObject newValue)
	{
		setContourStepSize(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of 3-tuple float results within allowed range of (0,infinity) from inputOutput SFVec3f field named <i>dimensions</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Actual-size X-Y-Z dimensions of volume data in local coordinate system.  * <br>

	 * @return value of dimensions field
	 */
	@Override
	public float[] getDimensions()
	{
		return dimensions;
	}

	/**
	 * Assign 3-tuple float array within allowed range of (0,infinity) to inputOutput SFVec3f field named <i>dimensions</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Actual-size X-Y-Z dimensions of volume data in local coordinate system.
	 * @param newValue is new value for the dimensions field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setDimensions(float[] newValue)
	{
		if (newValue == null)
			newValue = new float[0];
		// Check that newValue parameter has legal size before assigning to scene graph
		if (newValue.length != 3) // 3-tuple check
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData dimensions newValue=" + SFVec3fObject.toString(newValue) + " has length=" + newValue.length + " instead of required length 3");
		}
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if ((newValue[0] <= 0f) || (newValue[1] <= 0f) || (newValue[2] <= 0f)) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData dimensions newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
            }
		dimensions = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFVec3f dimensions field, similar to {@link #setDimensions(float[])}.
	 * @param newValue is new value for the dimensions field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setDimensions(SFVec3fObject newValue)
	{
		setDimensions(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign values to SFVec3f dimensions field, similar to {@link #setDimensions(float[])}.

	 * @param x first component
	 * @param y second component
	 * @param z third component

	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setDimensions(float x, float y, float z)
	{
		setDimensions(new float[] {x, y, z});
		return this;
	}
	/**
	 * Provide X3DTexture3DNode instance (using a properly typed node) from inputOutput SFNode field <i>gradients</i>.
	 * @see #getGradientsProtoInstance()
	 * @return value of gradients field
	 */
	@Override
	public X3DTexture3DNode getGradients()
	{
		return gradients;
	}

	/**
	 * Assign X3DTexture3DNode instance (using a properly typed node) to inputOutput SFNode field <i>gradients</i>.
	 * @see #setGradients(ProtoInstanceObject)
	 * @param newValue is new value for the gradients field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setGradients(X3DTexture3DNode newValue)
	{
		gradients = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) gradients).setParentObject(this); // parentTest15
		}
		if (gradientsProtoInstance != null)
		{
			gradientsProtoInstance.setParentObject(null); // housekeeping, clear prior object
			gradientsProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of gradients field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public IsoSurfaceVolumeDataObject clearGradients()
	{
		((X3DConcreteElement) gradients).clearParentObject(); // remove references to facilitate Java memory management
		gradients = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>gradients</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DTexture3DNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the gradients field
	 * @see #setGradients(X3DTexture3DNode)
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IsoSurfaceVolumeDataObject setGradients(ProtoInstanceObject newProtoInstanceNode)
	{
		if (gradients != null)
		{
			((X3DConcreteElement) gradients).setParentObject(null); // housekeeping, clear prior object
			gradients = null;
		}
		gradientsProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>gradients</i>, if available.
	 * @see #getGradients()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getGradientsProtoInstance()
	{
		return gradientsProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>gradients</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getGradients()
	 * @see #getGradientsProtoInstance()
	 */
	public boolean hasGradients()
	{
		return (gradients != null) || (gradientsProtoInstance != null);
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public IsoSurfaceVolumeDataObject clearMetadata()
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IsoSurfaceVolumeDataObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide array of X3DVolumeRenderStyleNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>renderStyle</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVolumeRenderStyleNode.
	 * @see org.web3d.x3d.sai.VolumeRendering.X3DVolumeRenderStyleNode
	 * @return value of renderStyle field
	 */
	@Override
	public X3DNode[] getRenderStyle()
	{
		final X3DNode[] valuesArray = new X3DNode[renderStyle.size()];
		int i = 0;
		for (X3DVolumeRenderStyleNode arrayElement : renderStyle) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode renderStyle field, similar to {@link #getRenderStyle()}.

	 * @return value of renderStyle field
	 */
	public ArrayList<X3DVolumeRenderStyleNode> getRenderStyleList()
	{
		return renderStyle;
	}

	/**
	 * Assign X3DVolumeRenderStyleNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>renderStyle</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVolumeRenderStyleNode.
	 * @param newValue is new value for the renderStyle field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setRenderStyle(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearRenderStyle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		renderStyle.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DVolumeRenderStyleNode)
			{
				renderStyle.add((X3DVolumeRenderStyleNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DVolumeRenderStyleNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode renderStyle field, similar to {@link #setRenderStyle(X3DNode[])}.
	 * @param newValue is new value for the renderStyle field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setRenderStyle(ArrayList<X3DVolumeRenderStyleNode> newValue)
	{
		if (newValue == null)
		{
			clearRenderStyle(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		renderStyle = newValue;
		for (X3DVolumeRenderStyleNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child renderStyle node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVolumeRenderStyleNode.
	 * @param newValue is new value to be appended the renderStyle field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public IsoSurfaceVolumeDataObject addRenderStyle(X3DVolumeRenderStyleNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		renderStyle.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child renderStyle nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVolumeRenderStyleNode.
	 * @param newValue is new value array to be appended the renderStyle field.
	 */
	@Override
	public void addRenderStyle(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DVolumeRenderStyleNode)
			{
				renderStyle.add((X3DVolumeRenderStyleNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DVolumeRenderStyleNode; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child renderStyle node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DVolumeRenderStyleNode.
	 * @param newValue is new node for the renderStyle field (restricted to X3DVolumeRenderStyleNode)
	 */
	@Override
	public void setRenderStyle(X3DNode newValue)
	{
		if (newValue == null)
		{
			renderStyle.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DVolumeRenderStyleNode)
		{
			for (X3DVolumeRenderStyleNode element : renderStyle)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			renderStyle.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			renderStyle.add((X3DVolumeRenderStyleNode)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DVolumeRenderStyleNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of renderStyle field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IsoSurfaceVolumeDataObject clearRenderStyle()
	{
		for (X3DVolumeRenderStyleNode element : renderStyle)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		renderStyle.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>renderStyle</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getRenderStyle()
	 */
	public boolean hasRenderStyle()
	{
		return (!renderStyle.isEmpty());
	}
	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>surfaceTolerance</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Threshold for gradient magnitude for voxel inolusion in isosurface.
 * <ul>
 *  <li> <i> Hint:</i>  contained Texture3D node with containerField='gradients' can provide explicit per-voxel gradient direction information for determining surface boundaries. </li> 
 * </ul>
	 * @return value of surfaceTolerance field
	 */
	@Override
	public float getSurfaceTolerance()
	{
		return surfaceTolerance;
	}

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>surfaceTolerance</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) Threshold for gradient magnitude for voxel inolusion in isosurface. Hint: contained Texture3D node with containerField='gradients' can provide explicit per-voxel gradient direction information for determining surface boundaries.
	 * @param newValue is new value for the surfaceTolerance field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setSurfaceTolerance(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData surfaceTolerance newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		surfaceTolerance = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat surfaceTolerance field, similar to {@link #setSurfaceTolerance(float)}.
	 * @param newValue is new value for the surfaceTolerance field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setSurfaceTolerance(SFFloatObject newValue)
	{
		setSurfaceTolerance(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of Float results from inputOutput MFFloat field named <i>surfaceValues</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  If surfaceValues has one value defined, render corresponding isosurface plus any isosurfaces based on contourStepSize. If surfaceValues has more than one value defined, ignore contourStepSize and render surfaces corresponding to listed surfaceValues.  * <br>

	 * @return value of surfaceValues field
	 */
	@Override
	public float[] getSurfaceValues()
	{
		final float[] valuesArray = new float[surfaceValues.size()];
		int i = 0;
		for (Float arrayElement : surfaceValues) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat surfaceValues field, similar to {@link #getSurfaceValues()}.

	 * @return value of surfaceValues field
	 */
	public ArrayList<Float> getSurfaceValuesList()
	{
		return surfaceValues;
	}

	/**
	 * Assign Float array to inputOutput MFFloat field named <i>surfaceValues</i>.
	 * <br><br>
	 * <i>Tooltip:</i> If surfaceValues has one value defined, render corresponding isosurface plus any isosurfaces based on contourStepSize. If surfaceValues has more than one value defined, ignore contourStepSize and render surfaces corresponding to listed surfaceValues.
	 * @param newValue is new value for the surfaceValues field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setSurfaceValues(float[] newValue)
	{
		if (newValue == null)
		{
			clearSurfaceValues(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		surfaceValues.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			surfaceValues.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat surfaceValues field, similar to {@link #setSurfaceValues(float[])}.
	 * @param newValue is new value for the surfaceValues field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setSurfaceValues(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearSurfaceValues(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setSurfaceValues(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFFloat surfaceValues field, similar to {@link #setSurfaceValues(float[])}.
	 * @param newValue is new value for the surfaceValues field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setSurfaceValues(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearSurfaceValues(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		surfaceValues = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of surfaceValues field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IsoSurfaceVolumeDataObject clearSurfaceValues()
	{
		surfaceValues.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat surfaceValues field, similar to {@link #setSurfaceValues(float[])}.
	 * @param newValue is new value for the surfaceValues field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setSurfaceValues(int[] newValue)
	{
		if (newValue == null)
		{
			clearSurfaceValues(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setSurfaceValues(holdArray);
		return this;
	}
	/**
	 * Provide X3DTexture3DNode instance (using a properly typed node) from inputOutput SFNode field <i>voxels</i>.
	 * @see #getVoxelsProtoInstance()
	 * @return value of voxels field
	 */
	@Override
	public X3DTexture3DNode getVoxels()
	{
		return voxels;
	}

	/**
	 * Assign X3DTexture3DNode instance (using a properly typed node) to inputOutput SFNode field <i>voxels</i>.
	 * @see #setVoxels(ProtoInstanceObject)
	 * @param newValue is new value for the voxels field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setVoxels(X3DTexture3DNode newValue)
	{
		voxels = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) voxels).setParentObject(this); // parentTest15
		}
		if (voxelsProtoInstance != null)
		{
			voxelsProtoInstance.setParentObject(null); // housekeeping, clear prior object
			voxelsProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of voxels field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public IsoSurfaceVolumeDataObject clearVoxels()
	{
		((X3DConcreteElement) voxels).clearParentObject(); // remove references to facilitate Java memory management
		voxels = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>voxels</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DTexture3DNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the voxels field
	 * @see #setVoxels(X3DTexture3DNode)
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IsoSurfaceVolumeDataObject setVoxels(ProtoInstanceObject newProtoInstanceNode)
	{
		if (voxels != null)
		{
			((X3DConcreteElement) voxels).setParentObject(null); // housekeeping, clear prior object
			voxels = null;
		}
		voxelsProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>voxels</i>, if available.
	 * @see #getVoxels()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getVoxelsProtoInstance()
	{
		return voxelsProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>voxels</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getVoxels()
	 * @see #getVoxelsProtoInstance()
	 */
	public boolean hasVoxels()
	{
		return (voxels != null) || (voxelsProtoInstance != null);
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final IsoSurfaceVolumeDataObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to IsoSurfaceVolumeData
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("IsoSurfaceVolumeData DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setDEF(SFStringObject newValue)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final IsoSurfaceVolumeDataObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to IsoSurfaceVolumeData
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IsoSurfaceVolumeData USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("IsoSurfaceVolumeData USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final IsoSurfaceVolumeDataObject setCssClass(String newValue)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setCssClass(SFStringObject newValue)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeDataObject setIS(ISObject newValue)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeDataObject setUSE(IsoSurfaceVolumeDataObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on IsoSurfaceVolumeDataObject" +
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
	public IsoSurfaceVolumeDataObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IsoSurfaceVolumeDataObject addComments (String newComment)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IsoSurfaceVolumeDataObject addComments (String[] newComments)
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
	 * @return {@link IsoSurfaceVolumeDataObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IsoSurfaceVolumeDataObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (gradients != null) || (gradientsProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (!renderStyle.isEmpty()) || (voxels != null) || (voxelsProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<IsoSurfaceVolumeData"); // start opening tag
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
			if (((getContourStepSize() != CONTOURSTEPSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" contourStepSize='").append(SFFloatObject.toString(getContourStepSize())).append("'");
			}
			if ((!Arrays.equals(getDimensions(), DIMENSIONS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" dimensions='").append(SFVec3fObject.toString(getDimensions())).append("'");
			}
			if (((getSurfaceTolerance() != SURFACETOLERANCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" surfaceTolerance='").append(SFFloatObject.toString(getSurfaceTolerance())).append("'");
			}
			if (((getSurfaceValues().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" surfaceValues='").append(MFFloatObject.toString(getSurfaceValues())).append("'");
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
			if      (gradients != null)
			{
				stringX3D.append(((X3DConcreteElement)gradients).toStringX3D(indentLevel + indentIncrement));
			}
			else if (gradientsProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)gradientsProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (X3DVolumeRenderStyleNode element : renderStyle)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			if      (voxels != null)
			{
				stringX3D.append(((X3DConcreteElement)voxels).toStringX3D(indentLevel + indentIncrement));
			}
			else if (voxelsProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)voxelsProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</IsoSurfaceVolumeData>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (gradients != null) || (gradientsProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (!renderStyle.isEmpty()) || (voxels != null) || (voxelsProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("IsoSurfaceVolumeData").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("contourStepSize"))
						{
							stringClassicVRML.append(indentCharacter).append("contourStepSize").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getContourStepSize() != CONTOURSTEPSIZE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("contourStepSize ").append(SFFloatObject.toString(getContourStepSize())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("dimensions"))
						{
							stringClassicVRML.append(indentCharacter).append("dimensions").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!Arrays.equals(getDimensions(), DIMENSIONS_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("dimensions ").append(SFVec3fObject.toString(getDimensions())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("surfaceTolerance"))
						{
							stringClassicVRML.append(indentCharacter).append("surfaceTolerance").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getSurfaceTolerance() != SURFACETOLERANCE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("surfaceTolerance ").append(SFFloatObject.toString(getSurfaceTolerance())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("surfaceValues"))
						{
							stringClassicVRML.append(indentCharacter).append("surfaceValues").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getSurfaceValues().length > 0)
				{
					stringClassicVRML.append("surfaceValues ").append("[ ").append(MFFloatObject.toString(getSurfaceValues())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
			if (gradients != null)
			{
				stringClassicVRML.append(indentCharacter).append("gradients").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) gradients).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (gradientsProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("gradients").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) gradientsProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
			if (renderStyle.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("renderStyle").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DVolumeRenderStyleNode element : renderStyle)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (voxels != null)
			{
				stringClassicVRML.append(indentCharacter).append("voxels").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) voxels).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (voxelsProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("voxels").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) voxelsProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
		if (gradients != null)
		{
			referenceElement = ((X3DConcreteElement) gradients).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (gradientsProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) gradientsProtoInstance).findElementByNameValue(nameValue, elementName);
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
		for (X3DVolumeRenderStyleNode element : renderStyle) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		if (voxels != null)
		{
			referenceElement = ((X3DConcreteElement) voxels).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (voxelsProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) voxelsProtoInstance).findElementByNameValue(nameValue, elementName);
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
		if (gradients != null)
		{
			referenceNode = ((X3DConcreteElement) gradients).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (X3DVolumeRenderStyleNode element : renderStyle) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		if (voxels != null)
		{
			referenceNode = ((X3DConcreteElement) voxels).findNodeByDEF(DEFvalue);
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

		setBboxCenter(getBboxCenter()); // exercise field checks, simple types

		setBboxSize(getBboxSize()); // exercise field checks, simple types

		setContourStepSize(getContourStepSize()); // exercise field checks, simple types

		setDimensions(getDimensions()); // exercise field checks, simple types

		setSurfaceTolerance(getSurfaceTolerance()); // exercise field checks, simple types

		setSurfaceValues(getSurfaceValues()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (gradients != null)
		{
			setGradients(getGradients());
			((X3DConcreteElement) gradients).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) gradients).getValidationResult());
		}
		if (gradientsProtoInstance != null)
		{
			setGradients(getGradientsProtoInstance());
			((X3DConcreteElement) gradientsProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) gradientsProtoInstance).getValidationResult());
		}
		if ((gradients != null) && (gradientsProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both gradients and gradientsProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasGradients()) // test USE restrictions
		{
			String errorNotice = "IsoSurfaceVolumeData USE='" + getUSE() + "' is not allowed to have contained SFNode gradients";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "IsoSurfaceVolumeData USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "IsoSurfaceVolumeData USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "IsoSurfaceVolumeData USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		for (X3DVolumeRenderStyleNode element : renderStyle) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setRenderStyle(getRenderStyle()); // also test getter/setter validation

		if (isUSE() && hasRenderStyle()) // test USE restrictions
		{
			String errorNotice = "IsoSurfaceVolumeData USE='" + getUSE() + "' is not allowed to have contained MFNode renderStyle";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		if (voxels != null)
		{
			setVoxels(getVoxels());
			((X3DConcreteElement) voxels).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) voxels).getValidationResult());
		}
		if (voxelsProtoInstance != null)
		{
			setVoxels(getVoxelsProtoInstance());
			((X3DConcreteElement) voxelsProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) voxelsProtoInstance).getValidationResult());
		}
		if ((voxels != null) && (voxelsProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both voxels and voxelsProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasVoxels()) // test USE restrictions
		{
			String errorNotice = "IsoSurfaceVolumeData USE='" + getUSE() + "' is not allowed to have contained SFNode voxels";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "IsoSurfaceVolumeData USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("VolumeRendering") &&
					(nextComponent.getLevel() >= 2))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='VolumeRendering' level='2'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"VolumeRendering\").setLevel(2);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
