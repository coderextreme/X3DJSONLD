package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d. </p>
 <p> Related links: <a href="../../../development/ProtoTagDtdDeclarationExamples.java">ProtoTagDtdDeclarationExamples.java</a> source, <a href="../../../development/ProtoTagDtdDeclarationExamplesIndex.html" target="_top">ProtoTagDtdDeclarationExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ProtoTagDtdDeclarationExamples.x3d">ProtoTagDtdDeclarationExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 April 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> e-mail </i> </td>
			<td> brutzman@nps.navy.mil </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> You must view full source of the DTD declarations (ProtoTagDtdDeclarationExamples.x3d.txt) to fully understand validation techniques in this file. </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> internal subset deficiency: nodeType attributes need to be converted to containerField attributes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> ProtoTagDtdDeclarationExamples.x3d.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> SpinGroupInternalSubsetDeclaration.x3d.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
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

public class ProtoTagDtdDeclarationExamples
{
	/** Default constructor to create this object. */
	public ProtoTagDtdDeclarationExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ProtoTagDtdDeclarationExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 April 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName("e-mail").setContent("brutzman@nps.navy.mil"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Provides Prototype XML-tag-definition examples to demonstrate DTD modularization and extensibility in X3D scenes. Also see SpinGroupInternalSubsetDeclaration.x3d"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("You must view full source of the DTD declarations (ProtoTagDtdDeclarationExamples.x3d.txt) to fully understand validation techniques in this file."))
    .addMeta(new meta().setName(meta.NAME_ERROR      ).setContent("internal subset deficiency: nodeType attributes need to be converted to containerField attributes."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ProtoTagDtdDeclarationExamples.x3d.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("SpinGroupInternalSubsetDeclaration.x3d.txt"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ProtoTagDtdDeclarationExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ********************************************************************* ")
    .addComments(" *** Step 5: Copy/edit ProtoDeclare, (optionally ProtoInstance) *** ")
    .addComments(" *** and the tagset version for your nodes of interest. *** ")
    .addComments(" *** When instantiating field Node/Nodes or field values, *** ")
    .addComments(" *** use fieldValue tags to override the initial values. *** ")
    .addComments(" *** The following example content instantiates prototype *** ")
    .addComments(" *** NewTransformExample using tags and ProtoInstance. *** ")
    .addComments(" ********************************************************************* ")
    .addComments(" Declaring the NewTransformExample PROTO: ")
    .addChild(new ProtoDeclare("NewTransformExample").setName("NewTransformExample")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addChild(new WorldInfo().setInfo(new String[] {"overridden at run time"}))))
      .setProtoBody(new ProtoBody()
        .addComments(" Transform is first node, which determines node type, and encloses children for instances. ")
        .addChild(new Transform("InitialTransform")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))))))
    .addComments(" Instantiating the NewTransformExample PROTO using a ProtoInstance tag: ")
    .addChild(new ProtoInstance("NewTransformExample").setContainerField("children")
      .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,1.5,0.0)))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.1,0.8,0.8)))
          .setGeometry(new Text().setString(new String[] {"ProtoTagDtdDeclaration Examples","using a regular ProtoInstance"})
            .setFontStyle(new FontStyle("FS").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.7))))))
    .addComments(" Instantiating the NewTransformExample node using a customized tag: ")
    .addChild(new NewTransformExample().setCenter(0.0,0.0,0.0).setRotation(0.0,0.0,1.0,0.0).setScale(1.0,1.0,1.0).setScaleOrientation(0.0,0.0,1.0,0.0).setTranslation(0.0,-0.5,0.0)
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.1,0.8,0.2)))
          .setGeometry(new Text().setString(new String[] {"plus header-declared XML tag from","XML document subset declaration"})
            .setFontStyle(new FontStyle().setUSE("FS"))))))
    .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
      .addChild(new Anchor().setDescription("Click to view source (ProtoTagDtdDeclarationExamples.x3d.txt)").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"ProtoTagDtdDeclarationExamples.x3d.txt","https://www.web3d.org/x3d/content/examples/development/ProtoTagDtdDeclarationExamples.x3d.txt"})
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.8,0.4,0.1)))
          .setGeometry(new Text().setString(new String[] {"(click to see source)"})
            .setFontStyle(new FontStyle().setUSE("FS")))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ProtoTagDtdDeclarationExamples model
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
        X3D thisExampleX3dModel = new ProtoTagDtdDeclarationExamples().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ProtoTagDtdDeclarationExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ProtoTagDtdDeclarationExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
