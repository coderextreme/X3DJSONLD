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

package org.web3d.x3d.jsail.Core;


import org.web3d.x3d.sai.Core.X3DMetadataObject;
import org.web3d.x3d.jsail.*;
import java.util.*;

/**
 * Utility class to enable adding one or more comment strings as a child node, treated as an X3D statement.
 * 
 * <br><br>

 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class CommentsBlock extends org.web3d.x3d.jsail.X3DConcreteStatement implements org.web3d.x3d.sai.Core.X3DChildNode
{
	/** required by internal interface, empty list provided since no children array present in this class */
    private ArrayList<String> commentsList; 

	/** String constant <i>NAME</i> provides name of this element. */
	@SuppressWarnings("FieldNameHidesFieldInSuperclass")
	protected static final String NAME = "CommentsBlock";
				
	/** Provides name of this element: CommentsBlock.
	 * @return name of this element
	 */
	@Override
	public final String getElementName()
	{
		return NAME;
	}
	/** String constant <i>COMPONENT</i> defines X3D component for comments: <i>Core</i>. */
	public static final String COMPONENT = "Core";

	/** Defines X3D component for comments: <i>Core</i>.
	 * @return X3D component for comments
	 */
	@Override
	public final String getComponent()
	{
		return COMPONENT;
	}

	/** Integer constant <i>LEVEL</i> provides default X3D <i>Core</i> component level for comments: <i>1</i>. */
	public static final int LEVEL = 1;

	/** Provides default X3D component level for comments: <i>1</i>.
	 * @return default X3D component level for comments
	 */
	@Override
	public final int getComponentLevel()
	{
		return LEVEL;
	}

	/** Constructor for CommentsBlock. */
	public CommentsBlock()
	{
	  initialize();
	};

	/** Constructor for CommentsBlock to initialize with initial comment string.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @param newComment initial comment, with no comment delimiters needed
	 */
	public CommentsBlock(String newComment)
	{
		initialize();
		commentsList.add(newComment);
	};

	/** Constructor for CommentsBlock to initialize with initial comments array.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @param newComments[] initial comments, with no comment delimiters needed
	 */
	public CommentsBlock(String newComments[])
	{
		initialize();
		if ((newComments != null) && (newComments.length > 0))
			commentsList.addAll(Arrays.asList(newComments));
	};
				
	/** Constructor for CommentsBlock to initialize with initial comments list.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @param newCommentsList initial comments, with no comment delimiters needed
	 */
	public CommentsBlock(ArrayList<String> newCommentsList)
	{
		initialize();
		commentsList.addAll(newCommentsList);
	};

	/**
	 * Add single comment to this CommentsBlock.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @param newComment initial value, with no comment delimiters needed
	 * @return {@link CommentsBlock} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CommentsBlock addComments(String newComment)
	{
		commentsList.add(newComment);
		return this;
	}
	/**
	 * Add comments as String[] array to this CommentsBlock.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @param newComments array of comments, with no comment delimiters needed
	 * @return {@link CommentsBlock} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CommentsBlock addComments(String[] newComments)
	{
		commentsList.addAll(Arrays.asList(newComments));
		return this;
	}
	/**
	 * Add comments array as ArrayList of String values to this CommentsBlock.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @param newCommentsList list of comments, with no comment delimiters needed
	 * @return {@link CommentsBlock} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CommentsBlock addComments(ArrayList<String> newCommentsList)
	{
		commentsList.addAll(newCommentsList);
		return this;
	}
	/**
	 * Add CommentsBlock to this CommentsBlock.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @param newCommentsBlock block of comments to add, with no comment delimiters needed
	 * @return {@link CommentsBlock} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	@Override
	public CommentsBlock addComments(CommentsBlock newCommentsBlock)
	{
		commentsList.addAll(Arrays.asList(newCommentsBlock.toStrings()));
		return this;
	}
	
	/**
	 * Provide CommentsBlock as string array.
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @return all comments
	 */
	public String[] toStrings()
	{
		return (String[]) commentsList.toArray();
	}
	
	/**
	 * Provide CommentsBlock as ArrayList of string(s).
	 * No need to include <code>&lt;!--</code> XML comment delimiters <code>--&gt;</code> around new comments.
	 * @return all comments
	 */
	public ArrayList<String> toStringList()
	{
		return commentsList;
	}
				
	/** Initialize this CommentsBlock instance. */
	@Override
	public final void initialize()
	{
		super.initialize();
		commentsList = new ArrayList<>(); // reset
	}
	/** Clear all comments from this CommentsBlock.
	 * @return {@link CommentsBlock} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public CommentsBlock clear()
	{
		initialize();
		return this;
	}
	/** Utility method to adjust XML comment delimiters <code>&lt;!--</code> and <code>--&gt;</code>, also replace invalid &quot;<code>--</code>&quot; characters with &quot;<code>- -</code>&quot;.
	 * Typically only used internally when exporting via toStringX3D() methods to avoid (illegal) nested XML comments.
	 * @param newComment is comment to be cleaned
	 * @return cleaned-up string with no problematic XML comment characters embedded
	 */
	public static String cleanXmlCommentDelimiters (String newComment)
	{
		String result = newComment;
		if (result == null)
			result = new String();
		if (result.contains("--"))
		{
			result = result.replaceAll("--","- -");
			// TODO consider log entry
		}
		return result;
	}

	// Additional utility methods for this class ==============================

		
	/**
	 * Recursive method to provide X3D string serialization of this model subgraph, utilizing XML encoding and conforming to X3D Canonical Form.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_X3D
	 * @see X3DObject#FILE_EXTENSION_XML
	 * @see X3DObject#toStringXML()
	 * @see X3DObject#toFileXML(String)
	 * @see X3DObject#toFileX3D(String)
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/X3D_XML.html">X3D XML Encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-3/V3.3/Part03/concepts.html#X3DCanonicalForm">X3D Compressed Binary Encoding: X3D Canonical Form</a>
	 * @return X3D string
	 */
	@Override
	public String toStringX3D(int indentLevel)
	{
		StringBuilder indent = new StringBuilder();
		int  indentIncrement = ConfigurationProperties.getIndentIncrement();
		char indentCharacter = ConfigurationProperties.getIndentCharacter();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		StringBuilder stringX3D = new StringBuilder();

		for (String comment : commentsList)
		{
                    if (ConfigurationProperties.isNormalizeCommentWhitespace())
                    {
                        // https://stackoverflow.com/questions/3958955/how-to-remove-duplicate-white-spaces-in-string-using-java
                        comment = comment.replaceAll("\\s+", " ");
                    }
                    stringX3D.append(indent).append("<!-- ").append(CommentsBlock.cleanXmlCommentDelimiters(comment).trim()).append(" -->").append("\n");
		}
		return stringX3D.toString();
	}

	/**
	 * Recursive method to provide ClassicVRML string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_CLASSICVRML
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/X3D_ClassicVRML.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/grammar.html">Extensible 3D (X3D) encodings Part 2: Classic VRML encoding, Annex A: Grammar</a>
	 * @return ClassicVRML string
	 */
	@Override
	public String toStringClassicVRML(int indentLevel)
	{
		StringBuilder stringClassicVRML = new StringBuilder();
		StringBuilder  indent = new StringBuilder();
		char  indentCharacter = ConfigurationProperties.getIndentCharacter();
		int   indentIncrement = ConfigurationProperties.getIndentIncrement();
		for (int i = 0; i < (indentLevel * indentIncrement); i++)
			indent.append(indentCharacter); // level of indentation for this level

		for (String comment : commentsList)
		{
                    if (ConfigurationProperties.isNormalizeCommentWhitespace())
                    {
                        // https://stackoverflow.com/questions/3958955/how-to-remove-duplicate-white-spaces-in-string-using-java
                        comment = comment.replaceAll("\\s+", " ");
                    }
                    // ensure that comments with embedded line breaks have # character at start of new line
                    stringClassicVRML.append("# ").append(comment.replaceAll("\n", "\n#\t")).append("\n").append(indent);
		}
		return stringClassicVRML.toString();
	}

	/**
	 * Recursive method to provide VRML97 string serialization.
	 * @param indentLevel number of levels of indentation for this element
	 * @see X3DObject#FILE_EXTENSION_VRML97
	 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html#VRML">X3D Resources: Virtual Reality Modeling Language (VRML) 97</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772/V2.0/index.html">Virtual Reality Modeling Language (VRML) 97 specification</a>
	 * @see <a href="http://www.web3d.org/documents/specifications/14772-1/V2.1/index.html">VRML 97 v2.1 Amendment</a>
	 * @return VRML97 string
	 */
	@Override
	public String toStringVRML97(int indentLevel)
	{
		return toStringClassicVRML(indentLevel);
	}

	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue)
	{
		return findElementByNameValue(nameValue, ""); // empty string is wildcard, any element match is allowed
	}
								
	/**
	 * Recursive method to provide object reference to node or statement by name attribute, if found as part of this element or in a contained element.
	 * Elements with name fields include meta, Metadata* nodes, field/fieldValue, ProtoDeclare/ExternProtoDeclare/ProtoInstance, HAnim nodes.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same name, this method does not handle that case.
	 * @see #findNodeByDEF(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @return object reference to found element, null otherwise
	 */
	@Override
	public X3DConcreteElement findElementByNameValue(String nameValue, String elementName)
	{
		if ((nameValue == null) || nameValue.isEmpty())
		{
			String errorNotice = "findElementByNameValue(\"\", " + elementName + ") cannot use empty string to find a name attribute";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node or statement with given name attribute is found, meaning both objects are attached to same scene graph.
	 * @param nameValue is value of the name field being searched for in this element and child elements(if any)
	 * @param elementName identifies the element of interest (meta MetadataString ProtoDeclare CADassembly ProtoInstance HAnimHumanoid etc.)
	 * @see #findElementByNameValue(String, String)
	 * @return whether node is found
	 */
	public boolean hasElementByNameValue(String nameValue, String elementName)
	{
		return (findElementByNameValue(nameValue, elementName) != null);
	}

	/**
	 * Recursive method to provide object reference to node by DEF, if found as this node or in a contained node.
	 * <br ><br >
	 * <i>Warning:</i> first start with findAncestorSceneObject() to check entire scene graph, or findAncestorX3DObject() to check entire model document.
	 * <br ><br >
	 * <i>Warning:</i> more than one element may be found that has the same DEF, this method does not handle that case.
	 * @see #findElementByNameValue(String)
	 * @see X3DConcreteElement#hasAncestorSceneObject()
	 * @see org.web3d.x3d.jsail.X3DConcreteElement#findAncestorX3DObject()
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @return object reference to found node, null otherwise
	 */
	@Override
	public X3DConcreteNode findNodeByDEF(String DEFvalue)
	{
		if ((DEFvalue == null) || DEFvalue.isEmpty())
		{
			String errorNotice = "findNodeByDEF(\"\") cannot use empty string to find a name";
			validationResult.append(errorNotice).append("\n");
			throw new org.web3d.x3d.sai.InvalidFieldValueException(errorNotice);
		}
		return null; // not found
	}
	/**
	 * Recursive method to determine whether node with DEFvalue is found, meaning both objects are attached to same scene graph.
	 * @param DEFvalue is value of the name field being searched for in this element and child elements(if any)
	 * @see #findNodeByDEF(String)
	 * @return whether node is found
	 */
	public boolean hasNodeByDEF(String DEFvalue)
	{
		return (findNodeByDEF(DEFvalue) != null);
	}

		
	/**
	 * Recursive method to validate this element plus all contained nodes and statements.
	 * @return validation results (if any)
	 */
	@Override
	public String validate()
	{
		validationResult = new StringBuilder(); // prepare for updated results

		return validationResult.toString();
	}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @return null, this method is deprecated and has no effect */
@Deprecated
@Override
public X3DMetadataObject getMetadata()
{
return null;
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public CommentsBlock	setMetadata(X3DMetadataObject newValue)
{
return this; // No action
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public CommentsBlock setDEF(String newValue)
{
return this; // no action
}
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
@Deprecated
@Override
public CommentsBlock setUSE(String newValue)
{
return this; // no action
}
@Deprecated
@Override
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, a stub method is necessary to implement X3DChildNode interface.
 * @param newValue ignored
 * @return unmodified object, this method is deprecated and has no effect */
public CommentsBlock setCssClass(String newValue)
{
return this; // no action
}

/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, it is only provided since a stub method is necessary to implement X3DChildNode interface.
 * @param fieldName ignored
 * @return empty string, this method is deprecated and has no effect */
@Deprecated
@Override
public String getFieldType(String fieldName)
{
    return "";
}
/** DO NOT USE: operation ignored since no such field exists for this element. This method has no effect, it is only provided since a stub method is necessary to implement X3DChildNode interface.
 * @param fieldName ignored
 * @return empty string, this method is deprecated and has no effect */
@Deprecated
@Override
public String getAccessType(String fieldName)
{
    return "";
}
}
