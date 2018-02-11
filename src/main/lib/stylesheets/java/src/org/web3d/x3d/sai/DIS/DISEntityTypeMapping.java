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

package org.web3d.x3d.sai.DIS;


import org.web3d.x3d.sai.Core.X3DInfoNode;
import org.web3d.x3d.sai.Networking.X3DUrlObject;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: DISEntityTypeMapping provides a best-match mapping from DIS ESPDU entity type information to a specific X3D model, thus providing a visual and behavioral representation that best matches the entity type. Fields are processed in order: kind, domain, country, category, subcategory, specific, extra.
 * <ul>
 *  <li> <i>Hint:</i> values set to zero are wildcards, matching any received value. </li> 
 *  <li> <i>Hint:</i> DISEntityTypeMapping is contained by a DISEntityManager node. </li> 
 *  <li> <i>Hint:</i> DisEntityManager ESPDU packets use the IEEE Distributed Interactive Simulation (DIS) protocol. </li> 
 *  <li> <i>Hint:</i> Savage Developers Guide on DIS <br> <a href="https://savage.nps.edu/Savage/developers.html#DIS" target="_blank">https://savage.nps.edu/Savage/developers.html#DIS</a> </li> 
 *  <li> <i>Hint:</i> X3D for Advanced Modeling (X3D4AM) slideset <br> <a href="http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf" target="_blank">http://x3dgraphics.com/slidesets/X3dForAdvancedModeling/DistributedInteractiveSimulation.pdf</a> </li> 
 *  <li> <i>Warning:</i>  requires X3D profile='Full' or else include &amp;lt;component name='DIS' level='2'/&amp;gt; </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#DISEntityTypeMapping" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/dis.html#DISEntityTypeMapping" target="blank">X3D Abstract Specification: DISEntityTypeMapping</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#DISEntityTypeMapping" target="_blank">X3D Tooltips: DISEntityTypeMapping</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public interface DISEntityTypeMapping extends X3DInfoNode, X3DUrlObject
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide int value within allowed range of [0,255] from initializeOnly SFInt32 field named <i>category</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for main category that describes the entity, semantics of each code varies according to domain. See DIS Enumerations values.  * <br>

	 * @return value of category field
	 */
	public int getCategory();

	/**
	 * Assign int value within allowed range of [0,255] to initializeOnly SFInt32 field named <i>category</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for main category that describes the entity, semantics of each code varies according to domain. See DIS Enumerations values.
	 * @param newValue is new value for the category field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public DISEntityTypeMapping setCategory(int newValue);

	/**
	 * Provide int value within allowed range of [0,65535] from initializeOnly SFInt32 field named <i>country</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for country to which the design of the entity or its design specification is attributed.  * <br>

	 * @return value of country field
	 */
	public int getCountry();

	/**
	 * Assign int value within allowed range of [0,65535] to initializeOnly SFInt32 field named <i>country</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for country to which the design of the entity or its design specification is attributed.
	 * @param newValue is new value for the country field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public DISEntityTypeMapping setCountry(int newValue);

	/**
	 * Provide int value within allowed range of [0,255] from initializeOnly SFInt32 field named <i>domain</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.  * <br>

	 * @return value of domain field
	 */
	public int getDomain();

	/**
	 * Assign int value within allowed range of [0,255] to initializeOnly SFInt32 field named <i>domain</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for domain in which the entity operates: LAND, AIR, SURFACE, SUBSURFACE, SPACE or OTHER.
	 * @param newValue is new value for the domain field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public DISEntityTypeMapping setDomain(int newValue);

	/**
	 * Provide int value within allowed range of [0,255] from initializeOnly SFInt32 field named <i>extra</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Any extra information required to describe a particular entity. The contents of this field shall depend on the type of entity represented.  * <br>

	 * @return value of extra field
	 */
	public int getExtra();

	/**
	 * Assign int value within allowed range of [0,255] to initializeOnly SFInt32 field named <i>extra</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Any extra information required to describe a particular entity. The contents of this field shall depend on the type of entity represented.
	 * @param newValue is new value for the extra field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public DISEntityTypeMapping setExtra(int newValue);

	/**
	 * Provide int value within allowed range of [0,255] from initializeOnly SFInt32 field named <i>kind</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.  * <br>

	 * @return value of kind field
	 */
	public int getKind();

	/**
	 * Assign int value within allowed range of [0,255] to initializeOnly SFInt32 field named <i>kind</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Enumerations value for whether entity is a PLATFORM, MUNITION, LIFE_FORM, ENVIRONMENTAL, CULTURAL_FEATURE, SUPPLY, RADIO, EXPENDABLE, SENSOR_EMITTER or OTHER.
	 * @param newValue is new value for the kind field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public DISEntityTypeMapping setKind(int newValue);

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
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public DISEntityTypeMapping setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide int value within allowed range of [0,255] from initializeOnly SFInt32 field named <i>specific</i>.
	 * <br><br>
	 * <i>Tooltip:</i>  Specific information about an entity based on the Subcategory field. See DIS Enumerations values.  * <br>

	 * @return value of specific field
	 */
	public int getSpecific();

	/**
	 * Assign int value within allowed range of [0,255] to initializeOnly SFInt32 field named <i>specific</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Specific information about an entity based on the Subcategory field. See DIS Enumerations values.
	 * @param newValue is new value for the specific field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public DISEntityTypeMapping setSpecific(int newValue);

	/**
	 * Provide int value within allowed range of [0,255] from initializeOnly SFInt32 field named <i>subcategory</i>.
	 * @return value of subcategory field
	 */
	public int getSubcategory();

	/**
	 * Assign int value within allowed range of [0,255] to initializeOnly SFInt32 field named <i>subcategory</i>.
	 * @param newValue is new value for the subcategory field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public DISEntityTypeMapping setSubcategory(int newValue);

	/**
	 * Provide array of String results from inputOutput MFString field named <i>url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Name of the X3D model of interest, for example "MyFastBoat.x3d".
 * <ul>
 *  <li> <i>Hint:</i> MFString arrays can have multiple values, so separate each individual string by quote marks <br> "<a href="http://www.web3d.org" target="_blank">http://www.web3d.org</a>" <br> "<a href="http://www.web3d.org/about" target="_blank">http://www.web3d.org/about</a>" "etc." </li> 
 *  <li> <i>Hint:</i> alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). </li> 
 *  <li> <i>Warning:</i> strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. </li> 
 *  <li> <i>Hint:</i> can replace embedded blank(s) in url queries with %20 for each blank character. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, urls <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls</a> </li> 
 * </ul>
	 * @return value of url field
	 */
	@Override
	public String[] getUrl();

	/**
	 * Assign String array to inputOutput MFString field named <i>url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Name of the X3D model of interest, for example "MyFastBoat.x3d". Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Hint: X3D Scene Authoring Hints, urls http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls
	 * @param newValue is new value for the url field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public DISEntityTypeMapping setUrl(String[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public DISEntityTypeMapping setDEF(String newValue);


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
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public DISEntityTypeMapping setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link DISEntityTypeMapping} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public DISEntityTypeMapping setCssClass(String newValue);

}
