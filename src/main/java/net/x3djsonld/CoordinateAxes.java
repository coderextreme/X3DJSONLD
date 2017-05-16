package net.x3djsonld;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> a box. </p>
 <p> Related links: CoordinateAxes.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.CoordinateAxes&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d">CoordinateAxis.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Unknown, see X3D Resources Archives </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d" target="_blank">http://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a box </td>
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

	* @author Unknown, see X3D Resources Archives
 */

public class CoordinateAxes
{
  /** Default constructor to create this object. */
  public CoordinateAxes ()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
  public final void initialize()
  {
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("CoordinateAxis.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("Unknown, see X3D Resources Archives"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a box")))
  .setScene(new SceneObject()
    .addChild(new CollisionObject("DoNotCollideWithVisualizationWidget")
      .addComments(" Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. ")
      .addComments(" This NavigationInfo allows examine mode and will be overridden by any parent scene. ")
      .addComments(" Each arrow goes from +1m to -1m to allow linear scaling to fit a scene ")
      .addComments(" Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user ")
      .addChild(new GroupObject()
        .addComments(" Vertical Y arrow and label ")
        .addChild(new GroupObject("ArrowGreen")
          .addChild(new ShapeObject()
            .setGeometry(new CylinderObject("ArrowCylinder").setRadius(.025f).setTop(false))
            .setAppearance(new AppearanceObject("Green")
              .setMaterial(new MaterialObject().setEmissiveColor(.05f,.2f,.05f).setDiffuseColor(.1f,.6f,.1f))))
          .addChild(new TransformObject().setTranslation(0.0f,1.0f,0.0f)
            .addChild(new ShapeObject()
              .setGeometry(new ConeObject("ArrowCone").setBottomRadius(.05f).setHeight(.1f))
              .setAppearance(new AppearanceObject().setUSE("Green")))))
        .addChild(new TransformObject().setTranslation(0.0f,1.08f,0.0f)
          .addChild(new BillboardObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject("LABEL_APPEARANCE")
                .setMaterial(new MaterialObject().setEmissiveColor(.33f,.33f,.1f).setDiffuseColor(1.0f,1.0f,.3f)))
              .setGeometry(new TextObject().setString(new MFStringObject("\"Y\""))
                .setFontStyle(new FontStyleObject("LABEL_FONT").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setFamily(new MFStringObject("\"SANS\"")).setSize(.2f)))))))
      .addChild(new TransformObject().setRotation(0.0f,0.0f,1.0f,-1.57079f)
        .addComments(" Horizontal X arrow and label ")
        .addChild(new GroupObject()
          .addChild(new GroupObject("ArrowRed")
            .addChild(new ShapeObject()
              .setGeometry(new CylinderObject().setUSE("ArrowCylinder"))
              .setAppearance(new AppearanceObject("Red")
                .setMaterial(new MaterialObject().setEmissiveColor(.33f,0.0f,0.0f).setDiffuseColor(.7f,.1f,.1f))))
            .addChild(new TransformObject().setTranslation(0.0f,1.0f,0.0f)
              .addChild(new ShapeObject()
                .setGeometry(new ConeObject().setUSE("ArrowCone"))
                .setAppearance(new AppearanceObject().setUSE("Red")))))
          .addChild(new TransformObject().setTranslation(.072f,1.1f,0.0f).setRotation(0.0f,0.0f,1.0f,1.57079f)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new BillboardObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new TextObject().setString(new MFStringObject("\"X\""))
                  .setFontStyle(new FontStyleObject().setUSE("LABEL_FONT"))))))))
      .addChild(new TransformObject().setRotation(1.0f,0.0f,0.0f,1.57079f)
        .addComments(" Perpendicular Z arrow and label, note right-hand rule ")
        .addChild(new GroupObject()
          .addChild(new GroupObject("ArrowBlue")
            .addChild(new ShapeObject()
              .setGeometry(new CylinderObject().setUSE("ArrowCylinder"))
              .setAppearance(new AppearanceObject("Blue")
                .setMaterial(new MaterialObject().setEmissiveColor(.1f,.1f,.33f).setDiffuseColor(.3f,.3f,1.0f))))
            .addChild(new TransformObject().setTranslation(0.0f,1.0f,0.0f)
              .addChild(new ShapeObject()
                .setGeometry(new ConeObject().setUSE("ArrowCone"))
                .setAppearance(new AppearanceObject().setUSE("Blue")))))
          .addChild(new TransformObject().setTranslation(0.0f,1.1f,.072f).setRotation(1.0f,0.0f,0.0f,-1.57079f)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new BillboardObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new TextObject().setString(new MFStringObject("\"Z\""))
                  .setFontStyle(new FontStyleObject().setUSE("LABEL_FONT"))))))))));
  }
  // end of initialize() method

  /** The initialized model object, created within initialize() method. */
  private X3DObject x3dModel;
  
  /** Provide a shallow copy of the X3D model.
   * @return CoordinateAxes model
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
		CoordinateAxes testObject = new CoordinateAxes();
		System.out.println ("CoordinateAxes execution self-validation test results: " + testObject.validateSelf());
	}
}
