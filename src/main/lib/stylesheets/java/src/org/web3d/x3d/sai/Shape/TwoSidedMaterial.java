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

package org.web3d.x3d.sai.Shape;
import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: (X3D version 3.2 or later) [X3DMaterialNode] TwoSidedMaterial specifies surface rendering properties for associated geometry nodes, for outer (front) and inner (back) sides of polygons. Material attributes are used by the X3D lighting equations during rendering.
 * <ul>
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='Shape' level='4'/&amp;gt; </li> 
 *  <li> <i>Hint:</i> insert Shape and Appearance nodes before adding material. </li> 
 *  <li> <i>Hint:</i> DEF/USE copies of a single node can provide a similar "look + feel" style for related shapes in a scene. </li> 
 *  <li> <i>Hint:</i> X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 *  <li> <i>Warning:</i> corresponding geometry within the parent Shape must have solid='false' for two-sided rendering, otherwise no reverse-side back geometry is displayed. </li> 
 *  <li> <i>Hint:</i> X3D Architecture 12.2.3 Two-sided materials <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/shape.html#TwoSidedMaterials" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/shape.html#TwoSidedMaterials</a> </li> 
 *  <li> <i>Hint:</i>  X3D Architecture 17.2.2 Lighting model <br> <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/lighting.html#Lightingmodel" target="_blank">http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/lighting.html#Lightingmodel</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#TwoSidedMaterial" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/shape.html#Material" target="blank">X3D Abstract Specification: TwoSidedMaterial</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#TwoSidedMaterial" target="_blank">X3D Tooltips: TwoSidedMaterial</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface TwoSidedMaterial extends X3DMaterialNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>ambientIntensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] how much ambient omnidirectional light is reflected from all light sources. Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of ambientIntensity field
	 */
	public float getAmbientIntensity();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>ambientIntensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much ambient omnidirectional light is reflected from all light sources. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the ambientIntensity field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setAmbientIntensity(float newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>backAmbientIntensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] how much ambient omnidirectional light is reflected from all light sources. Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of backAmbientIntensity field
	 */
	public float getBackAmbientIntensity();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>backAmbientIntensity</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much ambient omnidirectional light is reflected from all light sources. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the backAmbientIntensity field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setBackAmbientIntensity(float newValue);

	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>backDiffuseColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much direct, angle-dependent light is reflected from all light sources.
 * <ul>
 *  <li> <i> Hint:</i>  only emissiveColor affects IndexedLineSet, LineSet and PointSet. </li> 
 * </ul>
	 * @return value of backDiffuseColor field
	 */
	public float[] getBackDiffuseColor();

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>backDiffuseColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much direct, angle-dependent light is reflected from all light sources. Hint: only emissiveColor affects IndexedLineSet, LineSet and PointSet.
	 * @param newValue is new value for the backDiffuseColor field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setBackDiffuseColor(float[] newValue);

	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>backEmissiveColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much glowing light is emitted from this object.
 * <ul>
 *  <li> <i>Hint:</i> emissiveColors glow even when all lights are off. </li> 
 *  <li> <i>Hint:</i> reset diffuseColor from default (.8 .8 .8) to (0 0 0) to avoid washout. </li> 
 *  <li> <i>Hint:</i> only emissiveColor affects IndexedLineSet, LineSet and PointSet. </li> 
 *  <li> <i>Warning:</i>  bright emissiveColor values can wash out other colors and some textures. </li> 
 * </ul>
	 * @return value of backEmissiveColor field
	 */
	public float[] getBackEmissiveColor();

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>backEmissiveColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much glowing light is emitted from this object. Hint: emissiveColors glow even when all lights are off. Hint: reset diffuseColor from default (.8 .8 .8) to (0 0 0) to avoid washout. Hint: only emissiveColor affects IndexedLineSet, LineSet and PointSet. Warning: bright emissiveColor values can wash out other colors and some textures.
	 * @param newValue is new value for the backEmissiveColor field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setBackEmissiveColor(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>backShininess</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] Lower shininess values provide soft specular glows, while higher values result in sharper, smaller highlights. Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of backShininess field
	 */
	public float getBackShininess();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>backShininess</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] Lower shininess values provide soft specular glows, while higher values result in sharper, smaller highlights. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the backShininess field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setBackShininess(float newValue);

	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>backSpecularColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] specular highlights are brightness reflections (example: shiny spots on an apple). Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of backSpecularColor field
	 */
	public float[] getBackSpecularColor();

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>backSpecularColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] specular highlights are brightness reflections (example: shiny spots on an apple). Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the backSpecularColor field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setBackSpecularColor(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>backTransparency</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] how "clear" an object is: 1.0 is completely transparent, 0.0 is completely opaque. Interchange profile hint: transparency &amp;lt; .5 opaque, transparency &amp;gt; .5 transparent.  * <br>

	 * @return value of backTransparency field
	 */
	public float getBackTransparency();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>backTransparency</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how "clear" an object is: 1.0 is completely transparent, 0.0 is completely opaque. Interchange profile hint: transparency &lt; .5 opaque, transparency &gt; .5 transparent.
	 * @param newValue is new value for the backTransparency field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setBackTransparency(float newValue);

	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>diffuseColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much direct, angle-dependent light is reflected from all light sources.
 * <ul>
 *  <li> <i> Hint:</i>  only emissiveColor affects IndexedLineSet, LineSet and PointSet. </li> 
 * </ul>
	 * @return value of diffuseColor field
	 */
	public float[] getDiffuseColor();

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>diffuseColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much direct, angle-dependent light is reflected from all light sources. Hint: only emissiveColor affects IndexedLineSet, LineSet and PointSet.
	 * @param newValue is new value for the diffuseColor field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setDiffuseColor(float[] newValue);

	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>emissiveColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much glowing light is emitted from this object.
 * <ul>
 *  <li> <i>Hint:</i> emissiveColors glow even when all lights are off. </li> 
 *  <li> <i>Hint:</i> reset diffuseColor from default (.8 .8 .8) to (0 0 0) to avoid washout. </li> 
 *  <li> <i>Hint:</i> only emissiveColor affects IndexedLineSet, LineSet and PointSet. </li> 
 *  <li> <i>Warning:</i>  bright emissiveColor values can wash out other colors and some textures. </li> 
 * </ul>
	 * @return value of emissiveColor field
	 */
	public float[] getEmissiveColor();

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>emissiveColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how much glowing light is emitted from this object. Hint: emissiveColors glow even when all lights are off. Hint: reset diffuseColor from default (.8 .8 .8) to (0 0 0) to avoid washout. Hint: only emissiveColor affects IndexedLineSet, LineSet and PointSet. Warning: bright emissiveColor values can wash out other colors and some textures.
	 * @param newValue is new value for the emissiveColor field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setEmissiveColor(float[] newValue);

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
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TwoSidedMaterial setMetadata(X3DMetadataObject newValue); // acceptable node types #2: X3DMetadataObject

	/**
	 * Provide boolean value from inputOutput SFBool field named <i>separateBackColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> separateBackColor determines whether separate Material values are used for back faces.
 * <ul>
 *  <li> <i> Warning:</i>  backface Material values are ignored unless you set separateBackColor='true'. </li> 
 * </ul>
	 * @return value of separateBackColor field
	 */
	public boolean getSeparateBackColor();

	/**
	 * Assign boolean value to inputOutput SFBool field named <i>separateBackColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> separateBackColor determines whether separate Material values are used for back faces. Warning: backface Material values are ignored unless you set separateBackColor='true'.
	 * @param newValue is new value for the separateBackColor field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setSeparateBackColor(boolean newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>shininess</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] Lower shininess values provide soft specular glows, while higher values result in sharper, smaller highlights. Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of shininess field
	 */
	public float getShininess();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>shininess</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] Lower shininess values provide soft specular glows, while higher values result in sharper, smaller highlights. Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the shininess field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setShininess(float newValue);

	/**
	 * Provide array of 3-tuple float results using RGB values [0..1] using RGB values [0..1] from inputOutput SFColor field named <i>specularColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] specular highlights are brightness reflections (example: shiny spots on an apple). Interchange profile hint: this field may be ignored, applying the default value regardless.  * <br>

	 * @return value of specularColor field
	 */
	public float[] getSpecularColor();

	/**
	 * Assign 3-tuple float array using RGB values [0..1] using RGB values [0..1] to inputOutput SFColor field named <i>specularColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] specular highlights are brightness reflections (example: shiny spots on an apple). Interchange profile hint: this field may be ignored, applying the default value regardless.
	 * @param newValue is new value for the specularColor field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setSpecularColor(float[] newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>transparency</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] how "clear" an object is: 1.0 is completely transparent, 0.0 is completely opaque. Interchange profile hint: transparency &amp;lt; .5 opaque, transparency &amp;gt; .5 transparent.  * <br>

	 * @return value of transparency field
	 */
	public float getTransparency();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>transparency</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] how "clear" an object is: 1.0 is completely transparent, 0.0 is completely opaque. Interchange profile hint: transparency &lt; .5 opaque, transparency &gt; .5 transparent.
	 * @param newValue is new value for the transparency field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TwoSidedMaterial setTransparency(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TwoSidedMaterial setDEF(String newValue);


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
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TwoSidedMaterial setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link TwoSidedMaterial} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TwoSidedMaterial setCssClass(String newValue);

}
