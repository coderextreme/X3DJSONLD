package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Checkerboard grid background for X3D/VRML materials selection. </p>
 <p> Related links: <a href="../../../UniversalMediaMaterials/gridBack.java">gridBack.java</a> source, <a href="../../../UniversalMediaMaterials/gridBackIndex.html" target="_top">gridBack catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/gridBack.x3d">gridBack.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Checkerboard grid background for X3D/VRML materials selection. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> David Roussel </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> James Harney, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 April 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 12 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://vrmlstuff.free.fr/materials" target="_blank">http://vrmlstuff.free.fr/materials</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Universal Media Material Library </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/../license.html">../license.html</a> </td>
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

	* @author David Roussel
 */

public class gridBack
{
	/** Default constructor to create this object. */
	public gridBack ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Interchange").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("gridBack.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Checkerboard grid background for X3D/VRML materials selection."))
    .addMeta(new metaObject().setName("creator").setContent("David Roussel"))
    .addMeta(new metaObject().setName("translator").setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new metaObject().setName("created").setContent("8 April 2002"))
    .addMeta(new metaObject().setName("modified").setContent("12 January 2014"))
    .addMeta(new metaObject().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new metaObject().setName("subject").setContent("Universal Media Material Library"))
    .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ShapeObject()
      .setAppearance(new AppearanceObject()
        .setMaterial(new MaterialObject().setAmbientIntensity(0.01f).setShininess(0.05f).setDiffuseColor(1.0f,1.0f,1.0f)))
      .setGeometry(new IndexedFaceSetObject().setColorPerVertex(false).setNormalPerVertex(false).setColorIndex(new int[] {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0}).setCoordIndex(IndexedFaceSet_4_15_coordIndex)
        .setCoord(new CoordinateObject().setPoint(Coordinate_5_15_point))
        .setColor(new ColorObject().setColor(new MFColorObject(new float[] {0.5f,0.5f,0.5f,0.75f,0.75f,0.75f}))))));
  }
	// end of initialize() method

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=4, element #15, 245 total numbers */
	private MFInt32Object IndexedFaceSet_4_15_coordIndex = new MFInt32Object(new int[] {0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1});

	/** Large attribute array: Coordinate point field, scene-graph level=5, element #15, 192 total numbers made up of 64 3-tuple values */
	private MFVec3fObject Coordinate_5_15_point = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(new float[] {-5.25f,5.25f,0.0f,-3.75f,5.25f,0.0f,-2.25f,5.25f,0.0f,-0.75f,5.25f,0.0f,0.75f,5.25f,0.0f,2.25f,5.25f,0.0f,3.75f,5.25f,0.0f,5.25f,5.25f,0.0f,-5.25f,3.75f,0.0f,-3.75f,3.75f,0.0f}))
	.append(new MFVec3fObject(new float[] {-2.25f,3.75f,0.0f,-0.75f,3.75f,0.0f,0.75f,3.75f,0.0f,2.25f,3.75f,0.0f,3.75f,3.75f,0.0f,5.25f,3.75f,0.0f,-5.25f,2.25f,0.0f,-3.75f,2.25f,0.0f,-2.25f,2.25f,0.0f,-0.75f,2.25f,0.0f}))
	.append(new MFVec3fObject(new float[] {0.75f,2.25f,0.0f,2.25f,2.25f,0.0f,3.75f,2.25f,0.0f,5.25f,2.25f,0.0f,-5.25f,0.75f,0.0f,-3.75f,0.75f,0.0f,-2.25f,0.75f,0.0f,-0.75f,0.75f,0.0f,0.75f,0.75f,0.0f,2.25f,0.75f,0.0f}))
	.append(new MFVec3fObject(new float[] {3.75f,0.75f,0.0f,5.25f,0.75f,0.0f,-5.25f,-0.75f,0.0f,-3.75f,-0.75f,0.0f,-2.25f,-0.75f,0.0f,-0.75f,-0.75f,0.0f,0.75f,-0.75f,0.0f,2.25f,-0.75f,0.0f,3.75f,-0.75f,0.0f,5.25f,-0.75f,0.0f}))
	.append(new MFVec3fObject(new float[] {-5.25f,-2.25f,0.0f,-3.75f,-2.25f,0.0f,-2.25f,-2.25f,0.0f,-0.75f,-2.25f,0.0f,0.75f,-2.25f,0.0f,2.25f,-2.25f,0.0f,3.75f,-2.25f,0.0f,5.25f,-2.25f,0.0f,-5.25f,-3.75f,0.0f,-3.75f,-3.75f,0.0f}))
	.append(new MFVec3fObject(new float[] {-2.25f,-3.75f,0.0f,-0.75f,-3.75f,0.0f,0.75f,-3.75f,0.0f,2.25f,-3.75f,0.0f,3.75f,-3.75f,0.0f,5.25f,-3.75f,0.0f,-5.25f,-5.25f,0.0f,-3.75f,-5.25f,0.0f,-2.25f,-5.25f,0.0f,-0.75f,-5.25f,0.0f}))
	.append(new MFVec3fObject(new float[] {0.75f,-5.25f,0.0f,2.25f,-5.25f,0.0f,3.75f,-5.25f,0.0f,5.25f,-5.25f,0.0f}));

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return gridBack model
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
        X3DObject exampleObject = new gridBack().getX3dModel();

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
			System.out.print("gridBack self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
