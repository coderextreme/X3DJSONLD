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

package org.web3d.x3d.jsail;


import java.util.Arrays;
import org.web3d.x3d.sai.Core.*;  // making sure #3
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;


/**
 * Abstract parent class for concrete X3D nodes, containing common methods and member variables.
 * 
 * <br><br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public abstract class X3DConcreteNode extends org.web3d.x3d.jsail.X3DConcreteElement
{
	/** IS/connect statements might be used if this node is within a ProtoBody and connections are defined between prototype fields and built-in node fields */
	private ISObject IS;

	/**
	 * Utility method to indicate whether this element is an X3D Graphics node (implementing X3DConcreteNode), returns <i>true</i>.
	 * <br><br>
	 * @see X3DConcreteNode
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/glossary.html#Node">X3D Abstract Specification, Terms and definitions: node</a>
	 * @return whether this element is an X3D Graphics node: true
	 */
	public static final boolean isNode()
	{
            // (this instanceof org.web3d.x3d.jsail.X3DConcreteNode)
            return true;
	}
	/**
	 * Utility method to indicate whether this element is an X3D Graphics statement (implementing X3DConcreteStatement), returns <i>false</i>.
	 * <br><br>
	 * @see X3DConcreteStatement
	 * @see CommentsBlock
	 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#AbstractX3DStructure">X3D Abstract Specification: 7.2.5 Abstract X3D structure</a>
	 * @return whether this element is an X3D Graphics statement: false
	 */
	public static final boolean isStatement()
	{
            //  (this instanceof org.web3d.x3d.jsail.X3DConcreteStatement) && 
            // !(this instanceof org.web3d.x3d.jsail.Core.CommentsBlock)
            return false;
	}

	// Member value declarations are encapsulated and protected, using preferred Java types for concretes library

	/** <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes.
	 * <ul>
	 * <li> <i>Hint:</i> descriptive DEF names improve clarity and help document a model. </li>
	 * <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li>
	 * </ul>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 */
	private String DEF = DEF_DEFAULT_VALUE;

	/** <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value).
	 * <ul>
	 * <li> <i>Hint:</i> USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. </li>
	 * <li> <i>Warning:</i> each USE value must match a corresponding DEF value that is defined earlier in the scene. </li>
	 * </ul>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 */
	private String USE = USE_DEFAULT_VALUE;

	/** The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets.
	 * <ul>
	 * <li> <i>Warning:</i> currently the class attribute is only supported in XML encoding of X3D scenes. </li>
	 * </ul>
	 * @see <a href="https://www.w3.org/Style/CSS">W3C Cascading Style Sheets</a> */
	private String cssClass = CLASS_DEFAULT_VALUE;

	// String constants for default field values match X3D Schema definitions

	/** SFString field named <i>DEF</i> has default value equal to an empty string. */
	public static final String DEF_DEFAULT_VALUE = "";

	/** SFString field named <i>USE</i> has default value equal to an empty string. */
	public static final String USE_DEFAULT_VALUE = "";

	/** SFString field named <i>class</i> has default value equal to an empty string. */
	public static final String CLASS_DEFAULT_VALUE = "";

	/** containerFieldOverride describes non-default field relationship of a node to its parent.
	 * Programmer usage is not ordinarily needed when using this API. */
	private String containerFieldOverride = new String();
				
	/** Initialize all member variables to default values. */
	public void initialize()
	{
		setParentObject(null);
		     DEF = DEF_DEFAULT_VALUE;
		     USE = USE_DEFAULT_VALUE;
		cssClass = CLASS_DEFAULT_VALUE;
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>DEF</i>.
	 * <br><br>
	 * <i>Tooltip:</i> DEF defines a unique ID name for this node, referenceable by other nodes.
	 * <ul>
	 * <li> <i>Hint:</i> descriptive DEF names improve clarity and help document a model. </li>
	 * <li> <i>Hint:</i> well-defined names can simplify design and debugging through improved author understanding. </li>
	 * </ul>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @return value of DEF field
	 */
	public String getDEF()
	{
		return DEF;
	}

	/**
	 * Provide String value from inputOutput SFString field named <i>USE</i>.
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value).
	 * <ul>
	 * <li> <i>Hint:</i> USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. </li>
	 * <li> <i>Warning:</i> each USE value must match a corresponding DEF value that is defined earlier in the scene. </li>
	 * </ul>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @return value of USE field
	 */
	public String getUSE()
	{
		return USE;
	}
	/**
	 * Utility method to indicate whether this element is a <i>USE</i> reference to another previously defined element (which means other fields must be empty).
	 * <br><br>
	 * <i>Tooltip:</i> USE means reuse an already DEF-ed node ID, excluding all child nodes and all other attributes (except for containerField, which can have a different value).
	 * <ul>
	 * <li> <i>Hint:</i> USE references to previously defined DEF geometry (instead of duplicating nodes) can improve performance. </li>
	 * <li> <i>Warning:</i> each USE value must match a corresponding DEF value that is defined earlier in the scene. </li>
	 * </ul>
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#NamingConventions" target="_blank">X3D Scene Authoring Hints: Naming Conventions</a>
	 * @return whether this node is a USE reference
	 */
	public boolean isUSE()
	{
		return !USE.isEmpty();
	}
	/**
	 * Provide String value from inputOutput SFString field named <i>class</i>.
	 * <br><br>
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets.
	 * <ul>
	 * <li> <i>Warning:</i> currently the class attribute is only supported in XML encoding of X3D scenes. </li>
	 * </ul>
	 * @see <a href="https://www.w3.org/Style/CSS">W3C Cascading Style Sheets</a>
	 * @return value of class field
	 */
	public String getCssClass()
	{
		return cssClass;
	}
	
	/** Protected internal superclass method to keep DEF private, scene authors should use method setDEF(newValue) instead.
	 * @param newValue is new value for the DEF field.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dTooltips.html#NMTOKEN">X3D Tooltips: type NMTOKEN</a>
	 * @see <a href="http://www.web3d.org/specifications/X3dRegularExpressions.html">X3D Regular Expressions (regexes)</a>
	 */
	protected void setConcreteDEF(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
				
		// Check that newValue parameter meets naming requirements before assigning to scene graph
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException(getElementName() + " DEF=\"" + newValue +
					"\" has an illegal value, must provide a valid NMTOKEN name string.");
		}
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println ("Warning: " + getElementName() + " DEF=\"" + newValue +
					"\" does not meet X3D naming conventions.");
		}
		DEF = newValue;
	}
	/** Protected internal superclass method to keep USE private, scene authors should use method setUse(newValue) instead.
	 * @param newValue is new value for the USE field.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dTooltips.html#NMTOKEN">X3D Tooltips: type NMTOKEN</a>
	 */
	protected final void setConcreteUSE(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment

		// Check that newValue parameter meets naming requirements before assigning to scene graph
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.isNMTOKEN(newValue))
		{
			throw new org.web3d.x3d.sai.InvalidFieldValueException(getElementName() + " USE=\"" + newValue +
					"\" has an illegal value, must provide a valid NMTOKEN name string.");
		}
		if (!newValue.isEmpty() && !org.web3d.x3d.jsail.fields.SFStringObject.meetsX3dNamingConventions(newValue))
		{
			System.out.println ("Warning: " + getElementName() + " USE=\"" + newValue +
					"\" does not meet X3D naming conventions.");
		}
		USE = newValue;
	}
	/** Protected internal superclass method to keep cssClass private, scene authors should use method setCssClass(newValue) instead.
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets.
	 * <i>Warning:</i> currently the class attribute is only supported in XML encoding of X3D scenes.
	 * @see <a href="https://www.w3.org/Style/CSS">W3C Cascading Style Sheets</a>
	 * @param newValue is new value for the cssClass field.
	 */
	protected void setConcreteCssClass(String newValue)
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		cssClass = newValue;
	}
	/** Each concrete class must independently override this abstract method to enable object-specific method pipelining.
	 * @param DEFlabel is new value for the DEF field.
	 * @return {@link X3DConcreteNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object). */
	abstract public X3DConcreteNode setDEF(String DEFlabel);

	/** Each concrete class must independently override this abstract method to enable object-specific method pipelining.
	 * <ul>
	 * <li> <i>Warning:</i> note that the <code>setUSE()</code> method on this node resets all other fields to their default values (except for containerField) and also releases all child nodes. </li>
	 * <li> <i>Warning:</i> no other operations can be performed to modify a USE node other than setting an alternate containerField value. </li>
	 * </ul>
	 * @param USEname is new value for the USE field.
	 * @return {@link X3DConcreteNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object). */
	abstract public X3DConcreteNode setUSE(String USEname);

	/** Each concrete class must independently override this abstract method to enable object-specific method pipelining.
	 * <i>Tooltip:</i> The class attribute is a space-separated list of classes, reserved for use by CSS cascading stylesheets.
	 * <ul>
	 * <li> <i>Warning:</i> currently the class attribute is only supported in XML encoding of X3D scenes. </li>
	 * </ul>
	 * @see <a href="https://www.w3.org/Style/CSS">W3C Cascading Style Sheets</a>
	 * @param cssClass is new value for the class field.
	 * @return {@link X3DConcreteNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object). */
	abstract public X3DConcreteNode setCssClass(String cssClass);

	/**
	 * Assign X3DMetadataObject instance (using a properly typed node) to inputOutput SFNode field <i>metadata</i>.
	 * @param newValue is new value for the metadata field.
	 * @return {@link X3DConcreteNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 */
	abstract public X3DConcreteNode setMetadata (X3DMetadataObject newValue);

	/**
	 * Assign X3DMetadataObject instance (using a properly typed ProtoInstanceObject) to inputOutput SFNode field <i>metadata</i>.
	 * @param newValue is new value for the metadata field.
	 * @return {@link X3DConcreteNode} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Metadata" target="_blank">X3D Scene Authoring Hints: Metadata Nodes</a>
	 */
	abstract public X3DConcreteNode setMetadata (ProtoInstanceObject newValue); // TODO
				
	/**
	 * Assign field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal
ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @param newValue is new value for the description field.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the
same node object).
	 */
	abstract public X3DConcreteNode setIS(ISObject newValue);
				
	/**
	 * Provide field named <i>IS</i> for establishing IS/connect field connections between ProtoInterface fields and internal
ProtoBody nodes.
	 * The IS statement connects node fields defined inside a ProtoBody declaration back to corresponding ProtoInterface fields.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#IS">X3D Tooltips: IS</a>
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#connect">X3D Tooltips: connect</a>
	 * @return current ISObject, if any
	 */
	abstract public ISObject getIS();

	/** containerField describes the field relationship of a node to its parent.
	 * Modification of this value is not ordinarily needed when using this API, since alternative values are provided for informational purposes.
	 * Each concrete class must independently override this array.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#containerField" target="_blank">X3D Scene Authoring Hints: containerField</a>
	 */
	public String[] containerField_ALTERNATE_VALUES = { };
				
	/** containerField describes the field relationship of a node to its parent.
	 * Modification of this value is not ordinarily needed when using this API, since alternative values are provided for informational purposes.
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#containerField" target="_blank">X3D Scene Authoring Hints: containerField</a>
	 * @return array of allowed String values
	 */
	public String[] getContainerFieldAlternateValues()
	{
		return containerField_ALTERNATE_VALUES;
	}

	/** containerField describes current field relationship of a node to its parent.
	 * Usage is not ordinarily needed when using this API.
	 * @return containerFieldOverride value, if any
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#containerField" target="_blank">X3D Scene Authoring Hints: containerField</a>
	 */
	public String getContainerFieldOverride()
	{
		return containerFieldOverride;
	}
	/** containerField describes current field relationship of a node to its parent.
	 * Usage is not ordinarily needed when using this API.
	 * TODO make this unnecessary for ProtoInstance usage
	 * @param value to set containerFieldOverride, must be allowed in containerField_ALTERNATE_VALUES
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#containerField" target="_blank">X3D Scene Authoring Hints: containerField</a>
	 * @return object reference to node
	 */
	public X3DConcreteNode setContainerFieldOverride(String value)
	{
		if ((value == null) || value.isEmpty())
		{
			 containerFieldOverride = new String();
		}
		else if (getElementName().equals("ProtoInstance") ||
				 ((containerField_ALTERNATE_VALUES != null) && Arrays.asList(containerField_ALTERNATE_VALUES).contains(value)))
		{
			 containerFieldOverride = value;
		}
		else
		{
			String errorNotice = "Invalid setContainerFieldOverride() value='" + value + 
				"', legal values for " + getElementName() + " are containerField_ALTERNATE_VALUES='" + 
				new org.web3d.x3d.jsail.fields.MFStringObject(containerField_ALTERNATE_VALUES).toStringX3D() + "'";
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		return this;
	}
	/** containerField describes current field relationship of a node to its parent.
	 * Usage is not ordinarily needed when using this API. */
	public void resetContainerFieldOverride()
	{
		containerFieldOverride = new String();
	}
}
