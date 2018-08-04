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

package org.web3d.x3d.jsail.Geometry3D;
import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Geometry3D.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.sai.Geometry3D.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.Geometry3D.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.sai.Geometry3D.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.sai.Geometry3D.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.Geometry3D.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Texturing.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: [X3DGeometryNode] ElevationGrid is a geometry node defining a rectangular height field, with default values for a 1m by 1m square at height 0. Vertices corresponding to ElevationGrid height values define quadrilaterals, which are placed above or below a flat surface.
 * <ul>
 *  <li> <i>Hint:</i> the height array defines (xDimension-1)*(zDimension-1) quadrilaterals. </li> 
 *  <li> <i>Warning:</i> generated quadrilaterals can be nonplanar. Tessellation splits quadrilaterals into triangles along seam starting at initial vertex of the quadrilateral and proceeding to opposite vertex. </li> 
 *  <li> <i>Hint:</i> positive direction for normal of each triangle is on same side of the quadrilateral. Triangles are defined either counterclockwise or clockwise depending on value of ccw field. </li> 
 *  <li> <i>Hint:</i> ElevationGrid can contain Color|ColorRGBA, Normal and TextureCoordinate nodes. </li> 
 *  <li> <i>Hint:</i> insert a Shape node before adding geometry or Appearance. </li> 
 *  <li> <i>Hint:</i>  for advanced extensibility, authors can substitute a type-matched ProtoInstance node (with correct containerField value) for contained node content. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry3D.html#ElevationGrid" target="blank">X3D Abstract Specification: ElevationGrid</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ElevationGrid" target="_blank">X3D Tooltips: ElevationGrid</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class ElevationGridObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Geometry3D.ElevationGrid
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private ArrayList<X3DVertexAttributeNode> attrib = new ArrayList<>(); // MFNode acceptable node types: X3DVertexAttributeNode

	private boolean ccw; // SFBool

	private X3DColorNode color; // SFNode acceptable node types: X3DColorNode
	private ProtoInstanceObject colorProtoInstance; // allowed alternative for color field

	private boolean colorPerVertex; // SFBool

	private float creaseAngle; // SFFloat

	private FogCoordinate fogCoord; // SFNode acceptable node types: FogCoordinate
	private ProtoInstanceObject fogCoordProtoInstance; // allowed alternative for fogCoord field

	private ArrayList<Float> height = new ArrayList<>(); // MFFloat

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private X3DNormalNode normal; // SFNode acceptable node types: X3DNormalNode
	private ProtoInstanceObject normalProtoInstance; // allowed alternative for normal field

	private boolean normalPerVertex; // SFBool

	private boolean solid; // SFBool

	private X3DTextureCoordinateNode texCoord; // SFNode acceptable node types: X3DTextureCoordinateNode
	private ProtoInstanceObject texCoordProtoInstance; // allowed alternative for texCoord field

	private int xDimension; // SFInt32

	private float xSpacing; // SFFloat

	private int zDimension; // SFInt32

	private float zSpacing; // SFFloat

	/** IS/connect statements can be added if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>ElevationGrid</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "ElevationGrid";

	/** Provides name of this element: <i>ElevationGrid</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>ElevationGrid</i> element: <i>Geometry3D</i> */
	public static final String COMPONENT = "Geometry3D";

	/** Defines X3D component for the <i>ElevationGrid</i> element: <i>Geometry3D</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Geometry3D</i> component level for this element: <i>3</i> */
	public static final int LEVEL = 3;

	/** Provides default X3D component level for this element: <i>3</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFBool field named <i>ccw</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean CCW_DEFAULT_VALUE = true;

	/** SFBool field named <i>colorPerVertex</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean COLORPERVERTEX_DEFAULT_VALUE = true;

	/** SFFloat field named <i>creaseAngle</i> has default value <i>0f</i> (Java syntax) or <i>0</i> (XML syntax). */
	public static final float CREASEANGLE_DEFAULT_VALUE = 0f;

	/** MFFloat field named <i>height</i> has default value <i>{0f,0f,0f,0f}</i> (Java syntax) or <i>0 0 0 0</i> (XML syntax). */
	public static final ArrayList<Float> HEIGHT_DEFAULT_VALUE = new ArrayList<>(Arrays.asList(0f,0f,0f,0f));

	/** SFBool field named <i>normalPerVertex</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean NORMALPERVERTEX_DEFAULT_VALUE = true;

	/** SFBool field named <i>solid</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean SOLID_DEFAULT_VALUE = true;

	/** SFInt32 field named <i>xDimension</i> has default value <i>2</i> (Java syntax) or <i>2</i> (XML syntax). */
	public static final int XDIMENSION_DEFAULT_VALUE = 2;

	/** SFFloat field named <i>xSpacing</i> has default value <i>1.0f</i> (Java syntax) or <i>1.0</i> (XML syntax). */
	public static final float XSPACING_DEFAULT_VALUE = 1.0f;

	/** SFInt32 field named <i>zDimension</i> has default value <i>2</i> (Java syntax) or <i>2</i> (XML syntax). */
	public static final int ZDIMENSION_DEFAULT_VALUE = 2;

	/** SFFloat field named <i>zSpacing</i> has default value <i>1.0f</i> (Java syntax) or <i>1.0</i> (XML syntax). */
	public static final float ZSPACING_DEFAULT_VALUE = 1.0f;

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
			case "attrib":
				result = "MFNode";
				break;
			case "ccw":
				result = "SFBool";
				break;
			case "color":
				result = "SFNode";
				break;
			case "colorPerVertex":
				result = "SFBool";
				break;
			case "creaseAngle":
				result = "SFFloat";
				break;
			case "fogCoord":
				result = "SFNode";
				break;
			case "height":
				result = "MFFloat";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "normal":
				result = "SFNode";
				break;
			case "normalPerVertex":
				result = "SFBool";
				break;
			case "solid":
				result = "SFBool";
				break;
			case "texCoord":
				result = "SFNode";
				break;
			case "xDimension":
				result = "SFInt32";
				break;
			case "xSpacing":
				result = "SFFloat";
				break;
			case "zDimension":
				result = "SFInt32";
				break;
			case "zSpacing":
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
			case "attrib":
				result = "inputOutput";
				break;
			case "ccw":
				result = "initializeOnly";
				break;
			case "color":
				result = "inputOutput";
				break;
			case "colorPerVertex":
				result = "initializeOnly";
				break;
			case "creaseAngle":
				result = "initializeOnly";
				break;
			case "fogCoord":
				result = "inputOutput";
				break;
			case "height":
				result = "initializeOnly";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "normal":
				result = "inputOutput";
				break;
			case "normalPerVertex":
				result = "initializeOnly";
				break;
			case "set_height":
				result = "inputOnly";
				break;
			case "solid":
				result = "initializeOnly";
				break;
			case "texCoord":
				result = "inputOutput";
				break;
			case "xDimension":
				result = "initializeOnly";
				break;
			case "xSpacing":
				result = "initializeOnly";
				break;
			case "zDimension":
				result = "initializeOnly";
				break;
			case "zSpacing":
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
	 * Usage is not ordinarily needed when using this API, default value is provided for informational purposes.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#containerField">X3D Scene Authoring Hints: containerField</a>
	 * @see <a href="http://www.web3d.org/specifications/X3DUOM.html">X3D Unified Object Model (X3DUOM)</a>
	 */
	public String containerField_DEFAULT_VALUE = "geometry"; // type xs:NMTOKEN

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for MFNode field named <i>attrib</i>. */
	public static final String fromField_ATTRIB = "attrib";

	/** toField ROUTE name for MFNode field named <i>attrib</i>. */
	public static final String toField_ATTRIB = "attrib";

	/** fromField ROUTE name for SFNode field named <i>color</i>. */
	public static final String fromField_COLOR = "color";

	/** toField ROUTE name for SFNode field named <i>color</i>. */
	public static final String toField_COLOR = "color";

	/** fromField ROUTE name for SFNode field named <i>fogCoord</i>. */
	public static final String fromField_FOGCOORD = "fogCoord";

	/** toField ROUTE name for SFNode field named <i>fogCoord</i>. */
	public static final String toField_FOGCOORD = "fogCoord";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFNode field named <i>normal</i>. */
	public static final String fromField_NORMAL = "normal";

	/** toField ROUTE name for SFNode field named <i>normal</i>. */
	public static final String toField_NORMAL = "normal";

	/** toField ROUTE name for MFFloat field named <i>set_height</i>. */
	public static final String toField_SET_HEIGHT = "set_height";

	/** fromField ROUTE name for SFNode field named <i>texCoord</i>. */
	public static final String fromField_TEXCOORD = "texCoord";

	/** toField ROUTE name for SFNode field named <i>texCoord</i>. */
	public static final String toField_TEXCOORD = "texCoord";

	/** Constructor for ElevationGridObject to initialize member variables with default values. */
	public ElevationGridObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "geometry" }; // type xs:NMTOKEN

		attrib = new ArrayList<>();
		ccw = CCW_DEFAULT_VALUE;
		color = null; // clear out any prior node
		colorPerVertex = COLORPERVERTEX_DEFAULT_VALUE;
		creaseAngle = CREASEANGLE_DEFAULT_VALUE;
		fogCoord = null; // clear out any prior node
		height = HEIGHT_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		normal = null; // clear out any prior node
		normalPerVertex = NORMALPERVERTEX_DEFAULT_VALUE;
		solid = SOLID_DEFAULT_VALUE;
		texCoord = null; // clear out any prior node
		xDimension = XDIMENSION_DEFAULT_VALUE;
		xSpacing = XSPACING_DEFAULT_VALUE;
		zDimension = ZDIMENSION_DEFAULT_VALUE;
		zSpacing = ZSPACING_DEFAULT_VALUE;

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of X3DVertexAttributeNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>attrib</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DVertexAttributeNode] Single contained FloatVertexAttribute node that specifies list of per-vertex attribute information for programmable shaders.
 * <ul>
 *  <li> <i> Hint:</i>  X3D Architecture 32.2.2.4 Per-vertex attributes, <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/shaders.html#Pervertexattributes" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/shaders.html#Pervertexattributes</a> </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVertexAttributeNode.
	 * @see org.web3d.x3d.sai.Shaders.X3DVertexAttributeNode
	 * @return value of attrib field
	 */
	@Override
	public X3DNode[] getAttrib()
	{
		final X3DNode[] valuesArray = new X3DNode[attrib.size()];
		int i = 0;
		for (X3DVertexAttributeNode arrayElement : attrib) {
			valuesArray[i++] = (X3DNode)arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFNode attrib field, similar to {@link #getAttrib()}.

	 * @return value of attrib field
	 */
	public ArrayList<X3DVertexAttributeNode> getAttribList()
	{
		return attrib;
	}

	/**
	 * Assign X3DVertexAttributeNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>attrib</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DVertexAttributeNode] Single contained FloatVertexAttribute node that specifies list of per-vertex attribute information for programmable shaders. Hint: X3D Architecture 32.2.2.4 Per-vertex attributes, http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/shaders.html#Pervertexattributes
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVertexAttributeNode.
	 * @param newValue is new value for the attrib field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setAttrib(X3DNode[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearAttrib(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		attrib.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DVertexAttributeNode)
			{
				attrib.add((X3DVertexAttributeNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest12
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DVertexAttributeNode; newValue=" + Arrays.toString(newValue));
		}
		return this;
	}

	/**
	 * Assign ArrayList value of MFNode attrib field, similar to {@link #setAttrib(X3DNode[])}.
	 * @param newValue is new value for the attrib field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setAttrib(ArrayList<X3DVertexAttributeNode> newValue)
	{
		if (newValue == null)
		{
			clearAttrib(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		attrib = newValue;
		for (X3DVertexAttributeNode element : newValue)
		{
			((X3DConcreteElement) element).setParentObject(this); // parentTest13
		}
		return this;
	}
	/**
	 * Add single child attrib node to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVertexAttributeNode.
	 * @param newValue is new value to be appended the attrib field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public ElevationGridObject addAttrib(X3DVertexAttributeNode newValue)
	{
		if (newValue == null) return this; // newValueNullReturnThis
		attrib.add(newValue);
		((X3DConcreteElement) newValue).setParentObject(this); // parentTest2
		return this;
	}

	/**
	 * Add array of child attrib nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVertexAttributeNode.
	 * @param newValue is new value array to be appended the attrib field.
	 */
	@Override
	public void addAttrib(X3DNode[] newValue)
	{
		if (newValue == null) return; // newValueNullReturnSelf
		for (int i = 0; i < newValue.length; i++)
		{
			if  (newValue[i] instanceof X3DVertexAttributeNode)
			{
				attrib.add((X3DVertexAttributeNode)newValue[i]);
				((X3DConcreteElement) newValue[i]).setParentObject(this); // parentTest6
			}
			else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode[] newValue["+i+"] is not instanceof X3DVertexAttributeNode; newValue=" + Arrays.toString(newValue));
		}
	}

	/**
	 * Set single child attrib node, replacing prior array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are restricted to X3DVertexAttributeNode.
	 * @param newValue is new node for the attrib field (restricted to X3DVertexAttributeNode)
	 */
	@Override
	public void setAttrib(X3DNode newValue)
	{
		if (newValue == null)
		{
			attrib.clear(); // newValueNullClearsFieldReturnVoid
			return;
		}
		if  (newValue instanceof X3DVertexAttributeNode)
		{
			for (X3DVertexAttributeNode element : attrib)
				((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
			attrib.clear();
			((X3DConcreteElement) newValue).setParentObject(this); // parentTest8
			attrib.add((X3DVertexAttributeNode)newValue);
		}
		else throw new org.web3d.x3d.sai.InvalidFieldValueException("X3DNode newValue is not instanceof X3DVertexAttributeNode; newValue=" + newValue);
}

	/**
	 * Utility method to clear MFNode value of attrib field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public ElevationGridObject clearAttrib()
	{
		for (X3DVertexAttributeNode element : attrib)
			((X3DConcreteElement) element).clearParentObject(); // remove references to facilitate Java memory management
		attrib.clear(); // reset
		return this;
	}

	/**
	 * Indicate whether an object is available for inputOutput MFNode field <i>attrib</i>.
	 * @return whether a properly typed node or ProtoInstance array or CommentsBlock is available.
	 * @see #getAttrib()
	 */
	public boolean hasAttrib()
	{
		return (!attrib.isEmpty());
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>ccw</i>.
	 * <br><br>
	 * <i>Tooltip:</i> ccw = counterclockwise: ordering of vertex coordinates orientation, according to Right-Hand Rule (RHR).
 * <ul>
 *  <li> <i> Hint:</i>  ccw false can reverse solid (backface culling) and normal-vector orientation. Note that consistency of left-handed or right-handed point sequences is important throughout. </li> 
 * </ul>
	 * @return value of ccw field
	 */
	@Override
	public boolean getCcw()
	{
		return ccw;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>ccw</i>.
	 * <br><br>
	 * <i>Tooltip:</i> ccw = counterclockwise: ordering of vertex coordinates orientation, according to Right-Hand Rule (RHR). Hint: ccw false can reverse solid (backface culling) and normal-vector orientation. Note that consistency of left-handed or right-handed point sequences is important throughout.
	 * @param newValue is new value for the ccw field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setCcw(boolean newValue)
	{
		// set-newValue-validity-checks #0
		ccw = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool ccw field, similar to {@link #setCcw(boolean)}.
	 * @param newValue is new value for the ccw field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setCcw(SFBoolObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setCcw(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide X3DColorNode instance (using a properly typed node) using RGB values [0..1] from inputOutput SFNode field <i>color</i>.
	 * @see #getColorProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i>  [X3DColorNode] Single contained Color or ColorRGBA node that specifies color values applied to corresponding vertices according to colorPerVertex field.  * <br>

	 * @return value of color field
	 */
	@Override
	public X3DColorNode getColor()
	{
		return color;
	}

	/**
	 * Assign X3DColorNode instance (using a properly typed node) using RGB values [0..1] to inputOutput SFNode field <i>color</i>.
	 * @see #setColor(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [X3DColorNode] Single contained Color or ColorRGBA node that specifies color values applied to corresponding vertices according to colorPerVertex field.
	 * @param newValue is new value for the color field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setColor(X3DColorNode newValue)
	{
		// set-newValue-validity-checks #0
		color = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) color).setParentObject(this); // parentTest15
		}
		if (colorProtoInstance != null)
		{
			colorProtoInstance.setParentObject(null); // housekeeping, clear prior object
			colorProtoInstance = null;
		}
		return this;
	}

	/**
	 * Utility method to clear SFNode value of color field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ElevationGridObject clearColor()
	{
		((X3DConcreteElement) color).clearParentObject(); // remove references to facilitate Java memory management
		color = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>color</i>.
	 * @see #setColor(X3DColorNode)
	 * @param newValue is new value for the color field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setColor(ProtoInstanceObject newValue)
	{
		if (colorProtoInstance != null)
		{
			((X3DConcreteElement) colorProtoInstance).setParentObject(null); // parentTest15.5
	    }
		colorProtoInstance = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) colorProtoInstance).setParentObject(this); // parentTest15.6
	    }
		if (color != null)
		{
			((X3DConcreteElement) color).setParentObject(null); // housekeeping, clear prior object
			color = null;
		}
	    return this;
	}

		/** Private utility method to access SFNode ProtoInstance field **/
		private ProtoInstanceObject getColorProtoInstance()
		{
			return colorProtoInstance;
		}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>color</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getColor()
	 * @see #getColorProtoInstance()
	 */
	public boolean hasColor()
	{
		return (color != null) || (colorProtoInstance != null);
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>colorPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per quadrilateral (false).
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of colorPerVertex field
	 */
	@Override
	public boolean getColorPerVertex()
	{
		return colorPerVertex;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>colorPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per quadrilateral (false). Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the colorPerVertex field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setColorPerVertex(boolean newValue)
	{
		// set-newValue-validity-checks #0
		colorPerVertex = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool colorPerVertex field, similar to {@link #setColorPerVertex(boolean)}.
	 * @param newValue is new value for the colorPerVertex field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setColorPerVertex(SFBoolObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setColorPerVertex(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide float value unit axis, angle (in radians) within allowed range of [0,infinity) from initializeOnly SFFloat field named <i>creaseAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) creaseAngle defines angle (in radians) for determining whether adjacent polygons are drawn with sharp edges or smooth shading. If angle between normals of two adjacent polygons is less than creaseAngle, smooth shading is rendered across the shared line segment.
 * <ul>
 *  <li> <i>Hint:</i> creaseAngle=0 means render all edges sharply, creaseAngle=3.14159 means render all edges smoothly. </li> 
 *  <li> <i>Hint:</i>  <br> <a href="https://en.wikipedia.org/wiki/Radian" target="_blank">https://en.wikipedia.org/wiki/Radian</a> </li> 
 * </ul>
	 * @return value of creaseAngle field
	 */
	@Override
	public float getCreaseAngle()
	{
		return creaseAngle;
	}

	/**
	 * Assign float value unit axis, angle (in radians) within allowed range of [0,infinity) to initializeOnly SFFloat field named <i>creaseAngle</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,+infinity) creaseAngle defines angle (in radians) for determining whether adjacent polygons are drawn with sharp edges or smooth shading. If angle between normals of two adjacent polygons is less than creaseAngle, smooth shading is rendered across the shared line segment. Hint: creaseAngle=0 means render all edges sharply, creaseAngle=3.14159 means render all edges smoothly. Hint: https://en.wikipedia.org/wiki/Radian
	 * @param newValue is new value for the creaseAngle field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setCreaseAngle(float newValue)
	{
		// set-newValue-validity-checks #0
        // Check that newValue parameter has legal value(s) before assigning to scene graph
        if (newValue < 0f) {
            throw new org.web3d.x3d.sai.InvalidFieldValueException("ElevationGrid creaseAngle newValue=" + newValue + " has component value less than restriction minInclusive=0");
        }
		creaseAngle = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat creaseAngle field, similar to {@link #setCreaseAngle(float)}.
	 * @param newValue is new value for the creaseAngle field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setCreaseAngle(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setCreaseAngle(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide FogCoordinate instance (using a properly typed node) from inputOutput SFNode field <i>fogCoord</i>.
	 * @see #getFogCoordProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i>  [FogCoordinate] Single contained FogCoordinate node that specifies depth parameters for fog in corresponding geometry.  * <br>

	 * @return value of fogCoord field
	 */
	@Override
	public FogCoordinate getFogCoord()
	{
		return fogCoord;
	}

	/**
	 * Assign FogCoordinate instance (using a properly typed node) to inputOutput SFNode field <i>fogCoord</i>.
	 * @see #setFogCoord(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [FogCoordinate] Single contained FogCoordinate node that specifies depth parameters for fog in corresponding geometry.
	 * @param newValue is new value for the fogCoord field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setFogCoord(FogCoordinate newValue)
	{
		// set-newValue-validity-checks #0
		fogCoord = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) fogCoord).setParentObject(this); // parentTest15
		}
		if (fogCoordProtoInstance != null)
		{
			fogCoordProtoInstance.setParentObject(null); // housekeeping, clear prior object
			fogCoordProtoInstance = null;
		}
		return this;
	}

	/**
	 * Utility method to clear SFNode value of fogCoord field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ElevationGridObject clearFogCoord()
	{
		((X3DConcreteElement) fogCoord).clearParentObject(); // remove references to facilitate Java memory management
		fogCoord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>fogCoord</i>.
	 * @see #setFogCoord(FogCoordinate)
	 * @param newValue is new value for the fogCoord field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setFogCoord(ProtoInstanceObject newValue)
	{
		if (fogCoordProtoInstance != null)
		{
			((X3DConcreteElement) fogCoordProtoInstance).setParentObject(null); // parentTest15.5
	    }
		fogCoordProtoInstance = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) fogCoordProtoInstance).setParentObject(this); // parentTest15.6
	    }
		if (fogCoord != null)
		{
			((X3DConcreteElement) fogCoord).setParentObject(null); // housekeeping, clear prior object
			fogCoord = null;
		}
	    return this;
	}

		/** Private utility method to access SFNode ProtoInstance field **/
		private ProtoInstanceObject getFogCoordProtoInstance()
		{
			return fogCoordProtoInstance;
		}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>fogCoord</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getFogCoord()
	 * @see #getFogCoordProtoInstance()
	 */
	public boolean hasFogCoord()
	{
		return (fogCoord != null) || (fogCoordProtoInstance != null);
	}
	/**
	 * Provide array of Float results from initializeOnly MFFloat field named <i>height</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Grid array of height vertices with upward direction along +Y axis, with xDimension rows and zDimension columns.
 * <ul>
 *  <li> <i> Hint:</i>  height array values are given in row-major order from left to right along X axis, then back to front along Z axis. </li> 
 * </ul>
	 * @return value of height field
	 */
	@Override
	public float[] getHeight()
	{
		final float[] valuesArray = new float[height.size()];
		int i = 0;
		for (Float arrayElement : height) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFFloat height field, similar to {@link #getHeight()}.

	 * @return value of height field
	 */
	public ArrayList<Float> getHeightList()
	{
		return height;
	}

	/**
	 * Assign Float array to initializeOnly MFFloat field named <i>height</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Grid array of height vertices with upward direction along +Y axis, with xDimension rows and zDimension columns. Hint: height array values are given in row-major order from left to right along X axis, then back to front along Z axis.
	 * @param newValue is new value for the height field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setHeight(float[] newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		height.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			height.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFFloat height field, similar to {@link #setHeight(float[])}.
	 * @param newValue is new value for the height field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setHeight(MFFloatObject newValue)
	{
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setHeight(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Assign ArrayList value of MFFloat height field, similar to {@link #setHeight(float[])}.
	 * @param newValue is new value for the height field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setHeight(ArrayList<Float> newValue)
	{
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #4
		height = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFFloat value of height field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public ElevationGridObject clearHeight()
	{
		height.clear(); // reset
		return this;
	}
	/**
	 * Assign floating-point array value of MFFloat height field, similar to {@link #setHeight(float[])}.
	 * @param newValue is new value for the height field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setHeight(int[] newValue)
	{
		if (newValue == null)
		{
			clearHeight(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		// set-newValue-validity-checks #5
		float[] holdArray = new float[newValue.length];
		for (int i = 0; i < newValue.length; i++)
		{
			holdArray[i] = (float)newValue[i];
		}
		setHeight(holdArray);
		return this;
	}

	/**
	 * Add singleton float value to MFFloat height field.
	 * @param newValue is new value to add to the height field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject addHeight(float newValue)
	{
		height.add(newValue);

		return this;
	}
	/**
	 * Add singleton SFFloatObject value to MFFloat height field.
	 * @param newValue is new value to add to the height field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject addHeight(SFFloatObject newValue)
	{
		if (newValue == null)
		{
			return this; // nothing to do
		}
		height.add(newValue.getPrimitiveValue());
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ElevationGridObject clearMetadata()
	{
		((X3DConcreteElement) metadata).clearParentObject(); // remove references to facilitate Java memory management
		metadata = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see #setMetadata(X3DMetadataObject)
	 * @param newValue is new value for the metadata field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setMetadata(ProtoInstanceObject newValue)
	{
		if (metadataProtoInstance != null)
		{
			((X3DConcreteElement) metadataProtoInstance).setParentObject(null); // parentTest15.5
	    }
		metadataProtoInstance = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) metadataProtoInstance).setParentObject(this); // parentTest15.6
	    }
		if (metadata != null)
		{
			((X3DConcreteElement) metadata).setParentObject(null); // housekeeping, clear prior object
			metadata = null;
		}
	    return this;
	}

		/** Private utility method to access SFNode ProtoInstance field **/
		private ProtoInstanceObject getMetadataProtoInstance()
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
	 * Provide X3DNormalNode instance (using a properly typed node) from inputOutput SFNode field <i>normal</i>.
	 * @see #getNormalProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i> [X3DNormalNode] Single contained Normal node that specifies perpendicular vectors for corresponding vertices to support rendering computations, applied according to the normalPerVertex field.
 * <ul>
 *  <li> <i>Hint:</i> useful for special effects. Normal vector computation by 3D graphics hardware is quite fast so adding normals to a scene is typically unnecessary. </li> 
 *  <li> <i>Warning:</i>  normal vectors increase file size, typically doubling geometry definitions. </li> 
 * </ul>
	 * @return value of normal field
	 */
	@Override
	public X3DNormalNode getNormal()
	{
		return normal;
	}

	/**
	 * Assign X3DNormalNode instance (using a properly typed node) to inputOutput SFNode field <i>normal</i>.
	 * @see #setNormal(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [X3DNormalNode] Single contained Normal node that specifies perpendicular vectors for corresponding vertices to support rendering computations, applied according to the normalPerVertex field. Hint: useful for special effects. Normal vector computation by 3D graphics hardware is quite fast so adding normals to a scene is typically unnecessary. Warning: normal vectors increase file size, typically doubling geometry definitions.
	 * @param newValue is new value for the normal field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setNormal(X3DNormalNode newValue)
	{
		// set-newValue-validity-checks #0
		normal = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) normal).setParentObject(this); // parentTest15
		}
		if (normalProtoInstance != null)
		{
			normalProtoInstance.setParentObject(null); // housekeeping, clear prior object
			normalProtoInstance = null;
		}
		return this;
	}

	/**
	 * Utility method to clear SFNode value of normal field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ElevationGridObject clearNormal()
	{
		((X3DConcreteElement) normal).clearParentObject(); // remove references to facilitate Java memory management
		normal = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>normal</i>.
	 * @see #setNormal(X3DNormalNode)
	 * @param newValue is new value for the normal field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setNormal(ProtoInstanceObject newValue)
	{
		if (normalProtoInstance != null)
		{
			((X3DConcreteElement) normalProtoInstance).setParentObject(null); // parentTest15.5
	    }
		normalProtoInstance = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) normalProtoInstance).setParentObject(this); // parentTest15.6
	    }
		if (normal != null)
		{
			((X3DConcreteElement) normal).setParentObject(null); // housekeeping, clear prior object
			normal = null;
		}
	    return this;
	}

		/** Private utility method to access SFNode ProtoInstance field **/
		private ProtoInstanceObject getNormalProtoInstance()
		{
			return normalProtoInstance;
		}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>normal</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getNormal()
	 * @see #getNormalProtoInstance()
	 */
	public boolean hasNormal()
	{
		return (normal != null) || (normalProtoInstance != null);
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>normalPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Normal node vector values are applied to each point vertex (true) or per quadrilateral (false).
 * <ul>
 *  <li> <i> Hint:</i>  if no child Normal node is provided, the X3D browser shall automatically generate normals, using creaseAngle to determine smoothed shading across shared vertices. </li> 
 * </ul>
	 * @return value of normalPerVertex field
	 */
	@Override
	public boolean getNormalPerVertex()
	{
		return normalPerVertex;
	}

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>normalPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Normal node vector values are applied to each point vertex (true) or per quadrilateral (false). Hint: if no child Normal node is provided, the X3D browser shall automatically generate normals, using creaseAngle to determine smoothed shading across shared vertices.
	 * @param newValue is new value for the normalPerVertex field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setNormalPerVertex(boolean newValue)
	{
		// set-newValue-validity-checks #0
		normalPerVertex = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool normalPerVertex field, similar to {@link #setNormalPerVertex(boolean)}.
	 * @param newValue is new value for the normalPerVertex field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setNormalPerVertex(SFBoolObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setNormalPerVertex(newValue.getPrimitiveValue());
            return this;
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setSolid(boolean newValue)
	{
		// set-newValue-validity-checks #0
		solid = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool solid field, similar to {@link #setSolid(boolean)}.
	 * @param newValue is new value for the solid field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setSolid(SFBoolObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setSolid(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide X3DTextureCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>texCoord</i>.
	 * @see #getTexCoordProtoInstance()
	 * <br><br>
	 * <i>Tooltip:</i>  [X3DTextureCoordinateNode] Single contained TextureCoordinate, TextureCoordinateGenerator or MultiTextureCoordinate node that specifies coordinates for texture mapping onto corresponding geometry.  * <br>

	 * @return value of texCoord field
	 */
	@Override
	public X3DTextureCoordinateNode getTexCoord()
	{
		return texCoord;
	}

	/**
	 * Assign X3DTextureCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>texCoord</i>.
	 * @see #setTexCoord(ProtoInstanceObject)
	 * <br><br>
	 * <i>Tooltip:</i> [X3DTextureCoordinateNode] Single contained TextureCoordinate, TextureCoordinateGenerator or MultiTextureCoordinate node that specifies coordinates for texture mapping onto corresponding geometry.
	 * @param newValue is new value for the texCoord field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setTexCoord(X3DTextureCoordinateNode newValue)
	{
		// set-newValue-validity-checks #0
		texCoord = newValue;
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public ElevationGridObject clearTexCoord()
	{
		((X3DConcreteElement) texCoord).clearParentObject(); // remove references to facilitate Java memory management
		texCoord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance (using a properly typed node) to inputOutput SFNode field <i>texCoord</i>.
	 * @see #setTexCoord(X3DTextureCoordinateNode)
	 * @param newValue is new value for the texCoord field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setTexCoord(ProtoInstanceObject newValue)
	{
		if (texCoordProtoInstance != null)
		{
			((X3DConcreteElement) texCoordProtoInstance).setParentObject(null); // parentTest15.5
	    }
		texCoordProtoInstance = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) texCoordProtoInstance).setParentObject(this); // parentTest15.6
	    }
		if (texCoord != null)
		{
			((X3DConcreteElement) texCoord).setParentObject(null); // housekeeping, clear prior object
			texCoord = null;
		}
	    return this;
	}

		/** Private utility method to access SFNode ProtoInstance field **/
		private ProtoInstanceObject getTexCoordProtoInstance()
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
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>xDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along X direction.
 * <ul>
 *  <li> <i>Hint:</i> total horizontal x-axis distance equals (xDimension-1) * xSpacing. </li> 
 *  <li> <i>Warning:</i>  xDimension &amp;lt; 2 means that ElevationGrid contains no quadrilaterals. </li> 
 * </ul>
	 * @return value of xDimension field
	 */
	@Override
	public int getXDimension()
	{
		return xDimension;
	}

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>xDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along X direction. Hint: total horizontal x-axis distance equals (xDimension-1) * xSpacing. Warning: xDimension &lt; 2 means that ElevationGrid contains no quadrilaterals.
	 * @param newValue is new value for the xDimension field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setXDimension(int newValue)
	{
		// set-newValue-validity-checks #0
        // Check that newValue parameter has legal value(s) before assigning to scene graph
        if (newValue < 0) {
            throw new org.web3d.x3d.sai.InvalidFieldValueException("ElevationGrid xDimension newValue=" + newValue + " has component value less than restriction minInclusive=0");
        }
		xDimension = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 xDimension field, similar to {@link #setXDimension(int)}.
	 * @param newValue is new value for the xDimension field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setXDimension(SFInt32Object newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setXDimension(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide float value within allowed range of (0,infinity) from initializeOnly SFFloat field named <i>xSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Meters distance between grid-array vertices along X direction.
 * <ul>
 *  <li> <i> Hint:</i>  total horizontal x-axis distance equals (xDimension-1) * xSpacing. </li> 
 * </ul>
	 * @return value of xSpacing field
	 */
	@Override
	public float getXSpacing()
	{
		return xSpacing;
	}

	/**
	 * Assign float value within allowed range of (0,infinity) to initializeOnly SFFloat field named <i>xSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Meters distance between grid-array vertices along X direction. Hint: total horizontal x-axis distance equals (xDimension-1) * xSpacing.
	 * @param newValue is new value for the xSpacing field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setXSpacing(float newValue)
	{
		// set-newValue-validity-checks #0
        // Check that newValue parameter has legal value(s) before assigning to scene graph
        if (newValue <= 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("ElevationGrid xSpacing newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
        }
		xSpacing = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat xSpacing field, similar to {@link #setXSpacing(float)}.
	 * @param newValue is new value for the xSpacing field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setXSpacing(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setXSpacing(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide int value within allowed range of [0,infinity) from initializeOnly SFInt32 field named <i>zDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along Z direction.
 * <ul>
 *  <li> <i>Hint:</i> total horizontal z-axis distance equals (zDimension-1) * zSpacing. </li> 
 *  <li> <i>Warning:</i>  zDimension &amp;lt; 2 means that ElevationGrid contains no quadrilaterals. </li> 
 * </ul>
	 * @return value of zDimension field
	 */
	@Override
	public int getZDimension()
	{
		return zDimension;
	}

	/**
	 * Assign int value within allowed range of [0,infinity) to initializeOnly SFInt32 field named <i>zDimension</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Number of elements in the height array along Z direction. Hint: total horizontal z-axis distance equals (zDimension-1) * zSpacing. Warning: zDimension &lt; 2 means that ElevationGrid contains no quadrilaterals.
	 * @param newValue is new value for the zDimension field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setZDimension(int newValue)
	{
		// set-newValue-validity-checks #0
        // Check that newValue parameter has legal value(s) before assigning to scene graph
        if (newValue < 0) {
            throw new org.web3d.x3d.sai.InvalidFieldValueException("ElevationGrid zDimension newValue=" + newValue + " has component value less than restriction minInclusive=0");
        }
		zDimension = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFInt32 zDimension field, similar to {@link #setZDimension(int)}.
	 * @param newValue is new value for the zDimension field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setZDimension(SFInt32Object newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setZDimension(newValue.getPrimitiveValue());
            return this;
	}
	/**
	 * Provide float value within allowed range of (0,infinity) from initializeOnly SFFloat field named <i>zSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Meters distance between grid-array vertices along Z direction.
 * <ul>
 *  <li> <i> Hint:</i>  total lateral z-axis distance equals (zDimension-1) * zSpacing. </li> 
 * </ul>
	 * @return value of zSpacing field
	 */
	@Override
	public float getZSpacing()
	{
		return zSpacing;
	}

	/**
	 * Assign float value within allowed range of (0,infinity) to initializeOnly SFFloat field named <i>zSpacing</i>.
	 * <br><br>
	 * <i>Tooltip:</i> (0,+infinity) Meters distance between grid-array vertices along Z direction. Hint: total lateral z-axis distance equals (zDimension-1) * zSpacing.
	 * @param newValue is new value for the zSpacing field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setZSpacing(float newValue)
	{
		// set-newValue-validity-checks #0
        // Check that newValue parameter has legal value(s) before assigning to scene graph
        if (newValue <= 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("ElevationGrid zSpacing newValue=" + newValue + " has component value less than (or equal to) restriction minExclusive=0");
        }
		zSpacing = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat zSpacing field, similar to {@link #setZSpacing(float)}.
	 * @param newValue is new value for the zSpacing field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setZSpacing(SFFloatObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setZSpacing(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final ElevationGridObject setDEF(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ElevationGrid
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ElevationGrid DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ElevationGrid DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setDEF(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final ElevationGridObject setUSE(String newValue)
	{
		// set-newValue-validity-checks #0
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to ElevationGrid
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("ElevationGrid USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("ElevationGrid USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setUSE(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
            setUSE(newValue.getPrimitiveValue());
            return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final ElevationGridObject setCssClass(String newValue)
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setCssClass(SFStringObject newValue)
	{
            // set-newValue-validity-checks #1 gets handled by set-primitive method
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ElevationGridObject setIS(ISObject newValue)
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ElevationGridObject setUSE(ElevationGridObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on ElevationGridObject" +
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
	public ElevationGridObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ElevationGridObject addComments (String newComment)
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ElevationGridObject addComments (String[] newComments)
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
	 * @return {@link ElevationGridObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public ElevationGridObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (!attrib.isEmpty()) || (color != null) || (colorProtoInstance != null) || (fogCoord != null) || (fogCoordProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (normal != null) || (normalProtoInstance != null) || (texCoord != null) || (texCoordProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<ElevationGrid"); // start opening tag
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
                            
			if (((getCcw() != CCW_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" ccw='").append(SFBoolObject.toString(getCcw())).append("'");
			}
			if (((getColorPerVertex() != COLORPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" colorPerVertex='").append(SFBoolObject.toString(getColorPerVertex())).append("'");
			}
			if (((getCreaseAngle() != CREASEANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" creaseAngle='").append(SFFloatObject.toString(getCreaseAngle())).append("'");
			}
			if (((getHeight().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" height='").append(MFFloatObject.toString(getHeight())).append("'");
			}
			if (((getNormalPerVertex() != NORMALPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" normalPerVertex='").append(SFBoolObject.toString(getNormalPerVertex())).append("'");
			}
			if (((getSolid() != SOLID_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" solid='").append(SFBoolObject.toString(getSolid())).append("'");
			}
			if (((getXDimension() != XDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" xDimension='").append(SFInt32Object.toString(getXDimension())).append("'");
			}
			if (((getXSpacing() != XSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" xSpacing='").append(SFFloatObject.toString(getXSpacing())).append("'");
			}
			if (((getZDimension() != ZDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" zDimension='").append(SFInt32Object.toString(getZDimension())).append("'");
			}
			if (((getZSpacing() != ZSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" zSpacing='").append(SFFloatObject.toString(getZSpacing())).append("'");
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
			for (X3DVertexAttributeNode element : attrib)
			{
				stringX3D.append(((X3DConcreteElement)element).toStringX3D(indentLevel + indentIncrement));
			}
			if      (color != null)
			{
				stringX3D.append(((X3DConcreteElement)color).toStringX3D(indentLevel + indentIncrement));
			}
			else if (colorProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)colorProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (fogCoord != null)
			{
				stringX3D.append(((X3DConcreteElement)fogCoord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (fogCoordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)fogCoordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (normal != null)
			{
				stringX3D.append(((X3DConcreteElement)normal).toStringX3D(indentLevel + indentIncrement));
			}
			else if (normalProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)normalProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (texCoord != null)
			{
				stringX3D.append(((X3DConcreteElement)texCoord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (texCoordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)texCoordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</ElevationGrid>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!attrib.isEmpty()) || (color != null) || (colorProtoInstance != null) || (fogCoord != null) || (fogCoordProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || (normal != null) || (normalProtoInstance != null) || (texCoord != null) || (texCoordProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("ElevationGrid").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("ccw"))
						{
							stringClassicVRML.append(indentCharacter).append("ccw").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCcw() != CCW_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("ccw ").append(SFBoolObject.toString(getCcw())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("colorPerVertex"))
						{
							stringClassicVRML.append(indentCharacter).append("colorPerVertex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getColorPerVertex() != COLORPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("colorPerVertex ").append(SFBoolObject.toString(getColorPerVertex())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("creaseAngle"))
						{
							stringClassicVRML.append(indentCharacter).append("creaseAngle").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getCreaseAngle() != CREASEANGLE_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("creaseAngle ").append(SFFloatObject.toString(getCreaseAngle())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("height"))
						{
							stringClassicVRML.append(indentCharacter).append("height").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getHeight().length > 0)
				{
					stringClassicVRML.append("height ").append("[ ").append(MFFloatObject.toString(getHeight())).append(" ]").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("normalPerVertex"))
						{
							stringClassicVRML.append(indentCharacter).append("normalPerVertex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getNormalPerVertex() != NORMALPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("normalPerVertex ").append(SFBoolObject.toString(getNormalPerVertex())).append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("xDimension"))
						{
							stringClassicVRML.append(indentCharacter).append("xDimension").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getXDimension() != XDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("xDimension ").append(SFInt32Object.toString(getXDimension())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("xSpacing"))
						{
							stringClassicVRML.append(indentCharacter).append("xSpacing").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getXSpacing() != XSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("xSpacing ").append(SFFloatObject.toString(getXSpacing())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("zDimension"))
						{
							stringClassicVRML.append(indentCharacter).append("zDimension").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getZDimension() != ZDIMENSION_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("zDimension ").append(SFInt32Object.toString(getZDimension())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("zSpacing"))
						{
							stringClassicVRML.append(indentCharacter).append("zSpacing").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getZSpacing() != ZSPACING_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("zSpacing ").append(SFFloatObject.toString(getZSpacing())).append("\n").append(indent).append(indentCharacter);
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
			if (attrib.size() > 0)
			{
				stringClassicVRML.append(indentCharacter).append(indentCharacter).append("attrib").append(" [").append("\n")
					.append(indent).append(indentCharacter).append(indentCharacter); // containerField for MFNode array
			for (X3DVertexAttributeNode element : attrib)
			{
				stringClassicVRML.append(((X3DConcreteElement)element).toStringClassicVRML(indentLevel + indentIncrement + indentIncrement));
			}
				stringClassicVRML.append(indent).append(indentCharacter).append(indentCharacter).append("]").append("\n")
					.append(indent); // end MFNode array
			}

			if (color != null)
			{
				stringClassicVRML.append(indentCharacter).append("color").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) color).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (colorProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("color").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) colorProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (fogCoord != null)
			{
				stringClassicVRML.append(indentCharacter).append("fogCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) fogCoord).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (fogCoordProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("fogCoord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) fogCoordProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
			if (normal != null)
			{
				stringClassicVRML.append(indentCharacter).append("normal").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) normal).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (normalProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("normal").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) normalProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, CAD and HAnim nodes.
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
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, CAD and HAnim nodes.
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
		for (X3DVertexAttributeNode element : attrib) // MFNode
		{
			if (element instanceof X3DConcreteElement)
			{
				referenceElement = ((X3DConcreteElement) element).findElementByNameValue(nameValue, elementName);
				if (referenceElement != null)
					return referenceElement;
			}
		}
		if (color != null)
		{
			referenceElement = ((X3DConcreteElement) color).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (colorProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) colorProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (fogCoord != null)
		{
			referenceElement = ((X3DConcreteElement) fogCoord).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (fogCoordProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) fogCoordProtoInstance).findElementByNameValue(nameValue, elementName);
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
		if (normal != null)
		{
			referenceElement = ((X3DConcreteElement) normal).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (normalProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) normalProtoInstance).findElementByNameValue(nameValue, elementName);
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
		for (X3DVertexAttributeNode element : attrib) // MFNode
		{
			if (element instanceof org.web3d.x3d.jsail.X3DConcreteNode)
			{
				referenceNode = ((X3DConcreteElement) element).findNodeByDEF(DEFvalue);
				if (referenceNode != null)
					return referenceNode;
			}
		}
		if (color != null)
		{
			referenceNode = ((X3DConcreteElement) color).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (colorProtoInstance != null)
		{
			referenceNode = ((X3DConcreteElement) colorProtoInstance).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (fogCoord != null)
		{
			referenceNode = ((X3DConcreteElement) fogCoord).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (fogCoordProtoInstance != null)
		{
			referenceNode = ((X3DConcreteElement) fogCoordProtoInstance).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (metadata != null)
		{
			referenceNode = ((X3DConcreteElement) metadata).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (metadataProtoInstance != null)
		{
			referenceNode = ((X3DConcreteElement) metadataProtoInstance).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (normal != null)
		{
			referenceNode = ((X3DConcreteElement) normal).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (normalProtoInstance != null)
		{
			referenceNode = ((X3DConcreteElement) normalProtoInstance).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (texCoord != null)
		{
			referenceNode = ((X3DConcreteElement) texCoord).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (texCoordProtoInstance != null)
		{
			referenceNode = ((X3DConcreteElement) texCoordProtoInstance).findNodeByDEF(DEFvalue);
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
	 * Recursive method to validate this element plus all contained nodes and statements, 
	 * using both datatype-specification value checks and regular expression (regex) checking of corresponding string values..
	 * @return validation results (if any)
	 */
	@Override
	public String validate()
	{
		validationResult = new StringBuilder(); // prepare for updated results

		setCcw(getCcw()); // exercise field checks, simple types
		if (!(new SFBoolObject(getCcw())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFBoolObject(getCcw())).validate().trim());  
			validationResult.append(" for ElevationGrid ccw\n");
		}

		setColorPerVertex(getColorPerVertex()); // exercise field checks, simple types
		if (!(new SFBoolObject(getColorPerVertex())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFBoolObject(getColorPerVertex())).validate().trim());  
			validationResult.append(" for ElevationGrid colorPerVertex\n");
		}

		setCreaseAngle(getCreaseAngle()); // exercise field checks, simple types
		if (!(new SFFloatObject(getCreaseAngle())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFFloatObject(getCreaseAngle())).validate().trim());  
			validationResult.append(" for ElevationGrid creaseAngle\n");
		}

		setHeight(getHeight()); // exercise field checks, simple types
		if (!(new MFFloatObject(getHeight())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new MFFloatObject(getHeight())).validate().trim());  
			validationResult.append(" for ElevationGrid height\n");
		}

		setNormalPerVertex(getNormalPerVertex()); // exercise field checks, simple types
		if (!(new SFBoolObject(getNormalPerVertex())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFBoolObject(getNormalPerVertex())).validate().trim());  
			validationResult.append(" for ElevationGrid normalPerVertex\n");
		}

		setSolid(getSolid()); // exercise field checks, simple types
		if (!(new SFBoolObject(getSolid())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFBoolObject(getSolid())).validate().trim());  
			validationResult.append(" for ElevationGrid solid\n");
		}

		setXDimension(getXDimension()); // exercise field checks, simple types
		if (!(new SFInt32Object(getXDimension())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFInt32Object(getXDimension())).validate().trim());  
			validationResult.append(" for ElevationGrid xDimension\n");
		}

		setXSpacing(getXSpacing()); // exercise field checks, simple types
		if (!(new SFFloatObject(getXSpacing())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFFloatObject(getXSpacing())).validate().trim());  
			validationResult.append(" for ElevationGrid xSpacing\n");
		}

		setZDimension(getZDimension()); // exercise field checks, simple types
		if (!(new SFInt32Object(getZDimension())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFInt32Object(getZDimension())).validate().trim());  
			validationResult.append(" for ElevationGrid zDimension\n");
		}

		setZSpacing(getZSpacing()); // exercise field checks, simple types
		if (!(new SFFloatObject(getZSpacing())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFFloatObject(getZSpacing())).validate().trim());  
			validationResult.append(" for ElevationGrid zSpacing\n");
		}

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types
		if (!(new SFStringObject(getDEF())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFStringObject(getDEF())).validate().trim());  
			validationResult.append(" for ElevationGrid DEF\n");
		}

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types
		if (!(new SFStringObject(getUSE())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFStringObject(getUSE())).validate().trim());  
			validationResult.append(" for ElevationGrid USE\n");
		}

		setCssClass(getCssClass()); // exercise field checks, simple types
		if (!(new SFStringObject(getCssClass())).matches())
		{
			// regex problem with corresponding String value for this field
			validationResult.append((new SFStringObject(getCssClass())).validate().trim());  
			validationResult.append(" for ElevationGrid class\n");
		}

		for (X3DVertexAttributeNode element : attrib) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setAttrib(getAttrib()); // also test getter/setter validation

		if (isUSE() && hasAttrib()) // test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained MFNode attrib";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}
		
		if (color != null)
		{
			setColor(getColor());
			((X3DConcreteElement) color).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) color).getValidationResult());
		}
		if (colorProtoInstance != null)
		{
			setColor(getColorProtoInstance());
			((X3DConcreteElement) colorProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) colorProtoInstance).getValidationResult());
		}
		if ((color != null) && (colorProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both color and colorProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasColor()) // test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode color";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (fogCoord != null)
		{
			setFogCoord(getFogCoord());
			((X3DConcreteElement) fogCoord).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) fogCoord).getValidationResult());
		}
		if (fogCoordProtoInstance != null)
		{
			setFogCoord(getFogCoordProtoInstance());
			((X3DConcreteElement) fogCoordProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) fogCoordProtoInstance).getValidationResult());
		}
		if ((fogCoord != null) && (fogCoordProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both fogCoord and fogCoordProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasFogCoord()) // test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode fogCoord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (normal != null)
		{
			setNormal(getNormal());
			((X3DConcreteElement) normal).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) normal).getValidationResult());
		}
		if (normalProtoInstance != null)
		{
			setNormal(getNormalProtoInstance());
			((X3DConcreteElement) normalProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) normalProtoInstance).getValidationResult());
		}
		if ((normal != null) && (normalProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both normal and normalProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasNormal()) // test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode normal";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained SFNode texCoord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "ElevationGrid USE='" + getUSE() + "' is not allowed to have contained comments";
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
				if ( nextComponent.getName().equals("Geometry3D") &&
					(nextComponent.getLevel() >= 3))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Interactive") &&
				!modelProfile.equals("Immersive") &&
				!modelProfile.equals("MPEG4Interactive") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" insufficient X3D profile='" + modelProfile +
					"' for parent X3D model containing 'ElevationGrid' node, add head statement <component name='Geometry3D' level='3'/>\n" +
					"or Java source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponent(\"Geometry3D\").setLevel(3);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
