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
import org.web3d.x3d.sai.Texturing3D.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.3 or later) CartoonVolumeStyle generates cartoon-style non-photorealistic rendering of associated volumetric data.
 * <ul>
 *  <li> <i> Hint:</i>  contains single Texture3D node with containerField='surfaceNormals' </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#CartoonVolumeStyle" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/volume.html#CartoonVolumeStyle" target="blank">X3D Abstract Specification: CartoonVolumeStyle</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#CartoonVolumeStyle" target="_blank">X3D Tooltips: CartoonVolumeStyle</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Volume" target="_blank">X3D Scene Authoring Hints: Volume</a>
 */
public interface CartoonVolumeStyle extends X3DComposableVolumeRenderStyleNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide int value using RGB values [0..1] from inputOutput SFInt32 field named <i>colorSteps</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [1,64] Number of distinct colors taken from interpolated colors and used to render the object.
 * <ul>
 *  <li> <i>Hint:</i> colorSteps=1 means no color interpolation takes place, only use orthogonalColor. </li> 
 *  <li> <i>Hint:</i>  parallelColor and orthogonalColor interpolation is in HSV color space for RGB components, linearly for alpha component. </li> 
 * </ul>
	 * @return value of colorSteps field
	 */
	public int getColorSteps();

	/**
	 * Assign int value using RGB values [0..1] to inputOutput SFInt32 field named <i>colorSteps</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [1,64] Number of distinct colors taken from interpolated colors and used to render the object. Hint: colorSteps=1 means no color interpolation takes place, only use orthogonalColor. Hint: parallelColor and orthogonalColor interpolation is in HSV color space for RGB components, linearly for alpha component.
	 * @param newValue is new value for the colorSteps field.
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CartoonVolumeStyle setColorSteps(int newValue);

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
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CartoonVolumeStyle setEnabled(boolean newValue);

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
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CartoonVolumeStyle setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide array of 4-tuple float results using RGBA values [0..1] using RGBA values [0..1] from inputOutput SFColorRGBA field named <i>orthogonalColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] orthogonalColor is used for surface normals that are orthogonal (perpendicular) to viewer's current location.
 * <ul>
 *  <li> <i>Hint:</i> plane of surface itself is orthogonal to user's view direction. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of orthogonalColor field
	 */
	public float[] getOrthogonalColor();

	/**
	 * Assign 4-tuple float array using RGBA values [0..1] using RGBA values [0..1] to inputOutput SFColorRGBA field named <i>orthogonalColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] orthogonalColor is used for surface normals that are orthogonal (perpendicular) to viewer's current location. Hint: plane of surface itself is orthogonal to user's view direction. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the orthogonalColor field.
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CartoonVolumeStyle setOrthogonalColor(float[] newValue);

	/**
	 * Provide array of 4-tuple float results using RGBA values [0..1] using RGBA values [0..1] from inputOutput SFColorRGBA field named <i>parallelColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] parallelColor is used for surface normals that are orthogonal to viewer's current location.
 * <ul>
 *  <li> <i>Hint:</i> plane of surface itself is parallel to user's view direction. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of parallelColor field
	 */
	public float[] getParallelColor();

	/**
	 * Assign 4-tuple float array using RGBA values [0..1] using RGBA values [0..1] to inputOutput SFColorRGBA field named <i>parallelColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] parallelColor is used for surface normals that are orthogonal to viewer's current location. Hint: plane of surface itself is parallel to user's view direction. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the parallelColor field.
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CartoonVolumeStyle setParallelColor(float[] newValue);

	/**
	 * Provide X3DTexture3DNode instance (using a properly typed node) from inputOutput SFNode field <i>surfaceNormals</i>.
	 * @return value of surfaceNormals field
	 */
	public X3DTexture3DNode getSurfaceNormals(); // acceptable node types: X3DTexture3DNode

	/**
	 * Assign X3DTexture3DNode instance (using a properly typed node) to inputOutput SFNode field <i>surfaceNormals</i>.
	 * @param newValue is new value for the surfaceNormals field.
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CartoonVolumeStyle setSurfaceNormals(X3DTexture3DNode newValue); // acceptable node types: X3DTexture3DNode


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CartoonVolumeStyle setDEF(String newValue);


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
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CartoonVolumeStyle setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link CartoonVolumeStyle} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CartoonVolumeStyle setCssClass(String newValue);

}
