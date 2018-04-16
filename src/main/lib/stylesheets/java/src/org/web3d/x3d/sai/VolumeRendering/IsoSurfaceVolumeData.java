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
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.VolumeRendering.*;
import org.web3d.x3d.sai.Texturing3D.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>

 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#IsoSurfaceVolumeData" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#IsoSurfaceVolumeData" target="blank">X3D Abstract Specification: IsoSurfaceVolumeData</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IsoSurfaceVolumeData" target="_blank">X3D Tooltips: IsoSurfaceVolumeData</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Volume" target="_blank">X3D Scene Authoring Hints: Volume</a>
 */
public interface IsoSurfaceVolumeData extends X3DVolumeDataNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of 3-tuple float results from initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * @return value of bboxCenter field
	 */
	@Override
	public float[] getBboxCenter();

	/**
	 * Assign 3-tuple float array to initializeOnly SFVec3f field named <i>bboxCenter</i>.
	 * @param newValue is new value for the bboxCenter field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeData setBboxCenter(float[] newValue);

	/**
	 * Provide array of 3-tuple float results within allowed range of [0,infinity), or default value [-1 -1 -1], from initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * @return value of bboxSize field
	 */
	@Override
	public float[] getBboxSize();

	/**
	 * Assign 3-tuple float array within allowed range of [0,infinity), or default value [-1 -1 -1], to initializeOnly SFVec3f field named <i>bboxSize</i>.
	 * @param newValue is new value for the bboxSize field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeData setBboxSize(float[] newValue);

	/**
	 * Provide float value from inputOutput SFFloat field named <i>contourStepSize</i>.
	 * @return value of contourStepSize field
	 */
	public float getContourStepSize();

	/**
	 * Assign float value to inputOutput SFFloat field named <i>contourStepSize</i>.
	 * @param newValue is new value for the contourStepSize field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeData setContourStepSize(float newValue);

	/**
	 * Provide array of 3-tuple float results within allowed range of (0,infinity) from inputOutput SFVec3f field named <i>dimensions</i>.
	 * @return value of dimensions field
	 */
	@Override
	public float[] getDimensions();

	/**
	 * Assign 3-tuple float array within allowed range of (0,infinity) to inputOutput SFVec3f field named <i>dimensions</i>.
	 * @param newValue is new value for the dimensions field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeData setDimensions(float[] newValue);

	/**
	 * Provide X3DTexture3DNode instance (using a properly typed node) from inputOutput SFNode field <i>gradients</i>.
	 * @return value of gradients field
	 */
	public X3DTexture3DNode getGradients(); // acceptable node types: X3DTexture3DNode

	/**
	 * Assign X3DTexture3DNode instance (using a properly typed node) to inputOutput SFNode field <i>gradients</i>.
	 * @param newValue is new value for the gradients field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeData setGradients(X3DTexture3DNode newValue); // acceptable node types: X3DTexture3DNode

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
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeData setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>renderStyle</i>.
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVolumeRenderStyleNode.
	 * @see org.web3d.x3d.sai.VolumeRendering.X3DVolumeRenderStyleNode
	 * @return value of renderStyle field
	 */
	public X3DNode[] getRenderStyle(); // acceptable node types: X3DVolumeRenderStyleNode

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>renderStyle</i>.
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVolumeRenderStyleNode.
	 * @param newValue is new value for the renderStyle field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeData setRenderStyle(X3DNode[] newValue); // acceptable node types: X3DVolumeRenderStyleNode

	/**
	 * Add array of child renderStyle nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DVolumeRenderStyleNode.
	 * @param newValue is new value array to be appended the renderStyle field.
	 */
	public void addRenderStyle(X3DNode[] newValue); // acceptable node types: X3DVolumeRenderStyleNode
	/**
	 * Set single child renderStyle node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the renderStyle field
	 */
	public void setRenderStyle(X3DNode newValue); // acceptable node types: X3DVolumeRenderStyleNode
	/**
	 * Provide float value within allowed range of [0,infinity) from inputOutput SFFloat field named <i>surfaceTolerance</i>.
	 * @return value of surfaceTolerance field
	 */
	public float getSurfaceTolerance();

	/**
	 * Assign float value within allowed range of [0,infinity) to inputOutput SFFloat field named <i>surfaceTolerance</i>.
	 * @param newValue is new value for the surfaceTolerance field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeData setSurfaceTolerance(float newValue);

	/**
	 * Provide array of float results from inputOutput MFFloat field named <i>surfaceValues</i>.
	 * @return value of surfaceValues field
	 */
	public float[] getSurfaceValues();

	/**
	 * Assign float array to inputOutput MFFloat field named <i>surfaceValues</i>.
	 * @param newValue is new value for the surfaceValues field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeData setSurfaceValues(float[] newValue);

	/**
	 * Provide X3DTexture3DNode instance (using a properly typed node) from inputOutput SFNode field <i>voxels</i>.
	 * @return value of voxels field
	 */
	public X3DTexture3DNode getVoxels(); // acceptable node types: X3DTexture3DNode

	/**
	 * Assign X3DTexture3DNode instance (using a properly typed node) to inputOutput SFNode field <i>voxels</i>.
	 * @param newValue is new value for the voxels field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public IsoSurfaceVolumeData setVoxels(X3DTexture3DNode newValue); // acceptable node types: X3DTexture3DNode


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeData setDEF(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Note:</i> each <code>USE</code> node is still an independent object, with the <code>USE</code> value matching the <code>DEF</code> value in the preceding object. 
	 * <br><br>
	 * <i>Warning:</i> invoking the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes.<br><br>
	 * <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value.
	 * @param newValue is new value for the USE field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeData setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * @param newValue is new value for the class field.
	 * @return {@link IsoSurfaceVolumeData} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public IsoSurfaceVolumeData setCssClass(String newValue);

}
