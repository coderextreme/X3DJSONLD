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

package org.web3d.x3d.sai.Layout;

import org.web3d.x3d.sai.Layering.X3DLayerNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.Layering.*;
import java.util.Arrays;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) [X3DLayerNode] LayoutLayer is a Grouping node that can contain most nodes. LayoutLayer content is clipped by the specified viewport node.
 * <ul>
 *  <li> <i>Hint:</i> insert a Shape node before adding geometry or Appearance. </li> 
 *  <li> <i>Warning:</i>  better functional description needed in X3D specification. </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#LayoutLayer" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/layout.html#LayoutLayer" target="blank">X3D Abstract Specification: LayoutLayer</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#LayoutLayer" target="_blank">X3D Tooltips: LayoutLayer</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface LayoutLayer extends X3DLayerNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide array of X3DNode results (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) from inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DChildNode] Grouping nodes contain an ordered list of children nodes.
 * <ul>
 *  <li> <i>Hint:</i> Each grouping node defines a coordinate space for its children, relative to the coordinate space of its parent node. Thus transformations accumulate down the scene graph hierarchy. </li> 
 *  <li> <i>Hint:</i> inputOnly MFNode addChildren field can append new X3DChildNode nodes via a ROUTE connection, duplicate input nodes (i.e. matching DEF, USE values) are ignored. </li> 
 *  <li> <i>Hint:</i> inputOnly MFNode removeChildren field can remove nodes from the children list, unrecognized input nodes (i.e. nonmatching DEF, USE values) are ignored. </li> 
 *  <li> <i>Hint:</i>  X3D Architecture 10.2.1 Grouping and children node types, <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#GroupingAndChildrenNodes" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#GroupingAndChildrenNodes</a> </li> 
 * </ul>
	 * <br><br>
	 * <i>Warning:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @see org.web3d.x3d.sai.Core.X3DChildNode
	 * @return value of children field
	 */
	public X3DNode[] getChildren(); // acceptable node types #1:X3DChildNode

	/**
	 * Assign X3DNode array (using an array consisting of properly typed nodes or X3DPrototypeInstance objects) to inputOutput MFNode field <i>children</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DChildNode] Grouping nodes contain an ordered list of children nodes. Hint: Each grouping node defines a coordinate space for its children, relative to the coordinate space of its parent node. Thus transformations accumulate down the scene graph hierarchy. Hint: inputOnly MFNode addChildren field can append new X3DChildNode nodes via a ROUTE connection, duplicate input nodes (i.e. matching DEF, USE values) are ignored. Hint: inputOnly MFNode removeChildren field can remove nodes from the children list, unrecognized input nodes (i.e. nonmatching DEF, USE values) are ignored. Hint: X3D Architecture 10.2.1 Grouping and children node types, http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/group.html#GroupingAndChildrenNodes
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value for the children field.
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public LayoutLayer setChildren(X3DNode[] newValue); // acceptable node types #2: X3DChildNode

	/**
	 * Add array of children nodes to array of existing nodes (if any).
	 * <br><br>
	 * <i>Note:</i> according to X3D Unified Object Model (X3DUOM), acceptable node types are limited to X3DChildNode.
	 * @param newValue is new value array to be appended the children field.
	 */
	public void addChildren(X3DNode[] newValue); // acceptable node types #3: X3DChildNode
	/**
	 * Set single children node, replacing prior array of existing nodes (if any).
	 * @param newValue is new node for the children field
	 */
	public void setChildren(X3DNode newValue); // acceptable node types #5: X3DChildNode
	/**
	 * Provide boolean value from inputOutput SFBool field named <i>isPickable</i>.
	 * <br><br>
	 * <i>Tooltip:</i> isPickable determines whether pick traversal is performed for this layer.
 * <ul>
 *  <li> <i> Warning:</i>  it is an error to define this transient outputOnly field in an X3D file. </li> 
 * </ul>
	 * @return value of isPickable field
	 */
	@Override
	public boolean getIsPickable();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>isPickable</i>.
	 * <br><br>
	 * <i>Tooltip:</i> isPickable determines whether pick traversal is performed for this layer. Warning: it is an error to define this transient outputOnly field in an X3D file.
	 * @param newValue is new value for the isPickable field.
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public LayoutLayer setIsPickable(boolean newValue);

	/**
	 * Provide X3DLayoutNode instance (using a properly typed node) from inputOutput SFNode field <i>layout</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [X3DLayoutNode] The layout field contains an X3DLayoutNode node that provides the information required to locate and size the layout region of the LayoutGroup node relative to its parent’s layout region, and also to scale the contents of the LayoutGroup.  * <br>

	 * @return value of layout field
	 */
	public X3DLayoutNode getLayout(); // acceptable node types #1:X3DLayoutNode

	/**
	 * Assign X3DLayoutNode instance (using a properly typed node) to inputOutput SFNode field <i>layout</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DLayoutNode] The layout field contains an X3DLayoutNode node that provides the information required to locate and size the layout region of the LayoutGroup node relative to its parent’s layout region, and also to scale the contents of the LayoutGroup.
	 * @param newValue is new value for the layout field.
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public LayoutLayer setLayout(X3DLayoutNode newValue); // acceptable node types #2: X3DLayoutNode

	/**
	 * Provide X3DMetadataObject instance (using a properly typed node) from inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @return value of metadata field
	 */
	@Override
	public X3DMetadataObject getMetadata(); // acceptable node types #1:X3DMetadataObject

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 * @param newValue is new value for the metadata field.
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public LayoutLayer setMetadata(X3DMetadataObject newValue); // acceptable node types #2: X3DMetadataObject

	/**
	 * Provide X3DViewportNode instance (using a properly typed node) from inputOutput SFNode field <i>viewport</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [X3DViewportNode] The content of the LayoutGroup is clipped by the specified viewport.  * <br>

	 * @return value of viewport field
	 */
	@Override
	public X3DViewportNode getViewport(); // acceptable node types #1:X3DViewportNode

	/**
	 * Assign X3DViewportNode instance (using a properly typed node) to inputOutput SFNode field <i>viewport</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [X3DViewportNode] The content of the LayoutGroup is clipped by the specified viewport.
	 * @param newValue is new value for the viewport field.
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public LayoutLayer setViewport(X3DViewportNode newValue); // acceptable node types #2: X3DViewportNode


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public LayoutLayer setDEF(String newValue);


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
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public LayoutLayer setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link LayoutLayer} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public LayoutLayer setCssClass(String newValue);

}
