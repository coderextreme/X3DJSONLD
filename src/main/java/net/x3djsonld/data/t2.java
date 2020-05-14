package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene t2. </p>
 <p> Related links: t2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> view3dscene, <a href="https://castle-engine.io/view3dscene.php" target="_blank">https://castle-engine.io/view3dscene.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> source </i> </td>
			<td> t1.wrl </td>
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

 */

public class t2
{
	/** Default constructor to create this object. */
	public t2 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_INTERCHANGE).setVersion(X3DObject.VERSION_3_0)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Networking").setLevel(2))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new metaObject().setName(metaObject.NAME_SOURCE     ).setContent("t1.wrl")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setAvatarSize(new float[] {200.0f,200.0f,120.0f}).setSpeed(3f).setType(new String[] {"EXAMINE","FLY","WALK"}))
    .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
    .addChild(new ViewpointObject().setDescription("looking North").setFieldOfView(0.785398125648499f).setOrientation(1.0f,0.0f,0.0f,-0.699999988079071f).setPosition(0.0f,60.0f,110.0f))
    .addChild(new ViewpointObject().setDescription("looking East").setFieldOfView(0.785398125648499f).setOrientation(0.0f,0.400000005960464f,0.0f,-1.39999997615814f).setPosition(-140.0f,30.0f,0.0f))
    .addChild(new ViewpointObject().setDescription("Overhead").setFieldOfView(0.785398125648499f).setOrientation(1.0f,0.0f,0.0f,-1.57000005245209f).setPosition(0.0f,150.0f,0.0f))
    .addChild(new ProtoDeclareObject("org").setName("org")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("posi").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f)))
        .addField(new fieldObject().setName("col").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColorObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.400000005960464f)
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry(new SphereObject().setRadius(1.10000002384186f)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("posi"))))))
    .addChild(new ProtoDeclareObject("r").setName("r")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("pos").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue(new SFColorObject(0.0f,0.300000011920929f,1.0f)))
          .addFieldValue(new fieldValueObject().setName("posi"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new AnchorObject().setDescription("High Peak Community Arts").setUrl(new String[] {"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"})
      .addChild(new ProtoInstanceObject("r")
        .addFieldValue(new fieldValueObject().setName("pos").setValue(new SFVec3fObject(400.0f,0.100000001490116f,-385.0f))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return t2 model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new t2().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"t2\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"t2\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
