package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: x3dconnectorProto.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.x3dconnectorProto&nbsp; Document Metadata </td>
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
		stylesheet to create Java source code from an <code>.x3d</code> scene.
	</p>

	* @author Lost, Doug Sanden I think
 */

public class x3dconnectorProto
{
  /** Default constructor to create this object. */
  public x3dconnectorProto ()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
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
    .addChild(new TransformObject("G1")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.7f,0.2f,0.2f)))
        .setGeometry(new SphereObject().setRadius(.1f)))
      .addChild(new PlaneSensorObject("PS1").setDescription("Grab to move"))
      .addChild(new ROUTEObject().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
    .addChild(new TransformObject("G2").setTranslation(1.0f,-1.0f,.01f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.2f)))
        .setGeometry(new SphereObject().setRadius(.1f)))
      .addChild(new PlaneSensorObject("PS2").setDescription("Grab to move"))
      .addChild(new ROUTEObject().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
    .addChild(new TransformObject("G3").setTranslation(1.0f,1.0f,.01f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.2f)))
        .setGeometry(new SphereObject().setRadius(.1f)))
      .addChild(new PlaneSensorObject("PS3").setDescription("Grab to move"))
      .addChild(new ROUTEObject().setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("set_translation")))
    .addChild(new TransformObject("G4").setTranslation(-1.0f,1.0f,.01f)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.2f,0.7f,0.2f)))
        .setGeometry(new SphereObject().setRadius(.1f)))
      .addChild(new PlaneSensorObject("PS4").setDescription("Grab to move"))
      .addChild(new ROUTEObject().setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("set_translation")))
    .addChild(new TransformObject("C1")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(.5f).setDiffuseColor(0.2f,0.7f,0.7f)))
        .setGeometry(new CylinderObject().setRadius(.05f))))
    .addChild(new TransformObject("C2")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(.5f).setDiffuseColor(0.2f,0.7f,0.7f)))
        .setGeometry(new CylinderObject().setRadius(.05f))))
    .addChild(new TransformObject("C3")
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(.5f).setDiffuseColor(0.2f,0.7f,0.7f)))
        .setGeometry(new CylinderObject().setRadius(.05f))))
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
"            function recompute(startpoint,endpoint){" + "\n" + 
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
    .addChild(new ProtoInstanceObject("connector1", "x3dconnector").setDEF("connector1").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("startnode")
        .addChild(new TransformObject().setUSE("G1")))
      .addFieldValue(new fieldValueObject().setName("endnode")
        .addChild(new TransformObject().setUSE("G2")))
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("C1")))
      .addFieldValue(new fieldValueObject().setName("set_startpoint"))
      .addFieldValue(new fieldValueObject().setName("set_endpoint")))
    .addChild(new ProtoInstanceObject("connector2", "x3dconnector").setDEF("connector2").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("startnode")
        .addChild(new TransformObject().setUSE("G1")))
      .addFieldValue(new fieldValueObject().setName("endnode")
        .addChild(new TransformObject().setUSE("G3")))
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("C2")))
      .addFieldValue(new fieldValueObject().setName("set_startpoint"))
      .addFieldValue(new fieldValueObject().setName("set_endpoint")))
    .addChild(new ProtoInstanceObject("connector3", "x3dconnector").setDEF("connector3").setName("x3dconnector")
      .addFieldValue(new fieldValueObject().setName("startnode")
        .addChild(new TransformObject().setUSE("G1")))
      .addFieldValue(new fieldValueObject().setName("endnode")
        .addChild(new TransformObject().setUSE("G4")))
      .addFieldValue(new fieldValueObject().setName("connectornode")
        .addChild(new TransformObject().setUSE("C3")))
      .addFieldValue(new fieldValueObject().setName("set_startpoint"))
      .addFieldValue(new fieldValueObject().setName("set_endpoint")))
    .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
    .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
    .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")));
  }
  // end of initialize() method

  /** The initialized model object, created within initialize() method. */
  private X3DObject x3dModel;
  
  /** Provide a shallow copy of the X3D model.
   * @return x3dconnectorProto model
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
		x3dconnectorProto testObject = new x3dconnectorProto();
		System.out.println ("x3dconnectorProto execution self-validation test results: " + testObject.validateSelf());
	}
}
