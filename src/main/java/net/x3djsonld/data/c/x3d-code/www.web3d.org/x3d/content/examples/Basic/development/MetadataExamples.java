package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97. </p>
 <p> Related links: <a href="../../../development/MetadataExamples.java">MetadataExamples.java</a> source, <a href="../../../development/MetadataExamplesIndex.html" target="_top">MetadataExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/MetadataExamples.x3d">MetadataExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> hint </i> </td>
			<td> Metadata nodes may be repositioned by a few lines if VRML97 parent node does not support the children field. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> The external prototype declarations in this file are only intended for use with browsers that do not already support the Metadata nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/MetadataPrototypes.x3d">MetadataPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman
 */

public class MetadataExamples
{
	/** Default constructor to create this object. */
	public MetadataExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("MetadataExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Examples showing use of new X3D Metadata nodes in Core component (MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString). Also provided: external prototype definitions for backwards compatibility with VRML 97."))
    .addMeta(new meta().setName(meta.NAME_HINT       ).setContent("Metadata nodes may be repositioned by a few lines if VRML97 parent node does not support the children field."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("The external prototype declarations in this file are only intended for use with browsers that do not already support the Metadata nodes."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("MetadataPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString)"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addComments(" Do not copy these ExternProtoDeclare statements, they are only included for preparation of X3dToVrml97.xslt stylesheet mappings for backwards compatibility. ")
    .addComments(" ==================== ")
    .addChild(new ExternProtoDeclare("MetadataBoolean").setName("MetadataBoolean").setAppinfo("MetadataBoolean contains a list of booleans in the value field.").setUrl(new String[] {"MetadataPrototypes.x3d#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataBoolean","MetadataPrototypes.wrl#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataBoolean"})
      .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value"))
      .addField(new field().setName("value").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value"))
      .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default value"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("MetadataDouble").setName("MetadataDouble").setAppinfo("MetadataDouble contains a list of double-precision floating-point numbers in the value field.").setUrl(new String[] {"MetadataPrototypes.x3d#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataDouble","MetadataPrototypes.wrl#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataDouble"})
      .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("value").setType(field.TYPE_MFDOUBLE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("MetadataFloat").setName("MetadataFloat").setAppinfo("MetadataFloat contains a list of floating-point numbers in the value field.").setUrl(new String[] {"MetadataPrototypes.x3d#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataFloat","MetadataPrototypes.wrl#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataFloat"})
      .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("value").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("MetadataInteger").setName("MetadataInteger").setAppinfo("MetadataInteger contains a list of 32-bit integer numbers in the value field.").setUrl(new String[] {"MetadataPrototypes.x3d#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataInteger","MetadataPrototypes.wrl#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataInteger"})
      .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("value").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_value").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("MetadataSet").setName("MetadataSet").setAppinfo("MetadataSet contains a list of nodes in the value field.").setUrl(new String[] {"MetadataPrototypes.x3d#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataSet","MetadataPrototypes.wrl#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataSet"})
      .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("value").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("MetadataString").setName("MetadataString").setAppinfo("MetadataString contains a set of strings in the value field.").setUrl(new String[] {"MetadataPrototypes.x3d#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataString","MetadataPrototypes.wrl#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataString"})
      .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("value").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addComments(" =========================== ")
    .addComments(" Example Metadata node usage ")
    .addComments(" =========================== ")
    .addChild(new Group()
      .setMetadata(new MetadataBoolean("MetadataBooleanInstance").setName("sample boolean data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataBoolean").setValue(new boolean[] {true,false,true}))
      .addChild(new Transform()
        .setMetadata(new MetadataDouble("MetadataDoubleInstance").setName("sample double data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataDouble").setValue(new double[] {1.0,2.0,3.0})))
      .addChild(new Transform()
        .setMetadata(new MetadataFloat().setName("sample float data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataFloat").setValue(new double[] {1.0,2.0,3.0})
          .setMetadata(new MetadataDouble().setUSE("MetadataDoubleInstance"))
          .addComments(" metadata child of metadata node (also note nested PROTO here, when translated) ")))
      .addChild(new Transform()
        .setMetadata(new MetadataInteger().setName("sample integer data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataInteger").setValue(new int[] {1,2,3})))
      .addChild(new Transform()
        .setMetadata(new MetadataSet().setName("sample data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataSet")
          .setMetadata(new MetadataString().setName("containerFieldDefaultTest").setValue(new String[] {"This initial node is containerField=metadata on the MetadataSet, not part of the containerField=value set"}))
          .addComments(" be sure to set containerField='value' for all members of the contained set! ")
          .setMetadata(new MetadataBoolean().setName("MetadataSetValue1").setValue(new boolean[] {true,false,true}))
          .setMetadata(new MetadataDouble().setName("MetadataSetValue2").setValue(new double[] {0.0,1.0,2.0}))
          .setMetadata(new MetadataFloat().setName("MetadataSetValue3").setValue(new double[] {3.0,4.0,5.0}))
          .setMetadata(new MetadataInteger().setName("MetadataSetValue4").setValue(new int[] {6,7,8}))
          .setMetadata(new MetadataString().setName("MetadataSetValue5").setValue(new String[] {"string1","string2"}))))
      .addChild(new Transform()
        .setMetadata(new MetadataString().setName("sample string data").setReference("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataString").setValue(new String[] {"one two three","four five six"})))
      .addChild(new Group()
        .addChild(new WorldInfo("TestMetadataChild")
          .setMetadata(new MetadataString().setName("Backwards compatibility note").setValue(new String[] {"Metadata nodes are converted into comments when children [ ] field is not available in parent node"})))))
    .addComments(" ==================== ")
    .addChild(new Anchor("LinkToExamples").setDescription("link to examples").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"MetadataExamples.html","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamplesIndex.html"})
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.6,0.2)))
        .setGeometry(new Text().setString(new String[] {"MetadataExamples is a developmental file to define","EXTERNPROTO signatures in VRML 97 syntax","Example usage of Metadata nodes also included.","","Click text to view source"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return MetadataExamples model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new MetadataExamples().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.MetadataExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.MetadataExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
