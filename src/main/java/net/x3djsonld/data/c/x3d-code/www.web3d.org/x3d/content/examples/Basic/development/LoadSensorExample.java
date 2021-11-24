package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success. </p>
 <p> Related links: <a href="../../../development/LoadSensorExample.java">LoadSensorExample.java</a> source, <a href="../../../development/LoadSensorExampleIndex.html" target="_top">LoadSensorExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/LoadSensorExample.x3d">LoadSensorExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 August 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Alan Hudson </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> LoadSensor only supported by X3D-compliant browsers. LoadSensor is not implemented in VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d</a> </td>
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

	* @author Don Brutzman, Alan Hudson
 */

public class LoadSensorExample
{
	/** Default constructor to create this object. */
	public LoadSensorExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("LoadSensorExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("16 August 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Alan Hudson"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("LoadSensor only supported by X3D-compliant browsers. LoadSensor is not implemented in VRML 97."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" Do not copy this ExternProtoDeclare, it is used for providing automatic support in X3dToVrml97.xslt and X3D-Edit ")
    .addChild(new WorldInfo().setTitle("LoadSensorExample.x3d"))
    .addChild(new ExternProtoDeclare("LoadSensor").setName("LoadSensor").setAppinfo("LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.").setDocumentation("https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor").setUrl(new String[] {"LoadSensorPrototype.wrl#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.wrl#LoadSensor","LoadSensorPrototype.x3d#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d#LoadSensor"})
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("timeOut").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("watchList").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_watchList").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("isLoaded").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("loadTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("progress").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
    .addChild(new Group()
      .addChild(new Viewpoint("NotLoadedView").setDescription("Not loaded texture").setPosition(0.0,0.0,6.0))
      .addChild(new Viewpoint("ActiveView").setDescription("Loading textures"))
      .addChild(new Viewpoint("LoadedView").setDescription("Texture loading complete").setOrientation(0.0,1.0,0.0,3.14159).setPosition(0.0,0.0,-10.0))
      .addChild(new Group()
        .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setTexture(new ImageTexture("EarthImage").setUrl(new String[] {"earth-topo.png","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"})))))
        .addChild(new Transform().setTranslation(1.0,0.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Box())
            .setAppearance(new Appearance()
              .setTexture(new ImageTexture("JavaBoardImage").setUrl(new String[] {"JavaBoardSmileForTheCamera.jpg","https://www.web3d.org/x3d/content/examples/Basic/development/JavaBoardSmileForTheCamera.jpg"}))))))
      .addChild(new LoadSensor("Loader").setTimeOut(4)
        .addChild(new ImageTexture().setUSE("EarthImage"))
        .addChild(new ImageTexture().setUSE("JavaBoardImage")))
      .addChild(new ROUTE().setFromNode("Loader").setFromField("isActive").setToNode("ActiveView").setToField("set_bind"))
      .addChild(new ROUTE().setFromNode("Loader").setFromField("isLoaded").setToNode("LoadedView").setToField("set_bind"))
      .addChild(new Transform().setTranslation(0.0,0.0,7.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"LoadSensor active"})
            .setFontStyle(new FontStyle("Font").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.8,0.5,0.1)))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,3.14159).setTranslation(0.0,0.0,-7.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"LoadSensor success"})
            .setFontStyle(new FontStyle().setUSE("Font")))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.1,0.5,0.1)))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return LoadSensorExample model
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
        X3D thisExampleX3dModel = new LoadSensorExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.LoadSensorExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.LoadSensorExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
