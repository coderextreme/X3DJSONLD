import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene arc. </p>
 <p> Related links: arc.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

 */

public class arc
{
	/** Default constructor to create this object. */
	public arc ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject())
    .addChild(new ViewpointObject().setDescription("a moving graph").setPosition(0.0f,0.0f,5.0f))
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {0.4f,0.4f,0.4f})))
    .addChild(new TransformObject("cylinder1")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.7f)))
        .setGeometry(new CylinderObject().setRadius(0.1f))))
    .addChild(new TransformObject("cylinder2")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.7f)))
        .setGeometry(new CylinderObject().setRadius(0.1f))))
    .addChild(new TransformObject("cylinder3")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.7f)))
        .setGeometry(new CylinderObject().setRadius(0.1f))))
    .addChild(new ProtoDeclareObject().setName("point")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("node")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f)))
            .setGeometry(new SphereObject().setRadius(0.1f)))
          .addChild(new PositionInterpolatorObject("PI1").setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,5.0f,0.0f})).setKey(new float[] {0.0f,1.0f}))
          .addChild(new ScriptObject("MB1").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"		function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f(old, translation);" + "\n" + 
"		    // Browser.println(translation);" + "\n" + 
"		}" + "\n")
            .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("50 50 0"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_location").setType("SFTime"))
            .addField(new fieldObject().setAccessType("outputOnly").setName("keyValue").setType("MFVec3f")))
          .addChild(new TimeSensorObject("CL1").setCycleInterval(3.0).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
          .addChild(new ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
          .addChild(new ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
    .addComments(" from doug sanden ")
    .addChild(new ProtoDeclareObject().setName("x3dconnector")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("startnode").setType("SFNode"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("endnode").setType("SFNode"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("connectornode").setType("SFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ScriptObject("S1").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"            function recompute(startpoint,endpoint){" + "\n" + 
"                var dif = endpoint.subtract(startpoint);" + "\n" + 
"                var dist = dif.length()*.5;" + "\n" + 
"                var dif2 = dif.multiply(.5);" + "\n" + 
"                var norm = dif.normalize();" + "\n" + 
"                var trans = startpoint.add(dif2);" + "\n" + 
"                connectornode.scale = new SFVec3f(1.0,dist,1.0);" + "\n" + 
"                connectornode.translation = trans;" + "\n" + 
"                connectornode.rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);" + "\n" + 
"                //Browser.print('norm='+norm.toString());" + "\n" + 
"                //Browser.print('rotation='+rotation.toString());" + "\n" + 
"            }" + "\n" + 
"            function initialize(){" + "\n" + 
"                recompute(startnode.translation,endnode.translation);" + "\n" + 
"            }" + "\n" + 
"            function set_startpoint(val,t){" + "\n" + 
"                recompute(val,endnode.translation);" + "\n" + 
"            }" + "\n" + 
"            function set_endpoint(val,t){" + "\n" + 
"                recompute(startnode.translation,val);" + "\n" + 
"            }" + "\n")
          .addField(new fieldObject().setAccessType("initializeOnly").setName("startnode").setType("SFNode"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("endnode").setType("SFNode"))
          .addField(new fieldObject().setAccessType("initializeOnly").setName("connectornode").setType("SFNode"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("startnode").setProtoField("startnode"))
            .addConnect(new connectObject().setNodeField("endnode").setProtoField("endnode"))
            .addConnect(new connectObject().setNodeField("connectornode").setProtoField("connectornode"))
            .addConnect(new connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint"))
            .addConnect(new connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
    .addChild(new ProtoInstanceObject("start", "point").setDEF("start").setName("point"))
    .addChild(new ProtoInstanceObject("end1", "point").setDEF("end1").setName("point"))
    .addChild(new ProtoInstanceObject("end2", "point").setDEF("end2").setName("point"))
    .addChild(new ProtoInstanceObject("end3", "point").setDEF("end3").setName("point"))
    .addChild(new ProtoInstanceObject("connector1", "x3dconnector").setDEF("connector1").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("cylinder1"))))
    .addChild(new ProtoInstanceObject("connector2", "x3dconnector").setDEF("connector2").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("cylinder2"))))
    .addChild(new ProtoInstanceObject("connector3", "x3dconnector").setDEF("connector3").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("cylinder3"))))
    .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("end1").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
    .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("end2").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
    .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("end3").setFromField("translation").setToNode("connector3").setToField("set_endpoint")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return arc model
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
        X3DObject thisExampleX3dObject = new arc().getX3dModel();

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
			System.out.println("WARNING: \"arc\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"arc\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}