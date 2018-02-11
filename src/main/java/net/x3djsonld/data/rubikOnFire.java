package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> a white rubik cube. </p>
 <p> Related links: rubikOnFire.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.rubikOnFire&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d">rubikOnFire.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a white rubik cube </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author John Carlson
 */

public class rubikOnFire
{
	/** Default constructor to create this object. */
	public rubikOnFire ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("rubikOnFire.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a white rubik cube")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\"")))
    .addChild(new ViewpointObject().setDescription("Rubiks Cube on Fire").setPosition(0.0f,0.0f,12.0f))
    .addChild(new ProtoDeclareObject().setName("anyShape")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("xtranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild(new SphereObject())))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("xtranslation")))
          .addChild(new ShapeObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("geometry").setProtoField("myShape")))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0f,1.0f,1.0f)))))))
    .addChild(new ProtoDeclareObject().setName("three")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("ytranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild(new SphereObject())))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("ytranslation")))
          .addChild(new ProtoInstanceObject().setName("anyShape")
            .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("0 0 0"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstanceObject().setName("anyShape")
            .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("2 0 0"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstanceObject().setName("anyShape")
            .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("-2 0 0"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
    .addChild(new ProtoDeclareObject().setName("nine")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("ztranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild(new SphereObject())))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("ztranslation")))
          .addChild(new ProtoInstanceObject().setName("three")
            .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 0 0"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstanceObject().setName("three")
            .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 2 0"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstanceObject().setName("three")
            .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 -2 0"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
    .addChild(new ProtoDeclareObject().setName("twentyseven")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("ttranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild(new SphereObject())))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("ttranslation")))
          .addChild(new ProtoInstanceObject().setName("nine")
            .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 0"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstanceObject().setName("nine")
            .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 2"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstanceObject().setName("nine")
            .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 -2"))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
    .addChild(new ProtoInstanceObject().setName("twentyseven")
      .addFieldValue(new fieldValueObject().setName("ttranslation").setValue("0 0 0"))
      .addFieldValue(new fieldValueObject().setName("myShape")
        .addChild(new BoxObject().setSize(1.0f,1.0f,1.0f)))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return rubikOnFire model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject exampleObject = new rubikOnFire().getX3dModel();

        exampleObject.handleArguments(args);
		boolean validate = (args.length == 0);
		for (String arg : args)
		{
			if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
			{
				validate = true;
				break;
			}
		}
		if (validate)
		{
			System.out.print("rubikOnFire self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
