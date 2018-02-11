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

package org.web3d.x3d.jsail.NURBS;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.NURBS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.sai.NURBS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.NURBS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.NURBS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.sai.NURBS.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.NURBS.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>:  NurbsTrimmedSurface generates texture coordinates from a Non-Uniform Rational B-Spline (NURBS) surface.  * <br>
 * <br>

 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/nurbs.html#NurbsTrimmedSurface" target="blank">X3D Abstract Specification: NurbsTrimmedSurface</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#NurbsTrimmedSurface" target="_blank">X3D Tooltips: NurbsTrimmedSurface</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class NurbsTrimmedSurfaceObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.NURBS.NurbsTrimmedSurface
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private X3DCoordinateNode controlPoint; // SFNode acceptable node types: X3DCoordinateNode
	private ProtoInstanceObject controlPointProtoInstance; // allowed alternative for controlPoint field

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private boolean solid; // SFBool

	private X3DNode texCoord; // SFNode acceptable node types: X3DTextureCoordinateNode|NurbsTextureCoordinate
	private ProtoInstanceObject texCoordProtoInstance; // allowed alternative for texCoord field

	private ArrayList<Contour2D> trimmingContour = new ArrayList<>(); // MFNode acceptable node types: Contour2D

	private boolean uClosed; // SFBool

	private int uDimension; // SFInt32

	private ArrayList<Double> uKnot = new ArrayList<>(); // MFDouble

	private int uOrder; // SFInt32

	private int uTessellation; // SFInt32

	private boolean vClosed; // SFBool

	private int vDimension; // SFInt32

	private ArrayList<Double> vKnot = new ArrayList<>(); // MFDouble

	private int vOrder; // SFInt32

	private int vTessellation; // SFInt32

	private ArrayList<Double> weight = new ArrayList<>(); // MFDouble

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>NurbsTrimmedSurface</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "NurbsTrimmedSurface";

	/** Provides name of this element: <i>NurbsTrimmedSurface</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>NurbsTrimmedSurface</i> element: <i>NURBS</i> */
	public static final String COMPONENT = "NURBS";

	/** Defines X3D component for the <i>NurbsTrimmedSurface</i> element: <i>NURBS</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>NURBS</i> component level for this element: <i>4</i> */
	public static final int LEVEL = 4;

	/** Provides default X3D component level for this element: <i>4</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFBool field named <i>solid</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean SOLID_DEFAULT_VALUE = true;

	/** SFBool field named <i>uClosed</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean UCLOSED_DEFAULT_VALUE = false;

	/** SFInt32 field named <i>uDimension</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int UDIMENSION_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>uOrder</i> has default value <i>3</i> (Java syntax) or <i>3</i> (XML syntax). */
	public static final int UORDER_DEFAULT_VALUE = 3;

	/** SFInt32 field named <i>uTessellation</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int UTESSELLATION_DEFAULT_VALUE = 0;

	/** SFBool field named <i>vClosed</i> has default value <i>false</i> (Java syntax) or <i>false</i> (XML syntax). */
	public static final boolean VCLOSED_DEFAULT_VALUE = false;

	/** SFInt32 field named <i>vDimension</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int VDIMENSION_DEFAULT_VALUE = 0;

	/** SFInt32 field named <i>vOrder</i> has default value <i>3</i> (Java syntax) or <i>3</i> (XML syntax). */
	public static final int VORDER_DEFAULT_VALUE = 3;

	/** SFInt32 field named <i>vTessellation</i> has default value <i>0</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final int VTESSELLATION_DEFAULT_VALUE = 0;

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
			case "addTrimmingContour":
				result = "MFNode";
				break;
			case "controlPoint":
				result = "SFNode";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "removeTrimmingContour":
				result = "MFNode";
				break;
			case "solid":
				result = "SFBool";
				break;
			case "texCoord":
				result = "SFNode";
				break;
			case "trimmingContour":
				result = "MFNode";
				break;
			case "uClosed":
				result = "SFBool";
				break;
			case "uDimension":
				result = "SFInt32";
				break;
			case "uKnot":
				result = "MFDouble";
				break;
			case "uOrder":
				result = "SFInt32";
				break;
			case "uTessellation":
				result = "SFInt32";
				break;
			case "vClosed":
				result = "SFBool";
				break;
			case "vDimension":
				result = "SFInt32";
				break;
			case "vKnot":
				result = "MFDouble";
				break;
			case "vOrder":
				result = "SFInt32";
				break;
			case "vTessellation":
				result = "SFInt32";
				break;
			case "weight":
				result = "MFDouble";
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
			case "addTrimmingContour":
				result = "inputOnly";
				break;
			case "controlPoint":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "removeTrimmingContour":
				result = "inputOnly";
				break;
			case "solid":
				result = "initializeOnly";
				break;
			case "texCoord":
				result = "inputOutput";
				break;
			case "trimmingContour":
				result = "inputOutput";
				break;
			case "uClosed":
				result = "initializeOnly";
				break;
			case "uDimension":
				result = "initializeOnly";
				break;
			case "uKnot":
				result = "initializeOnly";
				break;
			case "uOrder":
				result = "initializeOnly";
				break;
			case "uTessellation":
				result = "inputOutput";
				break;
			case "vClosed":
				result = "initializeOnly";
				break;
			case "vDimension":
				result = "initializeOnly";
				break;
			case "vKnot":
				result = "initializeOnly";
				break;
			case "vOrder":
				result = "initializeOnly";
				break;
			case "vTessellation":
				result = "inputOutput";
				break;
			case "weight":
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
	String containerField_DEFAULT_VALUE = "geometry";

	// String constants for field names usable in ROUTE statements

	/** toField ROUTE name for MFNode field named <i>addTrimmingContour</i>. */
	public static final String toField_ADDTRIMMINGCONTOUR = "addTrimmingContour";

	/** fromField ROUTE name for SFNode field named <i>controlPoint</i>. */
	public static final String fromField_CONTROLPOINT = "controlPoint";

	/** toField ROUTE name for SFNode field named <i>controlPoint</i>. */
	public static final String toField_CONTROLPOINT = "controlPoint";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** toField ROUTE name for MFNode field named <i>removeTrimmingContour</i>. */
	public static final String toField_REMOVETRIMMINGCONTOUR = "removeTrimmingContour";

	/** fromField ROUTE name for SFNode field named <i>texCoord</i>. */
	public static final String fromField_TEXCOORD = "texCoord";

	/** toField ROUTE name for SFNode field named <i>texCoord</i>. */
	public static final String toField_TEXCOORD = "texCoord";

	/** fromField ROUTE name for MFNode field named <i>trimmingContour</i>. */
	public static final String fromField_TRIMMINGCONTOUR = "trimmingContour";

	/** toField ROUTE name for MFNode field named <i>trimmingContour</i>. */
	public static final String toField_TRIMMINGCONTOUR = "trimmingContour";

	/** fromField ROUTE name for SFInt32 field named <i>uTessellation</i>. */
	public static final String fromField_UTESSELLATION = "uTessellation";

	/** toField ROUTE name for SFInt32 field named <i>uTessellation</i>. */
	public static final String toField_UTESSELLATION = "uTessellation";

	/** fromField ROUTE name for SFInt32 field named <i>vTessellation</i>. */
	public static final String fromField_VTESSELLATION = "vTessellation";

	/** toField ROUTE name for SFInt32 field named <i>vTessellation</i>. */
	public static final String toField_VTESSELLATION = "vTessellation";

	/** fromField ROUTE name for MFDouble field named <i>weight</i>. */
	public static final String fromField_WEIGHT = "weight";

	/** toField ROUTE name for MFDouble field named <i>weight</i>. */
	public static final String toField_WEIGHT = "weight";

	/** Constructor for NurbsTrimmedSurfaceObject to initialize member variables with default values. */
	public NurbsTrimmedSurfaceObject()
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

		controlPoint = null; // clear out any prior node
		metadata = null; // clear out any prior node
		solid = SOLID_DEFAULT_VALUE;
		texCoord = null; // clear out any prior node
		trimmingContour = new ArrayList<>();
		uClosed = UCLOSED_DEFAULT_VALUE;
		uDimension = UDIMENSION_DEFAULT_VALUE;
		uKnot = new ArrayList<>();
		uOrder = UORDER_DEFAULT_VALUE;
		uTessellation = UTESSELLATION_DEFAULT_VALUE;
		vClosed = VCLOSED_DEFAULT_VALUE;
		vDimension = VDIMENSION_DEFAULT_VALUE;
		vKnot = new ArrayList<>();
		vOrder = VORDER_DEFAULT_VALUE;
		vTessellation = VTESSELLATION_DEFAULT_VALUE;
		weight = new ArrayList<>();

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>controlPoint</i>.
	 * @see #getControlPointProtoInstance()
	 * @return value of controlPoint field
	 */
	@Override
	public X3DCoordinateNode getControlPoint()
	{
		return controlPoint;
	}

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>controlPoint</i>.
	 * @see #setControlPoint(ProtoInstanceObject)
	 * @param newValue is new value for the controlPoint field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setControlPoint(X3DCoordinateNode newValue)
	{
		controlPoint = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) controlPoint).setParentObject(this); // parentTest15
		}
		if (controlPointProtoInstance != null)
		{
			controlPointProtoInstance.setParentObject(null); // housekeeping, clear prior object
			controlPointProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of controlPoint field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public NurbsTrimmedSurfaceObject clearControlPoint()
	{
		((X3DConcreteElement) controlPoint).clearParentObject(); // remove references to facilitate Java memory management
		controlPoint = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>controlPoint</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DCoordinateNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the controlPoint field
	 * @see #setControlPoint(X3DCoordinateNode)
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NurbsTrimmedSurfaceObject setControlPoint(ProtoInstanceObject newProtoInstanceNode)
	{
		if (controlPoint != null)
		{
			((X3DConcreteElement) controlPoint).setParentObject(null); // housekeeping, clear prior object
			controlPoint = null;
		}
		controlPointProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>controlPoint</i>, if available.
	 * @see #getControlPoint()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getControlPointProtoInstance()
	{
		return controlPointProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>controlPoint</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getControlPoint()
	 * @see #getControlPointProtoInstance()
	 */
	public boolean hasControlPoint()
	{
		return (controlPoint != null) || (controlPointProtoInstance != null);
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public NurbsTrimmedSurfaceObject clearMetadata()
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NurbsTrimmedSurfaceObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide boolean value from initializeOnly SFBool field named <i>solid</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off).
 * <ul>
 *  <li> <i>Warning:</i> default value true can completely hide geometry if viewed from wrong side! </li> 
 *  <li> <i>Hint:</i>  if in doubt, use solid='false' for maximum visibility. </li> 
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
	 * <i>Tooltip:</i> Setting solid true means draw only one side of polygons (backface culling on), setting solid false means draw both sides of polygons (backface culling off). Warning: default value true can completely hide geometry if viewed from wrong side! Hint: if in doubt, use solid='false' for maximum visibility.
	 * @param newValue is new value for the solid field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setSolid(boolean newValue)
	{
		solid = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool solid field, similar to {@link #setSolid(boolean)}.
	 * @param newValue is new value for the solid field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setSolid(SFBoolObject newValue)
	{
		setSolid(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DNode instance (using a properly typed node) with acceptable node types limited to X3DTextureCoordinateNode|NurbsTextureCoordinate, from inputOutput SFNode field <i>texCoord</i>.
	 * @see #getTexCoordProtoInstance()
	 * @return value of texCoord field
	 */
	@Override
	public X3DNode getTexCoord()
	{
		return texCoord;
	}

	/**
	 * Assign X3DNode instance (using a properly typed node) with acceptable node types limited to X3DTextureCoordinateNode|NurbsTextureCoordinate, to inputOutput SFNode field <i>texCoord</i>.
	 * @see #setTexCoord(ProtoInstanceObject)
	 * @param newValue is new value for the texCoord field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setTexCoord(X3DNode newValue)
	{
		texCoord = newValue;
		// newValueInstanceAcceptableNodeTypesTest checks are needed for methods that override/subset X3DNode interfaces #1
		boolean isNodeTypeAllowed =
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.sai.Texturing.X3DTextureCoordinateNode) || 
				(((X3DConcreteNode)newValue) instanceof org.web3d.x3d.jsail.NURBS.NurbsTextureCoordinateObject);
		if  (!isNodeTypeAllowed)
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof " +
				"acceptableNodeTypes X3DTextureCoordinateNode|NurbsTextureCoordinate; newValue=" + newValue);
		}

		if (newValue != null)
		{
			((X3DConcreteElement) texCoord).setParentObject(this); // parentTest15
		}
		if (texCoordProtoInstance != null)
		{
			texCoordProtoInstance.setParentObject(null); // housekeeping, clear prior object
			texCoordProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of texCoord field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public NurbsTrimmedSurfaceObject clearTexCoord()
	{
		((X3DConcreteElement) texCoord).clearParentObject(); // remove references to facilitate Java memory management
		texCoord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>texCoord</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node types X3DTextureCoordinateNode|NurbsTextureCoordinate.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the texCoord field
	 * @see #setTexCoord(X3DNode)
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NurbsTrimmedSurfaceObject setTexCoord(ProtoInstanceObject newProtoInstanceNode)
	{
		if (texCoord != null)
		{
			((X3DConcreteElement) texCoord).setParentObject(null); // housekeeping, clear prior object
			texCoord = null;
		}
		texCoordProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>texCoord</i>, if available.
	 * @see #getTexCoord()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getTexCoordProtoInstance()
	{
		return texCoordProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>texCoord</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getTexCoord()
	 * @see #getTexCoordProtoInstance()
	 */
	public boolean hasTexCoord()
	{
		return (texCoord != null) || (texCoordProtoInstance != null);
	}
	/**
	 * Provide array of Contour2D results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>trimmingContour</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Contour2D.
	 * @see org.web3d.x3d.jsail.NURBS.Contour2DObject
	 * @return value of trimmingContour field
	 */
	@Override
	public X3DNode[] getTrimmingContour()
	{
		final X3DNode[] valuesArray = new X3DNode[trimmingContour.size()];
		int i = 0;
		for (Contour2D arrayElement : trimmingContour) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode trimmingContour field, similar to {@link #getTrimmingContour()}.

	 * @return value of trimmingContour field
	 */
	public ArrayList<Contour2D> getTrimmingContourList()
	{
		return trimmingContour;
	}

	/**
	 * Assign Contour2D array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>trimmingContour</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Contour2D.
	 * @param newValue is new value for the trimmingContour field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setTrimmingContour(X3DNode[] newValue)
	{
		if (newValue == null)
		{
			clearTrimmingContour(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		trimmingContour.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof Contour2D)
			{
				trimmingContour.add((Contour2D)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof Contour2D; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode trimmingContour field, similar to {@link #setTrimmingContour(X3DNode[])}.
	 * @param newValue is new value for the trimmingContour field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setTrimmingContour(ArrayList<Contour2D> newValue)
	{
		if (newValue == null)
		{
			clearTrimmingContour(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		trimmingContour = newValue;
		for (Contour2D element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child trimmingContour node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Contour2D.
	 * @param newValue is new value to be appended the trimmingContour field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public NurbsTrimmedSurfaceObject addTrimmingContour(Contour2DObject newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		trimmingContour.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child trimmingContour nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to Contour2D.
	 * @param newValue is new value array to be appended the trimmingContour field.
	 */
	@Override
	public void addTrimmingContour(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnVoid
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof Contour2D)
			{
				trimmingContour.add((Contour2D)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof Contour2D; newValue=" + Arrays.toString(newValue));
		}
}

	/**
	 * Set single child trimmingContour node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to Contour2D.
	 * @param newValue is new node for the trimmingContour field (restricted to Contour2D)
	 */
	@Override
	public void setTrimmingContour(X3DNode newValue)
	{
		if (newValue == null)
		{
			trimmingContour.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof Contour2D)
		{
			for (Contour2D element : trimmingContour)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			trimmingContour.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			trimmingContour.add((Contour2D)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof Contour2D; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of trimmingContour field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NurbsTrimmedSurfaceObject clearTrimmingContour()
	{
		for (Contour2D element : trimmingContour)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		trimmingContour.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>trimmingContour</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getTrimmingContour()
	 */
	public boolean hasTrimmingContour()
	{
		return (!trimmingContour.isEmpty());
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>uClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether opposite surface sides are closed (seamless) across u dimension.  * <br>

	 * @return value of uClosed field
	 */
	@Override
	public boolean getUClosed()
	{
		return uClosed;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>uClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether opposite surface sides are closed (seamless) across u dimension.
	 * @param newValue is new value for the uClosed field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setUClosed(boolean newValue)
	{
		uClosed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool uClosed field, similar to {@link #setUClosed(boolean)}.
	 * @param newValue is new value for the uClosed field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUClosed(SFBoolObject newValue)
	{
		setUClosed(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>uDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Number of control points in u dimension.  * <br>

	 * @return value of uDimension field
	 */
	@Override
	public int getUDimension()
	{
		return uDimension;
	}

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>uDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Number of control points in u dimension.
	 * @param newValue is new value for the uDimension field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setUDimension(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("NurbsTrimmedSurface uDimension newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		uDimension = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 uDimension field, similar to {@link #setUDimension(int)}.
	 * @param newValue is new value for the uDimension field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUDimension(SFInt32Object newValue)
	{
		setUDimension(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of Double results from initializeOnly MFDouble field named <i>uKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Knot vector, where size = number of control points + order of curve.  * <br>

	 * @return value of uKnot field
	 */
	@Override
	public double[] getUKnot()
	{
		final double[] valuesArray = new double[uKnot.size()];
		int i = 0;
		for (Double arrayElement : uKnot) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFDouble uKnot field, similar to {@link #getUKnot()}.

	 * @return value of uKnot field
	 */
	public ArrayList<Double> getUKnotList()
	{
		return uKnot;
	}

	/**
	 * Assign Double array to initializeOnly MFDouble field named <i>uKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Knot vector, where size = number of control points + order of curve.
	 * @param newValue is new value for the uKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setUKnot(double[] newValue)
	{
		if (newValue == null)
		{
			clearUKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		uKnot.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			uKnot.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFDouble uKnot field, similar to {@link #setUKnot(double[])}.
	 * @param newValue is new value for the uKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUKnot(MFDoubleObject newValue)
	{
		if (newValue == null)
		{
			clearUKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setUKnot(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFDouble uKnot field, similar to {@link #setUKnot(double[])}.
	 * @param newValue is new value for the uKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUKnot(ArrayList<Double> newValue)
	{
		if (newValue == null)
		{
			clearUKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		uKnot = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFDouble value of uKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NurbsTrimmedSurfaceObject clearUKnot()
	{
		uKnot.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFDouble uKnot field, similar to {@link #setUKnot(double[])}.
	 * @param newValue is new value for the uKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUKnot(int[] newValue)
	{
		if (newValue == null)
		{
			clearUKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		double[] holdArray = new double[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (double)newValue[i];
		}
		setUKnot(holdArray);
		return this;
	}
	/**
	 * Provide int value within allowed range of [2,infinity) from initializeOnly SFInt32 field named <i>uOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Define order of surface by polynomials of degree = order-1.  * <br>

	 * @return value of uOrder field
	 */
	@Override
	public int getUOrder()
	{
		return uOrder;
	}

	/**
	 * Assign int value within allowed range of [2,infinity) to initializeOnly SFInt32 field named <i>uOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Define order of surface by polynomials of degree = order-1.
	 * @param newValue is new value for the uOrder field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setUOrder(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 2) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("NurbsTrimmedSurface uOrder newValue=" + newValue + " has component value less than restriction minInclusive=2");
            }
		uOrder = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 uOrder field, similar to {@link #setUOrder(int)}.
	 * @param newValue is new value for the uOrder field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUOrder(SFInt32Object newValue)
	{
		setUOrder(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>uTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  hint for surface tesselation.  * <br>

	 * @return value of uTessellation field
	 */
	@Override
	public int getUTessellation()
	{
		return uTessellation;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>uTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> hint for surface tesselation.
	 * @param newValue is new value for the uTessellation field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setUTessellation(int newValue)
	{
		uTessellation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 uTessellation field, similar to {@link #setUTessellation(int)}.
	 * @param newValue is new value for the uTessellation field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUTessellation(SFInt32Object newValue)
	{
		setUTessellation(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>vClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Whether opposite surface sides are closed (seamless) across u dimension.  * <br>

	 * @return value of vClosed field
	 */
	@Override
	public boolean getVClosed()
	{
		return vClosed;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>vClosed</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether opposite surface sides are closed (seamless) across u dimension.
	 * @param newValue is new value for the vClosed field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setVClosed(boolean newValue)
	{
		vClosed = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool vClosed field, similar to {@link #setVClosed(boolean)}.
	 * @param newValue is new value for the vClosed field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setVClosed(SFBoolObject newValue)
	{
		setVClosed(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>vDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Number of control points in v dimension.  * <br>

	 * @return value of vDimension field
	 */
	@Override
	public int getVDimension()
	{
		return vDimension;
	}

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>vDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Number of control points in v dimension.
	 * @param newValue is new value for the vDimension field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setVDimension(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("NurbsTrimmedSurface vDimension newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
		vDimension = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 vDimension field, similar to {@link #setVDimension(int)}.
	 * @param newValue is new value for the vDimension field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setVDimension(SFInt32Object newValue)
	{
		setVDimension(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of Double results from initializeOnly MFDouble field named <i>vKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Knot vector, where size = number of control points + order of curve.  * <br>

	 * @return value of vKnot field
	 */
	@Override
	public double[] getVKnot()
	{
		final double[] valuesArray = new double[vKnot.size()];
		int i = 0;
		for (Double arrayElement : vKnot) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFDouble vKnot field, similar to {@link #getVKnot()}.

	 * @return value of vKnot field
	 */
	public ArrayList<Double> getVKnotList()
	{
		return vKnot;
	}

	/**
	 * Assign Double array to initializeOnly MFDouble field named <i>vKnot</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Knot vector, where size = number of control points + order of curve.
	 * @param newValue is new value for the vKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setVKnot(double[] newValue)
	{
		if (newValue == null)
		{
			clearVKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		vKnot.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			vKnot.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFDouble vKnot field, similar to {@link #setVKnot(double[])}.
	 * @param newValue is new value for the vKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setVKnot(MFDoubleObject newValue)
	{
		if (newValue == null)
		{
			clearVKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setVKnot(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFDouble vKnot field, similar to {@link #setVKnot(double[])}.
	 * @param newValue is new value for the vKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setVKnot(ArrayList<Double> newValue)
	{
		if (newValue == null)
		{
			clearVKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		vKnot = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFDouble value of vKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NurbsTrimmedSurfaceObject clearVKnot()
	{
		vKnot.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFDouble vKnot field, similar to {@link #setVKnot(double[])}.
	 * @param newValue is new value for the vKnot field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setVKnot(int[] newValue)
	{
		if (newValue == null)
		{
			clearVKnot(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		double[] holdArray = new double[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (double)newValue[i];
		}
		setVKnot(holdArray);
		return this;
	}
	/**
	 * Provide int value within allowed range of [2,infinity) from initializeOnly SFInt32 field named <i>vOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Define order of surface by polynomials of degree = order-1.  * <br>

	 * @return value of vOrder field
	 */
	@Override
	public int getVOrder()
	{
		return vOrder;
	}

	/**
	 * Assign int value within allowed range of [2,infinity) to initializeOnly SFInt32 field named <i>vOrder</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Define order of surface by polynomials of degree = order-1.
	 * @param newValue is new value for the vOrder field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setVOrder(int newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 2) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("NurbsTrimmedSurface vOrder newValue=" + newValue + " has component value less than restriction minInclusive=2");
            }
		vOrder = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 vOrder field, similar to {@link #setVOrder(int)}.
	 * @param newValue is new value for the vOrder field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setVOrder(SFInt32Object newValue)
	{
		setVOrder(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide int value from inputOutput SFInt32 field named <i>vTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  hint for surface tesselation.  * <br>

	 * @return value of vTessellation field
	 */
	@Override
	public int getVTessellation()
	{
		return vTessellation;
	}

	/**
	 * Assign int value to inputOutput SFInt32 field named <i>vTessellation</i>.
	 * <br><br>
	 * <i>Tooltip:</i> hint for surface tesselation.
	 * @param newValue is new value for the vTessellation field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setVTessellation(int newValue)
	{
		vTessellation = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 vTessellation field, similar to {@link #setVTessellation(int)}.
	 * @param newValue is new value for the vTessellation field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setVTessellation(SFInt32Object newValue)
	{
		setVTessellation(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide array of Double results within allowed range of (0,infinity) from inputOutput MFDouble field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Vector assigning relative weight value to each control point.  * <br>

	 * @return value of weight field
	 */
	@Override
	public double[] getWeight()
	{
		final double[] valuesArray = new double[weight.size()];
		int i = 0;
		for (Double arrayElement : weight) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFDouble weight field, similar to {@link #getWeight()}.

	 * @return value of weight field
	 */
	public ArrayList<Double> getWeightList()
	{
		return weight;
	}

	/**
	 * Assign Double array within allowed range of (0,infinity) to inputOutput MFDouble field named <i>weight</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Vector assigning relative weight value to each control point.
	 * @param newValue is new value for the weight field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setWeight(double[] newValue)
	{
		if (newValue == null)
		{
			clearWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		weight.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			weight.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFDouble weight field, similar to {@link #setWeight(double[])}.
	 * @param newValue is new value for the weight field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setWeight(MFDoubleObject newValue)
	{
		if (newValue == null)
		{
			clearWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setWeight(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFDouble weight field, similar to {@link #setWeight(double[])}.
	 * @param newValue is new value for the weight field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setWeight(ArrayList<Double> newValue)
	{
		if (newValue == null)
		{
			clearWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		weight = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFDouble value of weight field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public NurbsTrimmedSurfaceObject clearWeight()
	{
		weight.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFDouble weight field, similar to {@link #setWeight(double[])}.
	 * @param newValue is new value for the weight field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setWeight(int[] newValue)
	{
		if (newValue == null)
		{
			clearWeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		double[] holdArray = new double[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (double)newValue[i];
		}
		setWeight(holdArray);
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final NurbsTrimmedSurfaceObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to NurbsTrimmedSurface
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("NurbsTrimmedSurface DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("NurbsTrimmedSurface DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setDEF(SFStringObject newValue)
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final NurbsTrimmedSurfaceObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to NurbsTrimmedSurface
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("NurbsTrimmedSurface USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("NurbsTrimmedSurface USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final NurbsTrimmedSurfaceObject setCssClass(String newValue)
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setCssClass(SFStringObject newValue)
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public NurbsTrimmedSurfaceObject setIS(ISObject newValue)
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public NurbsTrimmedSurfaceObject setUSE(NurbsTrimmedSurfaceObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on NurbsTrimmedSurfaceObject" +
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
	public NurbsTrimmedSurfaceObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public NurbsTrimmedSurfaceObject addComments (String newComment)
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public NurbsTrimmedSurfaceObject addComments (String[] newComments)
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
	 * @return {@link NurbsTrimmedSurfaceObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public NurbsTrimmedSurfaceObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (controlPoint != null) || (controlPointProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (texCoord != null) || (texCoordProtoInstance != null) || (!trimmingContour.isEmpty()) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<NurbsTrimmedSurface"); // start opening tag
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
                            
			if (((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" solid='").append(SFBoolObject.toString(getSolid())).append("'");
			}
			if (((getUClosed() != UCLOSED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" uClosed='").append(SFBoolObject.toString(getUClosed())).append("'");
			}
			if (((getUDimension() != UDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" uDimension='").append(SFInt32Object.toString(getUDimension())).append("'");
			}
			if (((getUKnot().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" uKnot='").append(MFDoubleObject.toString(getUKnot())).append("'");
			}
			if (((getUOrder() != UORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" uOrder='").append(SFInt32Object.toString(getUOrder())).append("'");
			}
			if (((getUTessellation() != UTESSELLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" uTessellation='").append(SFInt32Object.toString(getUTessellation())).append("'");
			}
			if (((getVClosed() != VCLOSED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" vClosed='").append(SFBoolObject.toString(getVClosed())).append("'");
			}
			if (((getVDimension() != VDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" vDimension='").append(SFInt32Object.toString(getVDimension())).append("'");
			}
			if (((getVKnot().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" vKnot='").append(MFDoubleObject.toString(getVKnot())).append("'");
			}
			if (((getVOrder() != VORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" vOrder='").append(SFInt32Object.toString(getVOrder())).append("'");
			}
			if (((getVTessellation() != VTESSELLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" vTessellation='").append(SFInt32Object.toString(getVTessellation())).append("'");
			}
			if (((getWeight().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" weight='").append(MFDoubleObject.toString(getWeight())).append("'");
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
			if      (controlPoint != null)
			{
				stringX3D.append(((X3DConcreteElement)controlPoint).toStringX3D(indentLevel + indentIncrement));
			}
			else if (controlPointProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)controlPointProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (texCoord != null)
			{
				stringX3D.append(((X3DConcreteElement)texCoord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (texCoordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)texCoordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			for (Contour2D element : trimmingContour)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</NurbsTrimmedSurface>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (controlPoint != null) || (controlPointProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (texCoord != null) || (texCoordProtoInstance != null) || (!trimmingContour.isEmpty()) || !commentsList.isEmpty();
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
			stringClassicVRML.append("NurbsTrimmedSurface").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("uClosed"))
						{
							stringClassicVRML.append(indentCharacter).append("uClosed").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getUClosed() != UCLOSED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("uClosed ").append(SFBoolObject.toString(getUClosed())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("uDimension"))
						{
							stringClassicVRML.append(indentCharacter).append("uDimension").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getUDimension() != UDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("uDimension ").append(SFInt32Object.toString(getUDimension())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("uKnot"))
						{
							stringClassicVRML.append(indentCharacter).append("uKnot").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getUKnot().length > 0)
				{
					stringClassicVRML.append("uKnot ").append("[ ").append(MFDoubleObject.toString(getUKnot())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("uOrder"))
						{
							stringClassicVRML.append(indentCharacter).append("uOrder").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getUOrder() != UORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("uOrder ").append(SFInt32Object.toString(getUOrder())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("uTessellation"))
						{
							stringClassicVRML.append(indentCharacter).append("uTessellation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getUTessellation() != UTESSELLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("uTessellation ").append(SFInt32Object.toString(getUTessellation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("vClosed"))
						{
							stringClassicVRML.append(indentCharacter).append("vClosed").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getVClosed() != VCLOSED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("vClosed ").append(SFBoolObject.toString(getVClosed())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("vDimension"))
						{
							stringClassicVRML.append(indentCharacter).append("vDimension").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getVDimension() != VDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("vDimension ").append(SFInt32Object.toString(getVDimension())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("vKnot"))
						{
							stringClassicVRML.append(indentCharacter).append("vKnot").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getVKnot().length > 0)
				{
					stringClassicVRML.append("vKnot ").append("[ ").append(MFDoubleObject.toString(getVKnot())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("vOrder"))
						{
							stringClassicVRML.append(indentCharacter).append("vOrder").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getVOrder() != VORDER_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("vOrder ").append(SFInt32Object.toString(getVOrder())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("vTessellation"))
						{
							stringClassicVRML.append(indentCharacter).append("vTessellation").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getVTessellation() != VTESSELLATION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("vTessellation ").append(SFInt32Object.toString(getVTessellation())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("weight"))
						{
							stringClassicVRML.append(indentCharacter).append("weight").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getWeight().length > 0)
				{
					stringClassicVRML.append("weight ").append("[ ").append(MFDoubleObject.toString(getWeight())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
			if (controlPoint != null)
			{
				stringClassicVRML.append(indentCharacter).append("controlPoint").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) controlPoint).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (controlPointProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("controlPoint").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) controlPointProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
			if (texCoord != null)
			{
				stringClassicVRML.append(indentCharacter).append("texCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) texCoord).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (texCoordProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("texCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) texCoordProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (trimmingContour.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("trimmingContour").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (Contour2D element : trimmingContour)
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
		// no name field available for this element
		X3DConcreteElement referenceElement;
		if (controlPoint != null)
		{
			referenceElement = ((X3DConcreteElement) controlPoint).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (controlPointProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) controlPointProtoInstance).findElementByNameValue(nameValue, elementName);
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
		if (texCoord != null)
		{
			referenceElement = ((X3DConcreteElement) texCoord).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (texCoordProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) texCoordProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		for (Contour2D element : trimmingContour) // MFNode
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
		if (controlPoint != null)
		{
			referenceNode = ((X3DConcreteElement) controlPoint).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (texCoord != null)
		{
			referenceNode = ((X3DConcreteElement) texCoord).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		for (Contour2D element : trimmingContour) // MFNode
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

		setSolid(getSolid()); // exercise field checks, simple types

		setUClosed(getUClosed()); // exercise field checks, simple types

		setUDimension(getUDimension()); // exercise field checks, simple types

		setUKnot(getUKnot()); // exercise field checks, simple types

		setUOrder(getUOrder()); // exercise field checks, simple types

		setUTessellation(getUTessellation()); // exercise field checks, simple types

		setVClosed(getVClosed()); // exercise field checks, simple types

		setVDimension(getVDimension()); // exercise field checks, simple types

		setVKnot(getVKnot()); // exercise field checks, simple types

		setVOrder(getVOrder()); // exercise field checks, simple types

		setVTessellation(getVTessellation()); // exercise field checks, simple types

		setWeight(getWeight()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		if (controlPoint != null)
		{
			setControlPoint(getControlPoint());
			((X3DConcreteElement) controlPoint).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) controlPoint).getValidationResult());
		}
		if (controlPointProtoInstance != null)
		{
			setControlPoint(getControlPointProtoInstance());
			((X3DConcreteElement) controlPointProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) controlPointProtoInstance).getValidationResult());
		}
		if ((controlPoint != null) && (controlPointProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both controlPoint and controlPointProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasControlPoint()) // test USE restrictions
		{
			String errorNotice = "NurbsTrimmedSurface USE='" + getUSE() + "' is not allowed to have contained SFNode controlPoint";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "NurbsTrimmedSurface USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "NurbsTrimmedSurface USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "NurbsTrimmedSurface USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (texCoord != null)
		{
			setTexCoord(getTexCoord());
			((X3DConcreteElement) texCoord).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) texCoord).getValidationResult());
		}
		if (texCoordProtoInstance != null)
		{
			setTexCoord(getTexCoordProtoInstance());
			((X3DConcreteElement) texCoordProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) texCoordProtoInstance).getValidationResult());
		}
		if ((texCoord != null) && (texCoordProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both texCoord and texCoordProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasTexCoord()) // test USE restrictions
		{
			String errorNotice = "NurbsTrimmedSurface USE='" + getUSE() + "' is not allowed to have contained SFNode texCoord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "NurbsTrimmedSurface USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		for (Contour2D element : trimmingContour) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setTrimmingContour(getTrimmingContour()); // also test getter/setter validation

		if (isUSE() && hasTrimmingContour()) // test USE restrictions
		{
			String errorNotice = "NurbsTrimmedSurface USE='" + getUSE() + "' is not allowed to have contained MFNode trimmingContour";
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
				if ( nextComponent.getName().equals("NURBS") &&
					(nextComponent.getLevel() >= 4))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='NURBS' level='4'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"NURBS\").setLevel(4);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
