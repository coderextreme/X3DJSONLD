package net.x3djsonld;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> 12 extrusions to test prototype expander. </p>
 <p> Related links: qq3.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.qq3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://coderextreme.net/x3d/qq3.x3d">qq3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 11 Jan 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 05 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 12 extrusions to test prototype expander </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://coderextreme.net/x3d/qq3.x3d" target="_blank">http://coderextreme.net/x3d/qq3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
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

public class qq3
{
  /** Default constructor to create this object. */
  public qq3 ()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
  public final void initialize()
  {
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("qq3.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("translator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("created").setContent("11 Jan 2015"))
    .addMeta(new metaObject().setName("modified").setContent("05 May 2017"))
    .addMeta(new metaObject().setName("description").setContent("12 extrusions to test prototype expander"))
    .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/x3d/qq3.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("manual")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("Process")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addComments(" left ")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject("ShapeLeftDown")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.7f,1.0f,0.0f)))
              .setGeometry(new ExtrusionObject().setSpine(new MFVec3fObject(new float[] {-2.5f,0.0f,0.0f,-1.5f,0.0f,0.0f})).setCreaseAngle(0.785f).setCrossSection(Extrusion_8_12_crossSection))))
          .addComments(" right ")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject("ShapeUpRight")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.7f,1.0f)))
              .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(Extrusion_8_17_crossSection).setSpine(new MFVec3fObject(new float[] {1.5f,0.0f,0.0f,2.5f,0.0f,0.0f})))))
          .addComments(" up ")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject().setUSE("ShapeUpRight")))
          .addComments(" down ")
          .addChild(new TransformObject().setScale(0.5f,0.5f,0.5f)
            .addChild(new ShapeObject().setUSE("ShapeLeftDown"))))))
    .addChild(new ViewpointObject().setDescription("Process pipes").setPosition(0.0f,5.0f,12.0f).setOrientation(1.0f,0.0f,0.0f,-0.4f))
    .addChild(new TransformObject().setTranslation(0.0f,-2.5f,0.0f)
      .addChild(new ProtoInstanceObject().setName("Process")))
    .addChild(new TransformObject()
      .addChild(new ProtoInstanceObject().setName("Process")))
    .addChild(new TransformObject().setTranslation(0.0f,2.5f,0.0f)
      .addChild(new ProtoInstanceObject().setName("Process"))));
  }
  // end of initialize() method

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #12, 34 total numbers made up of 17 2-tuple values */
	private MFVec2fObject Extrusion_8_12_crossSection = new MFVec2fObject() /* splitting up long array to improve readability */
	.append(new MFVec2fObject(new float[] {1.00f,0.00f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.00f,-1.00f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.00f,-0.00f,-0.92f,0.38f}))
	.append(new MFVec2fObject(new float[] {-0.71f,0.71f,-0.38f,0.92f,0.00f,1.00f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.00f,0.00f}));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #17, 34 total numbers made up of 17 2-tuple values */
	private MFVec2fObject Extrusion_8_17_crossSection = new MFVec2fObject() /* splitting up long array to improve readability */
	.append(new MFVec2fObject(new float[] {1.00f,0.00f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0.00f,-1.00f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1.00f,-0.00f,-0.92f,0.38f}))
	.append(new MFVec2fObject(new float[] {-0.71f,0.71f,-0.38f,0.92f,0.00f,1.00f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1.00f,0.00f}));

  /** The initialized model object, created within initialize() method. */
  private X3DObject x3dModel;
  
  /** Provide a shallow copy of the X3D model.
   * @return qq3 model
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
		qq3 testObject = new qq3();
		System.out.println ("qq3 execution self-validation test results: " + testObject.validateSelf());
	}
}
