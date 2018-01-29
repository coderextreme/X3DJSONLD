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
import org.web3d.x3d.sai.VolumeRendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.sai.VolumeRendering.*; // interfaces for this component
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.jsail.*; // again making sure #4

import org.web3d.x3d.jsail.Texturing.*;

/**
 * <i>X3D node tooltip</i>: (X3D version 3.3 or later) BlendedVolumeStyle combines rendering of two voxel data sets into one by blending voxel values.
 * <ul>
 *  <li> <i> Hint:</i>  BlendedVolumeStyle can contain just one each of following: VolumeStyle node with containerField='renderStyle', Texture3D node with containerField='voxels', Texture2D node with containerField='weightTransferFunction1' and Texture2D node with containerField='weightTransferFunction2'. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This org.web3d.x3d.jsail concrete class is used for implementing a standalone X3D object as a <a href="https://en.wikipedia.org/wiki/Plain_old_Java_object" target="_blank">Plain Old Java Object (POJO)</a>.
 * If you are writing Java code for use inside an X3D Script node, compile separate code using only the <i>org.web3d.x3d.sai</i> package instead.
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#BlendedVolumeStyle" target="blank">X3D Abstract Specification: BlendedVolumeStyle</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#BlendedVolumeStyle" target="_blank">X3D Tooltips: BlendedVolumeStyle</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Volume" target="_blank">X3D Scene Authoring Hints: Volume</a>
 */
public class BlendedVolumeStyleObject extends org.web3d.x3d.jsail.X3DConcreteNode implements org.web3d.x3d.sai.VolumeRendering.BlendedVolumeStyle
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	// Member value declarations are encapsulated and private, using preferred Java types for concretes library

	private boolean enabled; // SFBool

	private X3DMetadataObject metadata; // SFNode acceptable node types: X3DMetadataObject
	private ProtoInstanceObject metadataProtoInstance; // allowed alternative for metadata field

	private X3DComposableVolumeRenderStyleNode renderStyle; // SFNode acceptable node types: X3DComposableVolumeRenderStyleNode
	private ProtoInstanceObject renderStyleProtoInstance; // allowed alternative for renderStyle field

	private X3DTexture3DNode voxels; // SFNode acceptable node types: X3DTexture3DNode
	private ProtoInstanceObject voxelsProtoInstance; // allowed alternative for voxels field

	private float weightConstant1; // SFFloat

	private float weightConstant2; // SFFloat

	private String weightFunction1; // SFString

	private String weightFunction2; // SFString

	private X3DTexture2DNode weightTransferFunction1; // SFNode acceptable node types: X3DTexture2DNode
	private ProtoInstanceObject weightTransferFunction1ProtoInstance; // allowed alternative for weightTransferFunction1 field

	private X3DTexture2DNode weightTransferFunction2; // SFNode acceptable node types: X3DTexture2DNode
	private ProtoInstanceObject weightTransferFunction2ProtoInstance; // allowed alternative for weightTransferFunction2 field

	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	// ==== String constants for enumeration values ensure correct syntax and avoid run-time errors ====

	/** SFString field named <i>weightFunction1</i> can equal this enumeration value <i>"CONSTANT"</i> (Java syntax) or <i>CONSTANT</i> (XML syntax). */
	public static final String WEIGHTFUNCTION1_CONSTANT = "CONSTANT";

	/** SFString field named <i>weightFunction1</i> can equal this enumeration value <i>"ALPHA1"</i> (Java syntax) or <i>ALPHA1</i> (XML syntax). */
	public static final String WEIGHTFUNCTION1_ALPHA1 = "ALPHA1";

	/** SFString field named <i>weightFunction1</i> can equal this enumeration value <i>"ALPHA2"</i> (Java syntax) or <i>ALPHA2</i> (XML syntax). */
	public static final String WEIGHTFUNCTION1_ALPHA2 = "ALPHA2";

	/** SFString field named <i>weightFunction1</i> can equal this enumeration value <i>"ONE_MINUS_ALPHA1"</i> (Java syntax) or <i>ONE_MINUS_ALPHA1</i> (XML syntax). */
	public static final String WEIGHTFUNCTION1_ONE_MINUS_ALPHA1 = "ONE_MINUS_ALPHA1";

	/** SFString field named <i>weightFunction1</i> can equal this enumeration value <i>"ONE_MINUS_ALPHA2"</i> (Java syntax) or <i>ONE_MINUS_ALPHA2</i> (XML syntax). */
	public static final String WEIGHTFUNCTION1_ONE_MINUS_ALPHA2 = "ONE_MINUS_ALPHA2";

	/** SFString field named <i>weightFunction1</i> can equal this enumeration value <i>"TABLE"</i> (Java syntax) or <i>TABLE</i> (XML syntax). */
	public static final String WEIGHTFUNCTION1_TABLE = "TABLE";

	/** SFString field named <i>weightFunction2</i> can equal this enumeration value <i>"CONSTANT"</i> (Java syntax) or <i>CONSTANT</i> (XML syntax). */
	public static final String WEIGHTFUNCTION2_CONSTANT = "CONSTANT";

	/** SFString field named <i>weightFunction2</i> can equal this enumeration value <i>"ALPHA1"</i> (Java syntax) or <i>ALPHA1</i> (XML syntax). */
	public static final String WEIGHTFUNCTION2_ALPHA1 = "ALPHA1";

	/** SFString field named <i>weightFunction2</i> can equal this enumeration value <i>"ALPHA2"</i> (Java syntax) or <i>ALPHA2</i> (XML syntax). */
	public static final String WEIGHTFUNCTION2_ALPHA2 = "ALPHA2";

	/** SFString field named <i>weightFunction2</i> can equal this enumeration value <i>"ONE_MINUS_ALPHA1"</i> (Java syntax) or <i>ONE_MINUS_ALPHA1</i> (XML syntax). */
	public static final String WEIGHTFUNCTION2_ONE_MINUS_ALPHA1 = "ONE_MINUS_ALPHA1";

	/** SFString field named <i>weightFunction2</i> can equal this enumeration value <i>"ONE_MINUS_ALPHA2"</i> (Java syntax) or <i>ONE_MINUS_ALPHA2</i> (XML syntax). */
	public static final String WEIGHTFUNCTION2_ONE_MINUS_ALPHA2 = "ONE_MINUS_ALPHA2";

	/** SFString field named <i>weightFunction2</i> can equal this enumeration value <i>"TABLE"</i> (Java syntax) or <i>TABLE</i> (XML syntax). */
	public static final String WEIGHTFUNCTION2_TABLE = "TABLE";

	// String constants for default field values match X3D Schema definitions

	/** String constant <i>NAME</i> provides name of this element: <i>BlendedVolumeStyle</i>. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	public static final String NAME = "BlendedVolumeStyle";

	/** Provides name of this element: <i>BlendedVolumeStyle</i>
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}

	/** String constant <i>COMPONENT</i> defines X3D component for the <i>BlendedVolumeStyle</i> element: <i>VolumeRendering</i> */
	public static final String COMPONENT = "VolumeRendering";

	/** Defines X3D component for the <i>BlendedVolumeStyle</i> element: <i>VolumeRendering</i>
	 * @return X3D component for this element
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>VolumeRendering</i> component level for this element: <i>3</i> */
	public static final int LEVEL = 3;

	/** Provides default X3D component level for this element: <i>3</i>
	 * @return default X3D component level for this element
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** SFBool field named <i>enabled</i> has default value <i>true</i> (Java syntax) or <i>true</i> (XML syntax). */
	public static final boolean ENABLED_DEFAULT_VALUE = true;

	/** SFFloat field named <i>weightConstant1</i> has default value <i>0.5f</i> (Java syntax) or <i>0.5</i> (XML syntax). */
	public static final float WEIGHTCONSTANT1_DEFAULT_VALUE = 0.5f;

	/** SFFloat field named <i>weightConstant2</i> has default value <i>0.5f</i> (Java syntax) or <i>0.5</i> (XML syntax). */
	public static final float WEIGHTCONSTANT2_DEFAULT_VALUE = 0.5f;

	/** SFString field named <i>weightFunction1</i> has default value <i>"CONSTANT"</i> (Java syntax) or <i>CONSTANT</i> (XML syntax). */
	public static final String WEIGHTFUNCTION1_DEFAULT_VALUE = "CONSTANT";

	/** SFString field named <i>weightFunction2</i> has default value <i>"CONSTANT"</i> (Java syntax) or <i>CONSTANT</i> (XML syntax). */
	public static final String WEIGHTFUNCTION2_DEFAULT_VALUE = "CONSTANT";

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
			case "enabled":
				result = "SFBool";
				break;
			case "metadata":
				result = "SFNode";
				break;
			case "renderStyle":
				result = "SFNode";
				break;
			case "voxels":
				result = "SFNode";
				break;
			case "weightConstant1":
				result = "SFFloat";
				break;
			case "weightConstant2":
				result = "SFFloat";
				break;
			case "weightFunction1":
				result = "SFString";
				break;
			case "weightFunction2":
				result = "SFString";
				break;
			case "weightTransferFunction1":
				result = "SFNode";
				break;
			case "weightTransferFunction2":
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
			case "enabled":
				result = "inputOutput";
				break;
			case "metadata":
				result = "inputOutput";
				break;
			case "renderStyle":
				result = "inputOutput";
				break;
			case "voxels":
				result = "inputOutput";
				break;
			case "weightConstant1":
				result = "inputOutput";
				break;
			case "weightConstant2":
				result = "inputOutput";
				break;
			case "weightFunction1":
				result = "inputOutput";
				break;
			case "weightFunction2":
				result = "inputOutput";
				break;
			case "weightTransferFunction1":
				result = "inputOutput";
				break;
			case "weightTransferFunction2":
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
	String containerField_DEFAULT_VALUE = "renderStyle";

	// String constants for field names usable in ROUTE statements

	/** fromField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String fromField_ENABLED = "enabled";

	/** toField ROUTE name for SFBool field named <i>enabled</i>. */
	public static final String toField_ENABLED = "enabled";

	/** fromField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String fromField_METADATA = "metadata";

	/** toField ROUTE name for SFNode field named <i>metadata</i>. */
	public static final String toField_METADATA = "metadata";

	/** fromField ROUTE name for SFNode field named <i>renderStyle</i>. */
	public static final String fromField_RENDERSTYLE = "renderStyle";

	/** toField ROUTE name for SFNode field named <i>renderStyle</i>. */
	public static final String toField_RENDERSTYLE = "renderStyle";

	/** fromField ROUTE name for SFNode field named <i>voxels</i>. */
	public static final String fromField_VOXELS = "voxels";

	/** toField ROUTE name for SFNode field named <i>voxels</i>. */
	public static final String toField_VOXELS = "voxels";

	/** fromField ROUTE name for SFFloat field named <i>weightConstant1</i>. */
	public static final String fromField_WEIGHTCONSTANT1 = "weightConstant1";

	/** toField ROUTE name for SFFloat field named <i>weightConstant1</i>. */
	public static final String toField_WEIGHTCONSTANT1 = "weightConstant1";

	/** fromField ROUTE name for SFFloat field named <i>weightConstant2</i>. */
	public static final String fromField_WEIGHTCONSTANT2 = "weightConstant2";

	/** toField ROUTE name for SFFloat field named <i>weightConstant2</i>. */
	public static final String toField_WEIGHTCONSTANT2 = "weightConstant2";

	/** fromField ROUTE name for SFString field named <i>weightFunction1</i>. */
	public static final String fromField_WEIGHTFUNCTION1 = "weightFunction1";

	/** toField ROUTE name for SFString field named <i>weightFunction1</i>. */
	public static final String toField_WEIGHTFUNCTION1 = "weightFunction1";

	/** fromField ROUTE name for SFString field named <i>weightFunction2</i>. */
	public static final String fromField_WEIGHTFUNCTION2 = "weightFunction2";

	/** toField ROUTE name for SFString field named <i>weightFunction2</i>. */
	public static final String toField_WEIGHTFUNCTION2 = "weightFunction2";

	/** fromField ROUTE name for SFNode field named <i>weightTransferFunction1</i>. */
	public static final String fromField_WEIGHTTRANSFERFUNCTION1 = "weightTransferFunction1";

	/** toField ROUTE name for SFNode field named <i>weightTransferFunction1</i>. */
	public static final String toField_WEIGHTTRANSFERFUNCTION1 = "weightTransferFunction1";

	/** fromField ROUTE name for SFNode field named <i>weightTransferFunction2</i>. */
	public static final String fromField_WEIGHTTRANSFERFUNCTION2 = "weightTransferFunction2";

	/** toField ROUTE name for SFNode field named <i>weightTransferFunction2</i>. */
	public static final String toField_WEIGHTTRANSFERFUNCTION2 = "weightTransferFunction2";

	/** Constructor for BlendedVolumeStyleObject to initialize member variables with default values. */
	public BlendedVolumeStyleObject()
	{
		super(); // constructor invocation and corresponding initialize()
		initialize();
	}

	/** Initialize all member variables to default values. */
	@Override
	public final void initialize()
	{
		super.initialize();

		containerField_ALTERNATE_VALUES = new String[] { "renderStyle" };

		enabled = ENABLED_DEFAULT_VALUE;
		metadata = null; // clear out any prior node
		renderStyle = null; // clear out any prior node
		voxels = null; // clear out any prior node
		weightConstant1 = WEIGHTCONSTANT1_DEFAULT_VALUE;
		weightConstant2 = WEIGHTCONSTANT2_DEFAULT_VALUE;
		weightFunction1 = WEIGHTFUNCTION1_DEFAULT_VALUE;
		weightFunction2 = WEIGHTFUNCTION2_DEFAULT_VALUE;
		weightTransferFunction1 = null; // clear out any prior node
		weightTransferFunction2 = null; // clear out any prior node

		commentsList = new ArrayList<>(); // instantiate
	}

	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables node operation.  * <br>

	 * @return value of enabled field
	 */
	@Override
	public boolean getEnabled()
	{
		return enabled;
	}

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables node operation.
	 * @param newValue is new value for the enabled field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setEnabled(boolean newValue)
	{
		enabled = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFBool enabled field, similar to {@link #setEnabled(boolean)}.
	 * @param newValue is new value for the enabled field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setEnabled(SFBoolObject newValue)
	{
		setEnabled(newValue.getPrimitiveValue());
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setMetadata(X3DMetadataObject newValue)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public BlendedVolumeStyleObject clearMetadata()
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BlendedVolumeStyleObject setMetadata(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide X3DComposableVolumeRenderStyleNode instance (using a properly typed node) from inputOutput SFNode field <i>renderStyle</i>.
	 * @see #getRenderStyleProtoInstance()
	 * @return value of renderStyle field
	 */
	@Override
	public X3DComposableVolumeRenderStyleNode getRenderStyle()
	{
		return renderStyle;
	}

	/**
	 * Assign X3DComposableVolumeRenderStyleNode instance (using a properly typed node) to inputOutput SFNode field <i>renderStyle</i>.
	 * @see #setRenderStyle(ProtoInstanceObject)
	 * @param newValue is new value for the renderStyle field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setRenderStyle(X3DComposableVolumeRenderStyleNode newValue)
	{
		renderStyle = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) renderStyle).setParentObject(this); // parentTest15
		}
		if (renderStyleProtoInstance != null)
		{
			renderStyleProtoInstance.setParentObject(null); // housekeeping, clear prior object
			renderStyleProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of renderStyle field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public BlendedVolumeStyleObject clearRenderStyle()
	{
		((X3DConcreteElement) renderStyle).clearParentObject(); // remove references to facilitate Java memory management
		renderStyle = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>renderStyle</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DComposableVolumeRenderStyleNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the renderStyle field
	 * @see #setRenderStyle(X3DComposableVolumeRenderStyleNode)
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BlendedVolumeStyleObject setRenderStyle(ProtoInstanceObject newProtoInstanceNode)
	{
		if (renderStyle != null)
		{
			((X3DConcreteElement) renderStyle).setParentObject(null); // housekeeping, clear prior object
			renderStyle = null;
		}
		renderStyleProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>renderStyle</i>, if available.
	 * @see #getRenderStyle()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getRenderStyleProtoInstance()
	{
		return renderStyleProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>renderStyle</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getRenderStyle()
	 * @see #getRenderStyleProtoInstance()
	 */
	public boolean hasRenderStyle()
	{
		return (renderStyle != null) || (renderStyleProtoInstance != null);
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setVoxels(X3DTexture3DNode newValue)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public BlendedVolumeStyleObject clearVoxels()
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BlendedVolumeStyleObject setVoxels(ProtoInstanceObject newProtoInstanceNode)
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
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>weightConstant1</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] weightConstant1 is used when weightFunction1=CONSTANT.  * <br>

	 * @return value of weightConstant1 field
	 */
	@Override
	public float getWeightConstant1()
	{
		return weightConstant1;
	}

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>weightConstant1</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] weightConstant1 is used when weightFunction1=CONSTANT.
	 * @param newValue is new value for the weightConstant1 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setWeightConstant1(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle weightConstant1 newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
            if (newValue > 1f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle weightConstant1 newValue=" + SFFloatObject.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=1");
            }
		weightConstant1 = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat weightConstant1 field, similar to {@link #setWeightConstant1(float)}.
	 * @param newValue is new value for the weightConstant1 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setWeightConstant1(SFFloatObject newValue)
	{
		setWeightConstant1(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>weightConstant2</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] weightConstant2 is used when weightFunction2=CONSTANT.  * <br>

	 * @return value of weightConstant2 field
	 */
	@Override
	public float getWeightConstant2()
	{
		return weightConstant2;
	}

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>weightConstant2</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] weightConstant2 is used when weightFunction2=CONSTANT.
	 * @param newValue is new value for the weightConstant2 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setWeightConstant2(float newValue)
	{
            // Check that newValue parameter has legal value(s) before assigning to scene graph
            if (newValue < 0f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle weightConstant2 newValue=" + newValue + " has component value less than restriction minInclusive=0");
            }
            if (newValue > 1f) {
                throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle weightConstant2 newValue=" + SFFloatObject.toString(newValue) + " has component value greater than (or equal to) restriction maxInclusive=1");
            }
		weightConstant2 = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFFloat weightConstant2 field, similar to {@link #setWeightConstant2(float)}.
	 * @param newValue is new value for the weightConstant2 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setWeightConstant2(SFFloatObject newValue)
	{
		setWeightConstant2(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] from inputOutput SFString field named <i>weightFunction1</i>.
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i> see X3D Specification Table 41.3, Weight function types <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes</a> </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 41.4, Transfer function to weight mapping <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #WEIGHTFUNCTION1_CONSTANT CONSTANT}, {@link #WEIGHTFUNCTION1_ALPHA1 ALPHA1}, {@link #WEIGHTFUNCTION1_ALPHA2 ALPHA2}, {@link #WEIGHTFUNCTION1_ONE_MINUS_ALPHA1 ONE_MINUS_ALPHA1}, {@link #WEIGHTFUNCTION1_ONE_MINUS_ALPHA2 ONE_MINUS_ALPHA2}, {@link #WEIGHTFUNCTION1_TABLE TABLE}.
	 * @return value of weightFunction1 field
	 */
	@Override
	public String getWeightFunction1()
	{
		return weightFunction1;
	}

	/**
	 * Assign String enumeration value ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] to inputOutput SFString field named <i>weightFunction1</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #WEIGHTFUNCTION1_CONSTANT CONSTANT}, {@link #WEIGHTFUNCTION1_ALPHA1 ALPHA1}, {@link #WEIGHTFUNCTION1_ALPHA2 ALPHA2}, {@link #WEIGHTFUNCTION1_ONE_MINUS_ALPHA1 ONE_MINUS_ALPHA1}, {@link #WEIGHTFUNCTION1_ONE_MINUS_ALPHA2 ONE_MINUS_ALPHA2}, {@link #WEIGHTFUNCTION1_TABLE TABLE}).
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 41.3, Weight function types http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes Hint: see X3D Specification Table 41.4, Transfer function to weight mapping http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping
	 * @param newValue is new value for the weightFunction1 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setWeightFunction1(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(WEIGHTFUNCTION1_CONSTANT) ||
			newValue.equals(WEIGHTFUNCTION1_ALPHA1) ||
			newValue.equals(WEIGHTFUNCTION1_ALPHA2) ||
			newValue.equals(WEIGHTFUNCTION1_ONE_MINUS_ALPHA1) ||
			newValue.equals(WEIGHTFUNCTION1_ONE_MINUS_ALPHA2) ||
			newValue.equals(WEIGHTFUNCTION1_TABLE))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle weightFunction1 newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		weightFunction1 = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString weightFunction1 field, similar to {@link #setWeightFunction1(String)}.
	 * @param newValue is new value for the weightFunction1 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setWeightFunction1(SFStringObject newValue)
	{
		setWeightFunction1(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide String enumeration value ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] from inputOutput SFString field named <i>weightFunction2</i>.
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i> see X3D Specification Table 41.3, Weight function types <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes</a> </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 41.4, Transfer function to weight mapping <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping</a> </li> 
 * </ul>
	 * <br><br>
	 * Available enumeration values for string comparison: {@link #WEIGHTFUNCTION2_CONSTANT CONSTANT}, {@link #WEIGHTFUNCTION2_ALPHA1 ALPHA1}, {@link #WEIGHTFUNCTION2_ALPHA2 ALPHA2}, {@link #WEIGHTFUNCTION2_ONE_MINUS_ALPHA1 ONE_MINUS_ALPHA1}, {@link #WEIGHTFUNCTION2_ONE_MINUS_ALPHA2 ONE_MINUS_ALPHA2}, {@link #WEIGHTFUNCTION2_TABLE TABLE}.
	 * @return value of weightFunction2 field
	 */
	@Override
	public String getWeightFunction2()
	{
		return weightFunction2;
	}

	/**
	 * Assign String enumeration value ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] to inputOutput SFString field named <i>weightFunction2</i>.
	 * <br><br>
	 * <i>Warning:</i> authors can only choose from a strict list of enumeration values ({@link #WEIGHTFUNCTION2_CONSTANT CONSTANT}, {@link #WEIGHTFUNCTION2_ALPHA1 ALPHA1}, {@link #WEIGHTFUNCTION2_ALPHA2 ALPHA2}, {@link #WEIGHTFUNCTION2_ONE_MINUS_ALPHA1 ONE_MINUS_ALPHA1}, {@link #WEIGHTFUNCTION2_ONE_MINUS_ALPHA2 ONE_MINUS_ALPHA2}, {@link #WEIGHTFUNCTION2_TABLE TABLE}).
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 41.3, Weight function types http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes Hint: see X3D Specification Table 41.4, Transfer function to weight mapping http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping
	 * @param newValue is new value for the weightFunction2 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setWeightFunction2(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // null string check
		else newValue = MFStringObject.cleanupUnescapedEnclosingQuotes(newValue); // enumeration value
		// Check that newValue parameter has one of the allowed legal values before assigning to scene graph
		if (!(
			newValue.isEmpty() ||
			newValue.equals(WEIGHTFUNCTION2_CONSTANT) ||
			newValue.equals(WEIGHTFUNCTION2_ALPHA1) ||
			newValue.equals(WEIGHTFUNCTION2_ALPHA2) ||
			newValue.equals(WEIGHTFUNCTION2_ONE_MINUS_ALPHA1) ||
			newValue.equals(WEIGHTFUNCTION2_ONE_MINUS_ALPHA2) ||
			newValue.equals(WEIGHTFUNCTION2_TABLE))) {
			throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle weightFunction2 newValue=\"" + newValue + "\" has illegal value, must use a valid enumeration string.");
		}
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		weightFunction2 = newValue;
		return this;
	}

	/**
	 * Assign typed object value to SFString weightFunction2 field, similar to {@link #setWeightFunction2(String)}.
	 * @param newValue is new value for the weightFunction2 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setWeightFunction2(SFStringObject newValue)
	{
		setWeightFunction2(newValue.getPrimitiveValue());
		return this;
	}
	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>weightTransferFunction1</i>.
	 * @see #getWeightTransferFunction1ProtoInstance()
	 * @return value of weightTransferFunction1 field
	 */
	@Override
	public X3DTexture2DNode getWeightTransferFunction1()
	{
		return weightTransferFunction1;
	}

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>weightTransferFunction1</i>.
	 * @see #setWeightTransferFunction1(ProtoInstanceObject)
	 * @param newValue is new value for the weightTransferFunction1 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setWeightTransferFunction1(X3DTexture2DNode newValue)
	{
		weightTransferFunction1 = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) weightTransferFunction1).setParentObject(this); // parentTest15
		}
		if (weightTransferFunction1ProtoInstance != null)
		{
			weightTransferFunction1ProtoInstance.setParentObject(null); // housekeeping, clear prior object
			weightTransferFunction1ProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of weightTransferFunction1 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public BlendedVolumeStyleObject clearWeightTransferFunction1()
	{
		((X3DConcreteElement) weightTransferFunction1).clearParentObject(); // remove references to facilitate Java memory management
		weightTransferFunction1 = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>weightTransferFunction1</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DTexture2DNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the weightTransferFunction1 field
	 * @see #setWeightTransferFunction1(X3DTexture2DNode)
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BlendedVolumeStyleObject setWeightTransferFunction1(ProtoInstanceObject newProtoInstanceNode)
	{
		if (weightTransferFunction1 != null)
		{
			((X3DConcreteElement) weightTransferFunction1).setParentObject(null); // housekeeping, clear prior object
			weightTransferFunction1 = null;
		}
		weightTransferFunction1ProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>weightTransferFunction1</i>, if available.
	 * @see #getWeightTransferFunction1()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getWeightTransferFunction1ProtoInstance()
	{
		return weightTransferFunction1ProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>weightTransferFunction1</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getWeightTransferFunction1()
	 * @see #getWeightTransferFunction1ProtoInstance()
	 */
	public boolean hasWeightTransferFunction1()
	{
		return (weightTransferFunction1 != null) || (weightTransferFunction1ProtoInstance != null);
	}
	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>weightTransferFunction2</i>.
	 * @see #getWeightTransferFunction2ProtoInstance()
	 * @return value of weightTransferFunction2 field
	 */
	@Override
	public X3DTexture2DNode getWeightTransferFunction2()
	{
		return weightTransferFunction2;
	}

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>weightTransferFunction2</i>.
	 * @see #setWeightTransferFunction2(ProtoInstanceObject)
	 * @param newValue is new value for the weightTransferFunction2 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setWeightTransferFunction2(X3DTexture2DNode newValue)
	{
		weightTransferFunction2 = newValue;
		if (newValue != null)
		{
			((X3DConcreteElement) weightTransferFunction2).setParentObject(this); // parentTest15
		}
		if (weightTransferFunction2ProtoInstance != null)
		{
			weightTransferFunction2ProtoInstance.setParentObject(null); // housekeeping, clear prior object
			weightTransferFunction2ProtoInstance = null;
		}

		return this;
	}

	/**
	 * Utility method to clear SFNode value of weightTransferFunction2 field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).	 */
	public BlendedVolumeStyleObject clearWeightTransferFunction2()
	{
		((X3DConcreteElement) weightTransferFunction2).clearParentObject(); // remove references to facilitate Java memory management
		weightTransferFunction2 = null; // reset SFNode field
		return this;
	}
	/**
	 * Assign ProtoInstance to <i>weightTransferFunction2</i> field.
	 * <i>Warning:</i> ProtoInstance must match acceptable node type X3DTexture2DNode.
	 * @param newProtoInstanceNode is the new ProtoInstance node for the weightTransferFunction2 field
	 * @see #setWeightTransferFunction2(X3DTexture2DNode)
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	public BlendedVolumeStyleObject setWeightTransferFunction2(ProtoInstanceObject newProtoInstanceNode)
	{
		if (weightTransferFunction2 != null)
		{
			((X3DConcreteElement) weightTransferFunction2).setParentObject(null); // housekeeping, clear prior object
			weightTransferFunction2 = null;
		}
		weightTransferFunction2ProtoInstance = newProtoInstanceNode;
		if (newProtoInstanceNode != null)
		{
			newProtoInstanceNode.setParentObject(this);
		}
		return this;
	}
	/**
	 * Provide properly typed ProtoInstance for inputOutput SFNode field <i>weightTransferFunction2</i>, if available.
	 * @see #getWeightTransferFunction2()
	 * @return ProtoInstance value of geometry field
	 */
	public ProtoInstanceObject getWeightTransferFunction2ProtoInstance()
	{
		return weightTransferFunction2ProtoInstance;
	}

	/**
	 * Indicate whether an object is available for inputOutput SFNode field <i>weightTransferFunction2</i>.
	 * @return whether a properly typed node or ProtoInstance or CommentsBlock is available.
	 * @see #getWeightTransferFunction2()
	 * @see #getWeightTransferFunction2ProtoInstance()
	 */
	public boolean hasWeightTransferFunction2()
	{
		return (weightTransferFunction2 != null) || (weightTransferFunction2ProtoInstance != null);
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final BlendedVolumeStyleObject setDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to BlendedVolumeStyle
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle DEF newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("BlendedVolumeStyle DEF newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		setConcreteUSE(""); // ensure that no previous USE value remains
		setConcreteDEF(newValue); // private superclass methods
		return this;
	}

	/**
	 * Assign typed object value to SFString DEF field, similar to {@link #setDEF(String)}.
	 * @param newValue is new value for the DEF field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setDEF(SFStringObject newValue)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final BlendedVolumeStyleObject setUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String();
		// Check that newValue parameter meets naming requirements before assigning to BlendedVolumeStyle
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException("BlendedVolumeStyle USE newValue='" + newValue + "'" + 
				" has illegal name value, cannot be empty and must be defined with valid NMTOKEN name string" + 
				" (with legal characters and no embedded whitespace).");
		}

		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println("BlendedVolumeStyle USE newValue='" + newValue + "'" + 
				" has name value that does not meet X3D naming conventions.");
		}
		initialize(); // reset all other field values to default (equivalent to empty)
		setConcreteUSE(newValue); // private superclass method
		return this;
	}

	/**
	 * Assign typed object value to SFString USE field, similar to {@link #setUSE(String)}.
	 * @param newValue is new value for the USE field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setUSE(SFStringObject newValue)
	{
		setUSE(newValue.getPrimitiveValue());
		return this;
	}

	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public final BlendedVolumeStyleObject setCssClass(String newValue)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setCssClass(SFStringObject newValue)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyleObject setIS(ISObject newValue)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyleObject setUSE(BlendedVolumeStyleObject DEFnode)
	{
		if (DEFnode.getDEF().isEmpty())
		{
			String errorNotice = "setUSE(DEFnode) invoked on BlendedVolumeStyleObject" +
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
	public BlendedVolumeStyleObject (String DEFlabel)
	{
		initialize();
		setDEF(DEFlabel); // apply checks
	}

	/**
	 * Add comment as String to contained commentsList.
	 * @param newComment initial value
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public BlendedVolumeStyleObject addComments (String newComment)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public BlendedVolumeStyleObject addComments (String[] newComments)
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
	 * @return {@link BlendedVolumeStyleObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
setAttribute method invocations).
	 */
	@Override
	public BlendedVolumeStyleObject addComments (CommentsBlock newCommentsBlock)
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || (renderStyle != null) || (renderStyleProtoInstance != null) || (voxels != null) || (voxelsProtoInstance != null) || (weightTransferFunction1 != null) || (weightTransferFunction1ProtoInstance != null) || (weightTransferFunction2 != null) || (weightTransferFunction2ProtoInstance != null) || !commentsList.isEmpty();

		if (isUSE())
			hasChild = false; // USE nodes only include attributes for USE and non-default containerField
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		stringX3D.append(indent).append("<BlendedVolumeStyle"); // start opening tag
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
                            
			if (((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" enabled='").append(SFBoolObject.toString(getEnabled())).append("'");
			}
			if (((getWeightConstant1() != WEIGHTCONSTANT1_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" weightConstant1='").append(SFFloatObject.toString(getWeightConstant1())).append("'");
			}
			if (((getWeightConstant2() != WEIGHTCONSTANT2_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" weightConstant2='").append(SFFloatObject.toString(getWeightConstant2())).append("'");
			}
			if ((!getWeightFunction1().equals(WEIGHTFUNCTION1_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" weightFunction1='").append(new SFStringObject(getWeightFunction1()).toStringX3D()).append("'");
			}
			if ((!getWeightFunction2().equals(WEIGHTFUNCTION2_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes()) && !isUSE())
			{
				stringX3D.append(" weightFunction2='").append(new SFStringObject(getWeightFunction2()).toStringX3D()).append("'");
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
			if      (renderStyle != null)
			{
				stringX3D.append(((X3DConcreteElement)renderStyle).toStringX3D(indentLevel + indentIncrement));
			}
			else if (renderStyleProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)renderStyleProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (voxels != null)
			{
				stringX3D.append(((X3DConcreteElement)voxels).toStringX3D(indentLevel + indentIncrement));
			}
			else if (voxelsProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)voxelsProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (weightTransferFunction1 != null)
			{
				stringX3D.append(((X3DConcreteElement)weightTransferFunction1).toStringX3D(indentLevel + indentIncrement));
			}
			else if (weightTransferFunction1ProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)weightTransferFunction1ProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			if      (weightTransferFunction2 != null)
			{
				stringX3D.append(((X3DConcreteElement)weightTransferFunction2).toStringX3D(indentLevel + indentIncrement));
			}
			else if (weightTransferFunction2ProtoInstance != null)
			{
					 stringX3D.append(((X3DConcreteElement)weightTransferFunction2ProtoInstance).toStringX3D(indentLevel + indentIncrement));
			}
			stringX3D.append(indent).append("</BlendedVolumeStyle>").append("\n"); // finish closing tag
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
		boolean      hasChild = (IS != null) || (metadata != null) || (metadataProtoInstance != null) || (renderStyle != null) || (renderStyleProtoInstance != null) || (voxels != null) || (voxelsProtoInstance != null) || (weightTransferFunction1 != null) || (weightTransferFunction1ProtoInstance != null) || (weightTransferFunction2 != null) || (weightTransferFunction2ProtoInstance != null) || !commentsList.isEmpty();
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
			stringClassicVRML.append("BlendedVolumeStyle").append(" { "); // define node name, node content follows

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
						if (element.getNodeField().equals("enabled"))
						{
							stringClassicVRML.append(indentCharacter).append("enabled").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getEnabled() != ENABLED_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("enabled ").append(SFBoolObject.toString(getEnabled())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("weightConstant1"))
						{
							stringClassicVRML.append(indentCharacter).append("weightConstant1").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getWeightConstant1() != WEIGHTCONSTANT1_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("weightConstant1 ").append(SFFloatObject.toString(getWeightConstant1())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("weightConstant2"))
						{
							stringClassicVRML.append(indentCharacter).append("weightConstant2").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if ((getWeightConstant2() != WEIGHTCONSTANT2_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("weightConstant2 ").append(SFFloatObject.toString(getWeightConstant2())).append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("weightFunction1"))
						{
							stringClassicVRML.append(indentCharacter).append("weightFunction1").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getWeightFunction1().equals(WEIGHTFUNCTION1_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("weightFunction1 ").append("\"").append(SFStringObject.toString(getWeightFunction1())).append("\"").append("\n").append(indent).append(indentCharacter);
				}
				if (hasISconnect)
				{
					for (connectObject element : getIS().getConnectList())
					{
						if (element.getNodeField().equals("weightFunction2"))
						{
							stringClassicVRML.append(indentCharacter).append("weightFunction2").append(" IS ").append(element.getProtoField()).append("\n").append(indent).append(indentCharacter); // found matching connect
						}
					}
				}
				else 
				if (!getWeightFunction2().equals(WEIGHTFUNCTION2_DEFAULT_VALUE) || ConfigurationProperties.isShowDefaultAttributes())
				{
					stringClassicVRML.append("weightFunction2 ").append("\"").append(SFStringObject.toString(getWeightFunction2())).append("\"").append("\n").append(indent).append(indentCharacter);
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
			if (renderStyle != null)
			{
				stringClassicVRML.append(indentCharacter).append("renderStyle").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) renderStyle).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (renderStyleProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("renderStyle").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) renderStyleProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
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
			if (weightTransferFunction1 != null)
			{
				stringClassicVRML.append(indentCharacter).append("weightTransferFunction1").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) weightTransferFunction1).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (weightTransferFunction1ProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("weightTransferFunction1").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) weightTransferFunction1ProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode ProtoInstance
			}
			if (weightTransferFunction2 != null)
			{
				stringClassicVRML.append(indentCharacter).append("weightTransferFunction2").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) weightTransferFunction2).toStringClassicVRML(indentLevel + indentIncrement));
				stringClassicVRML.append(indent); // end SFNode
			}
			else if (weightTransferFunction2ProtoInstance != null)
			{
				stringClassicVRML.append(indentCharacter).append("weightTransferFunction2").append(" "); // containerField for SFNode
				stringClassicVRML.append(((X3DConcreteElement) weightTransferFunction2ProtoInstance).toStringClassicVRML(indentLevel + indentIncrement));
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
		if (renderStyle != null)
		{
			referenceElement = ((X3DConcreteElement) renderStyle).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (renderStyleProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) renderStyleProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
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
		if (weightTransferFunction1 != null)
		{
			referenceElement = ((X3DConcreteElement) weightTransferFunction1).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (weightTransferFunction1ProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) weightTransferFunction1ProtoInstance).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (weightTransferFunction2 != null)
		{
			referenceElement = ((X3DConcreteElement) weightTransferFunction2).findElementByNameValue(nameValue, elementName);
			if (referenceElement != null)
				return referenceElement;
		}
		if (weightTransferFunction2ProtoInstance != null)
		{
			referenceElement = ((X3DConcreteElement) weightTransferFunction2ProtoInstance).findElementByNameValue(nameValue, elementName);
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
		if (renderStyle != null)
		{
			referenceNode = ((X3DConcreteElement) renderStyle).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (voxels != null)
		{
			referenceNode = ((X3DConcreteElement) voxels).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (weightTransferFunction1 != null)
		{
			referenceNode = ((X3DConcreteElement) weightTransferFunction1).findNodeByDEF(DEFvalue);
			if (referenceNode != null)
				return referenceNode;
		}
		if (weightTransferFunction2 != null)
		{
			referenceNode = ((X3DConcreteElement) weightTransferFunction2).findNodeByDEF(DEFvalue);
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

		setEnabled(getEnabled()); // exercise field checks, simple types

		setWeightConstant1(getWeightConstant1()); // exercise field checks, simple types

		setWeightConstant2(getWeightConstant2()); // exercise field checks, simple types

		setWeightFunction1(getWeightFunction1()); // exercise field checks, simple types

		setWeightFunction2(getWeightFunction2()); // exercise field checks, simple types

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
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained SFNode metadata";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (renderStyle != null)
		{
			setRenderStyle(getRenderStyle());
			((X3DConcreteElement) renderStyle).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) renderStyle).getValidationResult());
		}
		if (renderStyleProtoInstance != null)
		{
			setRenderStyle(getRenderStyleProtoInstance());
			((X3DConcreteElement) renderStyleProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) renderStyleProtoInstance).getValidationResult());
		}
		if ((renderStyle != null) && (renderStyleProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both renderStyle and renderStyleProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasRenderStyle()) // test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained SFNode renderStyle";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained comments";
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
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained SFNode voxels";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (weightTransferFunction1 != null)
		{
			setWeightTransferFunction1(getWeightTransferFunction1());
			((X3DConcreteElement) weightTransferFunction1).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) weightTransferFunction1).getValidationResult());
		}
		if (weightTransferFunction1ProtoInstance != null)
		{
			setWeightTransferFunction1(getWeightTransferFunction1ProtoInstance());
			((X3DConcreteElement) weightTransferFunction1ProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) weightTransferFunction1ProtoInstance).getValidationResult());
		}
		if ((weightTransferFunction1 != null) && (weightTransferFunction1ProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both weightTransferFunction1 and weightTransferFunction1ProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasWeightTransferFunction1()) // test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained SFNode weightTransferFunction1";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained comments";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error		
		}

		if (weightTransferFunction2 != null)
		{
			setWeightTransferFunction2(getWeightTransferFunction2());
			((X3DConcreteElement) weightTransferFunction2).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) weightTransferFunction2).getValidationResult());
		}
		if (weightTransferFunction2ProtoInstance != null)
		{
			setWeightTransferFunction2(getWeightTransferFunction2ProtoInstance());
			((X3DConcreteElement) weightTransferFunction2ProtoInstance).validate(); // exercise field checks, SFNode
			validationResult.append(((X3DConcreteElement) weightTransferFunction2ProtoInstance).getValidationResult());
		}
		if ((weightTransferFunction2 != null) && (weightTransferFunction2ProtoInstance != null))
		{
			String errorNotice = "Internal X3DJSAIL error: incorrect handling of contained SFNode field, both weightTransferFunction2 and weightTransferFunction2ProtoInstance are set simultaneously";
			validationResult.append(errorNotice);
			throw new InvalidProtoException(errorNotice); // report error
		}
		if (isUSE() && hasWeightTransferFunction2()) // test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained SFNode weightTransferFunction2";
			validationResult.append(errorNotice);
			throw new InvalidFieldValueException(errorNotice); // report error
		}
		
		if (isUSE() && !commentsList.isEmpty())// test USE restrictions
		{
			String errorNotice = "BlendedVolumeStyle USE='" + getUSE() + "' is not allowed to have contained comments";
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
					(nextComponent.getLevel() >= 3))
					hasSatisfactoryComponent = true;
			}
			if (!hasSatisfactoryComponent &&
				!modelProfile.equals("MedicalInterchange") &&
				!modelProfile.equals("Full"))
			{
				String errorNotice = ConfigurationProperties.ERROR_ILLEGAL_VALUE + 
					" invalid X3D profile='" + modelProfile +
					"' for parent X3D model, add element <componentInfo name='VolumeRendering' level='3'/>\n" +
					"or source-code assignment: " +
					" findAncestorX3DObject().getHead().addComponentInfo(\"VolumeRendering\").setLevel(3);";
				validationResult.append(errorNotice).append("\n");
				throw new InvalidFieldException(errorNotice); // report error
			}
		}
		return validationResult.toString();
	}
}
