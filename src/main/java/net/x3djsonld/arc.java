package net.x3djsonld;

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
 * <p> an attempt to implement an arc in a graph. </p>
 <p> Related links: arc.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.arc&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/arc.x3d">arc.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/arc.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/arc.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> an attempt to implement an arc in a graph </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

public class arc
{
  /** Default constructor to create this object. */
  public arc ()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
  public final void initialize()
  {
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("arc.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/arc.x3d"))
    .addMeta(new metaObject().setName("description").setContent("an attempt to implement an arc in a graph")))
  .setScene(new SceneObject()
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
            .setGeometry(new SphereObject().setRadius(0.1f))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f))))
          .addChild(new PositionInterpolatorObject("PI1").setKeyValue(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,5.0f,0.0f})).setKey(new float[] {0.0f,1.0f}))
          .addChild(new ScriptObject("MB1").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"		function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f(old, translation);" + "\n" + 
"		    // Browser.println(translation);" + "\n" + 
"		}" + "\n" + "]]>"
)
            .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("50 50 0"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_location").setType("SFTime"))
            .addField(new fieldObject().setAccessType("outputOnly").setName("keyValue").setType("MFVec3f")))
          .addChild(new TimeSensorObject("CL1").setCycleInterval(3).setLoop(true))
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
        .addChild(new ScriptObject("S1").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"            ecmascript:" + "\n" + 
"            function recompute(startpoint,endpoint) {" + "\n" + 
"	        if (typeof endpoint === 'undefined') {" + "\n" + 
"			return;" + "\n" + 
"		}" + "\n" + 
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
"            }" + "\n" + "]]>"
)
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
      .addFieldValue(new fieldValueObject().setName("startnode")
        .addChild(new ProtoInstanceObject().setUSE("start").setName("point")))
      .addFieldValue(new fieldValueObject().setName("endnode")
        .addChild(new ProtoInstanceObject().setUSE("end1").setName("point")))
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("cylinder1"))))
    .addChild(new ProtoInstanceObject("connector2", "x3dconnector").setDEF("connector2").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("startnode")
        .addChild(new ProtoInstanceObject().setUSE("start").setName("point")))
      .addFieldValue(new fieldValueObject().setName("endnode")
        .addChild(new ProtoInstanceObject().setUSE("end2").setName("point")))
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("cylinder2"))))
    .addChild(new ProtoInstanceObject("connector3", "x3dconnector").setDEF("connector3").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("startnode")
        .addChild(new ProtoInstanceObject().setUSE("start").setName("point")))
      .addFieldValue(new fieldValueObject().setName("endnode")
        .addChild(new ProtoInstanceObject().setUSE("end3").setName("point")))
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
  
  /** Provide a shallow copy of the X3D model.
   * @return arc model
   */
  public X3DObject getX3dModel()
  {	  
	  return x3dModel;
  }
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  public String validateSelf()
  {
	String       metaResult = new String();
	String validationResult = new String();
	String  exceptionResult = new String();
	try
	{
		initialize();
		
		if ((getX3dModel() == null) || (getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		for (metaObject meta : getX3dModel().getHead().getMetaList())
		{
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (Exception e)
	{
		exceptionResult = e.getMessage(); // report exception failures, if any
	}
	if  (metaResult.isEmpty() && exceptionResult.isEmpty() && validationResult.isEmpty())
	     return "success";
	else
	{
		String returnMessage = metaResult;
		if  (!exceptionResult.isEmpty() && !validationResult.isEmpty())
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult.isEmpty() && !validationResult.isEmpty())
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  }
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    public static void main(String argv[])
    {
		arc testObject = new arc();
		System.out.println ("arc execution self-validation test results: " + testObject.validateSelf());
	}
}