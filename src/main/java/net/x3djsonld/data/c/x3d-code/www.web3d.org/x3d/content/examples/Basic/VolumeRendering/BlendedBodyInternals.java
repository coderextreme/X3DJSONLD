package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.VolumeRendering.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Blended rendering of a human torso and internal structure. </p>
 <p> Related links: <a href="../../../VolumeRendering/BlendedBodyInternals.java">BlendedBodyInternals.java</a> source, <a href="../../../VolumeRendering/BlendedBodyInternalsIndex.html" target="_top">BlendedBodyInternals catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../VolumeRendering/BlendedBodyInternals.x3d">BlendedBodyInternals.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Blended rendering of a human torso and internal structure </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 April 2011 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 29 March 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Andrew Wood, Nicholas Polys: Virginia Tech </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> screenshot image </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> need to clarify what the second style is that is being blended </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Datasets, <a href="http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/body.nrrd" target="_blank">http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/body.nrrd</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Datasets, <a href="http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/internals.nrrd" target="_blank">http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/internals.nrrd</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> All datasets, <a href="http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/datasets.zip" target="_blank">http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/datasets.zip</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> All datasets, <a href="https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/datasets.zip" target="_blank">https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/datasets.zip</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Run the download target in the Ant build.xml file to install reference nrrd files locally. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../VolumeRendering/build.xml">build.xml</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/VolumeRendering/BlendedBodyInternals.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/VolumeRendering/BlendedBodyInternals.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Volume data obtained from <a href="http://pubimage.hcuge.ch:8080" target="_blank">http://pubimage.hcuge.ch:8080</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Volume data converted using Osirix, <a href="http://www.osirix-viewer.com" target="_blank">http://www.osirix-viewer.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Nrrd conversion utility located at <a href="http://teem.sourceforge.net/unrrdu" target="_blank">http://teem.sourceforge.net/unrrdu</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../VolumeRendering/../license.html">../license.html</a> </td>
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

	* @author Andrew Wood, Nicholas Polys: Virginia Tech
 */

public class BlendedBodyInternals
{
	/** Default constructor to create this object. */
	public BlendedBodyInternals ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("VolumeRendering").setLevel(3))
    .addComponent(new component().setName("Texturing3D").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BlendedBodyInternals.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Blended rendering of a human torso and internal structure"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 April 2011"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("29 March 2020"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Andrew Wood, Nicholas Polys: Virginia Tech"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("screenshot image"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("need to clarify what the second style is that is being blended"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Datasets, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/body.nrrd"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Datasets, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/internals.nrrd"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("All datasets, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/datasets.zip"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("All datasets, https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/datasets.zip"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Run the download target in the Ant build.xml file to install reference nrrd files locally."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("build.xml"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/VolumeRendering/BlendedBodyInternals.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Volume data obtained from http://pubimage.hcuge.ch:8080"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Volume data converted using Osirix, http://www.osirix-viewer.com"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Nrrd conversion utility located at http://teem.sourceforge.net/unrrdu"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("BlendedBodyInternals.x3d"))
    .addChild(new Group()
      .addChild(new Viewpoint("VP").setDescription("Blended Body Internals").setOrientation(0.940022,0.208839,0.269711,1.71637).setPosition(0.108923,-0.189725,-0.0135375))
      .addChild(new Background("BG"))
      .addChild(new Transform().setScale(0.000292969,0.000292969,0.000292969)
        .addChild(new VolumeData().setDimensions(512.0,512.0,452.0)
          .setRenderStyle(new BlendedVolumeStyle().setWeightConstant1(0.51)
            .setRenderStyle(new ToneMappedVolumeStyle())
            .setVoxels(new ImageTexture3D().setUrl(new String[] {"datasets/nrrd/internals.nrrd","http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/internals.nrrd","https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/.nrrd"})))
          .setVoxels(new ImageTexture3D().setUrl(new String[] {"datasets/nrrd/body.nrrd","http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/body.nrrd","https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/body.nrrd"}))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BlendedBodyInternals model
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
        X3D thisExampleX3dModel = new BlendedBodyInternals().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BlendedBodyInternals\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BlendedBodyInternals\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
