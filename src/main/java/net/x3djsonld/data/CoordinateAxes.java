package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.*;
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
 <p> Related links: CoordinateAxes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.CoordinateAxes&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d">CoordinateAxes.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
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

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CoordinateAxes.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Unknown, see X3D Resources Archives"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://coderextreme.net/X3DJSONLD/CoordinateAxes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("a box")))
  .setScene(new Scene()
    .addChild(new Collision("DoNotCollideWithVisualizationWidget")
      .addComments(" Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. ")
      .addComments(" This NavigationInfo allows examine mode and will be overridden by any parent scene. ")
      .addComments(" Each arrow goes from +1m to -1m to allow linear scaling to fit a scene ")
      .addComments(" Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user ")
      .addChild(new Group()
        .addComments(" Vertical Y arrow and label ")
        .addChild(new Group("ArrowGreen")
          .addChild(new Shape()
            .setGeometry(new Cylinder("ArrowCylinder").setRadius(.025f).setTop(false))
            .setAppearance(new Appearance("Green")
              .setMaterial(new Material().setDiffuseColor(.1f,.6f,.1f).setEmissiveColor(.05f,.2f,.05f))))
          .addChild(new Transform().setTranslation(0.0f,1.0f,0.0f)
            .addChild(new Shape()
              .setGeometry(new Cone("ArrowCone").setBottomRadius(.05f).setHeight(.1f))
              .setAppearance(new Appearance().setUSE("Green")))))
        .addChild(new Transform().setTranslation(0.0f,1.08f,0.0f)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance("LABEL_APPEARANCE")
                .setMaterial(new Material().setDiffuseColor(1.0f,1.0f,.3f).setEmissiveColor(.33f,.33f,.1f)))
              .setGeometry(new Text().setString(new String[] {"Y"})
                .setFontStyle(new FontStyle("LABEL_FONT").setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(.2f)))))))
      .addChild(new Transform().setRotation(0.0f,0.0f,1.0f,-1.57079f)
        .addComments(" Horizontal X arrow and label ")
        .addChild(new Group()
          .addChild(new Group("ArrowRed")
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
              .setAppearance(new Appearance("Red")
                .setMaterial(new Material().setDiffuseColor(.7f,.1f,.1f).setEmissiveColor(.33f,0.0f,0.0f))))
            .addChild(new Transform().setTranslation(0.0f,1.0f,0.0f)
              .addChild(new Shape()
                .setGeometry(new Cone().setUSE("ArrowCone"))
                .setAppearance(new Appearance().setUSE("Red")))))
          .addChild(new Transform().setRotation(0.0f,0.0f,1.0f,1.57079f).setTranslation(.072f,1.1f,0.0f)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new Text().setString(new String[] {"X"})
                  .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))
      .addChild(new Transform().setRotation(1.0f,0.0f,0.0f,1.57079f)
        .addComments(" Perpendicular Z arrow and label, note right-hand rule ")
        .addChild(new Group()
          .addChild(new Group("ArrowBlue")
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
              .setAppearance(new Appearance("Blue")
                .setMaterial(new Material().setDiffuseColor(.3f,.3f,1.0f).setEmissiveColor(.1f,.1f,.33f))))
            .addChild(new Transform().setTranslation(0.0f,1.0f,0.0f)
              .addChild(new Shape()
                .setGeometry(new Cone().setUSE("ArrowCone"))
                .setAppearance(new Appearance().setUSE("Blue")))))
          .addChild(new Transform().setRotation(1.0f,0.0f,0.0f,-1.57079f).setTranslation(0.0f,1.1f,.072f)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new Text().setString(new String[] {"Z"})
                  .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CoordinateAxes model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new CoordinateAxes().getX3dModel();

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
			System.out.println("WARNING: \"CoordinateAxes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"CoordinateAxes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
			System.out.println(validationResults);
		}
    }
}
