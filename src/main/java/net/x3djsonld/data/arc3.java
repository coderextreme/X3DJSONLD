package net.x3djsonld.data;

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
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: arc3.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.arc3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/x3dconnectorProto">x3dconnectorProto</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Lost, Doug Sanden I think </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a generic proto to connect two objects </td>
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

	* @author Lost, Doug Sanden I think
 */

public class arc3
{
	/** Default constructor to create this object. */
	public arc3 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("x3dconnectorProto"))
    .addMeta(new metaObject().setName("creator").setContent("Lost, Doug Sanden I think"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a generic proto to connect two objects")))
  .setScene(new SceneObject()
    .addChild(new ViewpointObject().setDescription("Only Viewpoint").setPosition(0.0f,0.0f,5.0f))
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {0.4f,0.4f,0.4f})))
    .addChild(new TransformObject("DECLpoint_G1_node")
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject().setRadius(0.1f))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f))))
      .addChild(new PositionInterpolatorObject("DECLpoint_G1_PI1").setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,5.0f,0.0f})).setKey(new float[] {0.0f,1.0f}))
      .addChild(new ScriptObject("DECLpoint_G1_MB1").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"		function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f([old, translation]);" + "\n" + 
"		    // Browser.println(keyValue);" + "\n" + 
"		}" + "\n")
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_location").setType("SFTime"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("keyValue").setType("MFVec3f").setValue("0 0 0 0 5 0")))
      .addChild(new TimeSensorObject("DECLpoint_G1_CL1").setCycleInterval(3).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_CL1").setFromField("cycleTime").setToNode("DECLpoint_G1_MB1").setToField("set_location"))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G1_PI1").setToField("set_fraction"))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_MB1").setFromField("keyValue").setToNode("DECLpoint_G1_PI1").setToField("keyValue"))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_PI1").setFromField("value_changed").setToNode("DECLpoint_G1_node").setToField("set_translation")))
    .addChild(new TransformObject("DECLpoint_G2_node")
      .addChild(new ShapeObject()
        .setGeometry(new SphereObject().setRadius(0.1f))
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f))))
      .addChild(new PositionInterpolatorObject("DECLpoint_G2_PI1").setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,5.0f,0.0f})).setKey(new float[] {0.0f,1.0f}))
      .addChild(new ScriptObject("DECLpoint_G2_MB1").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"		function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f([old, translation]);" + "\n" + 
"		    // Browser.println(keyValue);" + "\n" + 
"		}" + "\n")
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_location").setType("SFTime"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("keyValue").setType("MFVec3f").setValue("0 0 0 0 5 0")))
      .addChild(new TimeSensorObject("DECLpoint_G2_CL1").setCycleInterval(3).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_CL1").setFromField("cycleTime").setToNode("DECLpoint_G2_MB1").setToField("set_location"))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_CL1").setFromField("fraction_changed").setToNode("DECLpoint_G2_PI1").setToField("set_fraction"))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_MB1").setFromField("keyValue").setToNode("DECLpoint_G2_PI1").setToField("keyValue"))
      .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_PI1").setFromField("value_changed").setToNode("DECLpoint_G2_node").setToField("set_translation")))
    .addChild(new GroupObject()
      .addChild(new TransformObject("DECLx3dconnector_connector1_trans")
        .addChild(new TransformObject("DECLx3dconnector_connector1_rotscale")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.7f).setTransparency(0.5f)))
            .setGeometry(new CylinderObject().setRadius(0.05f)))))
      .addChild(new ScriptObject("DECLx3dconnector_connector1_S1").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"        function recompute(startpoint,endpoint){" + "\n" + 
"	    if (typeof endpoint === 'undefined') {" + "\n" + 
"		return;" + "\n" + 
"	    }" + "\n" + 
"            var dif = endpoint.subtract(startpoint);" + "\n" + 
"            var dist = dif.length()*0.5;" + "\n" + 
"            var dif2 = dif.multiply(0.5);" + "\n" + 
"            var norm = dif.normalize();" + "\n" + 
"            var transl = startpoint.add(dif2);" + "\n" + 
"	    if (typeof Quaternion !== 'undefined') {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)" + "\n" + 
"		    };" + "\n" + 
"	    } else if (typeof SFRotation !== 'undefined') {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)" + "\n" + 
"		    };" + "\n" + 
"	    } else {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl" + "\n" + 
"		    };" + "\n" + 
"	    }" + "\n" + 
"	}" + "\n" + 
"	function recompute_and_route(startpoint, endpoint) {" + "\n" + 
"	      var trafo = recompute(startpoint, endpoint);" + "\n" + 
"	      position.translation = trafo.translation;" + "\n" + 
"	      rotscale.rotation = trafo.rotation;" + "\n" + 
"	      rotscale.scale = trafo.scale;" + "\n" + 
"	}" + "\n" + 
"        function initialize(){" + "\n" + 
"            recompute_and_route(startnode.translation,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_startpoint(val,t){" + "\n" + 
"            recompute_and_route(val,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_endpoint(val,t){" + "\n" + 
"            recompute_and_route(startnode.translation,val);" + "\n" + 
"        }" + "\n")
        .addField(new fieldObject().setAccessType("initializeOnly").setName("startnode").setType("SFNode")
          .addChild(new GroupObject().setUSE("DECLpoint_G1_node")))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("endnode").setType("SFNode")
          .addChild(new GroupObject().setUSE("DECLpoint_G2_node")))
        .addField(new fieldObject().setAccessType("inputOutput").setName("position").setType("SFNode")
          .addChild(new TransformObject().setUSE("DECLx3dconnector_connector1_trans")))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotscale").setType("SFNode")
          .addChild(new TransformObject().setUSE("DECLx3dconnector_connector1_rotscale")))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f"))))
    .addChild(new ROUTEObject().setFromNode("DECLpoint_G1_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("DECLpoint_G2_node").setFromField("translation").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return arc3 model
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
        X3DObject exampleObject = new arc3().getX3dModel();

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
			System.out.print("arc3 self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
