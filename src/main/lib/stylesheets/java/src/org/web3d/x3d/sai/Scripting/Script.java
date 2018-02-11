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

package org.web3d.x3d.sai.Scripting;

import java.util.*;
import org.web3d.x3d.sai.*;  // making sure #2
import org.web3d.x3d.sai.Core.*;

/**
 * Abstract node interface, defined by X3D specification to support X3D Java interoperability.
 * 
 * <br><br>
 * <i>X3D node tooltip</i>: Script contains author-programmed event behaviors for a scene. Define the script input-output event interface by including &amp;lt;field/&amp;gt; elements. Scripting code is embedded in a child CDATA node or (deprecated) in the url field. Optionally supported programming languages are ECMAScript (JavaScript) and Java (via url to a myNode.class file).
 * <ul>
 *  <li> <i>Hint:</i> insert a CDATA node to contain source code embedded within an X3D scene. </li> 
 *  <li> <i>Hint:</i> a contained CDATA block for source code protects whitespace, line breaks, and literal characters (such as &amp; for ampersand character, &amp;lt; for less-than-sign character, and &amp;gt; for greater-than-sign character) from unintended escape-character modifications by XML parsers. </li> 
 *  <li> <i>Warning:</i> strict order is required for contained constructs: first field declarations, then IS/connect statements (if any), and finally CDATA source-code block. </li> 
 *  <li> <i>Hint:</i>  X3D Scene Authoring Hints, Scripts <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts</a> </li> 
 * </ul>
 * <br>
 * <i>Package hint:</i>  This interface is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/concretes.html#Script" target="_blank">SAI Java Specification: TODO</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/scripting.html#Script" target="blank">X3D Abstract Specification: Script</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#Script" target="_blank">X3D Tooltips: Script</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts" target="_blank">X3D Scene Authoring Hints: Scripts</a>
 */
public interface Script extends X3DScriptNode
{
	// ==== Accessor methods: strongly typed get/set methods for compile-time strictness

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>directOutput</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Set directOutput true if Script has field reference(s) of type SFNode/MFNode, and also uses direct access to modify attributes of a referenced node in the Scene.
 * <ul>
 *  <li> <i>Hint:</i> set directOutput true if Script dynamically establishes or breaks ROUTEs. </li> 
 *  <li> <i>Hint:</i> directOutput is a browser hint to avoid overoptimizing referenced nodes, since a Script might directly change attribute values in referenced nodes without ROUTEd events. </li> 
 *  <li> <i>Hint:</i>  directOutput false means Script cannot modify referenced nodes or change ROUTEs. </li> 
 * </ul>
	 * @return value of directOutput field
	 */
	public boolean getDirectOutput();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>directOutput</i>.
	 * <br><br>
	 * <i>Tooltip:</i> Set directOutput true if Script has field reference(s) of type SFNode/MFNode, and also uses direct access to modify attributes of a referenced node in the Scene. Hint: set directOutput true if Script dynamically establishes or breaks ROUTEs. Hint: directOutput is a browser hint to avoid overoptimizing referenced nodes, since a Script might directly change attribute values in referenced nodes without ROUTEd events. Hint: directOutput false means Script cannot modify referenced nodes or change ROUTEs.
	 * @param newValue is new value for the directOutput field.
	 * @return {@link Script} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Script setDirectOutput(boolean newValue);

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
	 * @return {@link Script} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Script setMetadata(X3DMetadataObject newValue); // acceptable node types: X3DMetadataObject

	/**
	 * Provide boolean value from initializeOnly SFBool field named <i>mustEvaluate</i>.
	 * <br><br>
	 * <i>Tooltip:</i> If mustEvaluate false, then the X3D player may delay sending input events to Script until output events are needed. If mustEvaluate true, then Script must receive input events immediately without any event-aggregation delays.
 * <ul>
 *  <li> <i> Hint:</i>  set mustEvaluate true when sending/receiving values via the network. </li> 
 * </ul>
	 * @return value of mustEvaluate field
	 */
	public boolean getMustEvaluate();

	/**
	 * Assign boolean value to initializeOnly SFBool field named <i>mustEvaluate</i>.
	 * <br><br>
	 * <i>Tooltip:</i> If mustEvaluate false, then the X3D player may delay sending input events to Script until output events are needed. If mustEvaluate true, then Script must receive input events immediately without any event-aggregation delays. Hint: set mustEvaluate true when sending/receiving values via the network.
	 * @param newValue is new value for the mustEvaluate field.
	 * @return {@link Script} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public Script setMustEvaluate(boolean newValue);

	/**
	 * Provide array of String results from inputOutput MFString field named <i>url</i>.
	 * <br><br>
	 * <i>Tooltip:</i> List of address links for runnable script files.
 * <ul>
 *  <li> <i>Hint:</i> browsers are not required to support any particular scripting language, but ECMAScript (JavaScript) is widely supported. </li> 
 *  <li> <i>Hint:</i> equivalent script code written in multiple programming languages can be provided for portability, the first runnable version is chosen at run time. </li> 
 *  <li> <i>Hint:</i> X3D Scene Authoring Hints, Scripts <br> <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts" target="_blank">http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts</a> </li> 
 *  <li> <i>Warning:</i> source code can be placed in url attribute but may be unparsable due to escaping of special characters and elimination of line breaks (causing comments to nullify follow-on code). Use contained CDATA section instead for embedding source code. </li> 
 *  <li> <i>Hint:</i> if both url field and CDATA section are provided simultaneously, the url field is processed first. This approach allows utilization of update modifications or live queries in external scripts, while still providing reliable script source as a fallback alternative within the model itself. </li> 
 *  <li> <i>Hint:</i> X3D XML Encoding, 4.3.13 Encapsulating Script node code <br> <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#EncapsulatingScriptNodeCode" target="_blank">http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#EncapsulatingScriptNodeCode</a> </li> 
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
	 * <i>Tooltip:</i> List of address links for runnable script files. Hint: browsers are not required to support any particular scripting language, but ECMAScript (JavaScript) is widely supported. Hint: equivalent script code written in multiple programming languages can be provided for portability, the first runnable version is chosen at run time. Hint: X3D Scene Authoring Hints, Scripts http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Scripts Warning: source code can be placed in url attribute but may be unparsable due to escaping of special characters and elimination of line breaks (causing comments to nullify follow-on code). Use contained CDATA section instead for embedding source code. Hint: if both url field and CDATA section are provided simultaneously, the url field is processed first. This approach allows utilization of update modifications or live queries in external scripts, while still providing reliable script source as a fallback alternative within the model itself. Hint: X3D XML Encoding, 4.3.13 Encapsulating Script node code http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#EncapsulatingScriptNodeCode Hint: MFString arrays can have multiple values, so separate each individual string by quote marks "http://www.web3d.org" "http://www.web3d.org/about" "etc." Hint: alternative XML encoding for quotation mark " is &amp;quot; (which is an example of a character entity). Warning: strictly match directory and filename capitalization for http links! This is important for portability. Some operating systems are forgiving of capitalization mismatches, but http/https url addresses and paths in Unix-based operating systems are all case sensitive and intolerant of uppercase/lowercase mismatches. Hint: can replace embedded blank(s) in url queries with %20 for each blank character. Hint: X3D Scene Authoring Hints, urls http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#urls
	 * @param newValue is new value for the url field.
	 * @return {@link Script} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Script setUrl(String[] newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes. Hint: DEF name is needed or else ROUTEs cannot connect Script node interfaces. Hint: descriptive DEF names improve clarity and help document a model. Hint: well-defined names can simplify design and debugging through improved author understanding. Hint: X3D Scene Authoring Hints, Naming Conventions http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions
	 * <br><br>
	 *  Note that setting the DEF value clears the USE value.
	 * @param newValue is new value for the DEF field.
	 * @return {@link Script} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Script setDEF(String newValue);


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
	 * @return {@link Script} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Script setUSE(String newValue);


	/**
	 * Assign String value to inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets. Warning: currently the class attribute is only supported in XML encoding of X3D scenes. Hint: W3C Cascading Style Sheets https://www.w3.org/Style/CSS
	 * @param newValue is new value for the class field.
	 * @return {@link Script} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public Script setCssClass(String newValue);

}
