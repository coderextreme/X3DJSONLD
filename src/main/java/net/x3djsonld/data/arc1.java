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
 <p> Related links: arc1.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.arc1&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d">arc1.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d</a> </td>
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

public class arc1
{
	/** Default constructor to create this object. */
	public arc1 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("arc1.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Lost, Doug Sanden I think"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("a generic proto to connect two objects")))
  .setScene(new SceneObject()
    .addChild(new ViewpointObject().setDescription("Only Viewpoint").setPosition(0.0f,0.0f,5.0f))
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new float[] {0.4f,0.4f,0.4f})))
    .addChild(new ProtoDeclareObject("point").setName("point")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("translation").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3fObject(0.0f,0.0f,0.0f))))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("node")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation")))
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject().setRadius(0.1f))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f))))
          .addChild(new PositionInterpolatorObject("PI1").setKey(new float[] {0.0f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,5.0f,0.0f})))
          .addChild(new ScriptObject("MB1").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"               function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f([old, translation]);" + "\n" + 
"               }" + "\n")
            .addField(new fieldObject().setName("translation").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3fObject(50.0f,50.0f,0.0f)))
            .addField(new fieldObject().setName("old").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3fObject(0.0f,0.0f,0.0f)))
            .addField(new fieldObject().setName("set_location").setType(fieldObject.TYPE_SFTIME).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setName("keyValue").setType(fieldObject.TYPE_MFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new MFVec3fObject(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,5.0f,0.0f})))))
          .addChild(new TimeSensorObject("CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
          .addChild(new ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
          .addChild(new ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation"))
          .addChild(new ROUTEObject().setFromNode("MB1").setFromField("translation_changed").setToNode("node").setToField("set_translation")))))
    .addChild(new TransformObject("G1")
      .addChild(new ProtoInstanceObject("point")))
    .addChild(new TransformObject("G2")
      .addChild(new ProtoInstanceObject("point")))
    .addChild(new TransformObject("transC1")
      .addChild(new TransformObject("rotscaleC1")
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.7f).setTransparency(.5f)))
          .setGeometry(new CylinderObject().setRadius(.05f)))))
    .addChild(new ProtoDeclareObject("x3dconnector").setName("x3dconnector")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setName("startnode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
        .addField(new fieldObject().setName("endnode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
        .addField(new fieldObject().setName("transnode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
        .addField(new fieldObject().setName("rotscalenode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
        .addField(new fieldObject().setName("set_startpoint").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
        .addField(new fieldObject().setName("set_endpoint").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ScriptObject("S1").setSourceCode("\n" + 
"            ecmascript:" + "\n" + 
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
"	    } else {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)" + "\n" + 
"		    };" + "\n" + 
"	    }" + "\n" + 
"	}" + "\n" + 
"	function recompute_and_route(startpoint, endpoint) {" + "\n" + 
"	      var trafo = recompute(startpoint, endpoint);" + "\n" + 
"	      transnode.translation = trafo.translation;" + "\n" + 
"	      rotscalenode.rotation = trafo.rotation;" + "\n" + 
"	      rotscalenode.scale = trafo.scale;" + "\n" + 
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
          .addField(new fieldObject().setName("startnode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setName("endnode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setName("transnode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setName("rotscalenode").setType(fieldObject.TYPE_SFNODE).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setName("set_startpoint").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setName("set_endpoint").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("startnode").setProtoField("startnode"))
            .addConnect(new connectObject().setNodeField("endnode").setProtoField("endnode"))
            .addConnect(new connectObject().setNodeField("transnode").setProtoField("transnode"))
            .addConnect(new connectObject().setNodeField("rotscalenode").setProtoField("rotscalenode"))
            .addConnect(new connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint"))
            .addConnect(new connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
    .addChild(new ProtoInstanceObject("x3dconnector", "connector1")
      .addFieldValue(new fieldValueObject().setName("startnode")
        .addChild(new TransformObject().setUSE("G1")))
      .addFieldValue(new fieldValueObject().setName("endnode")
        .addChild(new TransformObject().setUSE("G2")))
      .addFieldValue(new fieldValueObject().setName("transnode")
        .addChild(new TransformObject().setUSE("transC1")))
      .addFieldValue(new fieldValueObject().setName("rotscalenode")
        .addChild(new TransformObject().setUSE("rotscaleC1")))
      .addFieldValue(new fieldValueObject().setName("set_startpoint"))
      .addFieldValue(new fieldValueObject().setName("set_endpoint")))
    .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return arc1 model
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
        X3DObject thisExampleX3dObject = new arc1().getX3dModel();

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
			System.out.println("WARNING: \"arc1\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"arc1\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
