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

package org.web3d.x3d.sai.Texturing;


import org.web3d.x3d.sai.Core.X3DNode;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: TextureProperties allows precise fine-grained control over application of image textures to geometry.
 * <ul>
 *  <li> <i>Warning:</i> requires X3D profile='Full' or else include &amp;lt;component name='Shape' level='2'/&amp;gt; </li> 
 *  <li> <i>Hint:</i>  Texture mapping <br> <a href="https://en.wikipedia.org/wiki/Texture_mapping" target="_blank">https://en.wikipedia.org/wiki/Texture_mapping</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#TextureProperties" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#TextureProperties" target="blank">X3D Abstract Specification: TextureProperties</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#TextureProperties" target="_blank">X3D Tooltips: TextureProperties</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Images" target="_blank">X3D Scene Authoring Hints: Images</a>
 */
public interface TextureProperties extends X3DNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide float value within allowed range of [1,infinity) from inputOutput SFFloat field named <i>anisotropicDegree</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [1,infinity) anisotropicDegree defines minimum degree of anisotropy to account for in texture filtering (1=no effect for symmetric filtering, otherwise provide higher value). At least 2-to-1 anisotropy is often supported in low-level graphics rendering software and hardware, relative to horizontal and vertical directions.
 * <ul>
 *  <li> <i>Hint:</i> Anisotropy indicates directional dependence of properties. <br> <a href="https://en.wikipedia.org/wiki/Anisotropy" target="_blank">https://en.wikipedia.org/wiki/Anisotropy</a> </li> 
 *  <li> <i>Hint:</i>  OpenGL EXT_texture_filter_anisotropic <br> <a href="https://www.khronos.org/registry/OpenGL/extensions/EXT/EXT_texture_filter_anisotropic.txt" target="_blank">https://www.khronos.org/registry/OpenGL/extensions/EXT/EXT_texture_filter_anisotropic.txt</a> </li> 
 * </ul>
	 * @return value of anisotropicDegree field
	 */
	public float getAnisotropicDegree();

	/**
	 * Assign float value within allowed range of [1,infinity) to inputOutput SFFloat field named <i>anisotropicDegree</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [1,infinity) anisotropicDegree defines minimum degree of anisotropy to account for in texture filtering (1=no effect for symmetric filtering, otherwise provide higher value). At least 2-to-1 anisotropy is often supported in low-level graphics rendering software and hardware, relative to horizontal and vertical directions. Hint: Anisotropy indicates directional dependence of properties. https://en.wikipedia.org/wiki/Anisotropy Hint: OpenGL EXT_texture_filter_anisotropic https://www.khronos.org/registry/OpenGL/extensions/EXT/EXT_texture_filter_anisotropic.txt
	 * @param newValue is new value for the anisotropicDegree field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setAnisotropicDegree(float newValue);

	/**
	 * Provide array of 4-tuple float results using RGBA values [0..1] using RGBA values [0..1] from inputOutput SFColorRGBA field named <i>borderColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] borderColor defines border pixel color.
 * <ul>
 *  <li> <i> Hint:</i>  X3D Scene Authoring Hints, Color <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color</a> </li> 
 * </ul>
	 * @return value of borderColor field
	 */
	public float[] getBorderColor();

	/**
	 * Assign 4-tuple float array using RGBA values [0..1] using RGBA values [0..1] to inputOutput SFColorRGBA field named <i>borderColor</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] borderColor defines border pixel color. Hint: X3D Scene Authoring Hints, Color http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Color
	 * @param newValue is new value for the borderColor field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setBorderColor(float[] newValue);

	/**
	 * Provide int value within allowed range of [0,infinity) from inputOutput SFInt32 field named <i>borderWidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,infinity) borderWidth number of pixels for texture border.  * <br>

	 * @return value of borderWidth field
	 */
	public int getBorderWidth();

	/**
	 * Assign int value within allowed range of [0,infinity) to inputOutput SFInt32 field named <i>borderWidth</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,infinity) borderWidth number of pixels for texture border.
	 * @param newValue is new value for the borderWidth field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setBorderWidth(int newValue);

	/**
	 * Provide String enumeration value ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] from inputOutput SFString field named <i>boundaryModeR</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeR describes handling of texture-coordinate boundaries.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.7 Texture boundary modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes</a> for details. </li> 
 * </ul>
	 * @return value of boundaryModeR field
	 */
	public String getBoundaryModeR();

	/**
	 * Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] to inputOutput SFString field named <i>boundaryModeR</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeR describes handling of texture-coordinate boundaries. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.7 Texture boundary modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes for details.
	 * @param newValue is new value for the boundaryModeR field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setBoundaryModeR(String newValue);

	/**
	 * Provide String enumeration value ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] from inputOutput SFString field named <i>boundaryModeS</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeS describes handling of texture-coordinate boundaries.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.7 Texture boundary modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes</a> for details. </li> 
 * </ul>
	 * @return value of boundaryModeS field
	 */
	public String getBoundaryModeS();

	/**
	 * Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] to inputOutput SFString field named <i>boundaryModeS</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeS describes handling of texture-coordinate boundaries. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.7 Texture boundary modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes for details.
	 * @param newValue is new value for the boundaryModeS field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setBoundaryModeS(String newValue);

	/**
	 * Provide String enumeration value ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] from inputOutput SFString field named <i>boundaryModeT</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeT describes handling of texture-coordinate boundaries.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.7 Texture boundary modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes</a> for details. </li> 
 * </ul>
	 * @return value of boundaryModeT field
	 */
	public String getBoundaryModeT();

	/**
	 * Assign String enumeration value ("CLAMP"|"CLAMP_TO_EDGE"|"CLAMP_TO_BOUNDARY"|"MIRRORED_REPEAT"|"REPEAT") ['CLAMP'|'CLAMP_TO_EDGE'|'CLAMP_TO_BOUNDARY'|'MIRRORED_REPEAT'|'REPEAT'] to inputOutput SFString field named <i>boundaryModeT</i>.
	 * <br><br>
	 * <i>Tooltip:</i> boundaryModeT describes handling of texture-coordinate boundaries. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.7 Texture boundary modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureBoundaryModes for details.
	 * @param newValue is new value for the boundaryModeT field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setBoundaryModeT(String newValue);

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>generateMipMaps</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Determines whether MIPMAPs are generated for texture images.
 * <ul>
 *  <li> <i>Warning:</i> must declare generateMipMaps='true' for minificationFilter modes with MIPMAP in their value. </li> 
 *  <li> <i>Hint:</i> mipmap preprocessing is a low-level rendering technique that can increase rendering speed and reduce aliasing artifacts. </li> 
 *  <li> <i>Hint:</i> Mipmap pyramids are pre-calculated, optimized sequences of images, each of which is a progressively lower resolution representation of the same image. The height and width of each image level in the mipmap is a power of two smaller than the previous level. </li> 
 *  <li> <i>Hint:</i> Aliasing <br> <a href="https://en.wikipedia.org/wiki/Aliasing" target="_blank">https://en.wikipedia.org/wiki/Aliasing</a> </li> 
 *  <li> <i>Hint:</i>  Mipmap <br> <a href="https://en.wikipedia.org/wiki/Mipmap" target="_blank">https://en.wikipedia.org/wiki/Mipmap</a> </li> 
 * </ul>
	 * @return value of generateMipMaps field
	 */
	public boolean getGenerateMipMaps();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>generateMipMaps</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Determines whether MIPMAPs are generated for texture images. Warning: must declare generateMipMaps='true' for minificationFilter modes with MIPMAP in their value. Hint: mipmap preprocessing is a low-level rendering technique that can increase rendering speed and reduce aliasing artifacts. Hint: Mipmap pyramids are pre-calculated, optimized sequences of images, each of which is a progressively lower resolution representation of the same image. The height and width of each image level in the mipmap is a power of two smaller than the previous level. Hint: Aliasing https://en.wikipedia.org/wiki/Aliasing Hint: Mipmap https://en.wikipedia.org/wiki/Mipmap
	 * @param newValue is new value for the generateMipMaps field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setGenerateMipMaps(boolean newValue);

	/**
	 * Provide String enumeration value ['AVG_PIXEL'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NICEST'] from inputOutput SFString field named <i>magnificationFilter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> magnificationFilter indicates texture filter when image is smaller than screen space representation.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.8 Texture magnification modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMagnificationModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMagnificationModes</a> for details. </li> 
 * </ul>
	 * @return value of magnificationFilter field
	 */
	public String getMagnificationFilter();

	/**
	 * Assign String enumeration value ("AVG_PIXEL"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NICEST") ['AVG_PIXEL'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NICEST'] to inputOutput SFString field named <i>magnificationFilter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> magnificationFilter indicates texture filter when image is smaller than screen space representation. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.8 Texture magnification modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMagnificationModes for details.
	 * @param newValue is new value for the magnificationFilter field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setMagnificationFilter(String newValue);

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
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextureProperties setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide String enumeration value ['AVG_PIXEL'|'AVG_PIXEL_AVG_MIPMAP'|'AVG_PIXEL_NEAREST_MIPMAP'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NEAREST_PIXEL_AVG_MIPMAP'|'NEAREST_PIXEL_NEAREST_MIPMAP'|'NICEST'] from inputOutput SFString field named <i>minificationFilter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> minificationFilter indicates texture filter when image is larger than screen space representation.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i>  see X3D Specification Table 18.9 Texture minification modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMinificationModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMinificationModes</a> for details. </li> 
 * </ul>
	 * @return value of minificationFilter field
	 */
	public String getMinificationFilter();

	/**
	 * Assign String enumeration value ("AVG_PIXEL"|"AVG_PIXEL_AVG_MIPMAP"|"AVG_PIXEL_NEAREST_MIPMAP"|"DEFAULT"|"FASTEST"|"NEAREST_PIXEL"|"NEAREST_PIXEL_AVG_MIPMAP"|"NEAREST_PIXEL_NEAREST_MIPMAP"|"NICEST") ['AVG_PIXEL'|'AVG_PIXEL_AVG_MIPMAP'|'AVG_PIXEL_NEAREST_MIPMAP'|'DEFAULT'|'FASTEST'|'NEAREST_PIXEL'|'NEAREST_PIXEL_AVG_MIPMAP'|'NEAREST_PIXEL_NEAREST_MIPMAP'|'NICEST'] to inputOutput SFString field named <i>minificationFilter</i>.
	 * <br><br>
	 * <i>Tooltip:</i> minificationFilter indicates texture filter when image is larger than screen space representation. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.9 Texture minification modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureMinificationModes for details.
	 * @param newValue is new value for the minificationFilter field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setMinificationFilter(String newValue);

	/**
	 * Provide String enumeration value ['DEFAULT'|'FASTEST'|'HIGH'|'LOW'|'MEDIUM'|'NICEST'] from inputOutput SFString field named <i>textureCompression</i>.
	 * <br><br>
	 * <i>Tooltip:</i> textureCompression indicates compression algorithm selection mode.
 * <ul>
 *  <li> <i>Warning:</i> do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. </li> 
 *  <li> <i>Hint:</i> see X3D Specification Table 18.10 Texture compression modes <br> <a href="http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureCompressionModes" target="_blank">http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureCompressionModes</a> for details. </li> 
 *  <li> <i>Hint:</i>  Texture compression <br> <a href="https://en.wikipedia.org/wiki/Texture_compression" target="_blank">https://en.wikipedia.org/wiki/Texture_compression</a> </li> 
 * </ul>
	 * @return value of textureCompression field
	 */
	public String getTextureCompression();

	/**
	 * Assign String enumeration value ("DEFAULT"|"FASTEST"|"HIGH"|"LOW"|"MEDIUM"|"NICEST") ['DEFAULT'|'FASTEST'|'HIGH'|'LOW'|'MEDIUM'|'NICEST'] to inputOutput SFString field named <i>textureCompression</i>.
	 * <br><br>
	 * <i>Tooltip:</i> textureCompression indicates compression algorithm selection mode. Warning: do not wrap extra quotation marks around these SFString enumeration values, since "quotation" "marks" are only used for MFString values. Hint: see X3D Specification Table 18.10 Texture compression modes http://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/texturing.html#t-TextureCompressionModes for details. Hint: Texture compression https://en.wikipedia.org/wiki/Texture_compression
	 * @param newValue is new value for the textureCompression field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setTextureCompression(String newValue);

	/**
	 * Provide float value within allowed range of [0,1] from inputOutput SFFloat field named <i>texturePriority</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  [0,1] texturePriority defines relative priority for this texture when allocating texture memory, an important rendering resource in graphics-card hardware. Default value 0 is lowest, 1 is highest.  * <br>

	 * @return value of texturePriority field
	 */
	public float getTexturePriority();

	/**
	 * Assign float value within allowed range of [0,1] to inputOutput SFFloat field named <i>texturePriority</i>.
	 * <br><br>
	 * <i>Tooltip:</i> [0,1] texturePriority defines relative priority for this texture when allocating texture memory, an important rendering resource in graphics-card hardware. Default value 0 is lowest, 1 is highest.
	 * @param newValue is new value for the texturePriority field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public TextureProperties setTexturePriority(float newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextureProperties setDEF(String newValue);


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
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextureProperties setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link TextureProperties} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public TextureProperties setCssClass(String newValue);

}
