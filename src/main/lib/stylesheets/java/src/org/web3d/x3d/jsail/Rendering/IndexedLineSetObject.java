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

package org.web3d.x3d.jsail.Rendering;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.jsail.fields.*; // making sure #4
import org.web3d.x3d.sai.Rendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.sai.Rendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.Rendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.sai.Rendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.sai.Rendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Core.*;
import java.util.Arrays;

/**
 * <i>X3D node tooltip</i>: IndexedLineSet is a geometry node that can contain a Coordinate|CoordinateDouble node and optionally a Color|ColorRGBA node.
 * <ul>
 *  <li> <i>Hint:</i> either values in a contained Color node, or else Material emissiveColor in corresponding Appearance node, are used for rendering lines and points. </li> 
 *  <li> <i>Warning:</i> lines are not lit, are not texture-mapped, and do not participate in collision detection. </li> 
 *  <li> <i>Warning:</i> use a different color (or Material emissiveColor) than the Background color, otherwise geometry is invisible. </li> 
 *  <li> <i>Hint:</i> adding LineProperties to the corresponding Appearance node can modify the rendering style of these lines. </li> 
 *  <li> <i>Hint:</i> if rendering Coordinate points originally defined for an IndexedFaceSet, index values may need to repeat each initial vertex to close each polygon outline. </li> 
 *  <li> <i>Hint:</i> step-wise variation or linear interpolation of color values can be used as a good scientific visualization technique to map arbitrary function values to a color map. </li> 
 *  <li> <i>Hint:</i> insert a Shape node before adding geometry or Appearance. </li> 
 *  <li> <i>Hint:</i> for advanced extensibility, authors can substitute a type-matched ProtoInstance node (with correct containerField value) for contained node content. </li> 
 *  <li> <i>Hint:</i>  consider including Fog (with Fog color matching Background color) to provide further depth cueing for IndexedLineSet (ILS). </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html#IndexedLineSet" target="blank">X3D Abstract Specification: IndexedLineSet</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IndexedLineSet" target="_blank">X3D Tooltips: IndexedLineSet</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class IndexedLineSetObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.Rendering.IndexedLineSet
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private ArrayList<X3DVertexAttributeNode> attrib = new ArrayList<>(); // MFNode acceptable node types: X3DVertexAttributeNode

	private X3DColorNode color; // SFNode acceptable node types: X3DColorNode
	private ProtoInstanceObject colorProtoInstance; // allowed alternative for color field

	private ArrayList<Integer> colorIndex = new ArrayList<>(); // MFInt32

	private boolean colorPerVertex; // SFBool

	private X3DCoordinateNode coord; // SFNode acceptable node types: X3DCoordinateNode
	private ProtoInstanceObject coordProtoInstance; // allowed alternative for coord field

	private ArrayList<Integer> coordIndex = new ArrayList<>(); // MFInt32

	private FogCoordinate fogCoord; // SFNode acceptable node types: FogCoordinate
	private ProtoInstanceObject fogCoordProtoInstance; // allowed alternative for fogCoord field

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>IndexedLineSet</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "IndexedLineSet";

	/** Provides name of this element: <i>IndexedLineSet</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>IndexedLineSet</i> element: <i>Rendering</i> */
	public static final String COMPONENT = "Rendering";

	/** Defines X3D component for the <i>IndexedLineSet</i> element: <i>Rendering</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Rendering</i> component level for this element: <i>1</i> */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for this element: <i>1</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFBool field named <i>colorPerVertex</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean COLORPERVERTEX_DEFAULT_VALUE = true;

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
			case "color":
				result = "SFNode";
				break;
			case "colorIndex":
				result = "MFInt32";
				break;
			case "colorPerVertex":
				result = "SFBool";
				break;
			case "coord":
				result = "SFNode";
				break;
			case "coordIndex":
				result = "MFInt32";
				break;
			case "fogCoord":
				result = "SFNode";
				break;
			case "metadata":
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
			case "attrib":
				result = "inputOutput";
				break;
			case "color":
				result = "inputOutput";
				break;
			case "colorIndex":
				result = "initializeOnly";
				break;
			case "colorPerVertex":
				result = "initializeOnly";
				break;
			case "coord":
				result = "inputOutput";
				break;
			case "coordIndex":
				result = "initializeOnly";
				break;
			case "fogCoord":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "set_colorIndex":
				result = "inputOnly";
				break;
			case "set_coordIndex":
				result = "inputOnly";
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

	/** fromField ROUTE name for MFNode field named <i>attrib</i>. */
	public static final String fromField_ATTRIB = "attrib";

	/** toField ROUTE name for MFNode field named <i>attrib</i>. */
	public static final String toField_ATTRIB = "attrib";

	/** fromField ROUTE name for SFNode field named <i>color</i>. */
	public static final String fromField_COLOR = "color";

	/** toField ROUTE name for SFNode field named <i>color</i>. */
	public static final String toField_COLOR = "color";

	/** fromField ROUTE name for SFNode field named <i>coord</i>. */
	public static final String fromField_COORD = "coord";

	/** toField ROUTE name for SFNode field named <i>coord</i>. */
	public static final String toField_COORD = "coord";

	/** fromField ROUTE name for SFNode field named <i>fogCoord</i>. */
	public static final String fromField_FOGCOORD = "fogCoord";

	/** toField ROUTE name for SFNode field named <i>fogCoord</i>. */
	public static final String toField_FOGCOORD = "fogCoord";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** toField ROUTE name for MFInt32 field named <i>set_colorIndex</i>. */
	public static final String toField_SET_COLORINDEX = "set_colorIndex";

	/** toField ROUTE name for MFInt32 field named <i>set_coordIndex</i>. */
	public static final String toField_SET_COORDINDEX = "set_coordIndex";

	/** Constructor for IndexedLineSetObject to initialize member variables with default values. */
	public IndexedLineSetObject()
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

		attrib = new ArrayList<>();
		color = null; // clear out any prior node
		colorIndex = new ArrayList<>();
		colorPerVertex = COLORPERVERTEX_DEFAULT_VALUE;
		coord = null; // clear out any prior node
		coordIndex = new ArrayList<>();
		fogCoord = null; // clear out any prior node
		metadata = null; // clear out any prior node

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of X3DVertexAttributeNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>attrib</i>.
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
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVertexAttributeNode.
	 * @param newValue is new value for the attrib field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setAttrib(X3DNode[] newValue)
	{
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setAttrib(ArrayList<X3DVertexAttributeNode> newValue)
	{
		if (newValue == null)
		{
			clearAttrib(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).	 */
	public IndexedLineSetObject addAttrib(X3DVertexAttributeNode newValue)
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
		if (newValue == null) return; // newValueNullReturnVoid
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IndexedLineSetObject clearAttrib()
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
	 * Provide X3DColorNode instance (using a properly typed node) using RGB values [0..1] from inputOutput SFNode field <i>color</i>.
	 * @see #getColorProtoInstance()
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
	 * @param newValue is new value for the color field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setColor(X3DColorNode newValue)
	{
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public IndexedLineSetObject clearColor()
	{
		((X3DConcreteElement) color).clearParentObject(); // remove references to facilitate Java memory management
		color = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>color</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DColorNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the color field
	 * @see #setColor(X3DColorNode)
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IndexedLineSetObject setColor(ProtoInstanceObject newProtoInstanceNode)
	{
		if (color != null)
		{
			((X3DConcreteElement) color).setParentObject(null); // housekeeping, clear prior object
			color = null;
		}
		colorProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>color</i>, if available.
	 * @see #getColor()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getColorProtoInstance()
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
	 * Provide array of Integer results using RGB values [0..1] from initializeOnly MFInt32 field named <i>colorIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,+infinity) colorIndex values define the order in which Color|ColorRGBA values are applied to polygons (or vertices).
 * <ul>
 *  <li> <i>Warning:</i> if colorIndex array is not provided, then Color|ColorRGBA values are indexed according to the coordIndex field. </li> 
 *  <li> <i>Hint:</i> If colorPerVertex='false' then one index is provided for each polygon defined by the coordIndex array. No sentinel -1 values are included. </li> 
 *  <li> <i>Hint:</i> If colorPerVertex='true' then a matching set of indices is provided, each separated by sentinel -1, that exactly corresponds to individual values in the coordIndex array polygon definitions. </li> 
 *  <li> <i>Hint:</i> if rendering Coordinate points originally defined for an IndexedFaceSet, index values may need to repeat initial each initial vertex to close the polygons. </li> 
 *  <li> <i>Warning:</i>  if child Color|ColorRGBA node is not provided, then geometry is rendered using corresponding Appearance and material/texture values. </li> 
 * </ul>
	 * @return value of colorIndex field
	 */
	@Override
	public int[] getColorIndex()
	{
		final int[] valuesArray = new int[colorIndex.size()];
		int i = 0;
		for (Integer arrayElement : colorIndex) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 colorIndex field, similar to {@link #getColorIndex()}.

	 * @return value of colorIndex field
	 */
	public ArrayList<Integer> getColorIndexList()
	{
		return colorIndex;
	}

	/**
	 * Assign Integer array using RGB values [0..1] to initializeOnly MFInt32 field named <i>colorIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,+infinity) colorIndex values define the order in which Color|ColorRGBA values are applied to polygons (or vertices). Warning: if colorIndex array is not provided, then Color|ColorRGBA values are indexed according to the coordIndex field. Hint: If colorPerVertex='false' then one index is provided for each polygon defined by the coordIndex array. No sentinel -1 values are included. Hint: If colorPerVertex='true' then a matching set of indices is provided, each separated by sentinel -1, that exactly corresponds to individual values in the coordIndex array polygon definitions. Hint: if rendering Coordinate points originally defined for an IndexedFaceSet, index values may need to repeat initial each initial vertex to close the polygons. Warning: if child Color|ColorRGBA node is not provided, then geometry is rendered using corresponding Appearance and material/texture values.
	 * @param newValue is new value for the colorIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setColorIndex(int[] newValue)
	{
		if (newValue == null)
		{
			clearColorIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		colorIndex.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			colorIndex.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 colorIndex field, similar to {@link #setColorIndex(int[])}.
	 * @param newValue is new value for the colorIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setColorIndex(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearColorIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setColorIndex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 colorIndex field, similar to {@link #setColorIndex(int[])}.
	 * @param newValue is new value for the colorIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setColorIndex(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearColorIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		colorIndex = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of colorIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IndexedLineSetObject clearColorIndex()
	{
		colorIndex.clear(); // reset
		return this;
	}
	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>colorPerVertex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per polyline (false).
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
	 * <i>Tooltip:</i> Whether Color node color values are applied to each point vertex (true) or per polyline (false). Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the colorPerVertex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setColorPerVertex(boolean newValue)
	{
		colorPerVertex = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool colorPerVertex field, similar to {@link #setColorPerVertex(boolean)}.
	 * @param newValue is new value for the colorPerVertex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setColorPerVertex(SFBoolObject newValue)
	{
		setColorPerVertex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DCoordinateNode instance (using a properly typed node) from inputOutput SFNode field <i>coord</i>.
	 * @see #getCoordProtoInstance()
	 * @return value of coord field
	 */
	@Override
	public X3DCoordinateNode getCoord()
	{
		return coord;
	}

	/**
	 * Assign X3DCoordinateNode instance (using a properly typed node) to inputOutput SFNode field <i>coord</i>.
	 * @see #setCoord(ProtoInstanceObject)
	 * @param newValue is new value for the coord field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setCoord(X3DCoordinateNode newValue)
	{
		coord = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) coord).setParentObject(this); // parentTest15
		}
		if (coordProtoInstance != null)
		{
			coordProtoInstance.setParentObject(null); // housekeeping, clear prior object
			coordProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of coord field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public IndexedLineSetObject clearCoord()
	{
		((X3DConcreteElement) coord).clearParentObject(); // remove references to facilitate Java memory management
		coord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>coord</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DCoordinateNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the coord field
	 * @see #setCoord(X3DCoordinateNode)
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IndexedLineSetObject setCoord(ProtoInstanceObject newProtoInstanceNode)
	{
		if (coord != null)
		{
			((X3DConcreteElement) coord).setParentObject(null); // housekeeping, clear prior object
			coord = null;
		}
		coordProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>coord</i>, if available.
	 * @see #getCoord()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getCoordProtoInstance()
	{
		return coordProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>coord</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getCoord()
	 * @see #getCoordProtoInstance()
	 */
	public boolean hasCoord()
	{
		return (coord != null) || (coordProtoInstance != null);
	}
	/**
	 * Provide array of Integer results within allowed range of [-1,infinity) from initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,+infinity) coordIndex indices provide the order in which coordinates are applied to construct each polygon face. Order starts at index 0, commas are optional between sets, use -1 to separate indices for each polyline.
 * <ul>
 *  <li> <i>Hint:</i> if rendering Coordinate points originally defined for an IndexedFaceSet, index values may need to repeat initial each initial vertex to close the polygons. </li> 
 *  <li> <i>Hint:</i> sentinel value -1 is used to separate indices for each successive polyline. </li> 
 *  <li> <i>Warning:</i>  coordIndex is required in order to connect contained coordinate point values. </li> 
 * </ul>
	 * @return value of coordIndex field
	 */
	@Override
	public int[] getCoordIndex()
	{
		final int[] valuesArray = new int[coordIndex.size()];
		int i = 0;
		for (Integer arrayElement : coordIndex) {
			valuesArray[i++] = arrayElement;
		}
		return valuesArray;
	}
	/**
	 * Utility method to get ArrayList value of MFInt32 coordIndex field, similar to {@link #getCoordIndex()}.

	 * @return value of coordIndex field
	 */
	public ArrayList<Integer> getCoordIndexList()
	{
		return coordIndex;
	}

	/**
	 * Assign Integer array within allowed range of [-1,infinity) to initializeOnly MFInt32 field named <i>coordIndex</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [-1,+infinity) coordIndex indices provide the order in which coordinates are applied to construct each polygon face. Order starts at index 0, commas are optional between sets, use -1 to separate indices for each polyline. Hint: if rendering Coordinate points originally defined for an IndexedFaceSet, index values may need to repeat initial each initial vertex to close the polygons. Hint: sentinel value -1 is used to separate indices for each successive polyline. Warning: coordIndex is required in order to connect contained coordinate point values.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setCoordIndex(int[] newValue)
	{
		if (newValue == null)
		{
			clearCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		coordIndex.clear(); // reset
		for (int i = 0; i < newValue.length; i++)
		{
			coordIndex.add(newValue[i]);
		}

		return this;
	}

	/**
	 * Assign typed object value to MFInt32 coordIndex field, similar to {@link #setCoordIndex(int[])}.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setCoordIndex(MFInt32Object newValue)
	{
		if (newValue == null)
		{
			clearCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		setCoordIndex(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Assign ArrayList value of MFInt32 coordIndex field, similar to {@link #setCoordIndex(int[])}.
	 * @param newValue is new value for the coordIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setCoordIndex(ArrayList<Integer> newValue)
	{
		if (newValue == null)
		{
			clearCoordIndex(); // newValueNullSetDEFAULT_VALUE
			return this;
		}
		coordIndex = newValue;
		return this;
	}
	/**
	 * Utility method to clear MFInt32 value of coordIndex field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IndexedLineSetObject clearCoordIndex()
	{
		coordIndex.clear(); // reset
		return this;
	}
	/**
	 * Provide FogCoordinate instance (using a properly typed node) from inputOutput SFNode field <i>fogCoord</i>.
	 * @see #getFogCoordProtoInstance()
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
	 * @param newValue is new value for the fogCoord field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setFogCoord(FogCoordinate newValue)
	{
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public IndexedLineSetObject clearFogCoord()
	{
		((X3DConcreteElement) fogCoord).clearParentObject(); // remove references to facilitate Java memory management
		fogCoord = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>fogCoord</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type FogCoordinate.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the fogCoord field
	 * @see #setFogCoord(FogCoordinate)
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IndexedLineSetObject setFogCoord(ProtoInstanceObject newProtoInstanceNode)
	{
		if (fogCoord != null)
		{
			((X3DConcreteElement) fogCoord).setParentObject(null); // housekeeping, clear prior object
			fogCoord = null;
		}
		fogCoordProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>fogCoord</i>, if available.
	 * @see #getFogCoord()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getFogCoordProtoInstance()
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public IndexedLineSetObject clearMetadata()
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public IndexedLineSetObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final IndexedLineSetObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to IndexedLineSet
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IndexedLineSet DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("IndexedLineSet DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setDEF(SFStringObject newValue)
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final IndexedLineSetObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to IndexedLineSet
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("IndexedLineSet USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("IndexedLineSet USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final IndexedLineSetObject setCssClass(String newValue)
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setCssClass(SFStringObject newValue)
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IndexedLineSetObject setIS(ISObject newValue)
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IndexedLineSetObject setUSE(IndexedLineSetObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on IndexedLineSetObject" +
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
	public IndexedLineSetObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IndexedLineSetObject addComments (String newComment)
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IndexedLineSetObject addComments (String[] newComments)
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
	 * @return {@link IndexedLineSetObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public IndexedLineSetObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (!attrib.isEmpty()) || (color != null) || (colorProtoInstance != null) || (coord != null) || (coordProtoInstance != null) || (fogCoord != null) || (fogCoordProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<IndexedLineSet"); // start opening tag
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
                            
			if (((getColorIndex().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" colorIndex='").append(MFInt32Object.toString(getColorIndex())).append("'");
			}
			if (((getColorPerVertex() != COLORPERVERTEX_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" colorPerVertex='").append(SFBoolObject.toString(getColorPerVertex())).append("'");
			}
			if (((getCoordIndex().length > 0) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" coordIndex='").append(MFInt32Object.toString(getCoordIndex())).append("'");
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
			if      (coord != null)
			{
				stringX3D.append(((X3DConcreteElement)coord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (coordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)coordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (fogCoord != null)
			{
				stringX3D.append(((X3DConcreteElement)fogCoord).toStringX3D(indentLevel + indentIncrement));
			}
			else if (fogCoordProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)fogCoordProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</IndexedLineSet>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (!attrib.isEmpty()) || (color != null) || (colorProtoInstance != null) || (coord != null) || (coordProtoInstance != null) || (fogCoord != null) || (fogCoordProtoInstance != null) || (metadata != null) || (metadataProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("IndexedLineSet").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("colorIndex"))
						{
							stringClassicVRML.append(indentCharacter).append("colorIndex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getColorIndex().length > 0)
				{
					stringClassicVRML.append("colorIndex ").append("[ ").append(MFInt32Object.toString(getColorIndex())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
						if (element.getNodeField().equals("coordIndex"))
						{
							stringClassicVRML.append(indentCharacter).append("coordIndex").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (getCoordIndex().length > 0)
				{
					stringClassicVRML.append("coordIndex ").append("[ ").append(MFInt32Object.toString(getCoordIndex())).append(" ]").append("\n").append(indent).append(indentCharacter);
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
			if (coord != null)
			{
				stringClassicVRML.append(indentCharacter).append("coord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) coord).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (coordProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("coord").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) coordProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
		if (coord != null)
		{
			referenceElement = ((X3DConcreteElement) coord).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (coordProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) coordProtoInstance).findElementByNameValue(nameValue, elementName);
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
		if (coord != null)
		{
			referenceNode = ((X3DConcreteElement) coord).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (fogCoord != null)
		{
			referenceNode = ((X3DConcreteElement) fogCoord).findNodeByDEF(DEFvalue);
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

		setColorIndex(getColorIndex()); // exercise field checks, simple types

		setColorPerVertex(getColorPerVertex()); // exercise field checks, simple types

		setCoordIndex(getCoordIndex()); // exercise field checks, simple types

		if (!isUSE()) // be careful! setting DEF via setDEF() method will reset USE value
			setDEF(getDEF()); // exercise field checks, simple types

		if (isUSE()) // be careful! setting USE via setUSE() method resets all attributes to default values and wipes out all children
			setUSE(getUSE()); // exercise field checks, simple types

		setCssClass(getCssClass()); // exercise field checks, simple types

		for (X3DVertexAttributeNode element : attrib) // MFNode
		{
			((X3DConcreteElement) element).validate(); // exercise field checks, MFNode element
			validationResult.append(((X3DConcreteElement) element).getValidationResult());
		}
		setAttrib(getAttrib()); // also test getter/setter validation

		if (isUSE() && hasAttrib()) // test USE restrictions
		{
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained MFNode attrib";
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
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained SFNode color";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (coord != null)
		{
			setCoord(getCoord());
			((X3DConcreteElement) coord).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) coord).getValidationResult());
		}
		if (coordProtoInstance != null)
		{
			setCoord(getCoordProtoInstance());
			((X3DConcreteElement) coordProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) coordProtoInstance).getValidationResult());
		}
		if ((coord != null) && (coordProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both coord and coordProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasCoord()) // test USE restrictions
		{
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained SFNode coord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained SFNode fogCoord";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "IndexedLineSet USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (((coord != null) || (coordProtoInstance != null)) && coordIndex.isEmpty())
		{
			String errorNotice = NAME + " containing Coordinate node must also include coordIndex field";
			validationResult.append(errorNotice);
			throw new InvalidFieldException(errorNotice); // report error
		}
		if (((color != null) || (colorProtoInstance != null)) && colorIndex.isEmpty() && coordIndex.isEmpty())
		{
			String errorNotice = NAME + " containing Color node must also include colorIndex or coordIndex field";
			validationResult.append(errorNotice);
			throw new InvalidFieldException(errorNotice); // report error
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
				if ( nextComponent.getName().equals("Rendering") &&
					(nextComponent.getLevel() >= 1))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("Interchange") &&
				!modelProfile.equals("CADInterchange") &&
				!modelProfile.equals("Interactive") &&
				!modelProfile.equals("Immersive") &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("MPEG4Interactive") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='Rendering' level='1'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"Rendering\").setLevel(1);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
