package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene . </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
			<td> LOA2ExampleSourceWithDiamonds.wrl </td>
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

public class NeedClassName
{
	/** Default constructor to create this object. */
	public NeedClassName ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new meta().setName(meta.NAME_SOURCE     ).setContent("LOA2ExampleSourceWithDiamonds.wrl")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("Humanoid").setName("Humanoid")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("humanoidBody").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("info").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new String[] {""}))
        .addField(new field().setName("joints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("segments").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("sites").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("version").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("200x"))
        .addField(new field().setName("viewpoints").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Group()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("humanoidBody"))))
          .addChild(new Group()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("viewpoints"))))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))))
    .addChild(new ProtoDeclare("Joint").setName("Joint")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("limitOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("llimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {.0}))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("stiffness").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {1.0,1.0,1.0}))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("ulimit").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new double[] {.0})))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Transform()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("children"))
              .addConnect(new connect().setNodeField("center").setProtoField("center"))
              .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
              .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
              .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
              .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))
          .addChild(new Transform()
            .addChild(new Shape()
              .setGeometry(new IndexedFaceSet().setCreaseAngle(0.5).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.00999999977648258,0.0,-0.00999999977648258,0.0,0.0,0.0,0.0,0.00999999977648258,0.00999999977648258,0.0,0.0,0.0,0.0,-0.00999999977648258,0.0,-0.00999999977648258,0.0}))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("translation").setProtoField("center")))))))
    .addChild(new ProtoDeclare("Segment").setName("Segment")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("centerOfMass").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("displacers").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("mass").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("momentsOfInertia").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclare("Site").setName("Site")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(""))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren")))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NeedClassName model
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
        X3D thisExampleX3dModel = new NeedClassName().getX3dModel();

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
			System.out.println("WARNING: \"NeedClassName\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"NeedClassName\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
