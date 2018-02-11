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

package org.web3d.x3d.sai.VolumeRendering;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.VolumeRendering.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Texturing.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.3 or later) BlendedVolumeStyle combines rendering of two voxel data sets into one by blending voxel values.
 * <ul>
 *  <li> <i> Hint:</i>  BlendedVolumeStyle can contain just one each of following: VolumeStyle node with containerField='renderStyle', Texture3D node with containerField='voxels', Texture2D node with containerField='weightTransferFunction1' and Texture2D node with containerField='weightTransferFunction2'. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#BlendedVolumeStyle" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#BlendedVolumeStyle" target="blank">X3D Abstract Specification: BlendedVolumeStyle</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#BlendedVolumeStyle" target="_blank">X3D Tooltips: BlendedVolumeStyle</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Volume" target="_blank">X3D Scene Authoring Hints: Volume</a>
 */
public interface BlendedVolumeStyle extends X3DComposableVolumeRenderStyleNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enables/disables node operation.  * <br>

	 * @return value of enabled field
	 */
	@Override
	public boolean getEnabled();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>enabled</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enables/disables node operation.
	 * @param newValue is new value for the enabled field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyle setEnabled(boolean newValue);

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata(); // acceptable node types: X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyle setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide X3DComposableVolumeRenderStyleNode instance (using a properly typed node) from inputOutput SFNode field <i>renderStyle</i>.
	 * @return value of renderStyle field
	 */
	public X3DComposableVolumeRenderStyleNode getRenderStyle(); // acceptable node types: X3DComposableVolumeRenderStyleNode

	/**
	 * Assign X3DComposableVolumeRenderStyleNode instance (using a properly typed node) to inputOutput SFNode field <i>renderStyle</i>.
	 * @param newValue is new value for the renderStyle field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setRenderStyle(X3DComposableVolumeRenderStyleNode newValue); // acceptable node types: X3DComposableVolumeRenderStyleNode

	/**
	 * Provide X3DTexture3DNode instance (using a properly typed node) from inputOutput SFNode field <i>voxels</i>.
	 * @return value of voxels field
	 */
	public X3DTexture3DNode getVoxels(); // acceptable node types: X3DTexture3DNode

	/**
	 * Assign X3DTexture3DNode instance (using a properly typed node) to inputOutput SFNode field <i>voxels</i>.
	 * @param newValue is new value for the voxels field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setVoxels(X3DTexture3DNode newValue); // acceptable node types: X3DTexture3DNode

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>weightConstant1</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] weightConstant1 is used when weightFunction1=CONSTANT.  * <br>

	 * @return value of weightConstant1 field
	 */
	public float getWeightConstant1();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>weightConstant1</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] weightConstant1 is used when weightFunction1=CONSTANT.
	 * @param newValue is new value for the weightConstant1 field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setWeightConstant1(float newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>weightConstant2</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] weightConstant2 is used when weightFunction2=CONSTANT.  * <br>

	 * @return value of weightConstant2 field
	 */
	public float getWeightConstant2();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>weightConstant2</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] weightConstant2 is used when weightFunction2=CONSTANT.
	 * @param newValue is new value for the weightConstant2 field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setWeightConstant2(float newValue);

	/**
	 * Provide String enumeration value ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] from inputOutput SFString field named <i>weightFunction1</i>.
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i> see X3D Specification Table 41.3, Weight function types <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes</a> </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 41.4, Transfer function to weight mapping <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping</a> </li> 
 * </ul>
	 * @return value of weightFunction1 field
	 */
	public String getWeightFunction1();

	/**
	 * Assign String enumeration value ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] to inputOutput SFString field named <i>weightFunction1</i>.
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 41.3, Weight function types http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes Hint: see X3D Specification Table 41.4, Transfer function to weight mapping http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping
	 * @param newValue is new value for the weightFunction1 field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setWeightFunction1(String newValue);

	/**
	 * Provide String enumeration value ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] from inputOutput SFString field named <i>weightFunction2</i>.
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i> see X3D Specification Table 41.3, Weight function types <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes</a> </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 41.4, Transfer function to weight mapping <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping</a> </li> 
 * </ul>
	 * @return value of weightFunction2 field
	 */
	public String getWeightFunction2();

	/**
	 * Assign String enumeration value ("CONSTANT"|"ALPHA1"|"ALPHA2"|"ONE_MINUS_ALPHA1"|"ONE_MINUS_ALPHA2"|"TABLE") ['CONSTANT'|'ALPHA1'|'ALPHA2'|'ONE_MINUS_ALPHA1'|'ONE_MINUS_ALPHA2'|'TABLE'] to inputOutput SFString field named <i>weightFunction2</i>.
	 * <br><br>
	 * <i>Tooltip:</i> specifies 2D textures used to determine weight values when weight function is set to TABLE. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 41.3, Weight function types http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/volume.html#t-WeightFunctionTypes Hint: see X3D Specification Table 41.4, Transfer function to weight mapping http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#t-transferFunctionToWeightMapping
	 * @param newValue is new value for the weightFunction2 field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setWeightFunction2(String newValue);

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>weightTransferFunction1</i>.
	 * @return value of weightTransferFunction1 field
	 */
	public X3DTexture2DNode getWeightTransferFunction1(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>weightTransferFunction1</i>.
	 * @param newValue is new value for the weightTransferFunction1 field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setWeightTransferFunction1(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>weightTransferFunction2</i>.
	 * @return value of weightTransferFunction2 field
	 */
	public X3DTexture2DNode getWeightTransferFunction2(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>weightTransferFunction2</i>.
	 * @param newValue is new value for the weightTransferFunction2 field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public BlendedVolumeStyle setWeightTransferFunction2(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyle setDEF(String newValue);


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
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyle setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link BlendedVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public BlendedVolumeStyle setCssClass(String newValue);

}
