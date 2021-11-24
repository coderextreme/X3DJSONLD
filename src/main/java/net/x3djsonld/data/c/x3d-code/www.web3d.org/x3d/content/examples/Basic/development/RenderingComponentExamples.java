package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97. </p>
 <p> Related links: <a href="../../../development/RenderingComponentExamples.java">RenderingComponentExamples.java</a> source, <a href="../../../development/RenderingComponentExamplesIndex.html" target="_top">RenderingComponentExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/RenderingComponentExamples.x3d">RenderingComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Extract, move TriangleStripSet example to X3dSpecifications directory </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/RenderingComponentPrototypes.x3d">RenderingComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/TriangleStripSetFigure.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/TriangleStripSetFigure.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> X3dToVrml97.xslt translation stylesheet automatically invokes these prototypes upon encountering any new Rendering nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/stylesheets/X3dToVrml97.xslt" target="_blank">https://www.web3d.org/x3d/stylesheets/X3dToVrml97.xslt</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias
 */

public class RenderingComponentExamples
{
	/** Default constructor to create this object. */
	public RenderingComponentExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComments(" NURBS component or Full profile needed to use CoordinateDouble node ")
    .addComments(" Geometry2D component or Full profile needed to use TriangleSet2D node ")
    .addComponent(new component().setName("NURBS").setLevel(1))
    .addComponent(new component().setName("Geometry2D").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("RenderingComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Extract, move TriangleStripSet example to X3dSpecifications directory"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("RenderingComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/TriangleStripSetFigure.x3d"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("X3dToVrml97.xslt translation stylesheet automatically invokes these prototypes upon encountering any new Rendering nodes."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/stylesheets/X3dToVrml97.xslt"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("RenderingComponentExamples.x3d"))
    .addChild(new Viewpoint().setDescription("set viewpoint 35 meters along positive z axis").setPosition(0.0,-5.0,35.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {1.0,1.0,1.0})).setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addComments(" new node tests follow ")
    .addChild(new Transform("TestCoordinateDoubleColorRGBA").setTranslation(0.0,5.0,0.0)
      .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,1.0,1.0,-1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0})))
            .setColor(new ColorRGBA().setColor(new MFColorRGBA(new double[] {0.9,0.9,0.9,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.5,0.5,0.0,0.0,0.0,0.5,0.5,0.0,0.5,0.0,0.5,0.0,0.37,0.93,0.87,0.0}))
              .setMetadata(new MetadataString().setName("example 2").setValue(new String[] {"test metadata child"}))))))
      .addChild(new Transform().setTranslation(2.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7})
            .setCoord(new CoordinateDouble().setPoint(new MFVec3d(new double[] {-1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,-1.0,-1.0,1.0,-1.0,-1.0,-1.0,1.0,1.0,-1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,-1.0}))
              .setMetadata(new MetadataString().setName("example 1").setValue(new String[] {"test metadata child"})))
            .setColor(new Color().setColor(new MFColor(new double[] {0.9,0.9,0.9,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.5,0.5,0.0,0.0,0.5,0.5,0.5,0.0,0.5,0.37,0.93,0.87})))))))
    .addChild(new Transform("TestOrderedTriangleNodes").setTranslation(-5.0,0.0,0.0)
      .addChild(new Transform()
        .addChild(new Shape()
          .setGeometry(new TriangleSet2D())
          .setAppearance(new Appearance("DefaultAppearance")
            .setMaterial(new Material()))))
      .addChild(new Transform("TestTriangleFanSet").setTranslation(0.0,-6.0,0.0)
        .addChild(new Shape()
          .setGeometry(new TriangleFanSet().setCcw(true).setColorPerVertex(false).setFanCount(new int[] {6,6}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-.5,-2.0,.5,-1.5,-2.0,1.0,-2.5,-1.5,0.5,-2.5,-.5,0.0,-2.5,1.0,.5,0.0,0.0,0.0,-2.5,1.0,.5,.5,2.0,0.0,1.5,1.5,.5,2.5,.5,0.0,-.5,-2.0,.5})))
            .setColor(new Color("FanColors").setColor(new MFColor(new double[] {0.5,0.1,0.5,0.8,0.3,0.8}))))))
      .addChild(new Transform()
        .addChild(new Shape()
          .setGeometry(new TriangleStripSet().setCcw(true).setColorPerVertex(true).setNormalPerVertex(true).setSolid(true))
          .setAppearance(new Appearance().setUSE("DefaultAppearance")))))
    .addChild(new Transform("TestIndexedTriangleNodes").setTranslation(5.0,0.0,0.0)
      .addChild(new Transform()
        .addChild(new Shape()
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {11,10,9,8,7,6,5,4,3,2,1,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-6.0,.5,-.5,1.5,-3.5,-.5,0.0,0.0,1.0,-6.0,.5,-.5,0.0,0.0,1.0,2.0,2.0,-.5,0.0,0.0,1.0,1.5,-3.5,-.5,2.0,2.0,-.5,-6.0,.5,-.5,1.5,-3.5,-.5,2.0,2.0,-.5})))
            .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.9,0.9,0.9,0.0,1.0,0.0,0.0,0.0,1.0,0.9,0.9,0.9,1.0,0.0,0.0,0.9,0.9,0.9,0.0,0.0,1.0}))))))
      .addChild(new Transform().setTranslation(0.0,-6.0,0.0)
        .addChild(new Shape()
          .setGeometry(new IndexedTriangleFanSet().setCcw(true).setColorPerVertex(false).setIndex(new int[] {0,1,2,3,4,5,-1,0,5,6,7,8,1,-1}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-.5,-2.0,.5,-1.5,-2.0,1.0,-2.5,-1.5,0.5,-2.5,-.5,0.0,-2.5,1.0,.5,.5,2.0,0.0,1.5,1.5,.5,2.5,.5,0.0}))))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.5,0.1,0.5)))))
      .addChild(new Transform().setTranslation(0.0,-10.0,0.0)
        .addChild(new Shape()
          .setGeometry(new IndexedTriangleStripSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-4.0,-1.0,-.5,-4.5,-2.0,-.5,-3.0,-.5,0.0,-2.5,-1.5,-.5,-2.0,-.5,-1.0,-1.5,-1.5,-.5,-.5,.5,-.5,0.0,0.0,0.0,1.0,.5,-.5,1.5,-2.0,-1.0,2.5,-2.0,-.5,2.5,-2.5,-.5,3.5,-2.0,-1.0}))))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,.3,.7))))))
    .addChild(new Transform("TestLineSet").setTranslation(0.0,-15.0,0.0)
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.0,1.0,1.0,3.0,1.0,1.0,3.0,1.0,-1.0,-3.0,1.0,-1.0,-3.0,-1.0,1.0,3.0,-1.0,1.0,3.0,-1.0,-1.0,-3.0,-1.0,-1.0})))
          .setColor(new ColorRGBA().setColor(new MFColorRGBA(new double[] {1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.5,0.5,0.0,0.0,0.0,0.5,0.5,0.0,0.5,0.0,0.5,0.0,0.37,0.93,0.87,0.0})))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return RenderingComponentExamples model
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
        X3D thisExampleX3dModel = new RenderingComponentExamples().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.RenderingComponentExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.RenderingComponentExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
