import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes. </p>
 <p> Related links: CloudsProcedural4.java source, <a href="CloudsProcedural4Index.html" target="_top">CloudsProcedural4 catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;">meta tags</td>
			<td style="text-align:left;">CloudsProcedural4 Scene Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> title </td>
			<td> <a href="CloudsProcedural4.x3d">CloudsProcedural4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> description </td>
			<td> X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> creator </td>
			<td> Capt Darren W. Murphy </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> created </td>
			<td> 1 November 2007 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> modified </td>
			<td> 14 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> identifier </td>
			<td> <a href="https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d" target="_blank">https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> generator </td>
			<td> X3D-Edit, <a href="http://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">http://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> license </td>
			<td> <a href="../../license.html">../../license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> TODO </td>
			<td> fix links </td>
		</tr>
		<tr> <td colspan="2"> <hr> </td> </tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> scene.
	</p>

	 * @author Capt Darren W. Murphy
 */

public class CloudsProcedural4
{
  /** Default constructor to create this object. */
  public CloudsProcedural4 ()
  {
    initialize();
  }
	
  /** Create and initialize the X3D model. */
  public final void initialize()
  {
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.2")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("CloudsProcedural4.x3d"))
    .addMeta(new metaObject().setName("description").setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes."))
    .addMeta(new metaObject().setName("creator").setContent("Capt Darren W. Murphy"))
    .addMeta(new metaObject().setName("created").setContent("1 November 2007"))
    .addMeta(new metaObject().setName("modified").setContent("14 January 2014"))
    .addMeta(new metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new metaObject().setName("license").setContent("../../license.html"))
    .addMeta(new metaObject().setName("TODO").setContent("fix links")))
  .setScene(new SceneObject()
    .addComments(" A png image file for the cloud texture must be designated in the ecmascript node. ")
    .addChild(new ViewpointObject().setOrientation(0.0f,1.0f,0.0f,1.57f).setPosition(50000.0f,1000.0f,42000.0f).setDescription("Main").setJump(false))
    .addChild(new ViewpointObject().setOrientation(0.0f,1.0f,0.0f,1.3f).setPosition(45000.0f,1290.0f,44000.0f).setDescription("Light House Tower").setJump(false))
    .addChild(new ViewpointObject().setOrientation(0.0f,1.0f,0.0f,2.5f).setPosition(48000.0f,1000.0f,20000.0f).setDescription("centerWest").setJump(false))
    .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new float[] {0.0f,0.0f,1.0f})).setSkyColor(new MFColorObject(new float[] {0.0f,0.0f,1.0f})))
    .addChild(new DirectionalLightObject().setDirection(-1.0f,0.0f,0.0f).setAmbientIntensity(1f).setGlobal(true))
    .addChild(new GroupObject("Terrain")
      .addChild(new TransformObject().setTranslation(25000.0f,0.0f,25000.0f).setScale(50.0f,50.0f,50.0f)
        .addChild(new InlineObject().setUrl(new MFStringObject("\"MontereyBayLargeMesh.x3d\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d\" \"MontereyBayLargeMesh.wrl\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl\""))))
      .addChild(new TransformObject().setRotation(1.0f,0.0f,0.0f,1.57f).setTranslation(25000.0f,0.0f,25000.0f)
        .addChild(new ShapeObject()
          .setGeometry(new Rectangle2DObject().setSize(77000.0f,55000.0f))
          .setAppearance(new AppearanceObject()
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"ocean.png\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png\"")))))))
    .addChild(new GroupObject("Placemarks")
      .addChild(new TransformObject().setTranslation(45000.0f,30.0f,44000.0f).setScale(50.0f,50.0f,50.0f)
        .addChild(new InlineObject().setUrl(new MFStringObject("\"Lighthouse.x3d\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d\" \"Lighthouse.wrl\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl\"")))))
    .addChild(new GroupObject("Clouds")
      .addChild(new TransformObject("Cumulus"))
      .addChild(new TransformObject("Cirrus"))
      .addChild(new TransformObject("Fog"))
      .addChild(new ScriptObject("PixelScript").setDirectOutput(true)
        .addField(new fieldObject().setAccessType("initializeOnly").setName("Cumulus").setType("SFNode")
          .addChild(new TransformObject().setUSE("Cumulus")))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("Cirrus").setType("SFNode")
          .addChild(new TransformObject().setUSE("Cirrus")))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("Fog").setType("SFNode")))
      .addChild(new DirectionalLightObject().setDirection(-1.0f,-1.0f,0.0f).setAmbientIntensity(1f).setColor(1.0f,0.0f,0.0f).setGlobal(true))));
  }
  // end of initialize() method
			
  /** The initialized model object, created within initialize() method. */
  private X3DObject x3dModel;
  
  /** Provide a shallow copy of the X3D model.
   * @return CloudsProcedural4 model
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
		returnMessage += validationResult;
		return returnMessage;
	}
  }
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    public static void main(String argv[])
    {
		CloudsProcedural4 testObject = new CloudsProcedural4();
		System.out.println ("CloudsProcedural4 self-validation test results: " + testObject.validateSelf());
	}
}
