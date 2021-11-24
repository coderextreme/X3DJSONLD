package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Lighting.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> NIST Product and Manufacturing Information (PMI) Complex Test Case 5. </p>
 <p> Related links: <a href="../../../../STEP/FTC05/NistCtc05Asme1Ap242V2Spri.java">NistCtc05Asme1Ap242V2Spri.java</a> source, <a href="../../../../STEP/FTC05/NistCtc05Asme1Ap242V2SpriIndex.html" target="_top">NistCtc05Asme1Ap242V2Spri catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../STEP/FTC05/NistCtc05Asme1Ap242V2Spri.x3d">NistCtc05Asme1Ap242V2Spri.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 February 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 11 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Vince Marchetti </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Robert Lipman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> NIST Product and Manufacturing Information (PMI) Complex Test Case 5. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://pages.nist.gov/CAD-PMI-Testing/models.html" target="_blank">https://pages.nist.gov/CAD-PMI-Testing/models.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/Product_and_manufacturing_information" target="_blank">https://en.wikipedia.org/wiki/Product_and_manufacturing_information</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project/download" target="_blank">https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project/download</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://s3.amazonaws.com/nist-el/mfg_digitalthread/nist_ftc_09_asme1_rd.pdf" target="_blank">https://s3.amazonaws.com/nist-el/mfg_digitalthread/nist_ftc_09_asme1_rd.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://pages.nist.gov/CAD-PMI-Testing/tessellated-part-geometry.html" target="_blank">https://pages.nist.gov/CAD-PMI-Testing/tessellated-part-geometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://pages.nist.gov/CAD-PMI-Testing/graphical-pmi-viewer.html" target="_blank">https://pages.nist.gov/CAD-PMI-Testing/graphical-pmi-viewer.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://pages.nist.gov/CAD-PMI-Testing/ap209-viewer.html" target="_blank">https://pages.nist.gov/CAD-PMI-Testing/ap209-viewer.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.nist.gov/services-resources/software/step-file-analyzer" target="_blank">https://www.nist.gov/services-resources/software/step-file-analyzer</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.nist.gov/publications/guide-nist-pmi-cad-models-and-cad-system-pmi-modeling-capability-verification-testing" target="_blank">https://www.nist.gov/publications/guide-nist-pmi-cad-models-and-cad-system-pmi-modeling-capability-verification-testing</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project" target="_blank">https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> STEP AP242 Project, <a href="http://www.ap242.org" target="_blank">http://www.ap242.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> ASME standard Y14.46-2017: Product Definition for Additive Manufacturing </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.asme.org/products/codes-standards/y1446-2017-product-definition-additive" target="_blank">https://www.asme.org/products/codes-standards/y1446-2017-product-definition-additive</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> STEP to X3D conversion code: kshell/step_x3d/branches/basic_cad </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Correct definition and compliance of this conformance scene is maintained by the Web3D Design Printing and Scanning Working Group, <a href="https://www.web3d.org/working-groups/cad" target="_blank">https://www.web3d.org/working-groups/cad</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC05/NistCtc05Asme1Ap242V2Spri.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC05/NistCtc05Asme1Ap242V2Spri.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../STEP/FTC05/../../license.html">../../license.html</a> </td>
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

	* @author Robert Lipman
 */

public class NistCtc05Asme1Ap242V2Spri
{
	/** Default constructor to create this object. */
	public NistCtc05Asme1Ap242V2Spri ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_CADINTERCHANGE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(1))
    .addComponent(new component().setName("Navigation").setLevel(1))
    .addUnit(new unit().setName("millimetre").setCategory("length").setConversionFactor(0.001))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("NistCtc05Asme1Ap242V2Spri.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("24 February 2018"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("11 October 2019"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Vince Marchetti"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Robert Lipman"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("NIST Product and Manufacturing Information (PMI) Complex Test Case 5."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://pages.nist.gov/CAD-PMI-Testing/models.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://en.wikipedia.org/wiki/Product_and_manufacturing_information"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project/download"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://s3.amazonaws.com/nist-el/mfg_digitalthread/nist_ftc_09_asme1_rd.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://pages.nist.gov/CAD-PMI-Testing/tessellated-part-geometry.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://pages.nist.gov/CAD-PMI-Testing/graphical-pmi-viewer.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://pages.nist.gov/CAD-PMI-Testing/ap209-viewer.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.nist.gov/services-resources/software/step-file-analyzer"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.nist.gov/publications/guide-nist-pmi-cad-models-and-cad-system-pmi-modeling-capability-verification-testing"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.nist.gov/el/systems-integration-division-73400/mbe-pmi-validation-and-conformance-testing-project"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("STEP AP242 Project, http://www.ap242.org"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ASME standard Y14.46-2017: Product Definition for Additive Manufacturing"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.asme.org/products/codes-standards/y1446-2017-product-definition-additive"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("STEP to X3D conversion code: kshell/step_x3d/branches/basic_cad"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the Web3D Design Printing and Scanning Working Group, https://www.web3d.org/working-groups/cad"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC05/NistCtc05Asme1Ap242V2Spri.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("NistCtc05Asme1Ap242V2Spri.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.094100,0.137300,0.498000}))
      .setMetadata(new MetadataString().setName("color").setReference("http://www.colourlovers.com/color/18237F/tienen_miedo").setValue(new String[] {"tienen miedo"})))
    .addChild(new DirectionalLight().setColor(1.000000,1.000000,1.000000).setDirection(-3.5355e-01,-3.5355e-01,-8.6603e-01))
    .addChild(new CADPart().setName("None")
      .setMetadata(new MetadataSet().setName("_collection")
        .setMetadata(new MetadataString().setName("version").setValue(new String[] {"#6"}))
        .setMetadata(new MetadataSet().setName("STEP:length_unit")
          .setMetadata(new MetadataString().setName("name").setValue(new String[] {"millimetre"}))
          .setMetadata(new MetadataFloat().setName("conversionFactor").setValue(new double[] {0.001})))
        .setMetadata(new MetadataSet().setName("exchange_structure_notice")
          .setMetadata(new MetadataString().setName("message").setValue(new String[] {"empty_representation"}))
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19"}))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NistCtc05Asme1Ap242V2Spri model
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
        X3D thisExampleX3dModel = new NistCtc05Asme1Ap242V2Spri().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.NistCtc05Asme1Ap242V2Spri\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.NistCtc05Asme1Ap242V2Spri\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
