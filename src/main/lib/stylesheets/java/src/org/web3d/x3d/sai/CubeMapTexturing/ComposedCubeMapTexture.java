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

package org.web3d.x3d.sai.CubeMapTexturing;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Texturing.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: ComposedCubeMapTexture (X3D version 3.1 or later) defines a cubic environment map source as an explicit set of images drawn from individual 2D texture nodes.
 * <ul>
 *  <li> <i>Hint:</i> 0..6 child image nodes are allowed (ImageTexture MovieTexture PixelTexture) with corresponding containerField values: front back left right top bottom. </li> 
 *  <li> <i>Warning:</i>  child ImageTexture or PixelTexture nodes must have unique containerField values for back, bottom, front, left, right, or top. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#ComposedCubeMapTexture" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/env_texture.html#ComposedCubeMapTexture" target="blank">X3D Abstract Specification: ComposedCubeMapTexture</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#ComposedCubeMapTexture" target="_blank">X3D Tooltips: ComposedCubeMapTexture</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Images" target="_blank">X3D Scene Authoring Hints: Images</a>
 */
public interface ComposedCubeMapTexture extends X3DEnvironmentTextureNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>back</i>.
	 * @return value of back field
	 */
	public X3DTexture2DNode getBack(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>back</i>.
	 * @param newValue is new value for the back field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ComposedCubeMapTexture setBack(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>bottom</i>.
	 * @return value of bottom field
	 */
	public X3DTexture2DNode getBottom(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>bottom</i>.
	 * @param newValue is new value for the bottom field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ComposedCubeMapTexture setBottom(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>front</i>.
	 * @return value of front field
	 */
	public X3DTexture2DNode getFront(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>front</i>.
	 * @param newValue is new value for the front field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ComposedCubeMapTexture setFront(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>left</i>.
	 * @return value of left field
	 */
	public X3DTexture2DNode getLeft(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>left</i>.
	 * @param newValue is new value for the left field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ComposedCubeMapTexture setLeft(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode

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
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ComposedCubeMapTexture setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>right</i>.
	 * @return value of right field
	 */
	public X3DTexture2DNode getRight(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>right</i>.
	 * @param newValue is new value for the right field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ComposedCubeMapTexture setRight(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode

	/**
	 * Provide X3DTexture2DNode instance (using a properly typed node) from inputOutput SFNode field <i>top</i>.
	 * @return value of top field
	 */
	public X3DTexture2DNode getTop(); // acceptable node types: X3DTexture2DNode

	/**
	 * Assign X3DTexture2DNode instance (using a properly typed node) to inputOutput SFNode field <i>top</i>.
	 * @param newValue is new value for the top field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public ComposedCubeMapTexture setTop(X3DTexture2DNode newValue); // acceptable node types: X3DTexture2DNode


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ComposedCubeMapTexture setDEF(String newValue);


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
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ComposedCubeMapTexture setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link ComposedCubeMapTexture} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public ComposedCubeMapTexture setCssClass(String newValue);

}
