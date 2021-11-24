package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> NIST Product and Manufacturing Information (PMI) Complex Test Case 3. </p>
 <p> Related links: <a href="../../../../STEP/FTC03/NistCtc03Asme1Ap203Spri.java">NistCtc03Asme1Ap203Spri.java</a> source, <a href="../../../../STEP/FTC03/NistCtc03Asme1Ap203SpriIndex.html" target="_top">NistCtc03Asme1Ap203Spri catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../STEP/FTC03/NistCtc03Asme1Ap203Spri.x3d">NistCtc03Asme1Ap203Spri.x3d</a> </td>
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
			<td> NIST Product and Manufacturing Information (PMI) Complex Test Case 3. </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC03/NistCtc03Asme1Ap203Spri.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC03/NistCtc03Asme1Ap203Spri.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../STEP/FTC03/../../license.html">../../license.html</a> </td>
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

public class NistCtc03Asme1Ap203Spri
{
	/** Default constructor to create this object. */
	public NistCtc03Asme1Ap203Spri ()
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
    .addUnit(new unit().setName("INCH").setCategory("length").setConversionFactor(0.0254))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("NistCtc03Asme1Ap203Spri.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("24 February 2018"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("11 October 2019"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Vince Marchetti"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Robert Lipman"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("NIST Product and Manufacturing Information (PMI) Complex Test Case 3."))
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
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC03/NistCtc03Asme1Ap203Spri.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("NistCtc03Asme1Ap203Spri.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.094100,0.137300,0.498000}))
      .setMetadata(new MetadataString().setName("color").setReference("http://www.colourlovers.com/color/18237F/tienen_miedo").setValue(new String[] {"tienen miedo"})))
    .addChild(new DirectionalLight().setColor(1.000000,1.000000,1.000000).setDirection(-3.5355e-01,-3.5355e-01,-8.6603e-01))
    .addChild(new Viewpoint().setDescription("Oblique view").setCenterOfRotation(-3.8614e+00,9.5560e+00,3.2024e+00).setFieldOfView(1.6628e-01).setOrientation(0.901,0.241,0.361,1.277).setPosition(1.0433e+02,-1.7784e+02,9.2832e+01))
    .addChild(new Viewpoint().setDescription("Top").setCenterOfRotation(-3.8614e+00,9.5560e+00,3.2024e+00).setFieldOfView(1.6628e-01).setOrientation(1.000,0.000,0.000,0.000).setPosition(-3.8614e+00,9.5560e+00,2.3742e+02))
    .addChild(new Viewpoint().setDescription("Bottom").setCenterOfRotation(-3.8614e+00,9.5560e+00,3.2024e+00).setFieldOfView(1.6628e-01).setOrientation(1.000,0.000,0.000,3.142).setPosition(-3.8614e+00,9.5560e+00,-2.3101e+02))
    .addChild(new Viewpoint().setDescription("Right side").setCenterOfRotation(-3.8614e+00,9.5560e+00,3.2024e+00).setFieldOfView(1.6628e-01).setOrientation(0.577,0.577,0.577,2.094).setPosition(2.3035e+02,9.5560e+00,3.2024e+00))
    .addChild(new CADPart().setName("nist_ctc_03_asme1").setBboxCenter(-3.861394,9.556000,3.202365).setBboxSize(11.927690,19.112000,6.404730)
      .setMetadata(new MetadataSet().setName("_collection")
        .setMetadata(new MetadataString().setName("version").setValue(new String[] {"#302"}))
        .setMetadata(new MetadataSet().setName("STEP:length_unit")
          .setMetadata(new MetadataString().setName("name").setValue(new String[] {"INCH"}))
          .setMetadata(new MetadataFloat().setName("conversionFactor").setValue(new double[] {0.0254}))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#474"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,10,11,12,10,12,13,9,10,13,8,9,13,7,8,13,6,7,13,6,13,14,21,6,14,21,14,15,21,15,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.5000e+00,5.0000e-01,0.0000e+00,-9.5000e+00,5.0000e-01,7.5100e-02,-9.5000e+00,1.7118e+00,7.5100e-02,-9.5000e+00,1.7606e+00,7.9904e-02,-9.5000e+00,1.8075e+00,9.4130e-02,-9.5000e+00,1.8507e+00,1.1723e-01,-9.5000e+00,1.8886e+00,1.4832e-01,-9.5000e+00,1.9197e+00,1.8621e-01,-9.5000e+00,1.9428e+00,2.2943e-01,-9.5000e+00,1.9570e+00,2.7633e-01,-9.5000e+00,1.9618e+00,3.2510e-01,-9.5000e+00,1.9618e+00,2.2550e+00,-9.5000e+00,2.0369e+00,2.2550e+00,-9.5000e+00,2.0369e+00,3.2510e-01,-9.5000e+00,2.0307e+00,2.6168e-01,-9.5000e+00,2.0122e+00,2.0069e-01,-9.5000e+00,1.9821e+00,1.4448e-01,-9.5000e+00,1.9417e+00,9.5220e-02,-9.5000e+00,1.8924e+00,5.4789e-02,-9.5000e+00,1.8362e+00,2.4747e-02,-9.5000e+00,1.7752e+00,6.2467e-03,-9.5000e+00,1.7118e+00,0.0000e+00}))))
          .setAppearance(new Appearance("partcolor")
            .setMaterial(new Material().setAmbientIntensity(0.5).setDiffuseColor(0.651000,0.654900,0.721600)
              .setMetadata(new MetadataString().setName("color").setReference("http://www.colourlovers.com/color/A6A7B8/cool_silver").setValue(new String[] {"cool silver"}))))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#475"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,6,7,8,6,8,9,6,9,10,10,11,12,10,12,13,6,10,13,6,13,14,6,14,15,6,15,16,6,16,17,6,17,18,6,18,19,6,19,20,21,6,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.5000e+00,1.8612e+01,7.5100e-02,-9.5000e+00,1.8612e+01,1.6431e-14,-9.5000e+00,1.7362e+01,1.6431e-14,-9.5000e+00,1.7299e+01,6.2467e-03,-9.5000e+00,1.7238e+01,2.4747e-02,-9.5000e+00,1.7181e+01,5.4789e-02,-9.5000e+00,1.7132e+01,9.5220e-02,-9.5000e+00,1.7092e+01,1.4448e-01,-9.5000e+00,1.7062e+01,2.0069e-01,-9.5000e+00,1.7043e+01,2.6168e-01,-9.5000e+00,1.7037e+01,3.2510e-01,-9.5000e+00,1.7037e+01,2.2550e+00,-9.5000e+00,1.7112e+01,2.2550e+00,-9.5000e+00,1.7112e+01,3.2510e-01,-9.5000e+00,1.7117e+01,2.7633e-01,-9.5000e+00,1.7131e+01,2.2943e-01,-9.5000e+00,1.7154e+01,1.8621e-01,-9.5000e+00,1.7185e+01,1.4832e-01,-9.5000e+00,1.7223e+01,1.1723e-01,-9.5000e+00,1.7266e+01,9.4130e-02,-9.5000e+00,1.7313e+01,7.9904e-02,-9.5000e+00,1.7362e+01,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#476"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.1500e+00,1.9618e+00,2.2550e+00,-9.5000e+00,1.9618e+00,2.2550e+00,-9.5000e+00,1.9618e+00,3.2510e-01,-9.1500e+00,1.9618e+00,2.2550e+00,-9.5000e+00,1.9618e+00,3.2510e-01,0.0000e+00,1.9618e+00,3.2510e-01,-9.1500e+00,1.9618e+00,2.2550e+00,0.0000e+00,1.9618e+00,3.2510e-01,0.0000e+00,1.9618e+00,2.2550e+00,-9.1500e+00,1.9618e+00,2.2550e+00,-3.5000e-01,1.9618e+00,2.2550e+00,-3.5000e-01,1.9618e+00,2.7500e+00,-9.1500e+00,1.9618e+00,2.2550e+00,-3.5000e-01,1.9618e+00,2.7500e+00,-9.1500e+00,1.9618e+00,2.7500e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#477"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,6,7,8,6,8,9,6,9,10,10,11,12,10,12,13,6,10,13,6,13,14,6,14,15,6,15,16,6,16,17,6,17,18,6,18,19,6,19,20,21,6,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,5.0000e-01,7.5100e-02,0.0000e+00,5.0000e-01,0.0000e+00,0.0000e+00,1.7118e+00,0.0000e+00,0.0000e+00,1.7752e+00,6.2467e-03,0.0000e+00,1.8362e+00,2.4747e-02,0.0000e+00,1.8924e+00,5.4789e-02,0.0000e+00,1.9417e+00,9.5220e-02,0.0000e+00,1.9821e+00,1.4448e-01,0.0000e+00,2.0122e+00,2.0069e-01,0.0000e+00,2.0307e+00,2.6168e-01,0.0000e+00,2.0369e+00,3.2510e-01,0.0000e+00,2.0369e+00,2.2550e+00,0.0000e+00,1.9618e+00,2.2550e+00,0.0000e+00,1.9618e+00,3.2510e-01,0.0000e+00,1.9570e+00,2.7633e-01,0.0000e+00,1.9428e+00,2.2943e-01,0.0000e+00,1.9197e+00,1.8621e-01,0.0000e+00,1.8886e+00,1.4832e-01,0.0000e+00,1.8507e+00,1.1723e-01,0.0000e+00,1.8075e+00,9.4130e-02,0.0000e+00,1.7606e+00,7.9904e-02,0.0000e+00,1.7118e+00,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#478"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,10,11,12,10,12,13,9,10,13,8,9,13,7,8,13,6,7,13,6,13,14,21,6,14,21,14,15,21,15,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,1.8612e+01,8.8818e-16,0.0000e+00,1.8612e+01,7.5100e-02,0.0000e+00,1.7362e+01,7.5100e-02,0.0000e+00,1.7313e+01,7.9904e-02,0.0000e+00,1.7266e+01,9.4130e-02,0.0000e+00,1.7223e+01,1.1723e-01,0.0000e+00,1.7185e+01,1.4832e-01,0.0000e+00,1.7154e+01,1.8621e-01,0.0000e+00,1.7131e+01,2.2943e-01,0.0000e+00,1.7117e+01,2.7633e-01,0.0000e+00,1.7112e+01,3.2510e-01,0.0000e+00,1.7112e+01,2.2550e+00,0.0000e+00,1.7037e+01,2.2550e+00,0.0000e+00,1.7037e+01,3.2510e-01,0.0000e+00,1.7043e+01,2.6168e-01,0.0000e+00,1.7062e+01,2.0069e-01,0.0000e+00,1.7092e+01,1.4448e-01,0.0000e+00,1.7132e+01,9.5220e-02,0.0000e+00,1.7181e+01,5.4789e-02,0.0000e+00,1.7238e+01,2.4747e-02,0.0000e+00,1.7299e+01,6.2467e-03,0.0000e+00,1.7362e+01,8.8818e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#479"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_75_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_75_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#480"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_81_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_81_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#481"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_87_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_87_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#482"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_93_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_93_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#483"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.2500e+00,3.7950e-17,7.5100e-02,-9.0000e+00,3.7950e-17,7.5100e-02,-9.0000e+00,-4.9999e-27,0.0000e+00,-7.2500e+00,3.7950e-17,7.5100e-02,-9.0000e+00,-4.9999e-27,0.0000e+00,-7.2500e+00,-4.9999e-27,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#484"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.5000e+00,1.9112e+01,1.8818e-14,-9.0000e+00,1.9112e+01,1.8818e-14,-9.0000e+00,1.9112e+01,7.5100e-02,-7.5000e+00,1.9112e+01,1.8818e-14,-9.0000e+00,1.9112e+01,7.5100e-02,-7.5000e+00,1.9112e+01,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#485"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,1.4631e+01,3.9751e+00,2.5000e-01,1.2131e+01,3.9751e+00,3.2510e-01,1.2131e+01,3.9751e+00,2.5000e-01,1.4631e+01,3.9751e+00,3.2510e-01,1.2131e+01,3.9751e+00,3.2510e-01,1.4631e+01,3.9751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#486"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,1.5231e+01,4.5751e+00,3.2510e-01,1.6250e+01,4.5751e+00,2.5000e-01,1.6250e+01,4.5751e+00,3.2510e-01,1.5231e+01,4.5751e+00,2.5000e-01,1.6250e+01,4.5751e+00,2.5000e-01,1.5231e+01,4.5751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#487"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,4.0310e+00,4.5751e+00,2.5000e-01,2.8618e+00,4.5751e+00,3.2510e-01,2.8618e+00,4.5751e+00,2.5000e-01,4.0310e+00,4.5751e+00,3.2510e-01,2.8618e+00,4.5751e+00,3.2510e-01,4.0310e+00,4.5751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#488"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {27,0,1,27,1,2,27,2,3,27,3,4,27,4,5,27,5,6,27,6,7,27,7,8,27,8,9,27,9,10,27,10,11,11,12,13,27,11,13,27,13,14,27,14,15,15,16,17,15,17,18,15,18,19,15,19,20,15,20,21,15,21,22,15,22,23,15,23,24,15,24,25,27,15,25,27,25,26}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,2.3618e+00,4.0751e+00,2.5000e-01,2.3714e+00,4.1726e+00,2.5000e-01,2.3999e+00,4.2664e+00,2.5000e-01,2.4461e+00,4.3529e+00,2.5000e-01,2.5082e+00,4.4287e+00,2.5000e-01,2.5840e+00,4.4908e+00,2.5000e-01,2.6705e+00,4.5370e+00,2.5000e-01,2.7643e+00,4.5655e+00,2.5000e-01,2.8618e+00,4.5751e+00,2.5000e-01,4.0310e+00,4.5751e+00,2.5000e-01,4.6310e+00,3.9751e+00,2.5000e-01,7.1310e+00,3.9751e+00,2.5000e-01,7.1310e+00,4.4711e+00,2.5000e-01,1.2131e+01,4.4711e+00,2.5000e-01,1.2131e+01,3.9751e+00,2.5000e-01,1.4631e+01,3.9751e+00,2.5000e-01,1.5231e+01,4.5751e+00,2.5000e-01,1.6250e+01,4.5751e+00,2.5000e-01,1.6348e+01,4.5655e+00,2.5000e-01,1.6442e+01,4.5370e+00,2.5000e-01,1.6528e+01,4.4908e+00,2.5000e-01,1.6604e+01,4.4287e+00,2.5000e-01,1.6666e+01,4.3529e+00,2.5000e-01,1.6712e+01,4.2664e+00,2.5000e-01,1.6741e+01,4.1726e+00,2.5000e-01,1.6750e+01,4.0751e+00,2.5000e-01,1.6750e+01,3.3251e+00,2.5000e-01,2.3618e+00,3.3251e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#489"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.5000e-01,1.7037e+01,2.7500e+00,-9.1500e+00,1.7037e+01,2.7500e+00,-3.5000e-01,1.7035e+01,2.7826e+00,-9.1500e+00,1.7035e+01,2.7826e+00,-3.5000e-01,1.7028e+01,2.8147e+00,-9.1500e+00,1.7028e+01,2.8147e+00,-3.5000e-01,1.7018e+01,2.8457e+00,-9.1500e+00,1.7018e+01,2.8457e+00,-3.5000e-01,1.7003e+01,2.8750e+00,-9.1500e+00,1.7003e+01,2.8750e+00,-3.5000e-01,1.6985e+01,2.9022e+00,-9.1500e+00,1.6985e+01,2.9022e+00,-3.5000e-01,1.6964e+01,2.9268e+00,-9.1500e+00,1.6964e+01,2.9268e+00,-3.5000e-01,1.6939e+01,2.9483e+00,-9.1500e+00,1.6939e+01,2.9483e+00,-3.5000e-01,1.6912e+01,2.9665e+00,-9.1500e+00,1.6912e+01,2.9665e+00,-3.5000e-01,1.6883e+01,2.9810e+00,-9.1500e+00,1.6883e+01,2.9810e+00,-3.5000e-01,1.6852e+01,2.9915e+00,-9.1500e+00,1.6852e+01,2.9915e+00,-3.5000e-01,1.6820e+01,2.9979e+00,-9.1500e+00,1.6820e+01,2.9979e+00,-3.5000e-01,1.6787e+01,3.0000e+00,-9.1500e+00,1.6787e+01,3.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#490"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.1500e+00,1.7037e+01,2.2550e+00,-9.5000e+00,1.7037e+01,2.2550e+00,-9.5000e+00,1.7037e+01,3.2510e-01,-9.1500e+00,1.7037e+01,2.2550e+00,-9.5000e+00,1.7037e+01,3.2510e-01,0.0000e+00,1.7037e+01,3.2510e-01,-9.1500e+00,1.7037e+01,2.2550e+00,0.0000e+00,1.7037e+01,3.2510e-01,0.0000e+00,1.7037e+01,2.2550e+00,-9.1500e+00,1.7037e+01,2.2550e+00,-3.5000e-01,1.7037e+01,2.2550e+00,-3.5000e-01,1.7037e+01,2.7500e+00,-9.1500e+00,1.7037e+01,2.2550e+00,-3.5000e-01,1.7037e+01,2.7500e+00,-9.1500e+00,1.7037e+01,2.7500e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#491"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,1.7037e+01,3.2510e-01,-9.5000e+00,1.7037e+01,3.2510e-01,0.0000e+00,1.7040e+01,2.8267e-01,-9.5000e+00,1.7040e+01,2.8267e-01,0.0000e+00,1.7048e+01,2.4096e-01,-9.5000e+00,1.7048e+01,2.4096e-01,0.0000e+00,1.7062e+01,2.0069e-01,-9.5000e+00,1.7062e+01,2.0069e-01,0.0000e+00,1.7080e+01,1.6255e-01,-9.5000e+00,1.7080e+01,1.6255e-01,0.0000e+00,1.7104e+01,1.2719e-01,-9.5000e+00,1.7104e+01,1.2719e-01,0.0000e+00,1.7132e+01,9.5220e-02,-9.5000e+00,1.7132e+01,9.5220e-02,0.0000e+00,1.7164e+01,6.7181e-02,-9.5000e+00,1.7164e+01,6.7181e-02,0.0000e+00,1.7199e+01,4.3555e-02,-9.5000e+00,1.7199e+01,4.3555e-02,0.0000e+00,1.7238e+01,2.4747e-02,-9.5000e+00,1.7238e+01,2.4747e-02,0.0000e+00,1.7278e+01,1.1078e-02,-9.5000e+00,1.7278e+01,1.1078e-02,0.0000e+00,1.7320e+01,2.7813e-03,-9.5000e+00,1.7320e+01,2.7813e-03,0.0000e+00,1.7362e+01,0.0000e+00,-9.5000e+00,1.7362e+01,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-9.9144e-01,-1.3053e-01,0.0000e+00,-9.9144e-01,-1.3053e-01,0.0000e+00,-9.6593e-01,-2.5882e-01,0.0000e+00,-9.6593e-01,-2.5882e-01,0.0000e+00,-9.2388e-01,-3.8268e-01,0.0000e+00,-9.2388e-01,-3.8268e-01,0.0000e+00,-8.6603e-01,-5.0000e-01,0.0000e+00,-8.6603e-01,-5.0000e-01,0.0000e+00,-7.9335e-01,-6.0876e-01,0.0000e+00,-7.9335e-01,-6.0876e-01,0.0000e+00,-7.0711e-01,-7.0711e-01,0.0000e+00,-7.0711e-01,-7.0711e-01,0.0000e+00,-6.0876e-01,-7.9335e-01,0.0000e+00,-6.0876e-01,-7.9335e-01,0.0000e+00,-5.0000e-01,-8.6603e-01,0.0000e+00,-5.0000e-01,-8.6603e-01,0.0000e+00,-3.8268e-01,-9.2388e-01,0.0000e+00,-3.8268e-01,-9.2388e-01,0.0000e+00,-2.5882e-01,-9.6593e-01,0.0000e+00,-2.5882e-01,-9.6593e-01,0.0000e+00,-1.3053e-01,-9.9144e-01,0.0000e+00,-1.3053e-01,-9.9144e-01,0.0000e+00,-1.2246e-16,-1.0000e+00,0.0000e+00,-1.2246e-16,-1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#492"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {5,62,63,63,64,65,63,65,66,63,66,67,63,67,68,63,68,69,63,69,70,63,70,71,63,71,72,63,72,73,63,73,74,63,74,75,63,75,76,63,76,77,63,77,78,90,91,92,90,92,93,90,93,94,90,94,95,90,95,96,89,90,96,89,96,97,89,97,98,89,98,99,89,99,100,88,89,100,87,88,100,86,87,100,85,86,100,100,101,55,100,55,56,100,56,57,100,57,58,100,58,59,100,59,60,100,60,61,100,61,31,100,31,32,85,100,32,84,85,32,84,32,33,84,33,34,84,34,35,84,35,36,84,36,37,84,37,38,84,38,39,83,84,39,83,39,40,83,40,41,83,41,42,83,42,43,83,43,44,83,44,45,83,45,46,54,55,101,53,54,101,52,53,101,51,52,101,50,51,101,49,50,101,48,49,101,48,101,102,47,48,102,46,47,102,83,46,102,82,83,102,81,82,102,81,102,103,80,81,103,79,80,103,78,79,103,103,62,5,103,5,6,103,6,7,103,7,8,103,8,9,103,9,10,103,10,11,103,11,12,103,12,13,103,13,14,78,103,14,78,14,15,78,15,16,78,16,17,78,17,18,78,18,19,78,19,20,78,20,21,78,21,22,78,22,23,78,23,24,78,24,25,63,78,25,63,25,26,63,26,27,63,27,28,63,28,29,63,29,30,63,30,0,63,0,1,63,1,2,63,2,3,63,3,4,5,63,4}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_155_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#493"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0000e+00,1.9112e+01,7.5100e-02,-5.0000e-01,1.9112e+01,7.5100e-02,-5.0000e-01,1.9112e+01,1.8818e-14,-2.0000e+00,1.9112e+01,7.5100e-02,-5.0000e-01,1.9112e+01,1.8818e-14,-2.0000e+00,1.9112e+01,1.8818e-14}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#494"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {24,63,64,65,66,36,65,36,37,65,37,38,65,38,39,65,39,40,65,40,41,65,41,42,65,42,43,65,43,44,65,44,45,65,45,46,65,46,47,65,47,48,65,48,49,35,36,66,34,35,66,33,34,66,32,33,66,31,32,66,61,31,66,61,66,67,60,61,67,59,60,67,58,59,67,57,58,67,56,57,67,56,67,68,55,56,68,54,55,68,53,54,68,52,53,68,51,52,68,50,51,68,49,50,68,65,49,68,65,68,69,65,69,70,65,70,71,65,71,72,65,72,73,65,73,74,65,74,75,65,75,76,65,76,77,65,77,78,65,78,79,65,79,80,65,80,81,65,81,82,65,82,83,65,83,84,65,84,85,64,65,85,64,85,86,64,86,87,64,87,88,64,88,89,64,89,90,64,90,91,64,91,92,64,92,93,64,93,94,64,94,95,64,95,96,64,96,97,64,97,98,64,98,99,64,99,100,64,100,101,64,101,102,64,102,103,103,62,63,63,24,25,63,25,26,63,26,27,63,27,28,103,63,28,103,28,29,103,29,30,103,30,0,103,0,1,103,1,2,103,2,3,103,3,4,103,4,5,103,5,6,103,6,7,103,7,8,103,8,9,103,9,10,103,10,11,64,103,11,64,11,12,64,12,13,64,13,14,64,14,15,64,15,16,64,16,17,64,17,18,64,18,19,64,19,20,64,20,21,64,21,22,64,22,23,24,64,23}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_167_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#495"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,1.7112e+01,3.2510e-01,-9.5000e+00,1.7112e+01,3.2510e-01,0.0000e+00,1.7114e+01,2.9247e-01,-9.5000e+00,1.7114e+01,2.9247e-01,0.0000e+00,1.7121e+01,2.6040e-01,-9.5000e+00,1.7121e+01,2.6040e-01,0.0000e+00,1.7131e+01,2.2943e-01,-9.5000e+00,1.7131e+01,2.2943e-01,0.0000e+00,1.7145e+01,2.0010e-01,-9.5000e+00,1.7145e+01,2.0010e-01,0.0000e+00,1.7164e+01,1.7291e-01,-9.5000e+00,1.7164e+01,1.7291e-01,0.0000e+00,1.7185e+01,1.4832e-01,-9.5000e+00,1.7185e+01,1.4832e-01,0.0000e+00,1.7210e+01,1.2676e-01,-9.5000e+00,1.7210e+01,1.2676e-01,0.0000e+00,1.7237e+01,1.0859e-01,-9.5000e+00,1.7237e+01,1.0859e-01,0.0000e+00,1.7266e+01,9.4130e-02,-9.5000e+00,1.7266e+01,9.4130e-02,0.0000e+00,1.7297e+01,8.3619e-02,-9.5000e+00,1.7297e+01,8.3619e-02,0.0000e+00,1.7329e+01,7.7239e-02,-9.5000e+00,1.7329e+01,7.7239e-02,0.0000e+00,1.7362e+01,7.5100e-02,-9.5000e+00,1.7362e+01,7.5100e-02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#496"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_180_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_180_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#497"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.5000e-01,1.7112e+01,2.7500e+00,-9.1500e+00,1.7112e+01,2.7500e+00,-3.5000e-01,1.7109e+01,2.7924e+00,-9.1500e+00,1.7109e+01,2.7924e+00,-3.5000e-01,1.7101e+01,2.8341e+00,-9.1500e+00,1.7101e+01,2.8341e+00,-3.5000e-01,1.7087e+01,2.8744e+00,-9.1500e+00,1.7087e+01,2.8744e+00,-3.5000e-01,1.7068e+01,2.9125e+00,-9.1500e+00,1.7068e+01,2.9125e+00,-3.5000e-01,1.7045e+01,2.9479e+00,-9.1500e+00,1.7045e+01,2.9479e+00,-3.5000e-01,1.7017e+01,2.9799e+00,-9.1500e+00,1.7017e+01,2.9799e+00,-3.5000e-01,1.6985e+01,3.0079e+00,-9.1500e+00,1.6985e+01,3.0079e+00,-3.5000e-01,1.6949e+01,3.0315e+00,-9.1500e+00,1.6949e+01,3.0315e+00,-3.5000e-01,1.6911e+01,3.0504e+00,-9.1500e+00,1.6911e+01,3.0504e+00,-3.5000e-01,1.6871e+01,3.0640e+00,-9.1500e+00,1.6871e+01,3.0640e+00,-3.5000e-01,1.6829e+01,3.0723e+00,-9.1500e+00,1.6829e+01,3.0723e+00,-3.5000e-01,1.6787e+01,3.0751e+00,-9.1500e+00,1.6787e+01,3.0751e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,1.0000e+00,6.1232e-17,0.0000e+00,1.0000e+00,6.1232e-17,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,0.0000e+00,1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#498"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.5000e-01,2.2869e+00,3.0751e+00,-9.1500e+00,2.2869e+00,3.0751e+00,-3.5000e-01,2.2445e+00,3.0723e+00,-9.1500e+00,2.2445e+00,3.0723e+00,-3.5000e-01,2.2028e+00,3.0640e+00,-9.1500e+00,2.2028e+00,3.0640e+00,-3.5000e-01,2.1625e+00,3.0504e+00,-9.1500e+00,2.1625e+00,3.0504e+00,-3.5000e-01,2.1244e+00,3.0315e+00,-9.1500e+00,2.1244e+00,3.0315e+00,-3.5000e-01,2.0890e+00,3.0079e+00,-9.1500e+00,2.0890e+00,3.0079e+00,-3.5000e-01,2.0570e+00,2.9799e+00,-9.1500e+00,2.0570e+00,2.9799e+00,-3.5000e-01,2.0290e+00,2.9479e+00,-9.1500e+00,2.0290e+00,2.9479e+00,-3.5000e-01,2.0054e+00,2.9125e+00,-9.1500e+00,2.0054e+00,2.9125e+00,-3.5000e-01,1.9865e+00,2.8744e+00,-9.1500e+00,1.9865e+00,2.8744e+00,-3.5000e-01,1.9729e+00,2.8341e+00,-9.1500e+00,1.9729e+00,2.8341e+00,-3.5000e-01,1.9646e+00,2.7924e+00,-9.1500e+00,1.9646e+00,2.7924e+00,-3.5000e-01,1.9618e+00,2.7500e+00,-9.1500e+00,1.9618e+00,2.7500e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-1.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#499"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,1.7118e+00,7.5100e-02,-9.5000e+00,1.7118e+00,7.5100e-02,0.0000e+00,1.7444e+00,7.7239e-02,-9.5000e+00,1.7444e+00,7.7239e-02,0.0000e+00,1.7765e+00,8.3619e-02,-9.5000e+00,1.7765e+00,8.3619e-02,0.0000e+00,1.8075e+00,9.4130e-02,-9.5000e+00,1.8075e+00,9.4130e-02,0.0000e+00,1.8368e+00,1.0859e-01,-9.5000e+00,1.8368e+00,1.0859e-01,0.0000e+00,1.8640e+00,1.2676e-01,-9.5000e+00,1.8640e+00,1.2676e-01,0.0000e+00,1.8886e+00,1.4832e-01,-9.5000e+00,1.8886e+00,1.4832e-01,0.0000e+00,1.9101e+00,1.7291e-01,-9.5000e+00,1.9101e+00,1.7291e-01,0.0000e+00,1.9283e+00,2.0010e-01,-9.5000e+00,1.9283e+00,2.0010e-01,0.0000e+00,1.9428e+00,2.2943e-01,-9.5000e+00,1.9428e+00,2.2943e-01,0.0000e+00,1.9533e+00,2.6040e-01,-9.5000e+00,1.9533e+00,2.6040e-01,0.0000e+00,1.9597e+00,2.9247e-01,-9.5000e+00,1.9597e+00,2.9247e-01,0.0000e+00,1.9618e+00,3.2510e-01,-9.5000e+00,1.9618e+00,3.2510e-01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-1.2246e-16,1.0000e+00,-0.0000e+00,-1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#500"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {16,67,68,86,87,62,85,86,62,84,85,62,83,84,62,82,83,62,81,82,62,62,44,45,62,45,46,62,46,47,62,47,48,81,62,48,80,81,48,80,48,49,80,49,50,80,50,51,80,51,52,80,52,53,80,53,54,80,54,55,79,80,55,79,55,56,79,56,57,79,57,58,79,58,59,79,59,60,79,60,61,79,61,31,43,44,62,42,43,62,41,42,62,40,41,62,39,40,62,38,39,62,38,62,63,37,38,63,36,37,63,35,36,63,34,35,63,33,34,63,33,63,64,32,33,64,31,32,64,79,31,64,78,79,64,77,78,64,77,64,65,76,77,65,75,76,65,74,75,65,73,74,65,72,73,65,71,72,65,70,71,65,69,70,65,68,69,65,65,66,67,67,16,17,67,17,18,67,18,19,67,19,20,65,67,20,65,20,21,65,21,22,65,22,23,65,23,24,65,24,25,65,25,26,65,26,27,65,27,28,65,28,29,65,29,30,65,30,0,65,0,1,65,1,2,68,65,2,68,2,3,68,3,4,68,4,5,68,5,6,68,6,7,68,7,8,68,8,9,68,9,10,68,10,11,68,11,12,68,12,13,68,13,14,68,14,15,16,68,15}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_207_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#501"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2500e+00,-4.9999e-27,0.0000e+00,-5.0000e-01,-4.9999e-27,0.0000e+00,-5.0000e-01,3.7950e-17,7.5100e-02,-2.2500e+00,-4.9999e-27,0.0000e+00,-5.0000e-01,3.7950e-17,7.5100e-02,-2.2500e+00,3.7950e-17,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#502"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {5,84,85,87,62,44,87,44,45,87,45,46,87,46,47,87,47,48,87,48,49,87,49,50,87,50,51,87,51,52,87,52,53,87,53,54,87,54,55,87,55,56,87,56,57,43,44,62,42,43,62,41,42,62,40,41,62,39,40,62,38,39,62,38,62,63,37,38,63,36,37,63,35,36,63,34,35,63,33,34,63,33,63,64,32,33,64,31,32,64,61,31,64,60,61,64,59,60,64,58,59,64,57,58,64,87,57,64,87,64,65,87,65,66,87,66,67,87,67,68,87,68,69,87,69,70,87,70,71,87,71,72,87,72,73,86,87,73,86,73,74,86,74,75,86,75,76,86,76,77,86,77,78,86,78,79,86,79,80,86,80,81,86,81,82,86,82,83,83,84,5,83,5,6,83,6,7,83,7,8,83,8,9,83,9,10,83,10,11,83,11,12,83,12,13,83,13,14,83,14,15,83,15,16,83,16,17,83,17,18,83,18,19,86,83,19,86,19,20,86,20,21,86,21,22,86,22,23,86,23,24,86,24,25,85,86,25,85,25,26,85,26,27,85,27,28,85,28,29,85,29,30,85,30,0,85,0,1,85,1,2,85,2,3,85,3,4,5,85,4}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_219_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#503"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,1.7118e+00,0.0000e+00,-9.5000e+00,1.7118e+00,0.0000e+00,0.0000e+00,1.7542e+00,2.7813e-03,-9.5000e+00,1.7542e+00,2.7813e-03,0.0000e+00,1.7959e+00,1.1078e-02,-9.5000e+00,1.7959e+00,1.1078e-02,0.0000e+00,1.8362e+00,2.4747e-02,-9.5000e+00,1.8362e+00,2.4747e-02,0.0000e+00,1.8743e+00,4.3555e-02,-9.5000e+00,1.8743e+00,4.3555e-02,0.0000e+00,1.9097e+00,6.7181e-02,-9.5000e+00,1.9097e+00,6.7181e-02,0.0000e+00,1.9417e+00,9.5220e-02,-9.5000e+00,1.9417e+00,9.5220e-02,0.0000e+00,1.9697e+00,1.2719e-01,-9.5000e+00,1.9697e+00,1.2719e-01,0.0000e+00,1.9933e+00,1.6255e-01,-9.5000e+00,1.9933e+00,1.6255e-01,0.0000e+00,2.0122e+00,2.0069e-01,-9.5000e+00,2.0122e+00,2.0069e-01,0.0000e+00,2.0258e+00,2.4096e-01,-9.5000e+00,2.0258e+00,2.4096e-01,0.0000e+00,2.0341e+00,2.8267e-01,-9.5000e+00,2.0341e+00,2.8267e-01,0.0000e+00,2.0369e+00,3.2510e-01,-9.5000e+00,2.0369e+00,3.2510e-01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,-1.2246e-16,-1.0000e+00,0.0000e+00,-1.2246e-16,-1.0000e+00,0.0000e+00,1.3053e-01,-9.9144e-01,0.0000e+00,1.3053e-01,-9.9144e-01,0.0000e+00,2.5882e-01,-9.6593e-01,0.0000e+00,2.5882e-01,-9.6593e-01,0.0000e+00,3.8268e-01,-9.2388e-01,0.0000e+00,3.8268e-01,-9.2388e-01,0.0000e+00,5.0000e-01,-8.6603e-01,0.0000e+00,5.0000e-01,-8.6603e-01,0.0000e+00,6.0876e-01,-7.9335e-01,0.0000e+00,6.0876e-01,-7.9335e-01,0.0000e+00,7.0711e-01,-7.0711e-01,0.0000e+00,7.0711e-01,-7.0711e-01,0.0000e+00,7.9335e-01,-6.0876e-01,0.0000e+00,7.9335e-01,-6.0876e-01,0.0000e+00,8.6603e-01,-5.0000e-01,0.0000e+00,8.6603e-01,-5.0000e-01,0.0000e+00,9.2388e-01,-3.8268e-01,0.0000e+00,9.2388e-01,-3.8268e-01,0.0000e+00,9.6593e-01,-2.5882e-01,0.0000e+00,9.6593e-01,-2.5882e-01,0.0000e+00,9.9144e-01,-1.3053e-01,0.0000e+00,9.9144e-01,-1.3053e-01,0.0000e+00,1.0000e+00,-1.8370e-16,0.0000e+00,1.0000e+00,-1.8370e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#504"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.1500e+00,2.0369e+00,2.2550e+00,-9.1500e+00,2.0369e+00,2.7500e+00,-3.5000e-01,2.0369e+00,2.7500e+00,-9.1500e+00,2.0369e+00,2.2550e+00,-3.5000e-01,2.0369e+00,2.7500e+00,-3.5000e-01,2.0369e+00,2.2550e+00,-9.1500e+00,2.0369e+00,2.2550e+00,0.0000e+00,2.0369e+00,2.2550e+00,0.0000e+00,2.0369e+00,3.2510e-01,-9.1500e+00,2.0369e+00,2.2550e+00,0.0000e+00,2.0369e+00,3.2510e-01,-9.5000e+00,2.0369e+00,3.2510e-01,-9.1500e+00,2.0369e+00,2.2550e+00,-9.5000e+00,2.0369e+00,3.2510e-01,-9.5000e+00,2.0369e+00,2.2550e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#505"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.5000e-01,2.2869e+00,3.0000e+00,-9.1500e+00,2.2869e+00,3.0000e+00,-3.5000e-01,2.2543e+00,2.9979e+00,-9.1500e+00,2.2543e+00,2.9979e+00,-3.5000e-01,2.2222e+00,2.9915e+00,-9.1500e+00,2.2222e+00,2.9915e+00,-3.5000e-01,2.1912e+00,2.9810e+00,-9.1500e+00,2.1912e+00,2.9810e+00,-3.5000e-01,2.1619e+00,2.9665e+00,-9.1500e+00,2.1619e+00,2.9665e+00,-3.5000e-01,2.1347e+00,2.9483e+00,-9.1500e+00,2.1347e+00,2.9483e+00,-3.5000e-01,2.1101e+00,2.9268e+00,-9.1500e+00,2.1101e+00,2.9268e+00,-3.5000e-01,2.0886e+00,2.9022e+00,-9.1500e+00,2.0886e+00,2.9022e+00,-3.5000e-01,2.0704e+00,2.8750e+00,-9.1500e+00,2.0704e+00,2.8750e+00,-3.5000e-01,2.0559e+00,2.8457e+00,-9.1500e+00,2.0559e+00,2.8457e+00,-3.5000e-01,2.0454e+00,2.8147e+00,-9.1500e+00,2.0454e+00,2.8147e+00,-3.5000e-01,2.0390e+00,2.7826e+00,-9.1500e+00,2.0390e+00,2.7826e+00,-3.5000e-01,2.0369e+00,2.7500e+00,-9.1500e+00,2.0369e+00,2.7500e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#506"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.8252e+00,2.3618e+00,3.3251e+00,-9.8252e+00,2.3618e+00,4.0751e+00,-9.8252e+00,3.3618e+00,5.0751e+00,-9.8252e+00,2.3618e+00,3.3251e+00,-9.8252e+00,3.3618e+00,5.0751e+00,-9.8252e+00,1.5750e+01,5.0751e+00,-9.8252e+00,2.3618e+00,3.3251e+00,-9.8252e+00,1.5750e+01,5.0751e+00,-9.8252e+00,1.6750e+01,4.0751e+00,-9.8252e+00,2.3618e+00,3.3251e+00,-9.8252e+00,1.6750e+01,4.0751e+00,-9.8252e+00,1.6750e+01,3.3251e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#507"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.8252e+00,1.5750e+01,5.0751e+00,-9.8252e+00,3.3618e+00,5.0751e+00,-9.7501e+00,3.3618e+00,5.0751e+00,-9.8252e+00,1.5750e+01,5.0751e+00,-9.7501e+00,3.3618e+00,5.0751e+00,-9.7501e+00,1.5750e+01,5.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#508"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.7501e+00,1.5750e+01,5.0751e+00,-9.7501e+00,3.3618e+00,5.0751e+00,-9.7501e+00,2.3618e+00,4.0751e+00,-9.7501e+00,1.5750e+01,5.0751e+00,-9.7501e+00,2.3618e+00,4.0751e+00,-9.7501e+00,2.3618e+00,3.3251e+00,-9.7501e+00,1.5750e+01,5.0751e+00,-9.7501e+00,2.3618e+00,3.3251e+00,-9.7501e+00,1.6750e+01,3.3251e+00,-9.7501e+00,1.5750e+01,5.0751e+00,-9.7501e+00,1.6750e+01,3.3251e+00,-9.7501e+00,1.6750e+01,4.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#509"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.5000e+00,1.6750e+01,3.0751e+00,-9.5000e+00,2.3618e+00,3.0751e+00,-9.5301e+00,1.6750e+01,3.0769e+00,-9.5301e+00,2.3618e+00,3.0769e+00,-9.5599e+00,1.6750e+01,3.0823e+00,-9.5599e+00,2.3618e+00,3.0823e+00,-9.5887e+00,1.6750e+01,3.0913e+00,-9.5887e+00,2.3618e+00,3.0913e+00,-9.6162e+00,1.6750e+01,3.1037e+00,-9.6162e+00,2.3618e+00,3.1037e+00,-9.6421e+00,1.6750e+01,3.1193e+00,-9.6421e+00,2.3618e+00,3.1193e+00,-9.6659e+00,1.6750e+01,3.1379e+00,-9.6659e+00,2.3618e+00,3.1379e+00,-9.6872e+00,1.6750e+01,3.1593e+00,-9.6872e+00,2.3618e+00,3.1593e+00,-9.7059e+00,1.6750e+01,3.1830e+00,-9.7059e+00,2.3618e+00,3.1830e+00,-9.7215e+00,1.6750e+01,3.2089e+00,-9.7215e+00,2.3618e+00,3.2089e+00,-9.7339e+00,1.6750e+01,3.2364e+00,-9.7339e+00,2.3618e+00,3.2364e+00,-9.7429e+00,1.6750e+01,3.2653e+00,-9.7429e+00,2.3618e+00,3.2653e+00,-9.7483e+00,1.6750e+01,3.2950e+00,-9.7483e+00,2.3618e+00,3.2950e+00,-9.7501e+00,1.6750e+01,3.3251e+00,-9.7501e+00,2.3618e+00,3.3251e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-5.5860e-04,-0.0000e+00,1.0000e+00,-5.5860e-04,-0.0000e+00,1.0000e+00,1.2002e-01,-0.0000e+00,9.9277e-01,1.2002e-01,-0.0000e+00,9.9277e-01,2.3886e-01,-0.0000e+00,9.7105e-01,2.3886e-01,-0.0000e+00,9.7105e-01,3.5420e-01,-0.0000e+00,9.3517e-01,3.5420e-01,-0.0000e+00,9.3517e-01,4.6438e-01,-0.0000e+00,8.8564e-01,4.6438e-01,-0.0000e+00,8.8564e-01,5.6778e-01,-0.0000e+00,8.2318e-01,5.6778e-01,-0.0000e+00,8.2318e-01,6.6290e-01,-0.0000e+00,7.4871e-01,6.6290e-01,-0.0000e+00,7.4871e-01,7.4834e-01,-0.0000e+00,6.6332e-01,7.4834e-01,-0.0000e+00,6.6332e-01,8.2286e-01,-0.0000e+00,5.6824e-01,8.2286e-01,-0.0000e+00,5.6824e-01,8.8538e-01,-0.0000e+00,4.6488e-01,8.8538e-01,-0.0000e+00,4.6488e-01,9.3497e-01,-0.0000e+00,3.5473e-01,9.3497e-01,-0.0000e+00,3.5473e-01,9.7092e-01,-0.0000e+00,2.3940e-01,9.7092e-01,-0.0000e+00,2.3940e-01,9.9270e-01,-0.0000e+00,1.2058e-01,9.9270e-01,-0.0000e+00,1.2058e-01,1.0000e+00,-0.0000e+00,6.1232e-17,1.0000e+00,-0.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#510"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.5000e+00,1.6750e+01,3.0000e+00,-9.5000e+00,2.3618e+00,3.0000e+00,-9.5392e+00,1.6750e+01,3.0024e+00,-9.5392e+00,2.3618e+00,3.0024e+00,-9.5778e+00,1.6750e+01,3.0094e+00,-9.5778e+00,2.3618e+00,3.0094e+00,-9.6153e+00,1.6750e+01,3.0211e+00,-9.6153e+00,2.3618e+00,3.0211e+00,-9.6511e+00,1.6750e+01,3.0372e+00,-9.6511e+00,2.3618e+00,3.0372e+00,-9.6847e+00,1.6750e+01,3.0575e+00,-9.6847e+00,2.3618e+00,3.0575e+00,-9.7157e+00,1.6750e+01,3.0817e+00,-9.7157e+00,2.3618e+00,3.0817e+00,-9.7434e+00,1.6750e+01,3.1095e+00,-9.7434e+00,2.3618e+00,3.1095e+00,-9.7677e+00,1.6750e+01,3.1404e+00,-9.7677e+00,2.3618e+00,3.1404e+00,-9.7880e+00,1.6750e+01,3.1740e+00,-9.7880e+00,2.3618e+00,3.1740e+00,-9.8041e+00,1.6750e+01,3.2098e+00,-9.8041e+00,2.3618e+00,3.2098e+00,-9.8158e+00,1.6750e+01,3.2473e+00,-9.8158e+00,2.3618e+00,3.2473e+00,-9.8229e+00,1.6750e+01,3.2859e+00,-9.8229e+00,2.3618e+00,3.2859e+00,-9.8252e+00,1.6750e+01,3.3251e+00,-9.8252e+00,2.3618e+00,3.3251e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {4.2938e-04,0.0000e+00,-1.0000e+00,4.2938e-04,0.0000e+00,-1.0000e+00,-1.2014e-01,0.0000e+00,-9.9276e-01,-1.2014e-01,0.0000e+00,-9.9276e-01,-2.3896e-01,0.0000e+00,-9.7103e-01,-2.3896e-01,0.0000e+00,-9.7103e-01,-3.5430e-01,0.0000e+00,-9.3513e-01,-3.5430e-01,0.0000e+00,-9.3513e-01,-4.6446e-01,0.0000e+00,-8.8559e-01,-4.6446e-01,0.0000e+00,-8.8559e-01,-5.6785e-01,0.0000e+00,-8.2313e-01,-5.6785e-01,0.0000e+00,-8.2313e-01,-6.6295e-01,0.0000e+00,-7.4866e-01,-6.6295e-01,0.0000e+00,-7.4866e-01,-7.4838e-01,0.0000e+00,-6.6327e-01,-7.4838e-01,0.0000e+00,-6.6327e-01,-8.2289e-01,0.0000e+00,-5.6820e-01,-8.2289e-01,0.0000e+00,-5.6820e-01,-8.8539e-01,0.0000e+00,-4.6484e-01,-8.8539e-01,0.0000e+00,-4.6484e-01,-9.3498e-01,0.0000e+00,-3.5470e-01,-9.3498e-01,0.0000e+00,-3.5470e-01,-9.7093e-01,0.0000e+00,-2.3938e-01,-9.7093e-01,0.0000e+00,-2.3938e-01,-9.9270e-01,0.0000e+00,-1.2057e-01,-9.9270e-01,0.0000e+00,-1.2057e-01,-1.0000e+00,0.0000e+00,-4.6140e-07,-1.0000e+00,0.0000e+00,-4.6140e-07}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#511"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {27,0,1,27,1,2,27,2,3,27,3,4,27,4,5,27,5,6,27,6,7,27,7,8,27,8,9,9,10,11,11,12,13,11,13,14,11,14,15,11,15,16,11,16,17,11,17,18,11,18,19,11,19,20,11,20,21,9,11,21,9,21,22,9,22,23,23,24,25,9,23,25,9,25,26,27,9,26}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,2.8618e+00,4.5751e+00,3.2510e-01,2.7643e+00,4.5655e+00,3.2510e-01,2.6705e+00,4.5370e+00,3.2510e-01,2.5840e+00,4.4908e+00,3.2510e-01,2.5082e+00,4.4287e+00,3.2510e-01,2.4461e+00,4.3529e+00,3.2510e-01,2.3999e+00,4.2664e+00,3.2510e-01,2.3714e+00,4.1726e+00,3.2510e-01,2.3618e+00,4.0751e+00,3.2510e-01,2.3618e+00,3.3251e+00,3.2510e-01,1.6750e+01,3.3251e+00,3.2510e-01,1.6750e+01,4.0751e+00,3.2510e-01,1.6741e+01,4.1726e+00,3.2510e-01,1.6712e+01,4.2664e+00,3.2510e-01,1.6666e+01,4.3529e+00,3.2510e-01,1.6604e+01,4.4287e+00,3.2510e-01,1.6528e+01,4.4908e+00,3.2510e-01,1.6442e+01,4.5370e+00,3.2510e-01,1.6348e+01,4.5655e+00,3.2510e-01,1.6250e+01,4.5751e+00,3.2510e-01,1.5231e+01,4.5751e+00,3.2510e-01,1.4631e+01,3.9751e+00,3.2510e-01,1.2131e+01,3.9751e+00,3.2510e-01,1.2131e+01,4.4703e+00,3.2510e-01,7.1310e+00,4.4703e+00,3.2510e-01,7.1310e+00,3.9751e+00,3.2510e-01,4.6310e+00,3.9751e+00,3.2510e-01,4.0310e+00,4.5751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#512"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,1.6750e+01,3.3251e+00,2.5000e-01,2.3618e+00,3.3251e+00,2.4786e-01,1.6750e+01,3.2925e+00,2.4786e-01,2.3618e+00,3.2925e+00,2.4148e-01,1.6750e+01,3.2604e+00,2.4148e-01,2.3618e+00,3.2604e+00,2.3097e-01,1.6750e+01,3.2294e+00,2.3097e-01,2.3618e+00,3.2294e+00,2.1651e-01,1.6750e+01,3.2001e+00,2.1651e-01,2.3618e+00,3.2001e+00,1.9834e-01,1.6750e+01,3.1729e+00,1.9834e-01,2.3618e+00,3.1729e+00,1.7678e-01,1.6750e+01,3.1483e+00,1.7678e-01,2.3618e+00,3.1483e+00,1.5219e-01,1.6750e+01,3.1268e+00,1.5219e-01,2.3618e+00,3.1268e+00,1.2500e-01,1.6750e+01,3.1086e+00,1.2500e-01,2.3618e+00,3.1086e+00,9.5671e-02,1.6750e+01,3.0941e+00,9.5671e-02,2.3618e+00,3.0941e+00,6.4705e-02,1.6750e+01,3.0836e+00,6.4705e-02,2.3618e+00,3.0836e+00,3.2632e-02,1.6750e+01,3.0772e+00,3.2632e-02,2.3618e+00,3.0772e+00,0.0000e+00,1.6750e+01,3.0751e+00,0.0000e+00,2.3618e+00,3.0751e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0000e+00,-0.0000e+00,6.1232e-17,-1.0000e+00,-0.0000e+00,6.1232e-17,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#513"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,1.6750e+01,3.3251e+00,3.2510e-01,2.3618e+00,3.3251e+00,3.2232e-01,1.6750e+01,3.2827e+00,3.2232e-01,2.3618e+00,3.2827e+00,3.1402e-01,1.6750e+01,3.2410e+00,3.1402e-01,2.3618e+00,3.2410e+00,3.0035e-01,1.6750e+01,3.2007e+00,3.0035e-01,2.3618e+00,3.2007e+00,2.8154e-01,1.6750e+01,3.1625e+00,2.8154e-01,2.3618e+00,3.1625e+00,2.5792e-01,1.6750e+01,3.1272e+00,2.5792e-01,2.3618e+00,3.1272e+00,2.2988e-01,1.6750e+01,3.0952e+00,2.2988e-01,2.3618e+00,3.0952e+00,1.9791e-01,1.6750e+01,3.0672e+00,1.9791e-01,2.3618e+00,3.0672e+00,1.6255e-01,1.6750e+01,3.0436e+00,1.6255e-01,2.3618e+00,3.0436e+00,1.2441e-01,1.6750e+01,3.0247e+00,1.2441e-01,2.3618e+00,3.0247e+00,8.4142e-02,1.6750e+01,3.0111e+00,8.4142e-02,2.3618e+00,3.0111e+00,4.2434e-02,1.6750e+01,3.0028e+00,4.2434e-02,2.3618e+00,3.0028e+00,0.0000e+00,1.6750e+01,3.0000e+00,0.0000e+00,2.3618e+00,3.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0000e+00,0.0000e+00,-6.1232e-17,1.0000e+00,0.0000e+00,-6.1232e-17,9.9144e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.3053e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.2388e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-3.8268e-01,8.6603e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-5.0000e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.0711e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.0711e-01,6.0876e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.9335e-01,5.0000e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-8.6603e-01,3.8268e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.2388e-01,2.5882e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.6593e-01,1.3053e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.9144e-01,0.0000e+00,0.0000e+00,-1.0000e+00,0.0000e+00,0.0000e+00,-1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#514"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,1.5231e+01,4.5751e+00,2.5000e-01,1.5231e+01,4.5751e+00,2.5000e-01,1.4631e+01,3.9751e+00,3.2510e-01,1.5231e+01,4.5751e+00,2.5000e-01,1.4631e+01,3.9751e+00,3.2510e-01,1.4631e+01,3.9751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#515"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,7.1310e+00,3.9751e+00,2.5000e-01,7.1310e+00,3.9751e+00,2.5000e-01,4.6310e+00,3.9751e+00,3.2510e-01,7.1310e+00,3.9751e+00,2.5000e-01,4.6310e+00,3.9751e+00,3.2510e-01,4.6310e+00,3.9751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#516"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,4.0310e+00,4.5751e+00,3.2510e-01,4.0310e+00,4.5751e+00,3.2510e-01,4.6310e+00,3.9751e+00,2.5000e-01,4.0310e+00,4.5751e+00,3.2510e-01,4.6310e+00,3.9751e+00,2.5000e-01,4.6310e+00,3.9751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#517"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,1.2131e+01,4.4703e+00,3.2510e-01,7.1310e+00,4.4703e+00,3.2667e-01,1.2131e+01,4.4983e+00,3.2667e-01,7.1310e+00,4.4983e+00,3.3137e-01,1.2131e+01,4.5260e+00,3.3137e-01,7.1310e+00,4.5260e+00,3.3913e-01,1.2131e+01,4.5529e+00,3.3913e-01,7.1310e+00,4.5529e+00,3.4986e-01,1.2131e+01,4.5788e+00,3.4986e-01,7.1310e+00,4.5788e+00,3.6342e-01,1.2131e+01,4.6034e+00,3.6342e-01,7.1310e+00,4.6034e+00,3.7964e-01,1.2131e+01,4.6262e+00,3.7964e-01,7.1310e+00,4.6262e+00,3.9832e-01,1.2131e+01,4.6471e+00,3.9832e-01,7.1310e+00,4.6471e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0000e+00,-0.0000e+00,6.1232e-17,1.0000e+00,-0.0000e+00,6.1232e-17,9.9371e-01,-0.0000e+00,-1.1196e-01,9.9371e-01,-0.0000e+00,-1.1196e-01,9.7493e-01,-0.0000e+00,-2.2252e-01,9.7493e-01,-0.0000e+00,-2.2252e-01,9.4388e-01,-0.0000e+00,-3.3028e-01,9.4388e-01,-0.0000e+00,-3.3028e-01,9.0097e-01,-0.0000e+00,-4.3388e-01,9.0097e-01,-0.0000e+00,-4.3388e-01,8.4672e-01,-0.0000e+00,-5.3203e-01,8.4672e-01,-0.0000e+00,-5.3203e-01,7.8183e-01,-0.0000e+00,-6.2349e-01,7.8183e-01,-0.0000e+00,-6.2349e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#518"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,1.2131e+01,4.4711e+00,2.5000e-01,7.1310e+00,4.4711e+00,2.5277e-01,1.2131e+01,4.5134e+00,2.5277e-01,7.1310e+00,4.5134e+00,2.6103e-01,1.2131e+01,4.5551e+00,2.6103e-01,7.1310e+00,4.5551e+00,2.7464e-01,1.2131e+01,4.5953e+00,2.7464e-01,7.1310e+00,4.5953e+00,2.9338e-01,1.2131e+01,4.6333e+00,2.9338e-01,7.1310e+00,4.6333e+00,3.1691e-01,1.2131e+01,4.6687e+00,3.1691e-01,7.1310e+00,4.6687e+00,3.4484e-01,1.2131e+01,4.7006e+00,3.4484e-01,7.1310e+00,4.7006e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0000e+00,0.0000e+00,-6.1232e-17,-1.0000e+00,0.0000e+00,-6.1232e-17,-9.9148e-01,0.0000e+00,1.3026e-01,-9.9148e-01,0.0000e+00,1.3026e-01,-9.6607e-01,0.0000e+00,2.5829e-01,-9.6607e-01,0.0000e+00,2.5829e-01,-9.2419e-01,0.0000e+00,3.8193e-01,-9.2419e-01,0.0000e+00,3.8193e-01,-8.6657e-01,0.0000e+00,4.9905e-01,-8.6657e-01,0.0000e+00,4.9905e-01,-7.9418e-01,0.0000e+00,6.0768e-01,-7.9418e-01,0.0000e+00,6.0768e-01,-7.0827e-01,0.0000e+00,7.0595e-01,-7.0827e-01,0.0000e+00,7.0595e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#519"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.0490e+00,1.1631e+01,6.4047e+00,2.0490e+00,7.6310e+00,6.4047e+00,2.1025e+00,7.6310e+00,6.3512e+00,2.0490e+00,1.1631e+01,6.4047e+00,2.1025e+00,7.6310e+00,6.3512e+00,2.1025e+00,1.1631e+01,6.3512e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#520"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,0,2,3,21,0,3,21,3,4,21,4,5,21,5,6,21,6,7,21,7,8,21,8,9,21,9,10,21,10,11,11,12,13,11,13,14,11,14,15,11,15,16,11,16,17,11,17,18,11,18,19,11,19,20,21,11,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.9832e-01,7.1310e+00,4.6471e+00,1.7489e+00,7.1310e+00,5.9977e+00,1.6954e+00,7.1310e+00,6.0512e+00,3.4484e-01,7.1310e+00,4.7006e+00,3.2350e-01,7.1310e+00,4.6770e+00,3.0457e-01,7.1310e+00,4.6514e+00,2.8823e-01,7.1310e+00,4.6241e+00,2.7464e-01,7.1310e+00,4.5953e+00,2.6394e-01,7.1310e+00,4.5653e+00,2.5622e-01,7.1310e+00,4.5344e+00,2.5156e-01,7.1310e+00,4.5029e+00,2.5000e-01,7.1310e+00,4.4711e+00,2.5000e-01,7.1310e+00,3.9751e+00,3.2510e-01,7.1310e+00,3.9751e+00,3.2510e-01,7.1310e+00,4.4703e+00,3.2630e-01,7.1310e+00,4.4948e+00,3.2990e-01,7.1310e+00,4.5191e+00,3.3586e-01,7.1310e+00,4.5429e+00,3.4413e-01,7.1310e+00,4.5660e+00,3.5462e-01,7.1310e+00,4.5882e+00,3.6723e-01,7.1310e+00,4.6092e+00,3.8185e-01,7.1310e+00,4.6289e+00,3.9832e-01,7.1310e+00,4.6471e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#521"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,21,6,7,21,7,8,21,8,9,21,9,10,21,10,11,21,11,12,21,12,13,21,13,14,21,14,15,21,15,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.4484e-01,1.2131e+01,4.7006e+00,1.6954e+00,1.2131e+01,6.0512e+00,1.7489e+00,1.2131e+01,5.9977e+00,3.9832e-01,1.2131e+01,4.6471e+00,3.8185e-01,1.2131e+01,4.6289e+00,3.6723e-01,1.2131e+01,4.6092e+00,3.5462e-01,1.2131e+01,4.5882e+00,3.4413e-01,1.2131e+01,4.5660e+00,3.3586e-01,1.2131e+01,4.5429e+00,3.2990e-01,1.2131e+01,4.5191e+00,3.2630e-01,1.2131e+01,4.4948e+00,3.2510e-01,1.2131e+01,4.4703e+00,3.2510e-01,1.2131e+01,3.9751e+00,2.5000e-01,1.2131e+01,3.9751e+00,2.5000e-01,1.2131e+01,4.4711e+00,2.5156e-01,1.2131e+01,4.5029e+00,2.5622e-01,1.2131e+01,4.5344e+00,2.6394e-01,1.2131e+01,4.5653e+00,2.7464e-01,1.2131e+01,4.5953e+00,2.8823e-01,1.2131e+01,4.6241e+00,3.0457e-01,1.2131e+01,4.6514e+00,3.2350e-01,1.2131e+01,4.6770e+00,3.4484e-01,1.2131e+01,4.7006e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#522"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.2500e+00,1.8112e+01,1.8652e-14,-7.2500e+00,1.8862e+01,1.8652e-14,-7.2500e+00,1.8862e+01,7.5100e-02,-7.2500e+00,1.8112e+01,1.8652e-14,-7.2500e+00,1.8862e+01,7.5100e-02,-7.2500e+00,1.8112e+01,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#523"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.2500e+00,1.8112e+01,7.5100e-02,-7.2500e+00,1.8112e+01,1.7764e-14,-7.2479e+00,1.8079e+01,7.5100e-02,-7.2479e+00,1.8079e+01,1.7764e-14,-7.2415e+00,1.8047e+01,7.5100e-02,-7.2415e+00,1.8047e+01,1.7764e-14,-7.2310e+00,1.8016e+01,7.5100e-02,-7.2310e+00,1.8016e+01,1.7764e-14,-7.2165e+00,1.7987e+01,7.5100e-02,-7.2165e+00,1.7987e+01,1.7764e-14,-7.1983e+00,1.7960e+01,7.5100e-02,-7.1983e+00,1.7960e+01,1.7764e-14,-7.1768e+00,1.7935e+01,7.5100e-02,-7.1768e+00,1.7935e+01,1.7764e-14,-7.1522e+00,1.7914e+01,7.5100e-02,-7.1522e+00,1.7914e+01,1.7764e-14,-7.1250e+00,1.7895e+01,7.5100e-02,-7.1250e+00,1.7895e+01,1.7764e-14,-7.0957e+00,1.7881e+01,7.5100e-02,-7.0957e+00,1.7881e+01,1.7764e-14,-7.0647e+00,1.7871e+01,7.5100e-02,-7.0647e+00,1.7871e+01,1.7764e-14,-7.0326e+00,1.7864e+01,7.5100e-02,-7.0326e+00,1.7864e+01,1.7764e-14,-7.0000e+00,1.7862e+01,7.5100e-02,-7.0000e+00,1.7862e+01,1.7764e-14})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#524"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.5000e+00,1.7862e+01,1.8652e-14,-7.0000e+00,1.7862e+01,1.5987e-14,-7.0000e+00,1.7862e+01,7.5100e-02,-2.5000e+00,1.7862e+01,1.8652e-14,-7.0000e+00,1.7862e+01,7.5100e-02,-2.5000e+00,1.7862e+01,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#525"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.5000e+00,1.7862e+01,7.5100e-02,-2.5000e+00,1.7862e+01,1.7764e-14,-2.4674e+00,1.7864e+01,7.5100e-02,-2.4674e+00,1.7864e+01,1.7764e-14,-2.4353e+00,1.7871e+01,7.5100e-02,-2.4353e+00,1.7871e+01,1.7764e-14,-2.4043e+00,1.7881e+01,7.5100e-02,-2.4043e+00,1.7881e+01,1.7764e-14,-2.3750e+00,1.7895e+01,7.5100e-02,-2.3750e+00,1.7895e+01,1.7764e-14,-2.3478e+00,1.7914e+01,7.5100e-02,-2.3478e+00,1.7914e+01,1.7764e-14,-2.3232e+00,1.7935e+01,7.5100e-02,-2.3232e+00,1.7935e+01,1.7764e-14,-2.3017e+00,1.7960e+01,7.5100e-02,-2.3017e+00,1.7960e+01,1.7764e-14,-2.2835e+00,1.7987e+01,7.5100e-02,-2.2835e+00,1.7987e+01,1.7764e-14,-2.2690e+00,1.8016e+01,7.5100e-02,-2.2690e+00,1.8016e+01,1.7764e-14,-2.2585e+00,1.8047e+01,7.5100e-02,-2.2585e+00,1.8047e+01,1.7764e-14,-2.2521e+00,1.8079e+01,7.5100e-02,-2.2521e+00,1.8079e+01,1.7764e-14,-2.2500e+00,1.8112e+01,7.5100e-02,-2.2500e+00,1.8112e+01,1.7764e-14})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#526"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2500e+00,1.8112e+01,7.5100e-02,-2.2500e+00,1.8862e+01,7.5100e-02,-2.2500e+00,1.8862e+01,1.8652e-14,-2.2500e+00,1.8112e+01,7.5100e-02,-2.2500e+00,1.8862e+01,1.8652e-14,-2.2500e+00,1.8112e+01,1.7764e-14}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#527"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.2500e+00,0.0000e+00,7.5100e-02,-7.2500e+00,0.0000e+00,0.0000e+00,-7.2500e+00,1.0000e+00,0.0000e+00,-7.2500e+00,0.0000e+00,7.5100e-02,-7.2500e+00,1.0000e+00,0.0000e+00,-7.2500e+00,1.0000e+00,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#528"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2500e+00,0.0000e+00,0.0000e+00,-2.2500e+00,0.0000e+00,7.5100e-02,-2.2500e+00,1.0000e+00,7.5100e-02,-2.2500e+00,0.0000e+00,0.0000e+00,-2.2500e+00,1.0000e+00,7.5100e-02,-2.2500e+00,1.0000e+00,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#529"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2500e+00,1.0000e+00,7.5100e-02,-2.2500e+00,1.0000e+00,0.0000e+00,-2.2521e+00,1.0326e+00,7.5100e-02,-2.2521e+00,1.0326e+00,0.0000e+00,-2.2585e+00,1.0647e+00,7.5100e-02,-2.2585e+00,1.0647e+00,0.0000e+00,-2.2690e+00,1.0957e+00,7.5100e-02,-2.2690e+00,1.0957e+00,0.0000e+00,-2.2835e+00,1.1250e+00,7.5100e-02,-2.2835e+00,1.1250e+00,0.0000e+00,-2.3017e+00,1.1522e+00,7.5100e-02,-2.3017e+00,1.1522e+00,0.0000e+00,-2.3232e+00,1.1768e+00,7.5100e-02,-2.3232e+00,1.1768e+00,0.0000e+00,-2.3478e+00,1.1983e+00,7.5100e-02,-2.3478e+00,1.1983e+00,0.0000e+00,-2.3750e+00,1.2165e+00,7.5100e-02,-2.3750e+00,1.2165e+00,0.0000e+00,-2.4043e+00,1.2310e+00,7.5100e-02,-2.4043e+00,1.2310e+00,0.0000e+00,-2.4353e+00,1.2415e+00,7.5100e-02,-2.4353e+00,1.2415e+00,0.0000e+00,-2.4674e+00,1.2479e+00,7.5100e-02,-2.4674e+00,1.2479e+00,0.0000e+00,-2.5000e+00,1.2500e+00,7.5100e-02,-2.5000e+00,1.2500e+00,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#530"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.0000e+00,1.2500e+00,0.0000e+00,-2.5000e+00,1.2500e+00,0.0000e+00,-2.5000e+00,1.2500e+00,7.5100e-02,-7.0000e+00,1.2500e+00,0.0000e+00,-2.5000e+00,1.2500e+00,7.5100e-02,-7.0000e+00,1.2500e+00,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#531"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.0000e+00,1.2500e+00,7.5100e-02,-7.0000e+00,1.2500e+00,0.0000e+00,-7.0326e+00,1.2479e+00,7.5100e-02,-7.0326e+00,1.2479e+00,0.0000e+00,-7.0647e+00,1.2415e+00,7.5100e-02,-7.0647e+00,1.2415e+00,0.0000e+00,-7.0957e+00,1.2310e+00,7.5100e-02,-7.0957e+00,1.2310e+00,0.0000e+00,-7.1250e+00,1.2165e+00,7.5100e-02,-7.1250e+00,1.2165e+00,0.0000e+00,-7.1522e+00,1.1983e+00,7.5100e-02,-7.1522e+00,1.1983e+00,0.0000e+00,-7.1768e+00,1.1768e+00,7.5100e-02,-7.1768e+00,1.1768e+00,0.0000e+00,-7.1983e+00,1.1522e+00,7.5100e-02,-7.1983e+00,1.1522e+00,0.0000e+00,-7.2165e+00,1.1250e+00,7.5100e-02,-7.2165e+00,1.1250e+00,0.0000e+00,-7.2310e+00,1.0957e+00,7.5100e-02,-7.2310e+00,1.0957e+00,0.0000e+00,-7.2415e+00,1.0647e+00,7.5100e-02,-7.2415e+00,1.0647e+00,0.0000e+00,-7.2479e+00,1.0326e+00,7.5100e-02,-7.2479e+00,1.0326e+00,0.0000e+00,-7.2500e+00,1.0000e+00,7.5100e-02,-7.2500e+00,1.0000e+00,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#532"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_411_point()))
            .setNormal(new Normal().setVector(getNormal_7_412_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#533"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_418_point()))
            .setNormal(new Normal().setVector(getNormal_7_419_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#534"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_425_point()))
            .setNormal(new Normal().setVector(getNormal_7_426_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#535"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_432_point()))
            .setNormal(new Normal().setVector(getNormal_7_433_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#536"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_439_point()))
            .setNormal(new Normal().setVector(getNormal_7_440_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#537"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-4.6060e+00,8.3060e+00,3.0000e+00,-4.6060e+00,4.8060e+00,3.0000e+00,-4.6060e+00,4.8060e+00,3.0751e+00,-4.6060e+00,8.3060e+00,3.0000e+00,-4.6060e+00,4.8060e+00,3.0751e+00,-4.6060e+00,8.3060e+00,3.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#538"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_452_point()))
            .setNormal(new Normal().setVector(getNormal_7_453_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#539"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.3560e+00,4.8060e+00,3.0000e+00,-5.3560e+00,8.3060e+00,3.0000e+00,-5.3560e+00,8.3060e+00,3.0751e+00,-5.3560e+00,4.8060e+00,3.0000e+00,-5.3560e+00,8.3060e+00,3.0751e+00,-5.3560e+00,4.8060e+00,3.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#540"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_465_point()))
            .setNormal(new Normal().setVector(getNormal_7_466_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#541"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.1060e+00,8.3060e+00,3.0000e+00,-7.1060e+00,4.8060e+00,3.0000e+00,-7.1060e+00,4.8060e+00,3.0751e+00,-7.1060e+00,8.3060e+00,3.0000e+00,-7.1060e+00,4.8060e+00,3.0751e+00,-7.1060e+00,8.3060e+00,3.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#542"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_478_point()))
            .setNormal(new Normal().setVector(getNormal_7_479_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#543"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.8560e+00,4.8060e+00,3.0000e+00,-7.8560e+00,8.3060e+00,3.0000e+00,-7.8560e+00,8.3060e+00,3.0751e+00,-7.8560e+00,4.8060e+00,3.0000e+00,-7.8560e+00,8.3060e+00,3.0751e+00,-7.8560e+00,4.8060e+00,3.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#544"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_491_point()))
            .setNormal(new Normal().setVector(getNormal_7_492_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#545"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_498_point()))
            .setNormal(new Normal().setVector(getNormal_7_499_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#546"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_505_point()))
            .setNormal(new Normal().setVector(getNormal_7_506_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#547"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_512_point()))
            .setNormal(new Normal().setVector(getNormal_7_513_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#548"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_519_point()))
            .setNormal(new Normal().setVector(getNormal_7_520_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#549"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_526_point()))
            .setNormal(new Normal().setVector(getNormal_7_527_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#550"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_533_point()))
            .setNormal(new Normal().setVector(getNormal_7_534_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#551"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_540_point()))
            .setNormal(new Normal().setVector(getNormal_7_541_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#552"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_547_point()))
            .setNormal(new Normal().setVector(getNormal_7_548_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#553"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_554_point()))
            .setNormal(new Normal().setVector(getNormal_7_555_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#554"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50,51,50,52,53,51,52,53,52,54,55,53,54,55,54,56,57,55,56,57,56,58,59,57,58,59,58,60,61,59,60,61,60,62,63,61,62,63,62,64,65,63,64,65,64,66,67,65,66,67,66,68,69,67,68,69,68,70,71,69,70,71,70,72,73,71,72,73,72,74,75,73,74,75,74,76,77,75,76,77,76,78,79,77,78,79,78,80,81,79,80,81,80,82,83,81,82,83,82,84,85,83,84,85,84,86,87,85,86,87,86,88,89,87,88,89,88,90,91,89,90,91,90,92,93,91,92,93,92,94,95,93,94,95,94,0,1,95,0}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_561_point()))
            .setNormal(new Normal().setVector(getNormal_7_562_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#555"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {8,9,10,7,8,10,7,10,11,6,7,11,5,6,11,4,5,11,4,11,12,3,4,12,3,12,13,2,3,13,2,13,14,1,2,14,1,14,15,0,1,15,0,15,16,21,0,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.5000e-01,1.6787e+01,3.0000e+00,-3.5000e-01,1.6836e+01,2.9952e+00,-3.5000e-01,1.6883e+01,2.9810e+00,-3.5000e-01,1.6926e+01,2.9579e+00,-3.5000e-01,1.6964e+01,2.9268e+00,-3.5000e-01,1.6995e+01,2.8889e+00,-3.5000e-01,1.7018e+01,2.8457e+00,-3.5000e-01,1.7032e+01,2.7988e+00,-3.5000e-01,1.7037e+01,2.7500e+00,-3.5000e-01,1.7037e+01,2.2550e+00,-3.5000e-01,1.7112e+01,2.2550e+00,-3.5000e-01,1.7112e+01,2.7500e+00,-3.5000e-01,1.7106e+01,2.8134e+00,-3.5000e-01,1.7087e+01,2.8744e+00,-3.5000e-01,1.7057e+01,2.9306e+00,-3.5000e-01,1.7017e+01,2.9799e+00,-3.5000e-01,1.6968e+01,3.0203e+00,-3.5000e-01,1.6911e+01,3.0504e+00,-3.5000e-01,1.6850e+01,3.0689e+00,-3.5000e-01,1.6787e+01,3.0751e+00,-3.5000e-01,1.6750e+01,3.0751e+00,-3.5000e-01,1.6750e+01,3.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#556"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,6,7,8,6,8,9,6,9,10,6,10,11,11,12,13,6,11,13,6,13,14,6,14,15,6,15,16,6,16,17,6,17,18,6,18,19,6,19,20,21,6,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,1.6750e+01,4.0751e+00,3.2510e-01,1.6750e+01,4.0751e+00,3.2510e-01,1.6750e+01,3.3251e+00,3.1885e-01,1.6750e+01,3.2617e+00,3.0035e-01,1.6750e+01,3.2007e+00,2.7031e-01,1.6750e+01,3.1445e+00,2.2988e-01,1.6750e+01,3.0952e+00,1.8062e-01,1.6750e+01,3.0548e+00,1.2441e-01,1.6750e+01,3.0247e+00,6.3424e-02,1.6750e+01,3.0062e+00,0.0000e+00,1.6750e+01,3.0000e+00,-3.5000e-01,1.6750e+01,3.0000e+00,-3.5000e-01,1.6750e+01,3.0751e+00,0.0000e+00,1.6750e+01,3.0751e+00,4.8773e-02,1.6750e+01,3.0799e+00,9.5671e-02,1.6750e+01,3.0941e+00,1.3889e-01,1.6750e+01,3.1172e+00,1.7678e-01,1.6750e+01,3.1483e+00,2.0787e-01,1.6750e+01,3.1862e+00,2.3097e-01,1.6750e+01,3.2294e+00,2.4520e-01,1.6750e+01,3.2763e+00,2.5000e-01,1.6750e+01,3.3251e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#557"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,1.7037e+01,2.2550e+00,0.0000e+00,1.7112e+01,2.2550e+00,-3.5000e-01,1.7112e+01,2.2550e+00,0.0000e+00,1.7037e+01,2.2550e+00,-3.5000e-01,1.7112e+01,2.2550e+00,-3.5000e-01,1.7037e+01,2.2550e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#558"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,1.9618e+00,2.2550e+00,0.0000e+00,2.0369e+00,2.2550e+00,-3.5000e-01,2.0369e+00,2.2550e+00,0.0000e+00,1.9618e+00,2.2550e+00,-3.5000e-01,2.0369e+00,2.2550e+00,-3.5000e-01,1.9618e+00,2.2550e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#559"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,6,7,8,6,8,9,6,9,10,6,10,11,6,11,12,6,12,13,6,13,14,6,14,15,6,15,16,21,6,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-3.5000e-01,2.2869e+00,3.0751e+00,-3.5000e-01,2.2235e+00,3.0689e+00,-3.5000e-01,2.1625e+00,3.0504e+00,-3.5000e-01,2.1063e+00,3.0203e+00,-3.5000e-01,2.0570e+00,2.9799e+00,-3.5000e-01,2.0166e+00,2.9306e+00,-3.5000e-01,1.9865e+00,2.8744e+00,-3.5000e-01,1.9680e+00,2.8134e+00,-3.5000e-01,1.9618e+00,2.7500e+00,-3.5000e-01,1.9618e+00,2.2550e+00,-3.5000e-01,2.0369e+00,2.2550e+00,-3.5000e-01,2.0369e+00,2.7500e+00,-3.5000e-01,2.0417e+00,2.7988e+00,-3.5000e-01,2.0559e+00,2.8457e+00,-3.5000e-01,2.0790e+00,2.8889e+00,-3.5000e-01,2.1101e+00,2.9268e+00,-3.5000e-01,2.1480e+00,2.9579e+00,-3.5000e-01,2.1912e+00,2.9810e+00,-3.5000e-01,2.2381e+00,2.9952e+00,-3.5000e-01,2.2869e+00,3.0000e+00,-3.5000e-01,2.3618e+00,3.0000e+00,-3.5000e-01,2.3618e+00,3.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#560"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,10,11,12,9,10,12,9,12,13,8,9,13,7,8,13,6,7,13,6,13,14,21,6,14,21,14,15,21,15,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,2.3618e+00,4.0751e+00,2.5000e-01,2.3618e+00,4.0751e+00,2.5000e-01,2.3618e+00,3.3251e+00,2.4520e-01,2.3618e+00,3.2763e+00,2.3097e-01,2.3618e+00,3.2294e+00,2.0787e-01,2.3618e+00,3.1862e+00,1.7678e-01,2.3618e+00,3.1483e+00,1.3889e-01,2.3618e+00,3.1172e+00,9.5671e-02,2.3618e+00,3.0941e+00,4.8773e-02,2.3618e+00,3.0799e+00,0.0000e+00,2.3618e+00,3.0751e+00,-3.5000e-01,2.3618e+00,3.0751e+00,-3.5000e-01,2.3618e+00,3.0000e+00,0.0000e+00,2.3618e+00,3.0000e+00,6.3424e-02,2.3618e+00,3.0062e+00,1.2441e-01,2.3618e+00,3.0247e+00,1.8062e-01,2.3618e+00,3.0548e+00,2.2988e-01,2.3618e+00,3.0952e+00,2.7031e-01,2.3618e+00,3.1445e+00,3.0035e-01,2.3618e+00,3.2007e+00,3.1885e-01,2.3618e+00,3.2617e+00,3.2510e-01,2.3618e+00,3.3251e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#561"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,10,11,12,9,10,12,9,12,13,8,9,13,7,8,13,6,7,13,6,13,14,21,6,14,21,14,15,21,15,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.8252e+00,1.6750e+01,4.0751e+00,-9.7501e+00,1.6750e+01,4.0751e+00,-9.7501e+00,1.6750e+01,3.3251e+00,-9.7453e+00,1.6750e+01,3.2763e+00,-9.7311e+00,1.6750e+01,3.2294e+00,-9.7080e+00,1.6750e+01,3.1862e+00,-9.6769e+00,1.6750e+01,3.1483e+00,-9.6390e+00,1.6750e+01,3.1172e+00,-9.5957e+00,1.6750e+01,3.0941e+00,-9.5488e+00,1.6750e+01,3.0799e+00,-9.5000e+00,1.6750e+01,3.0751e+00,-9.1500e+00,1.6750e+01,3.0751e+00,-9.1500e+00,1.6750e+01,3.0000e+00,-9.5000e+00,1.6750e+01,3.0000e+00,-9.5634e+00,1.6750e+01,3.0062e+00,-9.6245e+00,1.6750e+01,3.0247e+00,-9.6807e+00,1.6750e+01,3.0547e+00,-9.7300e+00,1.6750e+01,3.0952e+00,-9.7704e+00,1.6750e+01,3.1444e+00,-9.8005e+00,1.6750e+01,3.2007e+00,-9.8190e+00,1.6750e+01,3.2617e+00,-9.8252e+00,1.6750e+01,3.3251e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#562"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,6,7,8,6,8,9,6,9,10,6,10,11,11,12,13,6,11,13,6,13,14,6,14,15,6,15,16,6,16,17,6,17,18,6,18,19,6,19,20,21,6,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.1500e+00,1.6750e+01,3.0000e+00,-9.1500e+00,1.6750e+01,3.0751e+00,-9.1500e+00,1.6787e+01,3.0751e+00,-9.1500e+00,1.6850e+01,3.0689e+00,-9.1500e+00,1.6911e+01,3.0504e+00,-9.1500e+00,1.6968e+01,3.0203e+00,-9.1500e+00,1.7017e+01,2.9799e+00,-9.1500e+00,1.7057e+01,2.9306e+00,-9.1500e+00,1.7087e+01,2.8744e+00,-9.1500e+00,1.7106e+01,2.8134e+00,-9.1500e+00,1.7112e+01,2.7500e+00,-9.1500e+00,1.7112e+01,2.2550e+00,-9.1500e+00,1.7037e+01,2.2550e+00,-9.1500e+00,1.7037e+01,2.7500e+00,-9.1500e+00,1.7032e+01,2.7988e+00,-9.1500e+00,1.7018e+01,2.8457e+00,-9.1500e+00,1.6995e+01,2.8889e+00,-9.1500e+00,1.6964e+01,2.9268e+00,-9.1500e+00,1.6926e+01,2.9579e+00,-9.1500e+00,1.6883e+01,2.9810e+00,-9.1500e+00,1.6836e+01,2.9952e+00,-9.1500e+00,1.6787e+01,3.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#563"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.1500e+00,1.7037e+01,2.2550e+00,-9.1500e+00,1.7112e+01,2.2550e+00,-9.5000e+00,1.7112e+01,2.2550e+00,-9.1500e+00,1.7037e+01,2.2550e+00,-9.5000e+00,1.7112e+01,2.2550e+00,-9.5000e+00,1.7037e+01,2.2550e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#564"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,10,11,12,9,10,12,9,12,13,8,9,13,7,8,13,6,7,13,6,13,14,21,6,14,21,14,15,21,15,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.1500e+00,2.3618e+00,3.0751e+00,-9.1500e+00,2.3618e+00,3.0000e+00,-9.1500e+00,2.2869e+00,3.0000e+00,-9.1500e+00,2.2381e+00,2.9952e+00,-9.1500e+00,2.1912e+00,2.9810e+00,-9.1500e+00,2.1480e+00,2.9579e+00,-9.1500e+00,2.1101e+00,2.9268e+00,-9.1500e+00,2.0790e+00,2.8889e+00,-9.1500e+00,2.0559e+00,2.8457e+00,-9.1500e+00,2.0417e+00,2.7988e+00,-9.1500e+00,2.0369e+00,2.7500e+00,-9.1500e+00,2.0369e+00,2.2550e+00,-9.1500e+00,1.9618e+00,2.2550e+00,-9.1500e+00,1.9618e+00,2.7500e+00,-9.1500e+00,1.9680e+00,2.8134e+00,-9.1500e+00,1.9865e+00,2.8744e+00,-9.1500e+00,2.0166e+00,2.9306e+00,-9.1500e+00,2.0570e+00,2.9799e+00,-9.1500e+00,2.1063e+00,3.0203e+00,-9.1500e+00,2.1625e+00,3.0504e+00,-9.1500e+00,2.2235e+00,3.0689e+00,-9.1500e+00,2.2869e+00,3.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#565"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,21,0,2,21,2,3,21,3,4,21,4,5,21,5,6,21,6,7,21,7,8,8,9,10,8,10,11,8,11,12,8,12,13,8,13,14,8,14,15,8,15,16,8,16,17,8,17,18,8,18,19,8,19,20,21,8,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.7501e+00,2.3618e+00,3.3251e+00,-9.7501e+00,2.3618e+00,4.0751e+00,-9.8252e+00,2.3618e+00,4.0751e+00,-9.8252e+00,2.3618e+00,3.3251e+00,-9.8190e+00,2.3618e+00,3.2617e+00,-9.8005e+00,2.3618e+00,3.2007e+00,-9.7704e+00,2.3618e+00,3.1444e+00,-9.7300e+00,2.3618e+00,3.0952e+00,-9.6807e+00,2.3618e+00,3.0547e+00,-9.6245e+00,2.3618e+00,3.0247e+00,-9.5634e+00,2.3618e+00,3.0062e+00,-9.5000e+00,2.3618e+00,3.0000e+00,-9.1500e+00,2.3618e+00,3.0000e+00,-9.1500e+00,2.3618e+00,3.0751e+00,-9.5000e+00,2.3618e+00,3.0751e+00,-9.5488e+00,2.3618e+00,3.0799e+00,-9.5957e+00,2.3618e+00,3.0941e+00,-9.6390e+00,2.3618e+00,3.1172e+00,-9.6769e+00,2.3618e+00,3.1483e+00,-9.7080e+00,2.3618e+00,3.1862e+00,-9.7311e+00,2.3618e+00,3.2294e+00,-9.7453e+00,2.3618e+00,3.2763e+00,-9.7501e+00,2.3618e+00,3.3251e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#566"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.5000e+00,2.0369e+00,2.2550e+00,-9.5000e+00,1.9618e+00,2.2550e+00,-9.1500e+00,1.9618e+00,2.2550e+00,-9.5000e+00,2.0369e+00,2.2550e+00,-9.1500e+00,1.9618e+00,2.2550e+00,-9.1500e+00,2.0369e+00,2.2550e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#567"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0000e+00,1.9112e+01,7.5100e-02,-2.0000e+00,1.9112e+01,1.8652e-14,-2.0326e+00,1.9110e+01,7.5100e-02,-2.0326e+00,1.9110e+01,1.8652e-14,-2.0647e+00,1.9103e+01,7.5100e-02,-2.0647e+00,1.9103e+01,1.8652e-14,-2.0957e+00,1.9093e+01,7.5100e-02,-2.0957e+00,1.9093e+01,1.8652e-14,-2.1250e+00,1.9079e+01,7.5100e-02,-2.1250e+00,1.9079e+01,1.8652e-14,-2.1522e+00,1.9060e+01,7.5100e-02,-2.1522e+00,1.9060e+01,1.8652e-14,-2.1768e+00,1.9039e+01,7.5100e-02,-2.1768e+00,1.9039e+01,1.8652e-14,-2.1983e+00,1.9014e+01,7.5100e-02,-2.1983e+00,1.9014e+01,1.8652e-14,-2.2165e+00,1.8987e+01,7.5100e-02,-2.2165e+00,1.8987e+01,1.8652e-14,-2.2310e+00,1.8958e+01,7.5100e-02,-2.2310e+00,1.8958e+01,1.8652e-14,-2.2415e+00,1.8927e+01,7.5100e-02,-2.2415e+00,1.8927e+01,1.8652e-14,-2.2479e+00,1.8895e+01,7.5100e-02,-2.2479e+00,1.8895e+01,1.8652e-14,-2.2500e+00,1.8862e+01,7.5100e-02,-2.2500e+00,1.8862e+01,1.8652e-14})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,1.0000e+00,0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#568"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-7.5000e+00,1.9112e+01,1.8652e-14,-7.5000e+00,1.9112e+01,7.5100e-02,-7.4674e+00,1.9110e+01,1.8652e-14,-7.4674e+00,1.9110e+01,7.5100e-02,-7.4353e+00,1.9103e+01,1.8652e-14,-7.4353e+00,1.9103e+01,7.5100e-02,-7.4043e+00,1.9093e+01,1.8652e-14,-7.4043e+00,1.9093e+01,7.5100e-02,-7.3750e+00,1.9079e+01,1.8652e-14,-7.3750e+00,1.9079e+01,7.5100e-02,-7.3478e+00,1.9060e+01,1.8652e-14,-7.3478e+00,1.9060e+01,7.5100e-02,-7.3232e+00,1.9039e+01,1.8652e-14,-7.3232e+00,1.9039e+01,7.5100e-02,-7.3017e+00,1.9014e+01,1.8652e-14,-7.3017e+00,1.9014e+01,7.5100e-02,-7.2835e+00,1.8987e+01,1.8652e-14,-7.2835e+00,1.8987e+01,7.5100e-02,-7.2690e+00,1.8958e+01,1.8652e-14,-7.2690e+00,1.8958e+01,7.5100e-02,-7.2585e+00,1.8927e+01,1.8652e-14,-7.2585e+00,1.8927e+01,7.5100e-02,-7.2521e+00,1.8895e+01,1.8652e-14,-7.2521e+00,1.8895e+01,7.5100e-02,-7.2500e+00,1.8862e+01,1.8652e-14,-7.2500e+00,1.8862e+01,7.5100e-02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.2246e-16,1.0000e+00,0.0000e+00,-1.2246e-16,1.0000e+00,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,1.0000e+00,1.8370e-16,0.0000e+00,1.0000e+00,1.8370e-16,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#569"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {9.9920e-16,5.0000e-01,7.5100e-02,-5.0000e-01,-1.1102e-15,7.5100e-02,-5.0000e-01,-9.9920e-16,-4.4409e-16,9.9920e-16,5.0000e-01,7.5100e-02,-5.0000e-01,-9.9920e-16,-4.4409e-16,9.9920e-16,5.0000e-01,-4.4409e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#570"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.0000e+00,1.8975e-17,7.5100e-02,-9.5000e+00,5.0000e-01,7.5100e-02,-9.5000e+00,5.0000e-01,-5.5511e-17,-9.0000e+00,1.8975e-17,7.5100e-02,-9.5000e+00,5.0000e-01,-5.5511e-17,-9.0000e+00,-5.2256e-17,-1.3878e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#571"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.0000e+00,1.9112e+01,1.8818e-14,-9.5000e+00,1.8612e+01,1.7764e-14,-9.5000e+00,1.8612e+01,7.5100e-02,-9.0000e+00,1.9112e+01,1.8818e-14,-9.5000e+00,1.8612e+01,7.5100e-02,-9.0000e+00,1.9112e+01,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#572"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-4.4409e-16,1.8612e+01,1.7764e-14,-5.0000e-01,1.9112e+01,1.8652e-14,-5.0000e-01,1.9112e+01,7.5100e-02,-4.4409e-16,1.8612e+01,1.7764e-14,-5.0000e-01,1.9112e+01,7.5100e-02,-2.2204e-16,1.8612e+01,7.5100e-02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#573"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.7501e+00,2.3618e+00,4.0751e+00,-9.7501e+00,3.3618e+00,5.0751e+00,-9.8252e+00,3.3618e+00,5.0751e+00,-9.7501e+00,2.3618e+00,4.0751e+00,-9.8252e+00,3.3618e+00,5.0751e+00,-9.8252e+00,2.3618e+00,4.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#574"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-9.8252e+00,1.6750e+01,4.0751e+00,-9.8252e+00,1.5750e+01,5.0751e+00,-9.7501e+00,1.5750e+01,5.0751e+00,-9.8252e+00,1.6750e+01,4.0751e+00,-9.7501e+00,1.5750e+01,5.0751e+00,-9.7501e+00,1.6750e+01,4.0751e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#575"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.1025e+00,7.6310e+00,6.3512e+00,2.0490e+00,7.6310e+00,6.4047e+00,2.0994e+00,7.5657e+00,6.3482e+00,2.0459e+00,7.5657e+00,6.4017e+00,2.0904e+00,7.5016e+00,6.3392e+00,2.0369e+00,7.5016e+00,6.3927e+00,2.0755e+00,7.4397e+00,6.3243e+00,2.0221e+00,7.4397e+00,6.3778e+00,2.0551e+00,7.3810e+00,6.3039e+00,2.0016e+00,7.3810e+00,6.3574e+00,2.0294e+00,7.3266e+00,6.2782e+00,1.9759e+00,7.3266e+00,6.3317e+00,1.9989e+00,7.2774e+00,6.2477e+00,1.9454e+00,7.2774e+00,6.3012e+00,1.9641e+00,7.2343e+00,6.2129e+00,1.9106e+00,7.2343e+00,6.2664e+00,1.9257e+00,7.1980e+00,6.1745e+00,1.8722e+00,7.1980e+00,6.2280e+00,1.8842e+00,7.1691e+00,6.1330e+00,1.8307e+00,7.1691e+00,6.1865e+00,1.8404e+00,7.1480e+00,6.0892e+00,1.7869e+00,7.1480e+00,6.1427e+00,1.7950e+00,7.1353e+00,6.0438e+00,1.7416e+00,7.1353e+00,6.0973e+00,1.7489e+00,7.1310e+00,5.9977e+00,1.6954e+00,7.1310e+00,6.0512e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0106e-01,-1.3053e-01,7.0106e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.1237e-01,-5.0000e-01,6.1237e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.0000e-01,-7.0711e-01,5.0000e-01,4.3046e-01,-7.9335e-01,4.3046e-01,4.3046e-01,-7.9335e-01,4.3046e-01,3.5355e-01,-8.6603e-01,3.5355e-01,3.5355e-01,-8.6603e-01,3.5355e-01,2.7060e-01,-9.2388e-01,2.7060e-01,2.7060e-01,-9.2388e-01,2.7060e-01,1.8301e-01,-9.6593e-01,1.8301e-01,1.8301e-01,-9.6593e-01,1.8301e-01,9.2296e-02,-9.9144e-01,9.2296e-02,9.2296e-02,-9.9144e-01,9.2296e-02,1.0000e-08,-1.0000e+00,1.0000e-08,1.0000e-08,-1.0000e+00,1.0000e-08}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#576"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.0490e+00,1.1631e+01,6.4047e+00,2.1025e+00,1.1631e+01,6.3512e+00,2.0464e+00,1.1691e+01,6.4022e+00,2.0999e+00,1.1691e+01,6.3487e+00,2.0387e+00,1.1751e+01,6.3945e+00,2.0922e+00,1.1751e+01,6.3410e+00,2.0260e+00,1.1808e+01,6.3818e+00,2.0795e+00,1.1808e+01,6.3283e+00,2.0085e+00,1.1863e+01,6.3642e+00,2.0620e+00,1.1863e+01,6.3108e+00,1.9864e+00,1.1915e+01,6.3421e+00,2.0399e+00,1.1915e+01,6.2887e+00,1.9601e+00,1.1963e+01,6.3158e+00,2.0135e+00,1.1963e+01,6.2623e+00,1.9299e+00,1.2005e+01,6.2856e+00,1.9833e+00,1.2005e+01,6.2321e+00,1.8963e+00,1.2042e+01,6.2520e+00,1.9497e+00,1.2042e+01,6.1985e+00,1.8597e+00,1.2074e+01,6.2155e+00,1.9132e+00,1.2074e+01,6.1620e+00,1.8208e+00,1.2099e+01,6.1765e+00,1.8743e+00,1.2099e+01,6.1231e+00,1.7800e+00,1.2116e+01,6.1358e+00,1.8335e+00,1.2116e+01,6.0823e+00,1.7380e+00,1.2127e+01,6.0938e+00,1.7915e+00,1.2127e+01,6.0403e+00,1.6954e+00,1.2131e+01,6.0512e+00,1.7489e+00,1.2131e+01,5.9977e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {7.0711e-01,-1.2246e-16,7.0711e-01,7.0711e-01,-1.2246e-16,7.0711e-01,7.0195e-01,1.2054e-01,7.0195e-01,7.0195e-01,1.2054e-01,7.0195e-01,6.8656e-01,2.3932e-01,6.8656e-01,6.8656e-01,2.3932e-01,6.8656e-01,6.6116e-01,3.5460e-01,6.6116e-01,6.6116e-01,3.5460e-01,6.6116e-01,6.2611e-01,4.6472e-01,6.2611e-01,6.2611e-01,4.6472e-01,6.2611e-01,5.8194e-01,5.6806e-01,5.8194e-01,5.8194e-01,5.6806e-01,5.8194e-01,5.2928e-01,6.6312e-01,5.2928e-01,5.2928e-01,6.6312e-01,5.2928e-01,4.6890e-01,7.4851e-01,4.6890e-01,4.6890e-01,7.4851e-01,4.6890e-01,4.0168e-01,8.2298e-01,4.0168e-01,4.0168e-01,8.2298e-01,4.0168e-01,3.2861e-01,8.8546e-01,3.2861e-01,3.2861e-01,8.8546e-01,3.2861e-01,2.5074e-01,9.3502e-01,2.5074e-01,2.5074e-01,9.3502e-01,2.5074e-01,1.6922e-01,9.7094e-01,1.6922e-01,1.6922e-01,9.7094e-01,1.6922e-01,8.5232e-02,9.9271e-01,8.5232e-02,8.5232e-02,9.9271e-01,8.5232e-02,-1.0000e-08,1.0000e+00,-1.0000e-08,-1.0000e-08,1.0000e+00,-1.0000e-08}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#577"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {3.2510e-01,2.8618e+00,4.5751e+00,2.5000e-01,2.8618e+00,4.5751e+00,3.2510e-01,2.7965e+00,4.5708e+00,2.5000e-01,2.7965e+00,4.5708e+00,3.2510e-01,2.7324e+00,4.5581e+00,2.5000e-01,2.7324e+00,4.5581e+00,3.2510e-01,2.6705e+00,4.5370e+00,2.5000e-01,2.6705e+00,4.5370e+00,3.2510e-01,2.6118e+00,4.5081e+00,2.5000e-01,2.6118e+00,4.5081e+00,3.2510e-01,2.5574e+00,4.4718e+00,2.5000e-01,2.5574e+00,4.4718e+00,3.2510e-01,2.5082e+00,4.4287e+00,2.5000e-01,2.5082e+00,4.4287e+00,3.2510e-01,2.4651e+00,4.3795e+00,2.5000e-01,2.4651e+00,4.3795e+00,3.2510e-01,2.4288e+00,4.3251e+00,2.5000e-01,2.4288e+00,4.3251e+00,3.2510e-01,2.3999e+00,4.2664e+00,2.5000e-01,2.3999e+00,4.2664e+00,3.2510e-01,2.3788e+00,4.2045e+00,2.5000e-01,2.3788e+00,4.2045e+00,3.2510e-01,2.3661e+00,4.1404e+00,2.5000e-01,2.3661e+00,4.1404e+00,3.2510e-01,2.3618e+00,4.0751e+00,2.5000e-01,2.3618e+00,4.0751e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-1.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#578"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {2.5000e-01,1.6250e+01,4.5751e+00,3.2510e-01,1.6250e+01,4.5751e+00,2.5000e-01,1.6315e+01,4.5708e+00,3.2510e-01,1.6315e+01,4.5708e+00,2.5000e-01,1.6380e+01,4.5581e+00,3.2510e-01,1.6380e+01,4.5581e+00,2.5000e-01,1.6442e+01,4.5370e+00,3.2510e-01,1.6442e+01,4.5370e+00,2.5000e-01,1.6500e+01,4.5081e+00,3.2510e-01,1.6500e+01,4.5081e+00,2.5000e-01,1.6555e+01,4.4718e+00,3.2510e-01,1.6555e+01,4.4718e+00,2.5000e-01,1.6604e+01,4.4287e+00,3.2510e-01,1.6604e+01,4.4287e+00,2.5000e-01,1.6647e+01,4.3795e+00,3.2510e-01,1.6647e+01,4.3795e+00,2.5000e-01,1.6683e+01,4.3251e+00,3.2510e-01,1.6683e+01,4.3251e+00,2.5000e-01,1.6712e+01,4.2664e+00,3.2510e-01,1.6712e+01,4.2664e+00,2.5000e-01,1.6733e+01,4.2045e+00,3.2510e-01,1.6733e+01,4.2045e+00,2.5000e-01,1.6746e+01,4.1404e+00,3.2510e-01,1.6746e+01,4.1404e+00,2.5000e-01,1.6750e+01,4.0751e+00,3.2510e-01,1.6750e+01,4.0751e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,1.2246e-16,1.0000e+00,0.0000e+00,1.2246e-16,1.0000e+00,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,1.0000e+00,-6.1232e-17,0.0000e+00,1.0000e+00,-6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#579"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8406e+00,1.7112e+01,1.8717e+00,-8.8406e+00,1.7112e+01,1.9950e+00,-8.8406e+00,1.7087e+01,1.9950e+00,-8.8406e+00,1.7112e+01,1.8717e+00,-8.8406e+00,1.7087e+01,1.9950e+00,-8.8406e+00,1.7087e+01,1.8717e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#580"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8406e+00,1.7112e+01,1.9950e+00,-8.3914e+00,1.7112e+01,1.9950e+00,-8.3914e+00,1.7087e+01,1.9950e+00,-8.8406e+00,1.7112e+01,1.9950e+00,-8.3914e+00,1.7087e+01,1.9950e+00,-8.8406e+00,1.7087e+01,1.9950e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#581"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27,28,26,27,28,27,29,30,28,29,30,29,31,32,30,31,32,31,33,34,32,33,34,33,35,36,34,35,36,35,37,38,36,37,38,37,39}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_730_point()))
            .setNormal(new Normal().setVector(getNormal_7_731_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#582"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.3790e+00,1.7112e+01,2.0232e+00,-8.8160e+00,1.7112e+01,2.4274e+00,-8.8160e+00,1.7087e+01,2.4274e+00,-8.3790e+00,1.7112e+01,2.0232e+00,-8.8160e+00,1.7087e+01,2.4274e+00,-8.3790e+00,1.7087e+01,2.0232e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#583"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_743_point()))
            .setNormal(new Normal().setVector(getNormal_7_744_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#584"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.7288e+00,1.7112e+01,2.6500e+00,-8.2500e+00,1.7112e+01,2.6500e+00,-8.2500e+00,1.7087e+01,2.6500e+00,-8.7288e+00,1.7112e+01,2.6500e+00,-8.2500e+00,1.7087e+01,2.6500e+00,-8.7288e+00,1.7087e+01,2.6500e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#585"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.2500e+00,1.7112e+01,2.6500e+00,-8.2500e+00,1.7112e+01,2.5279e+00,-8.2500e+00,1.7087e+01,2.5279e+00,-8.2500e+00,1.7112e+01,2.6500e+00,-8.2500e+00,1.7087e+01,2.5279e+00,-8.2500e+00,1.7087e+01,2.6500e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#586"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.2500e+00,1.7112e+01,2.5279e+00,-8.6927e+00,1.7112e+01,2.5279e+00,-8.6927e+00,1.7087e+01,2.5279e+00,-8.2500e+00,1.7112e+01,2.5279e+00,-8.6927e+00,1.7087e+01,2.5279e+00,-8.2500e+00,1.7087e+01,2.5279e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#587"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27,28,26,27,28,27,29,30,28,29,30,29,31,32,30,31,32,31,33,34,32,33,34,33,35,36,34,35,36,35,37,38,36,37,38,37,39}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_768_point()))
            .setNormal(new Normal().setVector(getNormal_7_769_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#588"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.7070e+00,1.7112e+01,2.4910e+00,-8.3019e+00,1.7112e+01,2.1182e+00,-8.3019e+00,1.7087e+01,2.1182e+00,-8.7070e+00,1.7112e+01,2.4910e+00,-8.3019e+00,1.7087e+01,2.1182e+00,-8.7070e+00,1.7087e+01,2.4910e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#589"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_781_point()))
            .setNormal(new Normal().setVector(getNormal_7_782_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#590"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.3885e+00,1.7112e+01,1.8717e+00,-8.8406e+00,1.7112e+01,1.8717e+00,-8.8406e+00,1.7087e+01,1.8717e+00,-8.3885e+00,1.7112e+01,1.8717e+00,-8.8406e+00,1.7087e+01,1.8717e+00,-8.3885e+00,1.7087e+01,1.8717e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#591"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {57,0,1,57,1,2,57,2,3,14,15,16,14,16,17,14,17,18,14,18,19,14,19,20,14,20,21,13,14,21,13,21,22,13,22,23,23,24,25,23,25,26,23,26,27,23,27,28,23,28,29,23,29,30,23,30,31,23,31,32,23,32,33,23,33,34,23,34,35,23,35,36,23,36,37,23,37,38,23,38,39,23,39,40,23,40,41,13,23,41,13,41,42,13,42,43,12,13,43,11,12,43,10,11,43,9,10,43,8,9,43,7,8,43,7,43,44,6,7,44,6,44,45,5,6,45,5,45,46,4,5,46,4,46,47,3,4,47,57,3,47,57,47,48,57,48,49,57,49,50,57,50,51,57,51,52,57,52,53,57,53,54,57,54,55,57,55,56}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_794_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#592"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8406e+00,1.7112e+01,4.1113e-01,-8.8406e+00,1.7112e+01,1.4191e+00,-8.8406e+00,1.7087e+01,1.4191e+00,-8.8406e+00,1.7112e+01,4.1113e-01,-8.8406e+00,1.7087e+01,1.4191e+00,-8.8406e+00,1.7087e+01,4.1113e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#593"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_806_point()))
            .setNormal(new Normal().setVector(getNormal_7_807_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#594"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.4831e+00,1.7112e+01,1.4056e+00,-8.4831e+00,1.7112e+01,1.0492e+00,-8.4831e+00,1.7087e+01,1.0492e+00,-8.4831e+00,1.7112e+01,1.4056e+00,-8.4831e+00,1.7087e+01,1.0492e+00,-8.4831e+00,1.7087e+01,1.4056e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#595"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27,28,26,27,28,27,29,30,28,29,30,29,31,32,30,31,32,31,33,34,32,33,34,33,35,36,34,35,36,35,37,38,36,37,38,37,39,40,38,39,40,39,41,42,40,41,42,41,43,44,42,43,44,43,45,46,44,45,46,45,47}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_819_point()))
            .setNormal(new Normal().setVector(getNormal_7_820_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#596"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.3722e+00,1.7112e+01,1.0470e+00,-8.3722e+00,1.7112e+01,1.6261e+00,-8.3722e+00,1.7087e+01,1.6261e+00,-8.3722e+00,1.7112e+01,1.0470e+00,-8.3722e+00,1.7087e+01,1.6261e+00,-8.3722e+00,1.7087e+01,1.0470e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#597"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.4152e+00,1.7112e+01,1.6692e+00,-8.4152e+00,1.7087e+01,1.6692e+00,-8.4096e+00,1.7112e+01,1.6688e+00,-8.4096e+00,1.7087e+01,1.6688e+00,-8.4041e+00,1.7112e+01,1.6677e+00,-8.4041e+00,1.7087e+01,1.6677e+00,-8.3987e+00,1.7112e+01,1.6659e+00,-8.3987e+00,1.7087e+01,1.6659e+00,-8.3937e+00,1.7112e+01,1.6634e+00,-8.3937e+00,1.7087e+01,1.6634e+00,-8.3890e+00,1.7112e+01,1.6603e+00,-8.3890e+00,1.7087e+01,1.6603e+00,-8.3848e+00,1.7112e+01,1.6566e+00,-8.3848e+00,1.7087e+01,1.6566e+00,-8.3811e+00,1.7112e+01,1.6523e+00,-8.3811e+00,1.7087e+01,1.6523e+00,-8.3779e+00,1.7112e+01,1.6477e+00,-8.3779e+00,1.7087e+01,1.6477e+00,-8.3754e+00,1.7112e+01,1.6426e+00,-8.3754e+00,1.7087e+01,1.6426e+00,-8.3736e+00,1.7112e+01,1.6373e+00,-8.3736e+00,1.7087e+01,1.6373e+00,-8.3725e+00,1.7112e+01,1.6318e+00,-8.3725e+00,1.7087e+01,1.6318e+00,-8.3722e+00,1.7112e+01,1.6261e+00,-8.3722e+00,1.7087e+01,1.6261e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.2246e-16,0.0000e+00,1.0000e+00,-1.2246e-16,0.0000e+00,1.0000e+00,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,1.0000e+00,0.0000e+00,1.8370e-16,1.0000e+00,0.0000e+00,1.8370e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#598"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.4152e+00,1.7112e+01,1.6692e+00,-8.8406e+00,1.7112e+01,1.6692e+00,-8.8406e+00,1.7087e+01,1.6692e+00,-8.4152e+00,1.7112e+01,1.6692e+00,-8.8406e+00,1.7087e+01,1.6692e+00,-8.4152e+00,1.7087e+01,1.6692e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#599"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8406e+00,1.7112e+01,1.6692e+00,-8.8406e+00,1.7112e+01,1.7925e+00,-8.8406e+00,1.7087e+01,1.7925e+00,-8.8406e+00,1.7112e+01,1.6692e+00,-8.8406e+00,1.7087e+01,1.7925e+00,-8.8406e+00,1.7087e+01,1.6692e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#600"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8406e+00,1.7112e+01,1.7925e+00,-8.4152e+00,1.7112e+01,1.7925e+00,-8.4152e+00,1.7087e+01,1.7925e+00,-8.8406e+00,1.7112e+01,1.7925e+00,-8.4152e+00,1.7087e+01,1.7925e+00,-8.8406e+00,1.7087e+01,1.7925e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#601"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.4152e+00,1.7112e+01,1.7925e+00,-8.4152e+00,1.7087e+01,1.7925e+00,-8.3936e+00,1.7112e+01,1.7911e+00,-8.3936e+00,1.7087e+01,1.7911e+00,-8.3724e+00,1.7112e+01,1.7868e+00,-8.3724e+00,1.7087e+01,1.7868e+00,-8.3520e+00,1.7112e+01,1.7799e+00,-8.3520e+00,1.7087e+01,1.7799e+00,-8.3326e+00,1.7112e+01,1.7703e+00,-8.3326e+00,1.7087e+01,1.7703e+00,-8.3146e+00,1.7112e+01,1.7583e+00,-8.3146e+00,1.7087e+01,1.7583e+00,-8.2984e+00,1.7112e+01,1.7441e+00,-8.2984e+00,1.7087e+01,1.7441e+00,-8.2841e+00,1.7112e+01,1.7278e+00,-8.2841e+00,1.7087e+01,1.7278e+00,-8.2721e+00,1.7112e+01,1.7099e+00,-8.2721e+00,1.7087e+01,1.7099e+00,-8.2626e+00,1.7112e+01,1.6905e+00,-8.2626e+00,1.7087e+01,1.6905e+00,-8.2556e+00,1.7112e+01,1.6700e+00,-8.2556e+00,1.7087e+01,1.6700e+00,-8.2514e+00,1.7112e+01,1.6489e+00,-8.2514e+00,1.7087e+01,1.6489e+00,-8.2500e+00,1.7112e+01,1.6273e+00,-8.2500e+00,1.7087e+01,1.6273e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.2246e-16,-0.0000e+00,-1.0000e+00,-1.2246e-16,-0.0000e+00,-1.0000e+00,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-1.0000e+00,-0.0000e+00,6.1232e-17,-1.0000e+00,-0.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#602"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.2500e+00,1.7112e+01,1.6273e+00,-8.2500e+00,1.7112e+01,1.0288e+00,-8.2500e+00,1.7087e+01,1.0288e+00,-8.2500e+00,1.7112e+01,1.6273e+00,-8.2500e+00,1.7087e+01,1.0288e+00,-8.2500e+00,1.7087e+01,1.6273e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#603"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_870_point()))
            .setNormal(new Normal().setVector(getNormal_7_871_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#604"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.6052e+00,1.7112e+01,1.0288e+00,-8.6052e+00,1.7112e+01,1.4079e+00,-8.6052e+00,1.7087e+01,1.4079e+00,-8.6052e+00,1.7112e+01,1.0288e+00,-8.6052e+00,1.7087e+01,1.4079e+00,-8.6052e+00,1.7087e+01,1.0288e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#605"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27,28,26,27,28,27,29,30,28,29,30,29,31,32,30,31,32,31,33,34,32,33,34,33,35,36,34,35,36,35,37,38,36,37,38,37,39,40,38,39,40,39,41,42,40,41,42,41,43,44,42,43,44,43,45,46,44,45,46,45,47,48,46,47,48,47,49,50,48,49,50,49,51}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_883_point()))
            .setNormal(new Normal().setVector(getNormal_7_884_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#606"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.7161e+00,1.7112e+01,1.4033e+00,-8.7161e+00,1.7112e+01,7.8561e-01,-8.7161e+00,1.7087e+01,7.8561e-01,-8.7161e+00,1.7112e+01,1.4033e+00,-8.7161e+00,1.7087e+01,7.8561e-01,-8.7161e+00,1.7087e+01,1.4033e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#607"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.7161e+00,1.7112e+01,7.8561e-01,-8.2500e+00,1.7112e+01,7.8561e-01,-8.2500e+00,1.7087e+01,7.8561e-01,-8.7161e+00,1.7112e+01,7.8561e-01,-8.2500e+00,1.7087e+01,7.8561e-01,-8.7161e+00,1.7087e+01,7.8561e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#608"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.2500e+00,1.7112e+01,7.8561e-01,-8.2500e+00,1.7112e+01,6.6346e-01,-8.2500e+00,1.7087e+01,6.6346e-01,-8.2500e+00,1.7112e+01,7.8561e-01,-8.2500e+00,1.7087e+01,6.6346e-01,-8.2500e+00,1.7087e+01,7.8561e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#609"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.2500e+00,1.7112e+01,6.6346e-01,-8.7161e+00,1.7112e+01,6.6346e-01,-8.7161e+00,1.7087e+01,6.6346e-01,-8.2500e+00,1.7112e+01,6.6346e-01,-8.7161e+00,1.7087e+01,6.6346e-01,-8.2500e+00,1.7087e+01,6.6346e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#610"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.7161e+00,1.7112e+01,6.6346e-01,-8.7161e+00,1.7112e+01,4.1113e-01,-8.7161e+00,1.7087e+01,4.1113e-01,-8.7161e+00,1.7112e+01,6.6346e-01,-8.7161e+00,1.7087e+01,4.1113e-01,-8.7161e+00,1.7087e+01,6.6346e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#611"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.7161e+00,1.7112e+01,4.1113e-01,-8.8406e+00,1.7112e+01,4.1113e-01,-8.8406e+00,1.7087e+01,4.1113e-01,-8.7161e+00,1.7112e+01,4.1113e-01,-8.8406e+00,1.7087e+01,4.1113e-01,-8.7161e+00,1.7087e+01,4.1113e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#612"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {90,0,1,90,1,2,90,2,3,90,3,4,90,4,5,90,5,6,6,7,8,6,8,9,6,9,10,6,10,11,6,11,12,6,12,13,6,13,14,6,14,15,6,15,16,41,42,43,40,41,43,40,43,44,39,40,44,38,39,44,37,38,44,36,37,44,35,36,44,34,35,44,34,44,45,33,34,45,33,45,46,32,33,46,32,46,47,32,47,48,32,48,49,32,49,50,32,50,51,32,51,52,32,52,53,31,32,53,30,31,53,29,30,53,28,29,53,27,28,53,26,27,53,25,26,53,25,53,54,24,25,54,24,54,55,23,24,55,23,55,56,22,23,56,22,56,57,21,22,57,21,57,58,20,21,58,20,58,59,19,20,59,19,59,60,18,19,60,18,60,61,17,18,61,17,61,62,16,17,62,16,62,63,16,63,64,16,64,65,16,65,66,16,66,67,16,67,68,16,68,69,16,69,70,16,70,71,6,16,71,6,71,72,6,72,73,6,73,74,6,74,75,6,75,76,6,76,77,6,77,78,6,78,79,6,79,80,6,80,81,6,81,82,6,82,83,90,6,83,90,83,84,90,84,85,85,86,87,85,87,88,90,85,88,90,88,89}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_926_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_75_index_1()
		{
			int[] value = {132,113,114,132,114,115,132,115,116,132,116,117,132,117,118,132,118,119,132,119,120,132,120,121,95,96,155,94,95,155,93,94,155,123,93,155,122,123,155,121,122,155,132,121,155,132,155,156,132,156,157,132,157,158,132,158,159,132,159,160,132,160,161,132,161,162,162,40,41,132,162,41,132,41,42,132,42,43,132,43,44,132,44,45,132,45,46,132,46,47,132,47,48,132,48,49,132,49,50,132,50,51,132,51,52,132,52,53,132,53,54,132,54,55,132,55,56,39,40,162,38,39,162,37,38,162,36,37,162,35,36,162,34,35,162,34,162,163,33,34,163,33,163,164,32,33,164,32,164,165,31,32,165,31,165,166,31,166,167,170,171,19,169,170,19,168,169,19,167,168,19,31,167,19,31,19,20,61,31,20,61,20,21,61,21,22,61,22,23,61,23,24,61,24,25,61,25,26,61,26,27,61,27,28,61,28,29,61,29,30,18,19,171,17,18,171,16,17,171,15,16,171,14,15,171,13,14,171,12,13,171,12,171,172,11,12,172,11,172,173,10,11,173,10,173,174,9,10,174,9,174,144,9,144,145,146,147,88,145,146,88,9,145,88,8,9,88,7,8,88,7,88,89,7,89,90,7,90,91,7,91,92,7,92,62,7,62,63,7,63,64,7,64,65,7,65,66,7,66,67,7,67,68,7,68,69,87,88,147,86,87,147,85,86,147,84,85,147,83,84,147,82,83,147,81,82,147,81,147,148,80,81,148,80,148,149,79,80,149,79,149,150,78,79,150,78,150,151,78,151,152,154,155,96,153,154,96,152,153,96,78,152,96,77,78,96,77,96,97,77,97,98,77,98,99,77,99,100,77,100,101,77,101,102,77,102,103,77,103,104,77,104,105,77,105,106,77,106,107,112,113,132,111,112,132,110,111,132,109,110,132,108,109,132,76,108,132,76,132,133,75,76,133,74,75,133,73,74,133,72,73,133,71,72,133,70,71,133,69,70,133,7,69,133,6,7,133,5,6,133,4,5,133,4,133,134,4,134,135,4,135,136,3,4,136,3,136,137,3,137,138,3,138,139,3,139,140,2,3,140,2,140,141,2,141,142,1,2,142,0,1,142,30,0,142,61,30,142,60,61,142,60,142,143,59,60,143,58,59,143,57,58,143,56,57,143,132,56,143,132,143,124,132,124,125,132,125,126,132,126,127,132,127,128,132,128,129,132,129,130,132,130,131};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_75_point_1()
		{
			double[] value = {7.4643e-01,1.0400e+01,5.1022e+00,7.5045e-01,1.0418e+01,5.1062e+00,7.5698e-01,1.0435e+01,5.1127e+00,7.6574e-01,1.0449e+01,5.1215e+00,7.7637e-01,1.0461e+01,5.1321e+00,7.8845e-01,1.0469e+01,5.1442e+00,8.0147e-01,1.0474e+01,5.1572e+00,8.1490e-01,1.0475e+01,5.1707e+00,8.2819e-01,1.0472e+01,5.1840e+00,8.4081e-01,1.0465e+01,5.1966e+00,8.5222e-01,1.0455e+01,5.2080e+00,8.6197e-01,1.0442e+01,5.2177e+00,8.6965e-01,1.0427e+01,5.2254e+00,8.7495e-01,1.0409e+01,5.2307e+00,8.7766e-01,1.0391e+01,5.2334e+00,8.7766e-01,1.0371e+01,5.2334e+00,8.7495e-01,1.0353e+01,5.2307e+00,8.6965e-01,1.0335e+01,5.2254e+00,8.6197e-01,1.0320e+01,5.2177e+00,8.5222e-01,1.0307e+01,5.2080e+00,8.4081e-01,1.0297e+01,5.1966e+00,8.2819e-01,1.0290e+01,5.1840e+00,8.1490e-01,1.0287e+01,5.1707e+00,8.0147e-01,1.0288e+01,5.1572e+00,7.8845e-01,1.0293e+01,5.1442e+00,7.7637e-01,1.0301e+01,5.1321e+00,7.6574e-01,1.0313e+01,5.1215e+00,7.5698e-01,1.0327e+01,5.1127e+00,7.5045e-01,1.0344e+01,5.1062e+00,7.4643e-01,1.0362e+01,5.1022e+00,7.4507e-01,1.0381e+01,5.1008e+00,7.4643e-01,8.8999e+00,5.1022e+00,7.5045e-01,8.9181e+00,5.1062e+00,7.5698e-01,8.9347e+00,5.1127e+00,7.6574e-01,8.9491e+00,5.1215e+00,7.7637e-01,8.9608e+00,5.1321e+00,7.8845e-01,8.9691e+00,5.1442e+00,8.0147e-01,8.9739e+00,5.1572e+00,8.1490e-01,8.9749e+00,5.1707e+00,8.2819e-01,8.9720e+00,5.1840e+00,8.4081e-01,8.9654e+00,5.1966e+00,8.5222e-01,8.9553e+00,5.2080e+00,8.6197e-01,8.9422e+00,5.2177e+00,8.6965e-01,8.9266e+00,5.2254e+00,8.7495e-01,8.9091e+00,5.2307e+00,8.7766e-01,8.8905e+00,5.2334e+00,8.7766e-01,8.8715e+00,5.2334e+00,8.7495e-01,8.8529e+00,5.2307e+00,8.6965e-01,8.8354e+00,5.2254e+00,8.6197e-01,8.8198e+00,5.2177e+00,8.5222e-01,8.8067e+00,5.2080e+00,8.4081e-01,8.7966e+00,5.1966e+00,8.2819e-01,8.7900e+00,5.1840e+00,8.1490e-01,8.7871e+00,5.1707e+00,8.0147e-01,8.7881e+00,5.1572e+00,7.8845e-01,8.7929e+00,5.1442e+00,7.7637e-01,8.8012e+00,5.1321e+00,7.6574e-01,8.8129e+00,5.1215e+00,7.5698e-01,8.8273e+00,5.1127e+00,7.5045e-01,8.8439e+00,5.1062e+00,7.4643e-01,8.8621e+00,5.1022e+00,7.4507e-01,8.8810e+00,5.1008e+00,1.6303e+00,1.0400e+01,5.9861e+00,1.6343e+00,1.0418e+01,5.9901e+00,1.6409e+00,1.0435e+01,5.9966e+00,1.6496e+00,1.0449e+01,6.0054e+00,1.6603e+00,1.0461e+01,6.0160e+00,1.6723e+00,1.0469e+01,6.0281e+00,1.6854e+00,1.0474e+01,6.0411e+00,1.6988e+00,1.0475e+01,6.0545e+00,1.7121e+00,1.0472e+01,6.0678e+00,1.7247e+00,1.0465e+01,6.0804e+00,1.7361e+00,1.0455e+01,6.0919e+00,1.7458e+00,1.0442e+01,6.1016e+00,1.7535e+00,1.0427e+01,6.1093e+00,1.7588e+00,1.0409e+01,6.1146e+00,1.7615e+00,1.0391e+01,6.1173e+00,1.7615e+00,1.0371e+01,6.1173e+00,1.7588e+00,1.0353e+01,6.1146e+00,1.7535e+00,1.0335e+01,6.1093e+00,1.7458e+00,1.0320e+01,6.1016e+00,1.7361e+00,1.0307e+01,6.0919e+00,1.7247e+00,1.0297e+01,6.0804e+00,1.7121e+00,1.0290e+01,6.0678e+00,1.6988e+00,1.0287e+01,6.0545e+00,1.6854e+00,1.0288e+01,6.0411e+00,1.6723e+00,1.0293e+01,6.0281e+00,1.6603e+00,1.0301e+01,6.0160e+00,1.6496e+00,1.0313e+01,6.0054e+00,1.6409e+00,1.0327e+01,5.9966e+00,1.6343e+00,1.0344e+01,5.9901e+00,1.6303e+00,1.0362e+01,5.9861e+00,1.6289e+00,1.0381e+01,5.9847e+00,1.6303e+00,8.8999e+00,5.9861e+00,1.6343e+00,8.9181e+00,5.9901e+00,1.6409e+00,8.9347e+00,5.9966e+00,1.6496e+00,8.9491e+00,6.0054e+00,1.6603e+00,8.9608e+00,6.0160e+00,1.6723e+00,8.9691e+00,6.0281e+00,1.6854e+00,8.9739e+00,6.0411e+00};
			return value;
		}
		private double[] getCoordinate_7_75_point_2()
		{
			double[] value = {1.6988e+00,8.9749e+00,6.0545e+00,1.7121e+00,8.9720e+00,6.0678e+00,1.7247e+00,8.9654e+00,6.0804e+00,1.7361e+00,8.9553e+00,6.0919e+00,1.7458e+00,8.9422e+00,6.1016e+00,1.7535e+00,8.9266e+00,6.1093e+00,1.7588e+00,8.9091e+00,6.1146e+00,1.7615e+00,8.8905e+00,6.1173e+00,1.7615e+00,8.8715e+00,6.1173e+00,1.7588e+00,8.8529e+00,6.1146e+00,1.7535e+00,8.8354e+00,6.1093e+00,1.7458e+00,8.8198e+00,6.1016e+00,1.7361e+00,8.8067e+00,6.0919e+00,1.7247e+00,8.7966e+00,6.0804e+00,1.7121e+00,8.7900e+00,6.0678e+00,1.6988e+00,8.7871e+00,6.0545e+00,1.6854e+00,8.7881e+00,6.0411e+00,1.6723e+00,8.7929e+00,6.0281e+00,1.6603e+00,8.8012e+00,6.0160e+00,1.6496e+00,8.8129e+00,6.0054e+00,1.6409e+00,8.8273e+00,5.9966e+00,1.6343e+00,8.8439e+00,5.9901e+00,1.6303e+00,8.8621e+00,5.9861e+00,1.6289e+00,8.8810e+00,5.9847e+00,1.6954e+00,7.1310e+00,6.0512e+00,1.7644e+00,7.1406e+00,6.1202e+00,1.8307e+00,7.1691e+00,6.1865e+00,1.8918e+00,7.2153e+00,6.2476e+00,1.9454e+00,7.2774e+00,6.3012e+00,1.9894e+00,7.3532e+00,6.3451e+00,2.0221e+00,7.4397e+00,6.3778e+00,2.0422e+00,7.5335e+00,6.3979e+00,2.0490e+00,7.6310e+00,6.4047e+00,2.0490e+00,1.1631e+01,6.4047e+00,2.0422e+00,1.1729e+01,6.3979e+00,2.0221e+00,1.1822e+01,6.3778e+00,1.9894e+00,1.1909e+01,6.3451e+00,1.9454e+00,1.1985e+01,6.3012e+00,1.8918e+00,1.2047e+01,6.2476e+00,1.8307e+00,1.2093e+01,6.1865e+00,1.7644e+00,1.2121e+01,6.1202e+00,1.6954e+00,1.2131e+01,6.0512e+00,3.4484e-01,1.2131e+01,4.7006e+00,3.4484e-01,7.1310e+00,4.7006e+00,1.2762e+00,1.0153e+01,5.6320e+00,1.3489e+00,1.0120e+01,5.7047e+00,1.4155e+00,1.0068e+01,5.7713e+00,1.4734e+00,9.9979e+00,5.8291e+00,1.5200e+00,9.9127e+00,5.8757e+00,1.5535e+00,9.8159e+00,5.9093e+00,1.5726e+00,9.7116e+00,5.9284e+00,1.5765e+00,9.6040e+00,5.9323e+00,1.5650e+00,9.4975e+00,5.9207e+00,1.5385e+00,9.3965e+00,5.8943e+00,1.4982e+00,9.3051e+00,5.8540e+00,1.4457e+00,9.2270e+00,5.8015e+00,1.3832e+00,9.1654e+00,5.7389e+00,1.3132e+00,9.1229e+00,5.6689e+00,1.2385e+00,9.1012e+00,5.5943e+00,1.1623e+00,9.1012e+00,5.5181e+00,1.0877e+00,9.1229e+00,5.4435e+00,1.0177e+00,9.1654e+00,5.3735e+00,9.5518e-01,9.2270e+00,5.3109e+00,9.0269e-01,9.3051e+00,5.2584e+00,8.6239e-01,9.3965e+00,5.2181e+00,8.3593e-01,9.4975e+00,5.1917e+00,8.2439e-01,9.6040e+00,5.1802e+00,8.2825e-01,9.7116e+00,5.1840e+00,8.4735e-01,9.8159e+00,5.2031e+00,8.8090e-01,9.9127e+00,5.2367e+00,9.2753e-01,9.9979e+00,5.2833e+00,9.8534e-01,1.0068e+01,5.3411e+00,1.0520e+00,1.0120e+01,5.4077e+00,1.1246e+00,1.0153e+01,5.4804e+00,1.2004e+00,1.0164e+01,5.5562e+00};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_81_index_1()
		{
			int[] value = {124,102,103,124,103,104,124,104,105,124,105,106,124,106,107,124,107,108,124,108,109,118,119,154,117,118,154,116,117,154,115,116,154,114,115,154,113,114,154,113,154,155,112,113,155,112,155,156,111,112,156,111,156,157,110,111,157,110,157,158,109,110,158,109,158,159,109,159,160,124,109,160,162,163,65,161,162,65,160,161,65,124,160,65,124,65,66,124,66,67,124,67,68,124,68,69,124,69,70,124,70,71,124,71,72,124,72,73,124,73,74,124,74,75,124,75,76,124,76,77,64,65,163,63,64,163,62,63,163,92,62,163,91,92,163,90,91,163,89,90,163,89,163,164,88,89,164,88,164,165,87,88,165,87,165,166,86,87,166,86,166,167,86,167,168,168,169,10,86,168,10,85,86,10,85,10,11,85,11,12,85,12,13,85,13,14,85,14,15,85,15,16,85,16,17,84,85,17,84,17,18,84,18,19,84,19,20,84,20,21,84,21,22,9,10,169,8,9,169,7,8,169,6,7,169,5,6,169,4,5,169,4,169,170,3,4,170,2,3,170,2,170,171,1,2,171,1,171,172,0,1,172,0,172,173,0,173,174,0,174,144,147,148,50,146,147,50,145,146,50,144,145,50,0,144,50,0,50,51,30,0,51,30,51,52,30,52,53,30,53,54,30,54,55,30,55,56,30,56,57,30,57,58,30,58,59,30,59,60,30,60,61,49,50,148,48,49,148,47,48,148,46,47,148,45,46,148,44,45,148,43,44,148,43,148,149,42,43,149,42,149,150,41,42,150,41,150,151,40,41,151,40,151,152,40,152,153,153,154,119,40,153,119,39,40,119,38,39,119,38,119,120,38,120,121,38,121,122,38,122,123,38,123,93,38,93,94,38,94,95,38,95,96,38,96,97,38,97,98,38,98,99,38,99,100,101,102,124,100,101,124,38,100,124,37,38,124,36,37,124,35,36,124,35,124,125,35,125,126,35,126,127,34,35,127,34,127,128,34,128,129,34,129,130,34,130,131,33,34,131,33,131,132,33,132,133,32,33,133,31,32,133,61,31,133,30,61,133,29,30,133,29,133,134,28,29,134,27,28,134,26,27,134,25,26,134,24,25,134,23,24,134,22,23,134,84,22,134,83,84,134,82,83,134,81,82,134,81,134,135,80,81,135,79,80,135,78,79,135,77,78,135,124,77,135,124,135,136,124,136,137,124,137,138,124,138,139,124,139,140,124,140,141,124,141,142,124,142,143};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_81_point_1()
		{
			double[] value = {7.9991e-01,1.0362e+01,5.0487e+00,8.0393e-01,1.0344e+01,5.0527e+00,8.1046e-01,1.0327e+01,5.0593e+00,8.1922e-01,1.0313e+01,5.0680e+00,8.2985e-01,1.0301e+01,5.0787e+00,8.4193e-01,1.0293e+01,5.0907e+00,8.5495e-01,1.0288e+01,5.1037e+00,8.6838e-01,1.0287e+01,5.1172e+00,8.8167e-01,1.0290e+01,5.1305e+00,8.9429e-01,1.0297e+01,5.1431e+00,9.0570e-01,1.0307e+01,5.1545e+00,9.1545e-01,1.0320e+01,5.1642e+00,9.2313e-01,1.0335e+01,5.1719e+00,9.2843e-01,1.0353e+01,5.1772e+00,9.3114e-01,1.0371e+01,5.1799e+00,9.3114e-01,1.0391e+01,5.1799e+00,9.2843e-01,1.0409e+01,5.1772e+00,9.2313e-01,1.0427e+01,5.1719e+00,9.1545e-01,1.0442e+01,5.1642e+00,9.0570e-01,1.0455e+01,5.1545e+00,8.9429e-01,1.0465e+01,5.1431e+00,8.8167e-01,1.0472e+01,5.1305e+00,8.6838e-01,1.0475e+01,5.1172e+00,8.5495e-01,1.0474e+01,5.1037e+00,8.4193e-01,1.0469e+01,5.0907e+00,8.2985e-01,1.0461e+01,5.0787e+00,8.1922e-01,1.0449e+01,5.0680e+00,8.1046e-01,1.0435e+01,5.0593e+00,8.0393e-01,1.0418e+01,5.0527e+00,7.9991e-01,1.0400e+01,5.0487e+00,7.9855e-01,1.0381e+01,5.0473e+00,7.9991e-01,8.8621e+00,5.0487e+00,8.0393e-01,8.8439e+00,5.0527e+00,8.1046e-01,8.8273e+00,5.0593e+00,8.1922e-01,8.8129e+00,5.0680e+00,8.2985e-01,8.8012e+00,5.0787e+00,8.4193e-01,8.7929e+00,5.0907e+00,8.5495e-01,8.7881e+00,5.1037e+00,8.6838e-01,8.7871e+00,5.1172e+00,8.8167e-01,8.7900e+00,5.1305e+00,8.9429e-01,8.7966e+00,5.1431e+00,9.0570e-01,8.8067e+00,5.1545e+00,9.1545e-01,8.8198e+00,5.1642e+00,9.2313e-01,8.8354e+00,5.1719e+00,9.2843e-01,8.8529e+00,5.1772e+00,9.3114e-01,8.8715e+00,5.1799e+00,9.3114e-01,8.8905e+00,5.1799e+00,9.2843e-01,8.9091e+00,5.1772e+00,9.2313e-01,8.9266e+00,5.1719e+00,9.1545e-01,8.9422e+00,5.1642e+00,9.0570e-01,8.9553e+00,5.1545e+00,8.9429e-01,8.9654e+00,5.1431e+00,8.8167e-01,8.9720e+00,5.1305e+00,8.6838e-01,8.9749e+00,5.1172e+00,8.5495e-01,8.9739e+00,5.1037e+00,8.4193e-01,8.9691e+00,5.0907e+00,8.2985e-01,8.9608e+00,5.0787e+00,8.1922e-01,8.9491e+00,5.0680e+00,8.1046e-01,8.9347e+00,5.0593e+00,8.0393e-01,8.9181e+00,5.0527e+00,7.9991e-01,8.8999e+00,5.0487e+00,7.9855e-01,8.8810e+00,5.0473e+00,1.6838e+00,1.0362e+01,5.9326e+00,1.6878e+00,1.0344e+01,5.9366e+00,1.6943e+00,1.0327e+01,5.9431e+00,1.7031e+00,1.0313e+01,5.9519e+00,1.7137e+00,1.0301e+01,5.9625e+00,1.7258e+00,1.0293e+01,5.9746e+00,1.7388e+00,1.0288e+01,5.9876e+00,1.7523e+00,1.0287e+01,6.0011e+00,1.7656e+00,1.0290e+01,6.0144e+00,1.7782e+00,1.0297e+01,6.0270e+00,1.7896e+00,1.0307e+01,6.0384e+00,1.7993e+00,1.0320e+01,6.0481e+00,1.8070e+00,1.0335e+01,6.0558e+00,1.8123e+00,1.0353e+01,6.0611e+00,1.8150e+00,1.0371e+01,6.0638e+00,1.8150e+00,1.0391e+01,6.0638e+00,1.8123e+00,1.0409e+01,6.0611e+00,1.8070e+00,1.0427e+01,6.0558e+00,1.7993e+00,1.0442e+01,6.0481e+00,1.7896e+00,1.0455e+01,6.0384e+00,1.7782e+00,1.0465e+01,6.0270e+00,1.7656e+00,1.0472e+01,6.0144e+00,1.7523e+00,1.0475e+01,6.0011e+00,1.7388e+00,1.0474e+01,5.9876e+00,1.7258e+00,1.0469e+01,5.9746e+00,1.7137e+00,1.0461e+01,5.9625e+00,1.7031e+00,1.0449e+01,5.9519e+00,1.6943e+00,1.0435e+01,5.9431e+00,1.6878e+00,1.0418e+01,5.9366e+00,1.6838e+00,1.0400e+01,5.9326e+00,1.6824e+00,1.0381e+01,5.9312e+00,1.6838e+00,8.8621e+00,5.9326e+00,1.6878e+00,8.8439e+00,5.9366e+00,1.6943e+00,8.8273e+00,5.9431e+00,1.7031e+00,8.8129e+00,5.9519e+00,1.7137e+00,8.8012e+00,5.9625e+00,1.7258e+00,8.7929e+00,5.9746e+00,1.7388e+00,8.7881e+00,5.9876e+00};
			return value;
		}
		private double[] getCoordinate_7_81_point_2()
		{
			double[] value = {1.7523e+00,8.7871e+00,6.0011e+00,1.7656e+00,8.7900e+00,6.0144e+00,1.7782e+00,8.7966e+00,6.0270e+00,1.7896e+00,8.8067e+00,6.0384e+00,1.7993e+00,8.8198e+00,6.0481e+00,1.8070e+00,8.8354e+00,6.0558e+00,1.8123e+00,8.8529e+00,6.0611e+00,1.8150e+00,8.8715e+00,6.0638e+00,1.8150e+00,8.8905e+00,6.0638e+00,1.8123e+00,8.9091e+00,6.0611e+00,1.8070e+00,8.9266e+00,6.0558e+00,1.7993e+00,8.9422e+00,6.0481e+00,1.7896e+00,8.9553e+00,6.0384e+00,1.7782e+00,8.9654e+00,6.0270e+00,1.7656e+00,8.9720e+00,6.0144e+00,1.7523e+00,8.9749e+00,6.0011e+00,1.7388e+00,8.9739e+00,5.9876e+00,1.7258e+00,8.9691e+00,5.9746e+00,1.7137e+00,8.9608e+00,5.9625e+00,1.7031e+00,8.9491e+00,5.9519e+00,1.6943e+00,8.9347e+00,5.9431e+00,1.6878e+00,8.9181e+00,5.9366e+00,1.6838e+00,8.8999e+00,5.9326e+00,1.6824e+00,8.8810e+00,5.9312e+00,2.1025e+00,7.6310e+00,6.3512e+00,2.0957e+00,7.5335e+00,6.3445e+00,2.0755e+00,7.4397e+00,6.3243e+00,2.0429e+00,7.3532e+00,6.2917e+00,1.9989e+00,7.2774e+00,6.2477e+00,1.9453e+00,7.2153e+00,6.1941e+00,1.8842e+00,7.1691e+00,6.1330e+00,1.8179e+00,7.1406e+00,6.0667e+00,1.7489e+00,7.1310e+00,5.9977e+00,3.9832e-01,7.1310e+00,4.6471e+00,3.9832e-01,1.2131e+01,4.6471e+00,1.7489e+00,1.2131e+01,5.9977e+00,1.8179e+00,1.2121e+01,6.0667e+00,1.8842e+00,1.2093e+01,6.1330e+00,1.9453e+00,1.2047e+01,6.1941e+00,1.9989e+00,1.1985e+01,6.2477e+00,2.0429e+00,1.1909e+01,6.2917e+00,2.0755e+00,1.1822e+01,6.3243e+00,2.0957e+00,1.1729e+01,6.3445e+00,2.1025e+00,1.1631e+01,6.3512e+00,8.8510e-01,9.5238e+00,5.1339e+00,9.0790e-01,9.4210e+00,5.1567e+00,9.4488e-01,9.3268e+00,5.1937e+00,9.9450e-01,9.2450e+00,5.2433e+00,1.0547e+00,9.1791e+00,5.3035e+00,1.1232e+00,9.1316e+00,5.3719e+00,1.1969e+00,9.1046e+00,5.4457e+00,1.2730e+00,9.0992e+00,5.5218e+00,1.3483e+00,9.1155e+00,5.5971e+00,1.4197e+00,9.1529e+00,5.6685e+00,1.4844e+00,9.2099e+00,5.7332e+00,1.5396e+00,9.2841e+00,5.7884e+00,1.5831e+00,9.3726e+00,5.8319e+00,1.6132e+00,9.4716e+00,5.8620e+00,1.6285e+00,9.5771e+00,5.8773e+00,1.6285e+00,9.6849e+00,5.8773e+00,1.6132e+00,9.7904e+00,5.8620e+00,1.5831e+00,9.8894e+00,5.8319e+00,1.5396e+00,9.9779e+00,5.7884e+00,1.4844e+00,1.0052e+01,5.7332e+00,1.4197e+00,1.0109e+01,5.6685e+00,1.3483e+00,1.0147e+01,5.5971e+00,1.2730e+00,1.0163e+01,5.5218e+00,1.1969e+00,1.0157e+01,5.4457e+00,1.1232e+00,1.0130e+01,5.3719e+00,1.0547e+00,1.0083e+01,5.3035e+00,9.9450e-01,1.0017e+01,5.2433e+00,9.4488e-01,9.9352e+00,5.1937e+00,9.0790e-01,9.8410e+00,5.1567e+00,8.8510e-01,9.7382e+00,5.1339e+00,8.7739e-01,9.6310e+00,5.1262e+00};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_87_index_1()
		{
			int[] value = {248,18,19,248,19,20,248,20,21,248,21,22,248,22,23,248,23,24,248,24,25,33,34,50,32,33,50,31,32,50,30,31,50,29,30,50,28,29,50,28,50,51,27,28,51,27,51,52,27,52,53,27,53,54,27,54,55,27,55,56,27,56,57,64,65,81,63,64,81,62,63,81,61,62,81,60,61,81,59,60,81,59,81,82,58,59,82,58,82,83,58,83,84,58,84,85,58,85,86,58,86,87,58,87,88,95,96,112,94,95,112,93,94,112,92,93,112,91,92,112,90,91,112,90,112,113,89,90,113,89,113,114,89,114,115,89,115,116,89,116,117,89,117,118,89,118,119,123,124,2,122,123,2,121,122,2,120,121,2,26,120,2,26,2,3,26,3,4,25,26,4,25,4,5,25,5,6,6,7,8,8,9,10,8,10,11,11,177,178,11,178,179,11,179,180,11,180,181,8,11,181,8,181,182,8,182,183,8,183,184,8,184,185,8,185,186,8,186,187,8,187,188,8,188,189,8,189,190,8,190,191,8,191,192,8,192,193,8,193,194,8,194,195,8,195,196,8,196,197,8,197,198,198,199,217,8,198,217,8,217,218,8,218,219,8,219,220,8,220,221,8,221,222,8,222,223,8,223,224,8,224,225,8,225,226,8,226,227,8,227,228,8,228,229,8,229,230,216,217,199,215,216,199,214,215,199,214,199,200,213,214,200,212,213,200,211,212,200,210,211,200,209,210,200,209,200,167,209,167,168,209,168,169,208,209,169,208,169,170,208,170,171,208,171,172,208,172,173,208,173,174,176,177,11,175,176,11,174,175,11,208,174,11,207,208,11,206,207,11,206,11,0,206,0,1,205,206,1,204,205,1,203,204,1,202,203,1,201,202,1,234,201,1,234,1,2,2,124,125,2,125,126,2,126,127,2,127,128,2,128,129,234,2,129,234,129,130,234,130,131,234,131,132,233,234,132,232,233,132,231,232,132,230,231,132,8,230,132,8,132,133,8,133,134,8,134,135,8,135,105,8,105,106,8,106,107,8,107,108,8,108,109,8,109,110,8,110,111,8,111,112,112,96,97,112,97,98,112,98,99,112,99,100,112,100,101,8,112,101,8,101,102,8,102,103,8,103,104,8,104,74,8,74,75,8,75,76,8,76,77,8,77,78,8,78,79,8,79,80,8,80,81,81,65,66,81,66,67,81,67,68,81,68,69,81,69,70,81,70,71,81,71,72,49,50,34,48,49,34,47,48,34,46,47,34,45,46,34,44,45,34,43,44,34,43,34,35,43,35,36,43,36,37,73,43,37,73,37,38,73,38,39,73,39,40,73,40,41,73,41,42,17,18,248,16,17,248,15,16,248,14,15,248,13,14,248,12,13,248,42,12,248,73,42,248,73,248,249,72,73,249,72,249,250,72,250,251,72,251,252,72,252,253,72,253,254,81,72,254,81,254,255,81,255,256,258,259,144,257,258,144,256,257,144,81,256,144,81,144,145,81,145,146,81,146,147,81,147,148,81,148,149,81,149,150,81,150,151,81,151,152,81,152,153,81,153,154,81,154,155,8,81,155,8,155,156,8,156,157,8,157,158,8,158,159,8,159,160,8,160,161,8,161,162,8,162,163,8,163,164,8,164,165,6,8,165,6,165,166,6,166,136,6,136,137,6,137,138,6,138,139,6,139,140,6,140,141,6,141,142,6,142,143,6,143,144,144,259,260,144,260,261,6,144,261,6,261,262,6,262,263,6,263,264,6,264,265,6,265,235,6,235,236,6,236,237,6,237,238,6,238,239,6,239,240,6,240,241,25,6,241,25,241,242,25,242,243,25,243,244,25,244,245,25,245,246,25,246,247,248,25,247};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_87_point_1()
		{
			double[] value = {-9.1500e+00,2.2869e+00,3.0751e+00,-3.5000e-01,2.2869e+00,3.0751e+00,-3.5000e-01,2.3618e+00,3.0751e+00,0.0000e+00,2.3618e+00,3.0751e+00,0.0000e+00,1.6750e+01,3.0751e+00,-3.5000e-01,1.6750e+01,3.0751e+00,-3.5000e-01,1.6787e+01,3.0751e+00,-9.1500e+00,1.6787e+01,3.0751e+00,-9.1500e+00,1.6750e+01,3.0751e+00,-9.5000e+00,1.6750e+01,3.0751e+00,-9.5000e+00,2.3618e+00,3.0751e+00,-9.1500e+00,2.3618e+00,3.0751e+00,-1.8061e+00,9.1229e+00,3.0751e+00,-1.7872e+00,9.1832e+00,3.0751e+00,-1.7565e+00,9.2385e+00,3.0751e+00,-1.7153e+00,9.2865e+00,3.0751e+00,-1.6653e+00,9.3252e+00,3.0751e+00,-1.6085e+00,9.3530e+00,3.0751e+00,-1.5473e+00,9.3689e+00,3.0751e+00,-1.4842e+00,9.3721e+00,3.0751e+00,-1.4217e+00,9.3625e+00,3.0751e+00,-1.3624e+00,9.3406e+00,3.0751e+00,-1.3087e+00,9.3071e+00,3.0751e+00,-1.2629e+00,9.2636e+00,3.0751e+00,-1.2268e+00,9.2117e+00,3.0751e+00,-1.2018e+00,9.1536e+00,3.0751e+00,-1.1891e+00,9.0916e+00,3.0751e+00,-1.1891e+00,9.0284e+00,3.0751e+00,-1.2018e+00,8.9664e+00,3.0751e+00,-1.2268e+00,8.9083e+00,3.0751e+00,-1.2629e+00,8.8564e+00,3.0751e+00,-1.3087e+00,8.8129e+00,3.0751e+00,-1.3624e+00,8.7794e+00,3.0751e+00,-1.4217e+00,8.7575e+00,3.0751e+00,-1.4842e+00,8.7479e+00,3.0751e+00,-1.5473e+00,8.7511e+00,3.0751e+00,-1.6085e+00,8.7670e+00,3.0751e+00,-1.6653e+00,8.7948e+00,3.0751e+00,-1.7153e+00,8.8335e+00,3.0751e+00,-1.7565e+00,8.8815e+00,3.0751e+00,-1.7872e+00,8.9368e+00,3.0751e+00,-1.8061e+00,8.9971e+00,3.0751e+00,-1.8125e+00,9.0600e+00,3.0751e+00,-1.8061e+00,7.3729e+00,3.0751e+00,-1.7872e+00,7.4332e+00,3.0751e+00,-1.7565e+00,7.4885e+00,3.0751e+00,-1.7153e+00,7.5365e+00,3.0751e+00,-1.6653e+00,7.5752e+00,3.0751e+00,-1.6085e+00,7.6030e+00,3.0751e+00,-1.5473e+00,7.6189e+00,3.0751e+00,-1.4842e+00,7.6221e+00,3.0751e+00,-1.4217e+00,7.6125e+00,3.0751e+00,-1.3624e+00,7.5906e+00,3.0751e+00,-1.3087e+00,7.5571e+00,3.0751e+00,-1.2629e+00,7.5136e+00,3.0751e+00,-1.2268e+00,7.4617e+00,3.0751e+00,-1.2018e+00,7.4036e+00,3.0751e+00,-1.1891e+00,7.3416e+00,3.0751e+00,-1.1891e+00,7.2784e+00,3.0751e+00,-1.2018e+00,7.2164e+00,3.0751e+00,-1.2268e+00,7.1583e+00,3.0751e+00,-1.2629e+00,7.1064e+00,3.0751e+00,-1.3087e+00,7.0629e+00,3.0751e+00,-1.3624e+00,7.0294e+00,3.0751e+00,-1.4217e+00,7.0075e+00,3.0751e+00,-1.4842e+00,6.9979e+00,3.0751e+00,-1.5473e+00,7.0011e+00,3.0751e+00,-1.6085e+00,7.0170e+00,3.0751e+00,-1.6653e+00,7.0448e+00,3.0751e+00,-1.7153e+00,7.0835e+00,3.0751e+00,-1.7565e+00,7.1315e+00,3.0751e+00,-1.7872e+00,7.1868e+00,3.0751e+00,-1.8061e+00,7.2471e+00,3.0751e+00,-1.8125e+00,7.3100e+00,3.0751e+00,-1.8061e+00,5.6229e+00,3.0751e+00,-1.7872e+00,5.6832e+00,3.0751e+00,-1.7565e+00,5.7385e+00,3.0751e+00,-1.7153e+00,5.7865e+00,3.0751e+00,-1.6653e+00,5.8252e+00,3.0751e+00,-1.6085e+00,5.8530e+00,3.0751e+00,-1.5473e+00,5.8689e+00,3.0751e+00,-1.4842e+00,5.8721e+00,3.0751e+00,-1.4217e+00,5.8625e+00,3.0751e+00,-1.3624e+00,5.8406e+00,3.0751e+00,-1.3087e+00,5.8071e+00,3.0751e+00,-1.2629e+00,5.7636e+00,3.0751e+00,-1.2268e+00,5.7117e+00,3.0751e+00,-1.2018e+00,5.6536e+00,3.0751e+00,-1.1891e+00,5.5916e+00,3.0751e+00,-1.1891e+00,5.5284e+00,3.0751e+00,-1.2018e+00,5.4664e+00,3.0751e+00,-1.2268e+00,5.4083e+00,3.0751e+00,-1.2629e+00,5.3564e+00,3.0751e+00,-1.3087e+00,5.3129e+00,3.0751e+00,-1.3624e+00,5.2794e+00,3.0751e+00,-1.4217e+00,5.2575e+00,3.0751e+00,-1.4842e+00,5.2479e+00,3.0751e+00,-1.5473e+00,5.2511e+00,3.0751e+00,-1.6085e+00,5.2670e+00,3.0751e+00,-1.6653e+00,5.2948e+00,3.0751e+00};
			return value;
		}
		private double[] getCoordinate_7_87_point_2()
		{
			double[] value = {-1.7153e+00,5.3335e+00,3.0751e+00,-1.7565e+00,5.3815e+00,3.0751e+00,-1.7872e+00,5.4368e+00,3.0751e+00,-1.8061e+00,5.4971e+00,3.0751e+00,-1.8125e+00,5.5600e+00,3.0751e+00,-1.8061e+00,3.8729e+00,3.0751e+00,-1.7872e+00,3.9332e+00,3.0751e+00,-1.7565e+00,3.9885e+00,3.0751e+00,-1.7153e+00,4.0365e+00,3.0751e+00,-1.6653e+00,4.0752e+00,3.0751e+00,-1.6085e+00,4.1030e+00,3.0751e+00,-1.5473e+00,4.1189e+00,3.0751e+00,-1.4842e+00,4.1221e+00,3.0751e+00,-1.4217e+00,4.1125e+00,3.0751e+00,-1.3624e+00,4.0906e+00,3.0751e+00,-1.3087e+00,4.0571e+00,3.0751e+00,-1.2629e+00,4.0136e+00,3.0751e+00,-1.2268e+00,3.9617e+00,3.0751e+00,-1.2018e+00,3.9036e+00,3.0751e+00,-1.1891e+00,3.8416e+00,3.0751e+00,-1.1891e+00,3.7784e+00,3.0751e+00,-1.2018e+00,3.7164e+00,3.0751e+00,-1.2268e+00,3.6583e+00,3.0751e+00,-1.2629e+00,3.6064e+00,3.0751e+00,-1.3087e+00,3.5629e+00,3.0751e+00,-1.3624e+00,3.5294e+00,3.0751e+00,-1.4217e+00,3.5075e+00,3.0751e+00,-1.4842e+00,3.4979e+00,3.0751e+00,-1.5473e+00,3.5011e+00,3.0751e+00,-1.6085e+00,3.5170e+00,3.0751e+00,-1.6653e+00,3.5448e+00,3.0751e+00,-1.7153e+00,3.5835e+00,3.0751e+00,-1.7565e+00,3.6315e+00,3.0751e+00,-1.7872e+00,3.6868e+00,3.0751e+00,-1.8061e+00,3.7471e+00,3.0751e+00,-1.8125e+00,3.8100e+00,3.0751e+00,-5.7797e+00,1.5032e+01,3.0751e+00,-5.5866e+00,1.4971e+01,3.0751e+00,-5.4097e+00,1.4873e+01,3.0751e+00,-5.2562e+00,1.4741e+01,3.0751e+00,-5.1324e+00,1.4581e+01,3.0751e+00,-5.0432e+00,1.4399e+01,3.0751e+00,-4.9925e+00,1.4203e+01,3.0751e+00,-4.9823e+00,1.4001e+01,3.0751e+00,-5.0129e+00,1.3801e+01,3.0751e+00,-5.0832e+00,1.3612e+01,3.0751e+00,-5.1902e+00,1.3440e+01,3.0751e+00,-5.3296e+00,1.3293e+01,3.0751e+00,-5.4957e+00,1.3178e+01,3.0751e+00,-5.6816e+00,1.3098e+01,3.0751e+00,-5.8798e+00,1.3057e+01,3.0751e+00,-6.0822e+00,1.3057e+01,3.0751e+00,-6.2804e+00,1.3098e+01,3.0751e+00,-6.4663e+00,1.3178e+01,3.0751e+00,-6.6324e+00,1.3293e+01,3.0751e+00,-6.7718e+00,1.3440e+01,3.0751e+00,-6.8788e+00,1.3612e+01,3.0751e+00,-6.9491e+00,1.3801e+01,3.0751e+00,-6.9797e+00,1.4001e+01,3.0751e+00,-6.9695e+00,1.4203e+01,3.0751e+00,-6.9188e+00,1.4399e+01,3.0751e+00,-6.8296e+00,1.4581e+01,3.0751e+00,-6.7058e+00,1.4741e+01,3.0751e+00,-6.5523e+00,1.4873e+01,3.0751e+00,-6.3754e+00,1.4971e+01,3.0751e+00,-6.1823e+00,1.5032e+01,3.0751e+00,-5.9810e+00,1.5052e+01,3.0751e+00,-7.1132e+00,4.7328e+00,3.0751e+00,-7.1345e+00,4.6625e+00,3.0751e+00,-7.1692e+00,4.5977e+00,3.0751e+00,-7.2158e+00,4.5408e+00,3.0751e+00,-7.2727e+00,4.4942e+00,3.0751e+00,-7.3375e+00,4.4595e+00,3.0751e+00,-7.4078e+00,4.4382e+00,3.0751e+00,-7.4810e+00,4.4310e+00,3.0751e+00,-7.5542e+00,4.4382e+00,3.0751e+00,-7.6245e+00,4.4595e+00,3.0751e+00,-7.6893e+00,4.4942e+00,3.0751e+00,-7.7462e+00,4.5408e+00,3.0751e+00,-7.7928e+00,4.5977e+00,3.0751e+00,-7.8275e+00,4.6625e+00,3.0751e+00,-7.8488e+00,4.7328e+00,3.0751e+00,-7.8560e+00,4.8060e+00,3.0751e+00,-7.8560e+00,8.3060e+00,3.0751e+00,-7.8488e+00,8.3792e+00,3.0751e+00,-7.8275e+00,8.4495e+00,3.0751e+00,-7.7928e+00,8.5143e+00,3.0751e+00,-7.7462e+00,8.5712e+00,3.0751e+00,-7.6893e+00,8.6178e+00,3.0751e+00,-7.6245e+00,8.6525e+00,3.0751e+00,-7.5542e+00,8.6738e+00,3.0751e+00,-7.4810e+00,8.6810e+00,3.0751e+00,-7.4078e+00,8.6738e+00,3.0751e+00,-7.3375e+00,8.6525e+00,3.0751e+00,-7.2727e+00,8.6178e+00,3.0751e+00,-7.2158e+00,8.5712e+00,3.0751e+00,-7.1692e+00,8.5143e+00,3.0751e+00,-7.1345e+00,8.4495e+00,3.0751e+00,-7.1132e+00,8.3792e+00,3.0751e+00,-7.1060e+00,8.3060e+00,3.0751e+00};
			return value;
		}
		private double[] getCoordinate_7_87_point_3()
		{
			double[] value = {-7.1060e+00,4.8060e+00,3.0751e+00,-4.6132e+00,4.7328e+00,3.0751e+00,-4.6345e+00,4.6625e+00,3.0751e+00,-4.6692e+00,4.5977e+00,3.0751e+00,-4.7158e+00,4.5408e+00,3.0751e+00,-4.7727e+00,4.4942e+00,3.0751e+00,-4.8375e+00,4.4595e+00,3.0751e+00,-4.9078e+00,4.4382e+00,3.0751e+00,-4.9810e+00,4.4310e+00,3.0751e+00,-5.0542e+00,4.4382e+00,3.0751e+00,-5.1245e+00,4.4595e+00,3.0751e+00,-5.1893e+00,4.4942e+00,3.0751e+00,-5.2462e+00,4.5408e+00,3.0751e+00,-5.2928e+00,4.5977e+00,3.0751e+00,-5.3275e+00,4.6625e+00,3.0751e+00,-5.3488e+00,4.7328e+00,3.0751e+00,-5.3560e+00,4.8060e+00,3.0751e+00,-5.3560e+00,8.3060e+00,3.0751e+00,-5.3488e+00,8.3792e+00,3.0751e+00,-5.3275e+00,8.4495e+00,3.0751e+00,-5.2928e+00,8.5143e+00,3.0751e+00,-5.2462e+00,8.5712e+00,3.0751e+00,-5.1893e+00,8.6178e+00,3.0751e+00,-5.1245e+00,8.6525e+00,3.0751e+00,-5.0542e+00,8.6738e+00,3.0751e+00,-4.9810e+00,8.6810e+00,3.0751e+00,-4.9078e+00,8.6738e+00,3.0751e+00,-4.8375e+00,8.6525e+00,3.0751e+00,-4.7727e+00,8.6178e+00,3.0751e+00,-4.7158e+00,8.5712e+00,3.0751e+00,-4.6692e+00,8.5143e+00,3.0751e+00,-4.6345e+00,8.4495e+00,3.0751e+00,-4.6132e+00,8.3792e+00,3.0751e+00,-4.6060e+00,8.3060e+00,3.0751e+00,-4.6060e+00,4.8060e+00,3.0751e+00,-2.3300e+00,1.3787e+01,3.0751e+00,-2.1852e+00,1.3741e+01,3.0751e+00,-2.0525e+00,1.3668e+01,3.0751e+00,-1.9374e+00,1.3569e+01,3.0751e+00,-1.8445e+00,1.3449e+01,3.0751e+00,-1.7777e+00,1.3312e+01,3.0751e+00,-1.7396e+00,1.3166e+01,3.0751e+00,-1.7320e+00,1.3014e+01,3.0751e+00,-1.7549e+00,1.2864e+01,3.0751e+00,-1.8076e+00,1.2722e+01,3.0751e+00,-1.8879e+00,1.2593e+01,3.0751e+00,-1.9925e+00,1.2483e+01,3.0751e+00,-2.1170e+00,1.2396e+01,3.0751e+00,-2.2565e+00,1.2336e+01,3.0751e+00,-2.4051e+00,1.2306e+01,3.0751e+00,-2.5569e+00,1.2306e+01,3.0751e+00,-2.7055e+00,1.2336e+01,3.0751e+00,-2.8450e+00,1.2396e+01,3.0751e+00,-2.9695e+00,1.2483e+01,3.0751e+00,-3.0741e+00,1.2593e+01,3.0751e+00,-3.1544e+00,1.2722e+01,3.0751e+00,-3.2071e+00,1.2864e+01,3.0751e+00,-3.2300e+00,1.3014e+01,3.0751e+00,-3.2224e+00,1.3166e+01,3.0751e+00,-3.1843e+00,1.3312e+01,3.0751e+00,-3.1175e+00,1.3449e+01,3.0751e+00,-3.0246e+00,1.3569e+01,3.0751e+00,-2.9095e+00,1.3668e+01,3.0751e+00,-2.7768e+00,1.3741e+01,3.0751e+00,-2.6320e+00,1.3787e+01,3.0751e+00,-2.4810e+00,1.3802e+01,3.0751e+00};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_93_index_1()
		{
			int[] value = {243,35,36,243,36,37,243,37,38,243,38,39,243,39,40,243,40,41,243,41,42,243,42,12,18,19,65,17,18,65,16,17,65,15,16,65,14,15,65,13,14,65,12,13,65,12,65,66,12,66,67,243,12,67,243,67,68,243,68,69,243,69,70,243,70,71,243,71,72,243,72,73,49,50,96,48,49,96,47,48,96,46,47,96,45,46,96,44,45,96,43,44,96,43,96,97,43,97,98,43,98,99,73,43,99,73,99,100,243,73,100,243,100,101,243,101,102,243,102,103,243,103,104,80,81,127,79,80,127,78,79,127,77,78,127,76,77,127,75,76,127,74,75,127,74,127,128,74,128,129,74,129,130,104,74,130,104,130,131,243,104,131,243,131,132,243,132,133,243,133,134,243,134,135,114,115,9,113,114,9,112,113,9,111,112,9,110,111,9,109,110,9,108,109,9,108,9,10,108,10,11,107,108,11,106,107,11,105,106,11,135,105,11,135,11,0,0,171,172,0,172,173,135,0,173,135,173,174,135,174,175,135,175,176,135,176,177,135,177,178,135,178,179,135,179,180,135,180,181,135,181,182,182,234,201,182,201,202,182,202,203,182,203,204,182,204,205,182,205,206,182,206,207,135,182,207,135,207,208,135,208,209,135,209,210,135,210,211,135,211,212,135,212,213,135,213,214,243,135,214,243,214,215,243,215,216,243,216,217,243,217,218,243,218,219,243,219,220,243,220,221,243,221,222,243,222,223,243,223,224,243,224,225,243,225,226,243,226,227,243,227,228,243,228,229,243,229,230,233,234,182,232,233,182,231,232,182,231,182,183,230,231,183,243,230,183,243,183,184,243,184,185,243,185,186,243,186,187,243,187,188,243,188,189,243,189,190,243,190,191,243,191,192,243,192,193,243,193,194,170,171,0,169,170,0,168,169,0,167,168,0,200,167,0,199,200,0,198,199,0,198,0,1,198,1,2,197,198,2,196,197,2,195,196,2,194,195,2,194,2,3,194,3,4,4,5,6,6,7,8,6,8,9,9,115,116,9,116,117,9,117,118,9,118,119,6,9,119,6,119,120,6,120,121,6,121,122,6,122,123,126,127,81,125,126,81,124,125,81,123,124,81,123,81,82,123,82,83,123,83,84,123,84,85,123,85,86,123,86,87,123,87,88,6,123,88,6,88,89,6,89,90,6,90,91,6,91,92,6,92,93,95,96,50,94,95,50,93,94,50,93,50,51,93,51,52,93,52,53,93,53,54,93,54,55,93,55,56,93,56,57,6,93,57,6,57,58,6,58,59,6,59,60,6,60,61,6,61,62,64,65,19,63,64,19,62,63,19,62,19,20,62,20,21,62,21,22,62,22,23,62,23,24,62,24,25,62,25,26,6,62,26,6,26,27,6,27,28,6,28,29,6,29,30,6,30,31,6,31,32,6,32,33,6,33,34,6,34,35,35,243,244,35,244,245,35,245,246,35,246,247,35,247,248,6,35,248,6,248,249,6,249,250,6,250,251,6,251,252,6,252,253,6,253,254,6,254,255,4,6,255,4,255,256,4,256,257,4,257,258,4,258,259,4,259,260,263,264,149,262,263,149,261,262,149,260,261,149,260,149,150,260,150,151,260,151,152,260,152,153,260,153,154,260,154,155,260,155,156,4,260,156,4,156,157,4,157,158,4,158,159,4,159,160,4,160,161,4,161,162,4,162,163,4,163,164,4,164,165,194,4,165,194,165,166,194,166,136,194,136,137,194,137,138,194,138,139,194,139,140,194,140,141,194,141,142,194,142,143,194,143,144,194,144,145,194,145,146,194,146,147,194,147,148,148,149,264,194,148,264,194,264,265,194,265,235,194,235,236,194,236,237,194,237,238,194,238,239,194,239,240,194,240,241,194,241,242,243,194,242};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_93_point_1()
		{
			double[] value = {-9.1500e+00,2.3618e+00,3.0000e+00,-9.5000e+00,2.3618e+00,3.0000e+00,-9.5000e+00,1.6750e+01,3.0000e+00,-9.1500e+00,1.6750e+01,3.0000e+00,-9.1500e+00,1.6787e+01,3.0000e+00,-3.5000e-01,1.6787e+01,3.0000e+00,-3.5000e-01,1.6750e+01,3.0000e+00,0.0000e+00,1.6750e+01,3.0000e+00,0.0000e+00,2.3618e+00,3.0000e+00,-3.5000e-01,2.3618e+00,3.0000e+00,-3.5000e-01,2.2869e+00,3.0000e+00,-9.1500e+00,2.2869e+00,3.0000e+00,-1.8061e+00,8.9971e+00,3.0000e+00,-1.7872e+00,8.9368e+00,3.0000e+00,-1.7565e+00,8.8815e+00,3.0000e+00,-1.7153e+00,8.8335e+00,3.0000e+00,-1.6653e+00,8.7948e+00,3.0000e+00,-1.6085e+00,8.7670e+00,3.0000e+00,-1.5473e+00,8.7511e+00,3.0000e+00,-1.4842e+00,8.7479e+00,3.0000e+00,-1.4217e+00,8.7575e+00,3.0000e+00,-1.3624e+00,8.7794e+00,3.0000e+00,-1.3087e+00,8.8129e+00,3.0000e+00,-1.2629e+00,8.8564e+00,3.0000e+00,-1.2268e+00,8.9083e+00,3.0000e+00,-1.2018e+00,8.9664e+00,3.0000e+00,-1.1891e+00,9.0284e+00,3.0000e+00,-1.1891e+00,9.0916e+00,3.0000e+00,-1.2018e+00,9.1536e+00,3.0000e+00,-1.2268e+00,9.2117e+00,3.0000e+00,-1.2629e+00,9.2636e+00,3.0000e+00,-1.3087e+00,9.3071e+00,3.0000e+00,-1.3624e+00,9.3406e+00,3.0000e+00,-1.4217e+00,9.3625e+00,3.0000e+00,-1.4842e+00,9.3721e+00,3.0000e+00,-1.5473e+00,9.3689e+00,3.0000e+00,-1.6085e+00,9.3530e+00,3.0000e+00,-1.6653e+00,9.3252e+00,3.0000e+00,-1.7153e+00,9.2865e+00,3.0000e+00,-1.7565e+00,9.2385e+00,3.0000e+00,-1.7872e+00,9.1832e+00,3.0000e+00,-1.8061e+00,9.1229e+00,3.0000e+00,-1.8125e+00,9.0600e+00,3.0000e+00,-1.8061e+00,7.2471e+00,3.0000e+00,-1.7872e+00,7.1868e+00,3.0000e+00,-1.7565e+00,7.1315e+00,3.0000e+00,-1.7153e+00,7.0835e+00,3.0000e+00,-1.6653e+00,7.0448e+00,3.0000e+00,-1.6085e+00,7.0170e+00,3.0000e+00,-1.5473e+00,7.0011e+00,3.0000e+00,-1.4842e+00,6.9979e+00,3.0000e+00,-1.4217e+00,7.0075e+00,3.0000e+00,-1.3624e+00,7.0294e+00,3.0000e+00,-1.3087e+00,7.0629e+00,3.0000e+00,-1.2629e+00,7.1064e+00,3.0000e+00,-1.2268e+00,7.1583e+00,3.0000e+00,-1.2018e+00,7.2164e+00,3.0000e+00,-1.1891e+00,7.2784e+00,3.0000e+00,-1.1891e+00,7.3416e+00,3.0000e+00,-1.2018e+00,7.4036e+00,3.0000e+00,-1.2268e+00,7.4617e+00,3.0000e+00,-1.2629e+00,7.5136e+00,3.0000e+00,-1.3087e+00,7.5571e+00,3.0000e+00,-1.3624e+00,7.5906e+00,3.0000e+00,-1.4217e+00,7.6125e+00,3.0000e+00,-1.4842e+00,7.6221e+00,3.0000e+00,-1.5473e+00,7.6189e+00,3.0000e+00,-1.6085e+00,7.6030e+00,3.0000e+00,-1.6653e+00,7.5752e+00,3.0000e+00,-1.7153e+00,7.5365e+00,3.0000e+00,-1.7565e+00,7.4885e+00,3.0000e+00,-1.7872e+00,7.4332e+00,3.0000e+00,-1.8061e+00,7.3729e+00,3.0000e+00,-1.8125e+00,7.3100e+00,3.0000e+00,-1.8061e+00,5.4971e+00,3.0000e+00,-1.7872e+00,5.4368e+00,3.0000e+00,-1.7565e+00,5.3815e+00,3.0000e+00,-1.7153e+00,5.3335e+00,3.0000e+00,-1.6653e+00,5.2948e+00,3.0000e+00,-1.6085e+00,5.2670e+00,3.0000e+00,-1.5473e+00,5.2511e+00,3.0000e+00,-1.4842e+00,5.2479e+00,3.0000e+00,-1.4217e+00,5.2575e+00,3.0000e+00,-1.3624e+00,5.2794e+00,3.0000e+00,-1.3087e+00,5.3129e+00,3.0000e+00,-1.2629e+00,5.3564e+00,3.0000e+00,-1.2268e+00,5.4083e+00,3.0000e+00,-1.2018e+00,5.4664e+00,3.0000e+00,-1.1891e+00,5.5284e+00,3.0000e+00,-1.1891e+00,5.5916e+00,3.0000e+00,-1.2018e+00,5.6536e+00,3.0000e+00,-1.2268e+00,5.7117e+00,3.0000e+00,-1.2629e+00,5.7636e+00,3.0000e+00,-1.3087e+00,5.8071e+00,3.0000e+00,-1.3624e+00,5.8406e+00,3.0000e+00,-1.4217e+00,5.8625e+00,3.0000e+00,-1.4842e+00,5.8721e+00,3.0000e+00,-1.5473e+00,5.8689e+00,3.0000e+00,-1.6085e+00,5.8530e+00,3.0000e+00,-1.6653e+00,5.8252e+00,3.0000e+00};
			return value;
		}
		private double[] getCoordinate_7_93_point_2()
		{
			double[] value = {-1.7153e+00,5.7865e+00,3.0000e+00,-1.7565e+00,5.7385e+00,3.0000e+00,-1.7872e+00,5.6832e+00,3.0000e+00,-1.8061e+00,5.6229e+00,3.0000e+00,-1.8125e+00,5.5600e+00,3.0000e+00,-1.8061e+00,3.7471e+00,3.0000e+00,-1.7872e+00,3.6868e+00,3.0000e+00,-1.7565e+00,3.6315e+00,3.0000e+00,-1.7153e+00,3.5835e+00,3.0000e+00,-1.6653e+00,3.5448e+00,3.0000e+00,-1.6085e+00,3.5170e+00,3.0000e+00,-1.5473e+00,3.5011e+00,3.0000e+00,-1.4842e+00,3.4979e+00,3.0000e+00,-1.4217e+00,3.5075e+00,3.0000e+00,-1.3624e+00,3.5294e+00,3.0000e+00,-1.3087e+00,3.5629e+00,3.0000e+00,-1.2629e+00,3.6064e+00,3.0000e+00,-1.2268e+00,3.6583e+00,3.0000e+00,-1.2018e+00,3.7164e+00,3.0000e+00,-1.1891e+00,3.7784e+00,3.0000e+00,-1.1891e+00,3.8416e+00,3.0000e+00,-1.2018e+00,3.9036e+00,3.0000e+00,-1.2268e+00,3.9617e+00,3.0000e+00,-1.2629e+00,4.0136e+00,3.0000e+00,-1.3087e+00,4.0571e+00,3.0000e+00,-1.3624e+00,4.0906e+00,3.0000e+00,-1.4217e+00,4.1125e+00,3.0000e+00,-1.4842e+00,4.1221e+00,3.0000e+00,-1.5473e+00,4.1189e+00,3.0000e+00,-1.6085e+00,4.1030e+00,3.0000e+00,-1.6653e+00,4.0752e+00,3.0000e+00,-1.7153e+00,4.0365e+00,3.0000e+00,-1.7565e+00,3.9885e+00,3.0000e+00,-1.7872e+00,3.9332e+00,3.0000e+00,-1.8061e+00,3.8729e+00,3.0000e+00,-1.8125e+00,3.8100e+00,3.0000e+00,-6.9605e+00,1.3851e+01,3.0000e+00,-6.9000e+00,1.3658e+01,3.0000e+00,-6.8018e+00,1.3481e+01,3.0000e+00,-6.6700e+00,1.3327e+01,3.0000e+00,-6.5100e+00,1.3203e+01,3.0000e+00,-6.3283e+00,1.3114e+01,3.0000e+00,-6.1324e+00,1.3064e+01,3.0000e+00,-5.9304e+00,1.3053e+01,3.0000e+00,-5.7303e+00,1.3084e+01,3.0000e+00,-5.5406e+00,1.3154e+01,3.0000e+00,-5.3689e+00,1.3261e+01,3.0000e+00,-5.2222e+00,1.3401e+01,3.0000e+00,-5.1067e+00,1.3567e+01,3.0000e+00,-5.0269e+00,1.3753e+01,3.0000e+00,-4.9861e+00,1.3951e+01,3.0000e+00,-4.9861e+00,1.4153e+01,3.0000e+00,-5.0269e+00,1.4351e+01,3.0000e+00,-5.1067e+00,1.4537e+01,3.0000e+00,-5.2222e+00,1.4703e+01,3.0000e+00,-5.3689e+00,1.4843e+01,3.0000e+00,-5.5406e+00,1.4950e+01,3.0000e+00,-5.7303e+00,1.5020e+01,3.0000e+00,-5.9304e+00,1.5051e+01,3.0000e+00,-6.1324e+00,1.5040e+01,3.0000e+00,-6.3283e+00,1.4990e+01,3.0000e+00,-6.5100e+00,1.4901e+01,3.0000e+00,-6.6700e+00,1.4777e+01,3.0000e+00,-6.8018e+00,1.4623e+01,3.0000e+00,-6.9000e+00,1.4446e+01,3.0000e+00,-6.9605e+00,1.4253e+01,3.0000e+00,-6.9810e+00,1.4052e+01,3.0000e+00,-7.8488e+00,4.7328e+00,3.0000e+00,-7.8275e+00,4.6625e+00,3.0000e+00,-7.7928e+00,4.5977e+00,3.0000e+00,-7.7462e+00,4.5408e+00,3.0000e+00,-7.6893e+00,4.4942e+00,3.0000e+00,-7.6245e+00,4.4595e+00,3.0000e+00,-7.5542e+00,4.4382e+00,3.0000e+00,-7.4810e+00,4.4310e+00,3.0000e+00,-7.4078e+00,4.4382e+00,3.0000e+00,-7.3375e+00,4.4595e+00,3.0000e+00,-7.2727e+00,4.4942e+00,3.0000e+00,-7.2158e+00,4.5408e+00,3.0000e+00,-7.1692e+00,4.5977e+00,3.0000e+00,-7.1345e+00,4.6625e+00,3.0000e+00,-7.1132e+00,4.7328e+00,3.0000e+00,-7.1060e+00,4.8060e+00,3.0000e+00,-7.1060e+00,8.3060e+00,3.0000e+00,-7.1132e+00,8.3792e+00,3.0000e+00,-7.1345e+00,8.4495e+00,3.0000e+00,-7.1692e+00,8.5143e+00,3.0000e+00,-7.2158e+00,8.5712e+00,3.0000e+00,-7.2727e+00,8.6178e+00,3.0000e+00,-7.3375e+00,8.6525e+00,3.0000e+00,-7.4078e+00,8.6738e+00,3.0000e+00,-7.4810e+00,8.6810e+00,3.0000e+00,-7.5542e+00,8.6738e+00,3.0000e+00,-7.6245e+00,8.6525e+00,3.0000e+00,-7.6893e+00,8.6178e+00,3.0000e+00,-7.7462e+00,8.5712e+00,3.0000e+00,-7.7928e+00,8.5143e+00,3.0000e+00,-7.8275e+00,8.4495e+00,3.0000e+00,-7.8488e+00,8.3792e+00,3.0000e+00,-7.8560e+00,8.3060e+00,3.0000e+00};
			return value;
		}
		private double[] getCoordinate_7_93_point_3()
		{
			double[] value = {-7.8560e+00,4.8060e+00,3.0000e+00,-5.3488e+00,4.7328e+00,3.0000e+00,-5.3275e+00,4.6625e+00,3.0000e+00,-5.2928e+00,4.5977e+00,3.0000e+00,-5.2462e+00,4.5408e+00,3.0000e+00,-5.1893e+00,4.4942e+00,3.0000e+00,-5.1245e+00,4.4595e+00,3.0000e+00,-5.0542e+00,4.4382e+00,3.0000e+00,-4.9810e+00,4.4310e+00,3.0000e+00,-4.9078e+00,4.4382e+00,3.0000e+00,-4.8375e+00,4.4595e+00,3.0000e+00,-4.7727e+00,4.4942e+00,3.0000e+00,-4.7158e+00,4.5408e+00,3.0000e+00,-4.6692e+00,4.5977e+00,3.0000e+00,-4.6345e+00,4.6625e+00,3.0000e+00,-4.6132e+00,4.7328e+00,3.0000e+00,-4.6060e+00,4.8060e+00,3.0000e+00,-4.6060e+00,8.3060e+00,3.0000e+00,-4.6132e+00,8.3792e+00,3.0000e+00,-4.6345e+00,8.4495e+00,3.0000e+00,-4.6692e+00,8.5143e+00,3.0000e+00,-4.7158e+00,8.5712e+00,3.0000e+00,-4.7727e+00,8.6178e+00,3.0000e+00,-4.8375e+00,8.6525e+00,3.0000e+00,-4.9078e+00,8.6738e+00,3.0000e+00,-4.9810e+00,8.6810e+00,3.0000e+00,-5.0542e+00,8.6738e+00,3.0000e+00,-5.1245e+00,8.6525e+00,3.0000e+00,-5.1893e+00,8.6178e+00,3.0000e+00,-5.2462e+00,8.5712e+00,3.0000e+00,-5.2928e+00,8.5143e+00,3.0000e+00,-5.3275e+00,8.4495e+00,3.0000e+00,-5.3488e+00,8.3792e+00,3.0000e+00,-5.3560e+00,8.3060e+00,3.0000e+00,-5.3560e+00,4.8060e+00,3.0000e+00,-3.2156e+00,1.2901e+01,3.0000e+00,-3.1702e+00,1.2756e+01,3.0000e+00,-3.0966e+00,1.2624e+01,3.0000e+00,-2.9977e+00,1.2508e+01,3.0000e+00,-2.8777e+00,1.2416e+01,3.0000e+00,-2.7415e+00,1.2349e+01,3.0000e+00,-2.5946e+00,1.2311e+01,3.0000e+00,-2.4430e+00,1.2303e+01,3.0000e+00,-2.2930e+00,1.2326e+01,3.0000e+00,-2.1507e+00,1.2379e+01,3.0000e+00,-2.0219e+00,1.2459e+01,3.0000e+00,-1.9119e+00,1.2563e+01,3.0000e+00,-1.8252e+00,1.2688e+01,3.0000e+00,-1.7654e+00,1.2827e+01,3.0000e+00,-1.7348e+00,1.2976e+01,3.0000e+00,-1.7348e+00,1.3128e+01,3.0000e+00,-1.7654e+00,1.3277e+01,3.0000e+00,-1.8252e+00,1.3416e+01,3.0000e+00,-1.9119e+00,1.3541e+01,3.0000e+00,-2.0219e+00,1.3645e+01,3.0000e+00,-2.1507e+00,1.3725e+01,3.0000e+00,-2.2930e+00,1.3778e+01,3.0000e+00,-2.4430e+00,1.3801e+01,3.0000e+00,-2.5946e+00,1.3793e+01,3.0000e+00,-2.7415e+00,1.3755e+01,3.0000e+00,-2.8777e+00,1.3688e+01,3.0000e+00,-2.9977e+00,1.3596e+01,3.0000e+00,-3.0966e+00,1.3480e+01,3.0000e+00,-3.1702e+00,1.3348e+01,3.0000e+00,-3.2156e+00,1.3203e+01,3.0000e+00,-3.2310e+00,1.3052e+01,3.0000e+00};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_155_point_1()
		{
			double[] value = {-8.7941e+00,1.8577e+01,1.7646e-14,-8.8364e+00,1.8563e+01,1.7617e-14,-8.8751e+00,1.8542e+01,1.7570e-14,-8.9087e+00,1.8513e+01,1.7507e-14,-8.9359e+00,1.8478e+01,1.7430e-14,-8.9554e+00,1.8438e+01,1.7343e-14,-8.9665e+00,1.8395e+01,1.7249e-14,-8.9687e+00,1.8351e+01,1.7152e-14,-8.9620e+00,1.8307e+01,1.7057e-14,-8.9466e+00,1.8266e+01,1.6966e-14,-8.9232e+00,1.8228e+01,1.6883e-14,-8.8927e+00,1.8196e+01,1.6813e-14,-8.8563e+00,1.8171e+01,1.6758e-14,-8.8156e+00,1.8153e+01,1.6719e-14,-8.7722e+00,1.8144e+01,1.6700e-14,-8.7278e+00,1.8144e+01,1.6700e-14,-8.6844e+00,1.8153e+01,1.6719e-14,-8.6437e+00,1.8171e+01,1.6758e-14,-8.6073e+00,1.8196e+01,1.6813e-14,-8.5768e+00,1.8228e+01,1.6883e-14,-8.5534e+00,1.8266e+01,1.6966e-14,-8.5380e+00,1.8307e+01,1.7057e-14,-8.5313e+00,1.8351e+01,1.7152e-14,-8.5335e+00,1.8395e+01,1.7249e-14,-8.5446e+00,1.8438e+01,1.7343e-14,-8.5641e+00,1.8478e+01,1.7430e-14,-8.5913e+00,1.8513e+01,1.7507e-14,-8.6249e+00,1.8542e+01,1.7570e-14,-8.6636e+00,1.8563e+01,1.7617e-14,-8.7059e+00,1.8577e+01,1.7646e-14,-8.7500e+00,1.8581e+01,1.7656e-14,-7.9408e-01,1.8577e+01,1.7646e-14,-8.3636e-01,1.8563e+01,1.7617e-14,-8.7511e-01,1.8542e+01,1.7570e-14,-9.0873e-01,1.8513e+01,1.7507e-14,-9.3585e-01,1.8478e+01,1.7430e-14,-9.5537e-01,1.8438e+01,1.7343e-14,-9.6647e-01,1.8395e+01,1.7249e-14,-9.6872e-01,1.8351e+01,1.7152e-14,-9.6201e-01,1.8307e+01,1.7057e-14,-9.4662e-01,1.8266e+01,1.6966e-14,-9.2318e-01,1.8228e+01,1.6883e-14,-8.9265e-01,1.8196e+01,1.6813e-14,-8.5628e-01,1.8171e+01,1.6758e-14,-8.1556e-01,1.8153e+01,1.6719e-14,-7.7216e-01,1.8144e+01,1.6700e-14,-7.2784e-01,1.8144e+01,1.6700e-14,-6.8444e-01,1.8153e+01,1.6719e-14,-6.4372e-01,1.8171e+01,1.6758e-14,-6.0735e-01,1.8196e+01,1.6813e-14,-5.7682e-01,1.8228e+01,1.6883e-14,-5.5338e-01,1.8266e+01,1.6966e-14,-5.3799e-01,1.8307e+01,1.7057e-14,-5.3128e-01,1.8351e+01,1.7152e-14,-5.3353e-01,1.8395e+01,1.7249e-14,-5.4463e-01,1.8438e+01,1.7343e-14,-5.6415e-01,1.8478e+01,1.7430e-14,-5.9127e-01,1.8513e+01,1.7507e-14,-6.2489e-01,1.8542e+01,1.7570e-14,-6.6364e-01,1.8563e+01,1.7617e-14,-7.0592e-01,1.8577e+01,1.7646e-14,-7.5000e-01,1.8581e+01,1.7656e-14,-9.5000e+00,1.8612e+01,1.7724e-14,-9.0000e+00,1.9112e+01,1.8818e-14,-7.5000e+00,1.9112e+01,1.8818e-14,-7.4512e+00,1.9107e+01,1.8808e-14,-7.4043e+00,1.9093e+01,1.8777e-14,-7.3611e+00,1.9070e+01,1.8726e-14,-7.3232e+00,1.9039e+01,1.8658e-14,-7.2921e+00,1.9001e+01,1.8575e-14,-7.2690e+00,1.8958e+01,1.8480e-14,-7.2548e+00,1.8911e+01,1.8378e-14,-7.2500e+00,1.8862e+01,1.8271e-14,-7.2500e+00,1.8112e+01,1.6630e-14,-7.2452e+00,1.8063e+01,1.6523e-14,-7.2310e+00,1.8016e+01,1.6420e-14,-7.2079e+00,1.7973e+01,1.6326e-14,-7.1768e+00,1.7935e+01,1.6243e-14,-7.1389e+00,1.7904e+01,1.6175e-14,-7.0957e+00,1.7881e+01,1.6124e-14,-7.0488e+00,1.7867e+01,1.6093e-14,-7.0000e+00,1.7862e+01,1.6082e-14,-2.5000e+00,1.7862e+01,1.6082e-14,-2.4512e+00,1.7867e+01,1.6093e-14,-2.4043e+00,1.7881e+01,1.6124e-14,-2.3611e+00,1.7904e+01,1.6175e-14,-2.3232e+00,1.7935e+01,1.6243e-14,-2.2921e+00,1.7973e+01,1.6326e-14,-2.2690e+00,1.8016e+01,1.6420e-14,-2.2548e+00,1.8063e+01,1.6523e-14,-2.2500e+00,1.8112e+01,1.6630e-14,-2.2500e+00,1.8862e+01,1.8271e-14,-2.2452e+00,1.8911e+01,1.8378e-14,-2.2310e+00,1.8958e+01,1.8480e-14,-2.2079e+00,1.9001e+01,1.8575e-14,-2.1768e+00,1.9039e+01,1.8658e-14,-2.1389e+00,1.9070e+01,1.8726e-14,-2.0957e+00,1.9093e+01,1.8777e-14,-2.0488e+00,1.9107e+01,1.8808e-14,-2.0000e+00,1.9112e+01,1.8818e-14};
			return value;
		}
		private double[] getCoordinate_7_155_point_2()
		{
			double[] value = {-5.0000e-01,1.9112e+01,1.8818e-14,0.0000e+00,1.8612e+01,1.7724e-14,0.0000e+00,1.7362e+01,1.4988e-14,-9.5000e+00,1.7362e+01,1.4988e-14};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_167_point_1()
		{
			double[] value = {-8.7059e+00,1.8577e+01,7.5100e-02,-8.6636e+00,1.8563e+01,7.5100e-02,-8.6249e+00,1.8542e+01,7.5100e-02,-8.5913e+00,1.8513e+01,7.5100e-02,-8.5641e+00,1.8478e+01,7.5100e-02,-8.5446e+00,1.8438e+01,7.5100e-02,-8.5335e+00,1.8395e+01,7.5100e-02,-8.5313e+00,1.8351e+01,7.5100e-02,-8.5380e+00,1.8307e+01,7.5100e-02,-8.5534e+00,1.8266e+01,7.5100e-02,-8.5768e+00,1.8228e+01,7.5100e-02,-8.6073e+00,1.8196e+01,7.5100e-02,-8.6437e+00,1.8171e+01,7.5100e-02,-8.6844e+00,1.8153e+01,7.5100e-02,-8.7278e+00,1.8144e+01,7.5100e-02,-8.7722e+00,1.8144e+01,7.5100e-02,-8.8156e+00,1.8153e+01,7.5100e-02,-8.8563e+00,1.8171e+01,7.5100e-02,-8.8927e+00,1.8196e+01,7.5100e-02,-8.9232e+00,1.8228e+01,7.5100e-02,-8.9466e+00,1.8266e+01,7.5100e-02,-8.9620e+00,1.8307e+01,7.5100e-02,-8.9687e+00,1.8351e+01,7.5100e-02,-8.9665e+00,1.8395e+01,7.5100e-02,-8.9554e+00,1.8438e+01,7.5100e-02,-8.9359e+00,1.8478e+01,7.5100e-02,-8.9087e+00,1.8513e+01,7.5100e-02,-8.8751e+00,1.8542e+01,7.5100e-02,-8.8364e+00,1.8563e+01,7.5100e-02,-8.7941e+00,1.8577e+01,7.5100e-02,-8.7500e+00,1.8581e+01,7.5100e-02,-7.0592e-01,1.8577e+01,7.5100e-02,-6.6364e-01,1.8563e+01,7.5100e-02,-6.2489e-01,1.8542e+01,7.5100e-02,-5.9127e-01,1.8513e+01,7.5100e-02,-5.6415e-01,1.8478e+01,7.5100e-02,-5.4463e-01,1.8438e+01,7.5100e-02,-5.3353e-01,1.8395e+01,7.5100e-02,-5.3128e-01,1.8351e+01,7.5100e-02,-5.3799e-01,1.8307e+01,7.5100e-02,-5.5338e-01,1.8266e+01,7.5100e-02,-5.7682e-01,1.8228e+01,7.5100e-02,-6.0735e-01,1.8196e+01,7.5100e-02,-6.4372e-01,1.8171e+01,7.5100e-02,-6.8444e-01,1.8153e+01,7.5100e-02,-7.2784e-01,1.8144e+01,7.5100e-02,-7.7216e-01,1.8144e+01,7.5100e-02,-8.1556e-01,1.8153e+01,7.5100e-02,-8.5628e-01,1.8171e+01,7.5100e-02,-8.9265e-01,1.8196e+01,7.5100e-02,-9.2318e-01,1.8228e+01,7.5100e-02,-9.4662e-01,1.8266e+01,7.5100e-02,-9.6201e-01,1.8307e+01,7.5100e-02,-9.6872e-01,1.8351e+01,7.5100e-02,-9.6647e-01,1.8395e+01,7.5100e-02,-9.5537e-01,1.8438e+01,7.5100e-02,-9.3585e-01,1.8478e+01,7.5100e-02,-9.0873e-01,1.8513e+01,7.5100e-02,-8.7511e-01,1.8542e+01,7.5100e-02,-8.3636e-01,1.8563e+01,7.5100e-02,-7.9408e-01,1.8577e+01,7.5100e-02,-7.5000e-01,1.8581e+01,7.5100e-02,-9.0000e+00,1.9112e+01,7.5100e-02,-9.5000e+00,1.8612e+01,7.5100e-02,-9.5000e+00,1.7362e+01,7.5100e-02,0.0000e+00,1.7362e+01,7.5100e-02,0.0000e+00,1.8612e+01,7.5100e-02,-5.0000e-01,1.9112e+01,7.5100e-02,-2.0000e+00,1.9112e+01,7.5100e-02,-2.0488e+00,1.9107e+01,7.5100e-02,-2.0957e+00,1.9093e+01,7.5100e-02,-2.1389e+00,1.9070e+01,7.5100e-02,-2.1768e+00,1.9039e+01,7.5100e-02,-2.2079e+00,1.9001e+01,7.5100e-02,-2.2310e+00,1.8958e+01,7.5100e-02,-2.2452e+00,1.8911e+01,7.5100e-02,-2.2500e+00,1.8862e+01,7.5100e-02,-2.2500e+00,1.8112e+01,7.5100e-02,-2.2548e+00,1.8063e+01,7.5100e-02,-2.2690e+00,1.8016e+01,7.5100e-02,-2.2921e+00,1.7973e+01,7.5100e-02,-2.3232e+00,1.7935e+01,7.5100e-02,-2.3611e+00,1.7904e+01,7.5100e-02,-2.4043e+00,1.7881e+01,7.5100e-02,-2.4512e+00,1.7867e+01,7.5100e-02,-2.5000e+00,1.7862e+01,7.5100e-02,-7.0000e+00,1.7862e+01,7.5100e-02,-7.0488e+00,1.7867e+01,7.5100e-02,-7.0957e+00,1.7881e+01,7.5100e-02,-7.1389e+00,1.7904e+01,7.5100e-02,-7.1768e+00,1.7935e+01,7.5100e-02,-7.2079e+00,1.7973e+01,7.5100e-02,-7.2310e+00,1.8016e+01,7.5100e-02,-7.2452e+00,1.8063e+01,7.5100e-02,-7.2500e+00,1.8112e+01,7.5100e-02,-7.2500e+00,1.8862e+01,7.5100e-02,-7.2548e+00,1.8911e+01,7.5100e-02,-7.2690e+00,1.8958e+01,7.5100e-02,-7.2921e+00,1.9001e+01,7.5100e-02,-7.3232e+00,1.9039e+01,7.5100e-02};
			return value;
		}
		private double[] getCoordinate_7_167_point_2()
		{
			double[] value = {-7.3611e+00,1.9070e+01,7.5100e-02,-7.4043e+00,1.9093e+01,7.5100e-02,-7.4512e+00,1.9107e+01,7.5100e-02,-7.5000e+00,1.9112e+01,7.5100e-02};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_180_index_1()
		{
			int[] value = {150,127,128,150,128,129,150,129,130,150,130,131,150,131,132,150,132,133,150,133,134,134,135,136,134,136,137,134,137,138,134,138,139,134,139,140,134,140,141,134,141,142,134,142,143,150,134,143,150,143,144,150,144,145,150,145,146,150,146,147,150,147,148,150,148,149,150,149,92,150,92,48,150,48,49,49,50,51,49,51,52,49,52,53,49,53,54,49,54,55,49,55,56,49,56,57,49,57,58,58,59,60,58,60,61,58,61,62,58,62,63,58,63,64,58,64,65,58,65,66,58,66,67,58,67,68,58,68,69,58,69,70,58,70,71,58,71,72,58,72,73,58,73,74,58,74,75,58,75,76,58,76,77,58,77,78,58,78,79,58,79,80,58,80,81,58,81,82,49,58,82,49,82,83,49,83,84,49,84,85,49,85,86,49,86,87,49,87,88,150,49,88,150,88,89,150,89,90,150,90,0,150,0,1,2,3,4,6,7,8,6,8,9,6,9,10,6,10,11,6,11,12,6,12,13,6,13,14,6,14,15,6,15,16,6,16,17,6,17,18,6,18,19,6,19,20,6,20,21,6,21,22,6,22,23,6,23,24,6,24,25,6,25,26,6,26,27,6,27,28,6,28,29,5,6,29,5,29,30,5,30,31,5,31,32,5,32,33,5,33,34,5,34,35,5,35,36,5,36,37,5,37,38,5,38,39,47,48,92,46,47,92,46,92,93,45,46,93,44,45,93,43,44,93,42,43,93,42,93,94,42,94,95,41,42,95,41,95,96,40,41,96,40,96,97,40,97,98,39,40,98,39,98,99,39,99,100,39,100,101,106,107,108,106,108,109,106,109,110,106,110,111,106,111,112,106,112,113,106,113,114,105,106,114,105,114,115,105,115,116,105,116,117,105,117,118,105,118,119,105,119,120,104,105,120,103,104,120,102,103,120,101,102,120,39,101,120,126,127,150,125,126,150,124,125,150,123,124,150,122,123,150,121,122,150,121,150,151,4,121,151,2,4,151,2,151,152,2,152,153,2,153,154,1,2,154,1,154,155,1,155,156,1,156,157,150,1,157};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_180_point_1()
		{
			double[] value = {-8.8406e+00,1.7112e+01,1.4191e+00,-8.8406e+00,1.7112e+01,4.1113e-01,-8.7161e+00,1.7112e+01,4.1113e-01,-8.7161e+00,1.7112e+01,6.6346e-01,-8.2500e+00,1.7112e+01,6.6346e-01,-8.2500e+00,1.7112e+01,7.8561e-01,-8.7161e+00,1.7112e+01,7.8561e-01,-8.7161e+00,1.7112e+01,1.4033e+00,-8.7159e+00,1.7112e+01,1.4145e+00,-8.7134e+00,1.7112e+01,1.4254e+00,-8.7089e+00,1.7112e+01,1.4356e+00,-8.7024e+00,1.7112e+01,1.4446e+00,-8.6941e+00,1.7112e+01,1.4522e+00,-8.6846e+00,1.7112e+01,1.4580e+00,-8.6741e+00,1.7112e+01,1.4618e+00,-8.6630e+00,1.7112e+01,1.4633e+00,-8.6519e+00,1.7112e+01,1.4627e+00,-8.6411e+00,1.7112e+01,1.4598e+00,-8.6311e+00,1.7112e+01,1.4548e+00,-8.6223e+00,1.7112e+01,1.4479e+00,-8.6151e+00,1.7112e+01,1.4394e+00,-8.6097e+00,1.7112e+01,1.4296e+00,-8.6064e+00,1.7112e+01,1.4190e+00,-8.6052e+00,1.7112e+01,1.4079e+00,-8.6052e+00,1.7112e+01,1.0288e+00,-8.5960e+00,1.7112e+01,9.9381e-01,-8.5798e+00,1.7112e+01,9.6135e-01,-8.5576e+00,1.7112e+01,9.3278e-01,-8.5300e+00,1.7112e+01,9.0925e-01,-8.4983e+00,1.7112e+01,8.9173e-01,-8.4637e+00,1.7112e+01,8.8093e-01,-8.4276e+00,1.7112e+01,8.7728e-01,-8.3916e+00,1.7112e+01,8.8093e-01,-8.3570e+00,1.7112e+01,8.9173e-01,-8.3252e+00,1.7112e+01,9.0925e-01,-8.2977e+00,1.7112e+01,9.3278e-01,-8.2754e+00,1.7112e+01,9.6135e-01,-8.2593e+00,1.7112e+01,9.9381e-01,-8.2500e+00,1.7112e+01,1.0288e+00,-8.2500e+00,1.7112e+01,1.6273e+00,-8.2532e+00,1.7112e+01,1.6595e+00,-8.2626e+00,1.7112e+01,1.6905e+00,-8.2778e+00,1.7112e+01,1.7191e+00,-8.2984e+00,1.7112e+01,1.7441e+00,-8.3234e+00,1.7112e+01,1.7646e+00,-8.3520e+00,1.7112e+01,1.7799e+00,-8.3830e+00,1.7112e+01,1.7893e+00,-8.4152e+00,1.7112e+01,1.7925e+00,-8.8406e+00,1.7112e+01,1.7925e+00,-8.8406e+00,1.7112e+01,1.6692e+00,-8.4152e+00,1.7112e+01,1.6692e+00,-8.4068e+00,1.7112e+01,1.6683e+00,-8.3987e+00,1.7112e+01,1.6659e+00,-8.3913e+00,1.7112e+01,1.6619e+00,-8.3848e+00,1.7112e+01,1.6566e+00,-8.3794e+00,1.7112e+01,1.6500e+00,-8.3754e+00,1.7112e+01,1.6426e+00,-8.3730e+00,1.7112e+01,1.6345e+00,-8.3722e+00,1.7112e+01,1.6261e+00,-8.3722e+00,1.7112e+01,1.0470e+00,-8.3746e+00,1.7112e+01,1.0364e+00,-8.3790e+00,1.7112e+01,1.0264e+00,-8.3853e+00,1.7112e+01,1.0176e+00,-8.3932e+00,1.7112e+01,1.0101e+00,-8.4024e+00,1.7112e+01,1.0043e+00,-8.4125e+00,1.7112e+01,1.0003e+00,-8.4232e+00,1.7112e+01,9.9844e-01,-8.4341e+00,1.7112e+01,9.9866e-01,-8.4447e+00,1.7112e+01,1.0010e+00,-8.4546e+00,1.7112e+01,1.0053e+00,-8.4636e+00,1.7112e+01,1.0115e+00,-8.4711e+00,1.7112e+01,1.0193e+00,-8.4770e+00,1.7112e+01,1.0284e+00,-8.4811e+00,1.7112e+01,1.0385e+00,-8.4831e+00,1.7112e+01,1.0492e+00,-8.4831e+00,1.7112e+01,1.4056e+00,-8.4839e+00,1.7112e+01,1.4415e+00,-8.4920e+00,1.7112e+01,1.4765e+00,-8.5069e+00,1.7112e+01,1.5092e+00,-8.5280e+00,1.7112e+01,1.5383e+00,-8.5545e+00,1.7112e+01,1.5626e+00,-8.5853e+00,1.7112e+01,1.5811e+00,-8.6192e+00,1.7112e+01,1.5930e+00,-8.6548e+00,1.7112e+01,1.5980e+00,-8.6906e+00,1.7112e+01,1.5958e+00,-8.7253e+00,1.7112e+01,1.5864e+00,-8.7574e+00,1.7112e+01,1.5703e+00,-8.7857e+00,1.7112e+01,1.5481e+00,-8.8090e+00,1.7112e+01,1.5207e+00,-8.8263e+00,1.7112e+01,1.4892e+00,-8.8369e+00,1.7112e+01,1.4549e+00,-8.8406e+00,1.7112e+01,1.4191e+00,-8.8406e+00,1.7112e+01,1.8717e+00,-8.3885e+00,1.7112e+01,1.8717e+00,-8.3624e+00,1.7112e+01,1.8741e+00,-8.3372e+00,1.7112e+01,1.8815e+00,-8.3138e+00,1.7112e+01,1.8935e+00,-8.2932e+00,1.7112e+01,1.9097e+00,-8.2759e+00,1.7112e+01,1.9294e+00,-8.2627e+00,1.7112e+01,1.9521e+00};
			return value;
		}
		private double[] getCoordinate_7_180_point_2()
		{
			double[] value = {-8.2541e+00,1.7112e+01,1.9769e+00,-8.2502e+00,1.7112e+01,2.0028e+00,-8.2513e+00,1.7112e+01,2.0290e+00,-8.2573e+00,1.7112e+01,2.0546e+00,-8.2681e+00,1.7112e+01,2.0785e+00,-8.2831e+00,1.7112e+01,2.1000e+00,-8.3019e+00,1.7112e+01,2.1182e+00,-8.7070e+00,1.7112e+01,2.4910e+00,-8.7099e+00,1.7112e+01,2.4941e+00,-8.7120e+00,1.7112e+01,2.4978e+00,-8.7134e+00,1.7112e+01,2.5018e+00,-8.7139e+00,1.7112e+01,2.5060e+00,-8.7136e+00,1.7112e+01,2.5102e+00,-8.7125e+00,1.7112e+01,2.5143e+00,-8.7105e+00,1.7112e+01,2.5181e+00,-8.7079e+00,1.7112e+01,2.5214e+00,-8.7046e+00,1.7112e+01,2.5241e+00,-8.7009e+00,1.7112e+01,2.5262e+00,-8.6969e+00,1.7112e+01,2.5274e+00,-8.6927e+00,1.7112e+01,2.5279e+00,-8.2500e+00,1.7112e+01,2.5279e+00,-8.2500e+00,1.7112e+01,2.6500e+00,-8.7288e+00,1.7112e+01,2.6500e+00,-8.7543e+00,1.7112e+01,2.6475e+00,-8.7787e+00,1.7112e+01,2.6399e+00,-8.8012e+00,1.7112e+01,2.6277e+00,-8.8208e+00,1.7112e+01,2.6112e+00,-8.8367e+00,1.7112e+01,2.5912e+00,-8.8484e+00,1.7112e+01,2.5684e+00,-8.8553e+00,1.7112e+01,2.5438e+00,-8.8572e+00,1.7112e+01,2.5183e+00,-8.8540e+00,1.7112e+01,2.4929e+00,-8.8458e+00,1.7112e+01,2.4686e+00,-8.8329e+00,1.7112e+01,2.4465e+00,-8.8160e+00,1.7112e+01,2.4274e+00,-8.3790e+00,1.7112e+01,2.0232e+00,-8.3769e+00,1.7112e+01,2.0209e+00,-8.3753e+00,1.7112e+01,2.0182e+00,-8.3742e+00,1.7112e+01,2.0153e+00,-8.3738e+00,1.7112e+01,2.0122e+00,-8.3739e+00,1.7112e+01,2.0091e+00,-8.3745e+00,1.7112e+01,2.0061e+00,-8.3758e+00,1.7112e+01,2.0033e+00,-8.3776e+00,1.7112e+01,2.0007e+00,-8.3798e+00,1.7112e+01,1.9985e+00,-8.3824e+00,1.7112e+01,1.9968e+00,-8.3853e+00,1.7112e+01,1.9956e+00,-8.3883e+00,1.7112e+01,1.9950e+00,-8.3914e+00,1.7112e+01,1.9950e+00,-8.8406e+00,1.7112e+01,1.9950e+00,-9.1500e+00,1.7112e+01,2.7500e+00,-3.5000e-01,1.7112e+01,2.7500e+00,-3.5000e-01,1.7112e+01,2.2550e+00,0.0000e+00,1.7112e+01,2.2550e+00,0.0000e+00,1.7112e+01,3.2510e-01,-9.5000e+00,1.7112e+01,3.2510e-01,-9.5000e+00,1.7112e+01,2.2550e+00,-9.1500e+00,1.7112e+01,2.2550e+00};
			return value;
		}



























































		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #75, 543 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_75_index()
		{
			MFInt32 IndexedTriangleSet_6_75_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_75_index_1()));
			return IndexedTriangleSet_6_75_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #75, 525 total numbers made up of 175 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_75_point()
		{
			MFVec3f Coordinate_7_75_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_75_point_1()))
				.append(new MFVec3f(getCoordinate_7_75_point_2()));
			return Coordinate_7_75_point;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #81, 549 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_81_index()
		{
			MFInt32 IndexedTriangleSet_6_81_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_81_index_1()));
			return IndexedTriangleSet_6_81_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #81, 525 total numbers made up of 175 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_81_point()
		{
			MFVec3f Coordinate_7_81_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_81_point_1()))
				.append(new MFVec3f(getCoordinate_7_81_point_2()));
			return Coordinate_7_81_point;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #87, 822 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_87_index()
		{
			MFInt32 IndexedTriangleSet_6_87_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_87_index_1()));
			return IndexedTriangleSet_6_87_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #87, 798 total numbers made up of 266 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_87_point()
		{
			MFVec3f Coordinate_7_87_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_87_point_1()))
				.append(new MFVec3f(getCoordinate_7_87_point_2()))
				.append(new MFVec3f(getCoordinate_7_87_point_3()));
			return Coordinate_7_87_point;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #93, 840 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_93_index()
		{
			MFInt32 IndexedTriangleSet_6_93_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_93_index_1()));
			return IndexedTriangleSet_6_93_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #93, 798 total numbers made up of 266 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_93_point()
		{
			MFVec3f Coordinate_7_93_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_93_point_1()))
				.append(new MFVec3f(getCoordinate_7_93_point_2()))
				.append(new MFVec3f(getCoordinate_7_93_point_3()));
			return Coordinate_7_93_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #155, 312 total numbers made up of 104 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_155_point()
		{
			MFVec3f Coordinate_7_155_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_155_point_1()))
				.append(new MFVec3f(getCoordinate_7_155_point_2()));
			return Coordinate_7_155_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #167, 312 total numbers made up of 104 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_167_point()
		{
			MFVec3f Coordinate_7_167_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_167_point_1()))
				.append(new MFVec3f(getCoordinate_7_167_point_2()));
			return Coordinate_7_167_point;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #180, 468 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_180_index()
		{
			MFInt32 IndexedTriangleSet_6_180_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_180_index_1()));
			return IndexedTriangleSet_6_180_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #180, 474 total numbers made up of 158 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_180_point()
		{
			MFVec3f Coordinate_7_180_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_180_point_1()))
				.append(new MFVec3f(getCoordinate_7_180_point_2()));
			return Coordinate_7_180_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #207, 264 total numbers made up of 88 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_207_point()
		{
			MFVec3f Coordinate_7_207_point = new MFVec3f(new double[] {-8.7059e+00,9.6452e-01,7.5100e-02,-8.6636e+00,9.5125e-01,7.5100e-02,-8.6249e+00,9.2975e-01,7.5100e-02,-8.5913e+00,9.0088e-01,7.5100e-02,-8.5641e+00,8.6584e-01,7.5100e-02,-8.5446e+00,8.2606e-01,7.5100e-02,-8.5335e+00,7.8316e-01,7.5100e-02,-8.5313e+00,7.3891e-01,7.5100e-02,-8.5380e+00,6.9511e-01,7.5100e-02,-8.5534e+00,6.5355e-01,7.5100e-02,-8.5768e+00,6.1595e-01,7.5100e-02,-8.6073e+00,5.8383e-01,7.5100e-02,-8.6437e+00,5.5852e-01,7.5100e-02,-8.6844e+00,5.4104e-01,7.5100e-02,-8.7278e+00,5.3212e-01,7.5100e-02,-8.7722e+00,5.3212e-01,7.5100e-02,-8.8156e+00,5.4104e-01,7.5100e-02,-8.8563e+00,5.5852e-01,7.5100e-02,-8.8927e+00,5.8383e-01,7.5100e-02,-8.9232e+00,6.1595e-01,7.5100e-02,-8.9466e+00,6.5355e-01,7.5100e-02,-8.9620e+00,6.9511e-01,7.5100e-02,-8.9687e+00,7.3891e-01,7.5100e-02,-8.9665e+00,7.8316e-01,7.5100e-02,-8.9554e+00,8.2606e-01,7.5100e-02,-8.9359e+00,8.6584e-01,7.5100e-02,-8.9087e+00,9.0088e-01,7.5100e-02,-8.8751e+00,9.2975e-01,7.5100e-02,-8.8364e+00,9.5125e-01,7.5100e-02,-8.7941e+00,9.6452e-01,7.5100e-02,-8.7500e+00,9.6900e-01,7.5100e-02,-7.0592e-01,9.6452e-01,7.5100e-02,-6.6364e-01,9.5125e-01,7.5100e-02,-6.2489e-01,9.2975e-01,7.5100e-02,-5.9127e-01,9.0088e-01,7.5100e-02,-5.6415e-01,8.6584e-01,7.5100e-02,-5.4463e-01,8.2606e-01,7.5100e-02,-5.3353e-01,7.8316e-01,7.5100e-02,-5.3128e-01,7.3891e-01,7.5100e-02,-5.3799e-01,6.9511e-01,7.5100e-02,-5.5338e-01,6.5355e-01,7.5100e-02,-5.7682e-01,6.1595e-01,7.5100e-02,-6.0735e-01,5.8383e-01,7.5100e-02,-6.4372e-01,5.5852e-01,7.5100e-02,-6.8444e-01,5.4104e-01,7.5100e-02,-7.2784e-01,5.3212e-01,7.5100e-02,-7.7216e-01,5.3212e-01,7.5100e-02,-8.1556e-01,5.4104e-01,7.5100e-02,-8.5628e-01,5.5852e-01,7.5100e-02,-8.9265e-01,5.8383e-01,7.5100e-02,-9.2318e-01,6.1595e-01,7.5100e-02,-9.4662e-01,6.5355e-01,7.5100e-02,-9.6201e-01,6.9511e-01,7.5100e-02,-9.6872e-01,7.3891e-01,7.5100e-02,-9.6647e-01,7.8316e-01,7.5100e-02,-9.5537e-01,8.2606e-01,7.5100e-02,-9.3585e-01,8.6584e-01,7.5100e-02,-9.0873e-01,9.0088e-01,7.5100e-02,-8.7511e-01,9.2975e-01,7.5100e-02,-8.3636e-01,9.5125e-01,7.5100e-02,-7.9408e-01,9.6452e-01,7.5100e-02,-7.5000e-01,9.6900e-01,7.5100e-02,-5.0000e-01,0.0000e+00,7.5100e-02,0.0000e+00,5.0000e-01,7.5100e-02,0.0000e+00,1.7118e+00,7.5100e-02,-9.5000e+00,1.7118e+00,7.5100e-02,-9.5000e+00,5.0000e-01,7.5100e-02,-9.0000e+00,0.0000e+00,7.5100e-02,-7.2500e+00,0.0000e+00,7.5100e-02,-7.2500e+00,1.0000e+00,7.5100e-02,-7.2452e+00,1.0488e+00,7.5100e-02,-7.2310e+00,1.0957e+00,7.5100e-02,-7.2079e+00,1.1389e+00,7.5100e-02,-7.1768e+00,1.1768e+00,7.5100e-02,-7.1389e+00,1.2079e+00,7.5100e-02,-7.0957e+00,1.2310e+00,7.5100e-02,-7.0488e+00,1.2452e+00,7.5100e-02,-7.0000e+00,1.2500e+00,7.5100e-02,-2.5000e+00,1.2500e+00,7.5100e-02,-2.4512e+00,1.2452e+00,7.5100e-02,-2.4043e+00,1.2310e+00,7.5100e-02,-2.3611e+00,1.2079e+00,7.5100e-02,-2.3232e+00,1.1768e+00,7.5100e-02,-2.2921e+00,1.1389e+00,7.5100e-02,-2.2690e+00,1.0957e+00,7.5100e-02,-2.2548e+00,1.0488e+00,7.5100e-02,-2.2500e+00,1.0000e+00,7.5100e-02,-2.2500e+00,0.0000e+00,7.5100e-02});
			return Coordinate_7_207_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #219, 264 total numbers made up of 88 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_219_point()
		{
			MFVec3f Coordinate_7_219_point = new MFVec3f(new double[] {-8.9645e+00,7.0592e-01,0.0000e+00,-8.9513e+00,6.6364e-01,0.0000e+00,-8.9297e+00,6.2489e-01,0.0000e+00,-8.9009e+00,5.9127e-01,0.0000e+00,-8.8658e+00,5.6415e-01,0.0000e+00,-8.8261e+00,5.4463e-01,0.0000e+00,-8.7832e+00,5.3353e-01,0.0000e+00,-8.7389e+00,5.3128e-01,0.0000e+00,-8.6951e+00,5.3799e-01,0.0000e+00,-8.6536e+00,5.5338e-01,0.0000e+00,-8.6159e+00,5.7682e-01,0.0000e+00,-8.5838e+00,6.0735e-01,0.0000e+00,-8.5585e+00,6.4372e-01,0.0000e+00,-8.5410e+00,6.8444e-01,0.0000e+00,-8.5321e+00,7.2784e-01,0.0000e+00,-8.5321e+00,7.7216e-01,0.0000e+00,-8.5410e+00,8.1556e-01,0.0000e+00,-8.5585e+00,8.5628e-01,0.0000e+00,-8.5838e+00,8.9265e-01,0.0000e+00,-8.6159e+00,9.2318e-01,0.0000e+00,-8.6536e+00,9.4662e-01,0.0000e+00,-8.6951e+00,9.6201e-01,0.0000e+00,-8.7389e+00,9.6872e-01,0.0000e+00,-8.7832e+00,9.6647e-01,0.0000e+00,-8.8261e+00,9.5537e-01,0.0000e+00,-8.8658e+00,9.3585e-01,0.0000e+00,-8.9009e+00,9.0873e-01,0.0000e+00,-8.9297e+00,8.7511e-01,0.0000e+00,-8.9513e+00,8.3636e-01,0.0000e+00,-8.9645e+00,7.9408e-01,0.0000e+00,-8.9690e+00,7.5000e-01,0.0000e+00,-9.6452e-01,7.0592e-01,0.0000e+00,-9.5125e-01,6.6364e-01,0.0000e+00,-9.2975e-01,6.2489e-01,0.0000e+00,-9.0088e-01,5.9127e-01,0.0000e+00,-8.6584e-01,5.6415e-01,0.0000e+00,-8.2606e-01,5.4463e-01,0.0000e+00,-7.8316e-01,5.3353e-01,0.0000e+00,-7.3891e-01,5.3128e-01,0.0000e+00,-6.9511e-01,5.3799e-01,0.0000e+00,-6.5355e-01,5.5338e-01,0.0000e+00,-6.1595e-01,5.7682e-01,0.0000e+00,-5.8383e-01,6.0735e-01,0.0000e+00,-5.5852e-01,6.4372e-01,0.0000e+00,-5.4104e-01,6.8444e-01,0.0000e+00,-5.3212e-01,7.2784e-01,0.0000e+00,-5.3212e-01,7.7216e-01,0.0000e+00,-5.4104e-01,8.1556e-01,0.0000e+00,-5.5852e-01,8.5628e-01,0.0000e+00,-5.8383e-01,8.9265e-01,0.0000e+00,-6.1595e-01,9.2318e-01,0.0000e+00,-6.5355e-01,9.4662e-01,0.0000e+00,-6.9511e-01,9.6201e-01,0.0000e+00,-7.3891e-01,9.6872e-01,0.0000e+00,-7.8316e-01,9.6647e-01,0.0000e+00,-8.2606e-01,9.5537e-01,0.0000e+00,-8.6584e-01,9.3585e-01,0.0000e+00,-9.0088e-01,9.0873e-01,0.0000e+00,-9.2975e-01,8.7511e-01,0.0000e+00,-9.5125e-01,8.3636e-01,0.0000e+00,-9.6452e-01,7.9408e-01,0.0000e+00,-9.6900e-01,7.5000e-01,0.0000e+00,0.0000e+00,5.0000e-01,0.0000e+00,-5.0000e-01,-1.0244e-16,0.0000e+00,-2.2500e+00,-1.0244e-16,0.0000e+00,-2.2500e+00,1.0000e+00,0.0000e+00,-2.2548e+00,1.0488e+00,0.0000e+00,-2.2690e+00,1.0957e+00,0.0000e+00,-2.2921e+00,1.1389e+00,0.0000e+00,-2.3232e+00,1.1768e+00,0.0000e+00,-2.3611e+00,1.2079e+00,0.0000e+00,-2.4043e+00,1.2310e+00,0.0000e+00,-2.4512e+00,1.2452e+00,0.0000e+00,-2.5000e+00,1.2500e+00,0.0000e+00,-7.0000e+00,1.2500e+00,0.0000e+00,-7.0488e+00,1.2452e+00,0.0000e+00,-7.0957e+00,1.2310e+00,0.0000e+00,-7.1389e+00,1.2079e+00,0.0000e+00,-7.1768e+00,1.1768e+00,0.0000e+00,-7.2079e+00,1.1389e+00,0.0000e+00,-7.2310e+00,1.0957e+00,0.0000e+00,-7.2452e+00,1.0488e+00,0.0000e+00,-7.2500e+00,1.0000e+00,0.0000e+00,-7.2500e+00,-1.0244e-16,0.0000e+00,-9.0000e+00,-1.0244e-16,0.0000e+00,-9.5000e+00,5.0000e-01,0.0000e+00,-9.5000e+00,1.7118e+00,0.0000e+00,0.0000e+00,1.7118e+00,0.0000e+00});
			return Coordinate_7_219_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #411, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_411_point()
		{
			MFVec3f Coordinate_7_411_point = new MFVec3f(new double[] {-7.5000e-01,5.3100e-01,0.0000e+00,-7.5000e-01,5.3100e-01,7.5100e-02,-7.7859e-01,5.3287e-01,0.0000e+00,-7.7859e-01,5.3287e-01,7.5100e-02,-8.0668e-01,5.3846e-01,0.0000e+00,-8.0668e-01,5.3846e-01,7.5100e-02,-8.3381e-01,5.4767e-01,0.0000e+00,-8.3381e-01,5.4767e-01,7.5100e-02,-8.5950e-01,5.6034e-01,0.0000e+00,-8.5950e-01,5.6034e-01,7.5100e-02,-8.8332e-01,5.7626e-01,0.0000e+00,-8.8332e-01,5.7626e-01,7.5100e-02,-9.0486e-01,5.9514e-01,0.0000e+00,-9.0486e-01,5.9514e-01,7.5100e-02,-9.2374e-01,6.1668e-01,0.0000e+00,-9.2374e-01,6.1668e-01,7.5100e-02,-9.3966e-01,6.4050e-01,0.0000e+00,-9.3966e-01,6.4050e-01,7.5100e-02,-9.5233e-01,6.6619e-01,0.0000e+00,-9.5233e-01,6.6619e-01,7.5100e-02,-9.6154e-01,6.9332e-01,0.0000e+00,-9.6154e-01,6.9332e-01,7.5100e-02,-9.6713e-01,7.2141e-01,0.0000e+00,-9.6713e-01,7.2141e-01,7.5100e-02,-9.6900e-01,7.5000e-01,0.0000e+00,-9.6900e-01,7.5000e-01,7.5100e-02,-9.6713e-01,7.7859e-01,0.0000e+00,-9.6713e-01,7.7859e-01,7.5100e-02,-9.6154e-01,8.0668e-01,0.0000e+00,-9.6154e-01,8.0668e-01,7.5100e-02,-9.5233e-01,8.3381e-01,0.0000e+00,-9.5233e-01,8.3381e-01,7.5100e-02,-9.3966e-01,8.5950e-01,0.0000e+00,-9.3966e-01,8.5950e-01,7.5100e-02,-9.2374e-01,8.8332e-01,0.0000e+00,-9.2374e-01,8.8332e-01,7.5100e-02,-9.0486e-01,9.0486e-01,0.0000e+00,-9.0486e-01,9.0486e-01,7.5100e-02,-8.8332e-01,9.2374e-01,0.0000e+00,-8.8332e-01,9.2374e-01,7.5100e-02,-8.5950e-01,9.3966e-01,0.0000e+00,-8.5950e-01,9.3966e-01,7.5100e-02,-8.3381e-01,9.5233e-01,0.0000e+00,-8.3381e-01,9.5233e-01,7.5100e-02,-8.0668e-01,9.6154e-01,0.0000e+00,-8.0668e-01,9.6154e-01,7.5100e-02,-7.7859e-01,9.6713e-01,0.0000e+00,-7.7859e-01,9.6713e-01,7.5100e-02,-7.5000e-01,9.6900e-01,0.0000e+00,-7.5000e-01,9.6900e-01,7.5100e-02,-7.2141e-01,9.6713e-01,0.0000e+00,-7.2141e-01,9.6713e-01,7.5100e-02,-6.9332e-01,9.6154e-01,0.0000e+00,-6.9332e-01,9.6154e-01,7.5100e-02,-6.6619e-01,9.5233e-01,0.0000e+00,-6.6619e-01,9.5233e-01,7.5100e-02,-6.4050e-01,9.3966e-01,0.0000e+00,-6.4050e-01,9.3966e-01,7.5100e-02,-6.1668e-01,9.2374e-01,0.0000e+00,-6.1668e-01,9.2374e-01,7.5100e-02,-5.9514e-01,9.0486e-01,0.0000e+00,-5.9514e-01,9.0486e-01,7.5100e-02,-5.7626e-01,8.8332e-01,0.0000e+00,-5.7626e-01,8.8332e-01,7.5100e-02,-5.6034e-01,8.5950e-01,0.0000e+00,-5.6034e-01,8.5950e-01,7.5100e-02,-5.4767e-01,8.3381e-01,0.0000e+00,-5.4767e-01,8.3381e-01,7.5100e-02,-5.3846e-01,8.0668e-01,0.0000e+00,-5.3846e-01,8.0668e-01,7.5100e-02,-5.3287e-01,7.7859e-01,0.0000e+00,-5.3287e-01,7.7859e-01,7.5100e-02,-5.3100e-01,7.5000e-01,0.0000e+00,-5.3100e-01,7.5000e-01,7.5100e-02,-5.3287e-01,7.2141e-01,0.0000e+00,-5.3287e-01,7.2141e-01,7.5100e-02,-5.3846e-01,6.9332e-01,0.0000e+00,-5.3846e-01,6.9332e-01,7.5100e-02,-5.4767e-01,6.6619e-01,0.0000e+00,-5.4767e-01,6.6619e-01,7.5100e-02,-5.6034e-01,6.4050e-01,0.0000e+00,-5.6034e-01,6.4050e-01,7.5100e-02,-5.7626e-01,6.1668e-01,0.0000e+00,-5.7626e-01,6.1668e-01,7.5100e-02,-5.9514e-01,5.9514e-01,0.0000e+00,-5.9514e-01,5.9514e-01,7.5100e-02,-6.1668e-01,5.7626e-01,0.0000e+00,-6.1668e-01,5.7626e-01,7.5100e-02,-6.4050e-01,5.6034e-01,0.0000e+00,-6.4050e-01,5.6034e-01,7.5100e-02,-6.6619e-01,5.4767e-01,0.0000e+00,-6.6619e-01,5.4767e-01,7.5100e-02,-6.9332e-01,5.3846e-01,0.0000e+00,-6.9332e-01,5.3846e-01,7.5100e-02,-7.2141e-01,5.3287e-01,0.0000e+00,-7.2141e-01,5.3287e-01,7.5100e-02});
			return Coordinate_7_411_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #412, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_412_vector()
		{
			MFVec3f Normal_7_412_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,2.9923e-17,-0.0000e+00,1.0000e+00,2.9923e-17,1.3053e-01,9.9144e-01,2.9667e-17,1.3053e-01,9.9144e-01,2.9667e-17,2.5882e-01,9.6593e-01,2.8903e-17,2.5882e-01,9.6593e-01,2.8903e-17,3.8268e-01,9.2388e-01,2.7645e-17,3.8268e-01,9.2388e-01,2.7645e-17,5.0000e-01,8.6603e-01,2.5914e-17,5.0000e-01,8.6603e-01,2.5914e-17,6.0876e-01,7.9335e-01,2.3739e-17,6.0876e-01,7.9335e-01,2.3739e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.9335e-01,6.0876e-01,1.8216e-17,7.9335e-01,6.0876e-01,1.8216e-17,8.6603e-01,5.0000e-01,1.4961e-17,8.6603e-01,5.0000e-01,1.4961e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.6593e-01,2.5882e-01,7.7446e-18,9.6593e-01,2.5882e-01,7.7446e-18,9.9144e-01,1.3053e-01,3.9057e-18,9.9144e-01,1.3053e-01,3.9057e-18,1.0000e+00,6.1232e-17,1.8323e-33,1.0000e+00,6.1232e-17,1.8323e-33,9.9144e-01,-1.3053e-01,-3.9057e-18,9.9144e-01,-1.3053e-01,-3.9057e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.2388e-01,-3.8268e-01,-1.1451e-17,9.2388e-01,-3.8268e-01,-1.1451e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-1.0000e+00,-1.8370e-16,-5.4968e-33,-1.0000e+00,-1.8370e-16,-5.4968e-33,-9.9144e-01,1.3053e-01,3.9057e-18,-9.9144e-01,1.3053e-01,3.9057e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.2388e-01,3.8268e-01,1.1451e-17,-9.2388e-01,3.8268e-01,1.1451e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-1.3053e-01,9.9144e-01,2.9667e-17,-1.3053e-01,9.9144e-01,2.9667e-17});
			return Normal_7_412_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #418, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_418_point()
		{
			MFVec3f Coordinate_7_418_point = new MFVec3f(new double[] {-8.7500e+00,5.3100e-01,0.0000e+00,-8.7500e+00,5.3100e-01,7.5100e-02,-8.7786e+00,5.3287e-01,0.0000e+00,-8.7786e+00,5.3287e-01,7.5100e-02,-8.8067e+00,5.3846e-01,0.0000e+00,-8.8067e+00,5.3846e-01,7.5100e-02,-8.8338e+00,5.4767e-01,0.0000e+00,-8.8338e+00,5.4767e-01,7.5100e-02,-8.8595e+00,5.6034e-01,0.0000e+00,-8.8595e+00,5.6034e-01,7.5100e-02,-8.8833e+00,5.7626e-01,0.0000e+00,-8.8833e+00,5.7626e-01,7.5100e-02,-8.9049e+00,5.9514e-01,0.0000e+00,-8.9049e+00,5.9514e-01,7.5100e-02,-8.9237e+00,6.1668e-01,0.0000e+00,-8.9237e+00,6.1668e-01,7.5100e-02,-8.9397e+00,6.4050e-01,0.0000e+00,-8.9397e+00,6.4050e-01,7.5100e-02,-8.9523e+00,6.6619e-01,0.0000e+00,-8.9523e+00,6.6619e-01,7.5100e-02,-8.9615e+00,6.9332e-01,0.0000e+00,-8.9615e+00,6.9332e-01,7.5100e-02,-8.9671e+00,7.2141e-01,0.0000e+00,-8.9671e+00,7.2141e-01,7.5100e-02,-8.9690e+00,7.5000e-01,0.0000e+00,-8.9690e+00,7.5000e-01,7.5100e-02,-8.9671e+00,7.7859e-01,0.0000e+00,-8.9671e+00,7.7859e-01,7.5100e-02,-8.9615e+00,8.0668e-01,0.0000e+00,-8.9615e+00,8.0668e-01,7.5100e-02,-8.9523e+00,8.3381e-01,0.0000e+00,-8.9523e+00,8.3381e-01,7.5100e-02,-8.9397e+00,8.5950e-01,0.0000e+00,-8.9397e+00,8.5950e-01,7.5100e-02,-8.9237e+00,8.8332e-01,0.0000e+00,-8.9237e+00,8.8332e-01,7.5100e-02,-8.9049e+00,9.0486e-01,0.0000e+00,-8.9049e+00,9.0486e-01,7.5100e-02,-8.8833e+00,9.2374e-01,0.0000e+00,-8.8833e+00,9.2374e-01,7.5100e-02,-8.8595e+00,9.3966e-01,0.0000e+00,-8.8595e+00,9.3966e-01,7.5100e-02,-8.8338e+00,9.5233e-01,0.0000e+00,-8.8338e+00,9.5233e-01,7.5100e-02,-8.8067e+00,9.6154e-01,0.0000e+00,-8.8067e+00,9.6154e-01,7.5100e-02,-8.7786e+00,9.6713e-01,0.0000e+00,-8.7786e+00,9.6713e-01,7.5100e-02,-8.7500e+00,9.6900e-01,0.0000e+00,-8.7500e+00,9.6900e-01,7.5100e-02,-8.7214e+00,9.6713e-01,0.0000e+00,-8.7214e+00,9.6713e-01,7.5100e-02,-8.6933e+00,9.6154e-01,0.0000e+00,-8.6933e+00,9.6154e-01,7.5100e-02,-8.6662e+00,9.5233e-01,0.0000e+00,-8.6662e+00,9.5233e-01,7.5100e-02,-8.6405e+00,9.3966e-01,0.0000e+00,-8.6405e+00,9.3966e-01,7.5100e-02,-8.6167e+00,9.2374e-01,0.0000e+00,-8.6167e+00,9.2374e-01,7.5100e-02,-8.5951e+00,9.0486e-01,0.0000e+00,-8.5951e+00,9.0486e-01,7.5100e-02,-8.5763e+00,8.8332e-01,0.0000e+00,-8.5763e+00,8.8332e-01,7.5100e-02,-8.5603e+00,8.5950e-01,0.0000e+00,-8.5603e+00,8.5950e-01,7.5100e-02,-8.5477e+00,8.3381e-01,0.0000e+00,-8.5477e+00,8.3381e-01,7.5100e-02,-8.5385e+00,8.0668e-01,0.0000e+00,-8.5385e+00,8.0668e-01,7.5100e-02,-8.5329e+00,7.7859e-01,0.0000e+00,-8.5329e+00,7.7859e-01,7.5100e-02,-8.5310e+00,7.5000e-01,0.0000e+00,-8.5310e+00,7.5000e-01,7.5100e-02,-8.5329e+00,7.2141e-01,0.0000e+00,-8.5329e+00,7.2141e-01,7.5100e-02,-8.5385e+00,6.9332e-01,0.0000e+00,-8.5385e+00,6.9332e-01,7.5100e-02,-8.5477e+00,6.6619e-01,0.0000e+00,-8.5477e+00,6.6619e-01,7.5100e-02,-8.5603e+00,6.4050e-01,0.0000e+00,-8.5603e+00,6.4050e-01,7.5100e-02,-8.5763e+00,6.1668e-01,0.0000e+00,-8.5763e+00,6.1668e-01,7.5100e-02,-8.5951e+00,5.9514e-01,0.0000e+00,-8.5951e+00,5.9514e-01,7.5100e-02,-8.6167e+00,5.7626e-01,0.0000e+00,-8.6167e+00,5.7626e-01,7.5100e-02,-8.6405e+00,5.6034e-01,0.0000e+00,-8.6405e+00,5.6034e-01,7.5100e-02,-8.6662e+00,5.4767e-01,0.0000e+00,-8.6662e+00,5.4767e-01,7.5100e-02,-8.6933e+00,5.3846e-01,0.0000e+00,-8.6933e+00,5.3846e-01,7.5100e-02,-8.7214e+00,5.3287e-01,0.0000e+00,-8.7214e+00,5.3287e-01,7.5100e-02});
			return Coordinate_7_418_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #419, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_419_vector()
		{
			MFVec3f Normal_7_419_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,2.9923e-17,-0.0000e+00,1.0000e+00,2.9923e-17,1.3053e-01,9.9144e-01,2.9667e-17,1.3053e-01,9.9144e-01,2.9667e-17,2.5882e-01,9.6593e-01,2.8903e-17,2.5882e-01,9.6593e-01,2.8903e-17,3.8268e-01,9.2388e-01,2.7645e-17,3.8268e-01,9.2388e-01,2.7645e-17,5.0000e-01,8.6603e-01,2.5914e-17,5.0000e-01,8.6603e-01,2.5914e-17,6.0876e-01,7.9335e-01,2.3739e-17,6.0876e-01,7.9335e-01,2.3739e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.9335e-01,6.0876e-01,1.8216e-17,7.9335e-01,6.0876e-01,1.8216e-17,8.6603e-01,5.0000e-01,1.4961e-17,8.6603e-01,5.0000e-01,1.4961e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.6593e-01,2.5882e-01,7.7446e-18,9.6593e-01,2.5882e-01,7.7446e-18,9.9144e-01,1.3053e-01,3.9057e-18,9.9144e-01,1.3053e-01,3.9057e-18,1.0000e+00,6.1232e-17,1.8323e-33,1.0000e+00,6.1232e-17,1.8323e-33,9.9144e-01,-1.3053e-01,-3.9057e-18,9.9144e-01,-1.3053e-01,-3.9057e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.2388e-01,-3.8268e-01,-1.1451e-17,9.2388e-01,-3.8268e-01,-1.1451e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-1.0000e+00,-1.8370e-16,-5.4968e-33,-1.0000e+00,-1.8370e-16,-5.4968e-33,-9.9144e-01,1.3053e-01,3.9057e-18,-9.9144e-01,1.3053e-01,3.9057e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.2388e-01,3.8268e-01,1.1451e-17,-9.2388e-01,3.8268e-01,1.1451e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-1.3053e-01,9.9144e-01,2.9667e-17,-1.3053e-01,9.9144e-01,2.9667e-17});
			return Normal_7_419_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #425, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_425_point()
		{
			MFVec3f Coordinate_7_425_point = new MFVec3f(new double[] {-7.5000e-01,1.8143e+01,1.7181e-14,-7.5000e-01,1.8143e+01,7.5100e-02,-7.7859e-01,1.8145e+01,1.7181e-14,-7.7859e-01,1.8145e+01,7.5100e-02,-8.0668e-01,1.8150e+01,1.7181e-14,-8.0668e-01,1.8150e+01,7.5100e-02,-8.3381e-01,1.8160e+01,1.7181e-14,-8.3381e-01,1.8160e+01,7.5100e-02,-8.5950e-01,1.8172e+01,1.7181e-14,-8.5950e-01,1.8172e+01,7.5100e-02,-8.8332e-01,1.8188e+01,1.7181e-14,-8.8332e-01,1.8188e+01,7.5100e-02,-9.0486e-01,1.8207e+01,1.7181e-14,-9.0486e-01,1.8207e+01,7.5100e-02,-9.2374e-01,1.8229e+01,1.7181e-14,-9.2374e-01,1.8229e+01,7.5100e-02,-9.3966e-01,1.8252e+01,1.7181e-14,-9.3966e-01,1.8252e+01,7.5100e-02,-9.5233e-01,1.8278e+01,1.7181e-14,-9.5233e-01,1.8278e+01,7.5100e-02,-9.6154e-01,1.8305e+01,1.7181e-14,-9.6154e-01,1.8305e+01,7.5100e-02,-9.6713e-01,1.8333e+01,1.7181e-14,-9.6713e-01,1.8333e+01,7.5100e-02,-9.6900e-01,1.8362e+01,1.7181e-14,-9.6900e-01,1.8362e+01,7.5100e-02,-9.6713e-01,1.8391e+01,1.7181e-14,-9.6713e-01,1.8391e+01,7.5100e-02,-9.6154e-01,1.8419e+01,1.7181e-14,-9.6154e-01,1.8419e+01,7.5100e-02,-9.5233e-01,1.8446e+01,1.7181e-14,-9.5233e-01,1.8446e+01,7.5100e-02,-9.3966e-01,1.8471e+01,1.7181e-14,-9.3966e-01,1.8471e+01,7.5100e-02,-9.2374e-01,1.8495e+01,1.7181e-14,-9.2374e-01,1.8495e+01,7.5100e-02,-9.0486e-01,1.8517e+01,1.7181e-14,-9.0486e-01,1.8517e+01,7.5100e-02,-8.8332e-01,1.8536e+01,1.7181e-14,-8.8332e-01,1.8536e+01,7.5100e-02,-8.5950e-01,1.8552e+01,1.7181e-14,-8.5950e-01,1.8552e+01,7.5100e-02,-8.3381e-01,1.8564e+01,1.7181e-14,-8.3381e-01,1.8564e+01,7.5100e-02,-8.0668e-01,1.8574e+01,1.7181e-14,-8.0668e-01,1.8574e+01,7.5100e-02,-7.7859e-01,1.8579e+01,1.7181e-14,-7.7859e-01,1.8579e+01,7.5100e-02,-7.5000e-01,1.8581e+01,1.7181e-14,-7.5000e-01,1.8581e+01,7.5100e-02,-7.2141e-01,1.8579e+01,1.7181e-14,-7.2141e-01,1.8579e+01,7.5100e-02,-6.9332e-01,1.8574e+01,1.7181e-14,-6.9332e-01,1.8574e+01,7.5100e-02,-6.6619e-01,1.8564e+01,1.7181e-14,-6.6619e-01,1.8564e+01,7.5100e-02,-6.4050e-01,1.8552e+01,1.7181e-14,-6.4050e-01,1.8552e+01,7.5100e-02,-6.1668e-01,1.8536e+01,1.7181e-14,-6.1668e-01,1.8536e+01,7.5100e-02,-5.9514e-01,1.8517e+01,1.7181e-14,-5.9514e-01,1.8517e+01,7.5100e-02,-5.7626e-01,1.8495e+01,1.7181e-14,-5.7626e-01,1.8495e+01,7.5100e-02,-5.6034e-01,1.8471e+01,1.7181e-14,-5.6034e-01,1.8471e+01,7.5100e-02,-5.4767e-01,1.8446e+01,1.7181e-14,-5.4767e-01,1.8446e+01,7.5100e-02,-5.3846e-01,1.8419e+01,1.7181e-14,-5.3846e-01,1.8419e+01,7.5100e-02,-5.3287e-01,1.8391e+01,1.7181e-14,-5.3287e-01,1.8391e+01,7.5100e-02,-5.3100e-01,1.8362e+01,1.7181e-14,-5.3100e-01,1.8362e+01,7.5100e-02,-5.3287e-01,1.8333e+01,1.7181e-14,-5.3287e-01,1.8333e+01,7.5100e-02,-5.3846e-01,1.8305e+01,1.7181e-14,-5.3846e-01,1.8305e+01,7.5100e-02,-5.4767e-01,1.8278e+01,1.7181e-14,-5.4767e-01,1.8278e+01,7.5100e-02,-5.6034e-01,1.8252e+01,1.7181e-14,-5.6034e-01,1.8252e+01,7.5100e-02,-5.7626e-01,1.8229e+01,1.7181e-14,-5.7626e-01,1.8229e+01,7.5100e-02,-5.9514e-01,1.8207e+01,1.7181e-14,-5.9514e-01,1.8207e+01,7.5100e-02,-6.1668e-01,1.8188e+01,1.7181e-14,-6.1668e-01,1.8188e+01,7.5100e-02,-6.4050e-01,1.8172e+01,1.7181e-14,-6.4050e-01,1.8172e+01,7.5100e-02,-6.6619e-01,1.8160e+01,1.7181e-14,-6.6619e-01,1.8160e+01,7.5100e-02,-6.9332e-01,1.8150e+01,1.7181e-14,-6.9332e-01,1.8150e+01,7.5100e-02,-7.2141e-01,1.8145e+01,1.7181e-14,-7.2141e-01,1.8145e+01,7.5100e-02});
			return Coordinate_7_425_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #426, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_426_vector()
		{
			MFVec3f Normal_7_426_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,2.9923e-17,-0.0000e+00,1.0000e+00,2.9923e-17,1.3053e-01,9.9144e-01,2.9667e-17,1.3053e-01,9.9144e-01,2.9667e-17,2.5882e-01,9.6593e-01,2.8903e-17,2.5882e-01,9.6593e-01,2.8903e-17,3.8268e-01,9.2388e-01,2.7645e-17,3.8268e-01,9.2388e-01,2.7645e-17,5.0000e-01,8.6603e-01,2.5914e-17,5.0000e-01,8.6603e-01,2.5914e-17,6.0876e-01,7.9335e-01,2.3739e-17,6.0876e-01,7.9335e-01,2.3739e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.9335e-01,6.0876e-01,1.8216e-17,7.9335e-01,6.0876e-01,1.8216e-17,8.6603e-01,5.0000e-01,1.4961e-17,8.6603e-01,5.0000e-01,1.4961e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.6593e-01,2.5882e-01,7.7446e-18,9.6593e-01,2.5882e-01,7.7446e-18,9.9144e-01,1.3053e-01,3.9057e-18,9.9144e-01,1.3053e-01,3.9057e-18,1.0000e+00,6.1232e-17,1.8323e-33,1.0000e+00,6.1232e-17,1.8323e-33,9.9144e-01,-1.3053e-01,-3.9057e-18,9.9144e-01,-1.3053e-01,-3.9057e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.2388e-01,-3.8268e-01,-1.1451e-17,9.2388e-01,-3.8268e-01,-1.1451e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-1.0000e+00,-1.8370e-16,-5.4968e-33,-1.0000e+00,-1.8370e-16,-5.4968e-33,-9.9144e-01,1.3053e-01,3.9057e-18,-9.9144e-01,1.3053e-01,3.9057e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.2388e-01,3.8268e-01,1.1451e-17,-9.2388e-01,3.8268e-01,1.1451e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-1.3053e-01,9.9144e-01,2.9667e-17,-1.3053e-01,9.9144e-01,2.9667e-17});
			return Normal_7_426_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #432, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_432_point()
		{
			MFVec3f Coordinate_7_432_point = new MFVec3f(new double[] {-8.7500e+00,1.8143e+01,1.7181e-14,-8.7500e+00,1.8143e+01,7.5100e-02,-8.7786e+00,1.8145e+01,1.7181e-14,-8.7786e+00,1.8145e+01,7.5100e-02,-8.8067e+00,1.8150e+01,1.7181e-14,-8.8067e+00,1.8150e+01,7.5100e-02,-8.8338e+00,1.8160e+01,1.7181e-14,-8.8338e+00,1.8160e+01,7.5100e-02,-8.8595e+00,1.8172e+01,1.7181e-14,-8.8595e+00,1.8172e+01,7.5100e-02,-8.8833e+00,1.8188e+01,1.7181e-14,-8.8833e+00,1.8188e+01,7.5100e-02,-8.9049e+00,1.8207e+01,1.7181e-14,-8.9049e+00,1.8207e+01,7.5100e-02,-8.9237e+00,1.8229e+01,1.7181e-14,-8.9237e+00,1.8229e+01,7.5100e-02,-8.9397e+00,1.8252e+01,1.7181e-14,-8.9397e+00,1.8252e+01,7.5100e-02,-8.9523e+00,1.8278e+01,1.7181e-14,-8.9523e+00,1.8278e+01,7.5100e-02,-8.9615e+00,1.8305e+01,1.7181e-14,-8.9615e+00,1.8305e+01,7.5100e-02,-8.9671e+00,1.8333e+01,1.7181e-14,-8.9671e+00,1.8333e+01,7.5100e-02,-8.9690e+00,1.8362e+01,1.7181e-14,-8.9690e+00,1.8362e+01,7.5100e-02,-8.9671e+00,1.8391e+01,1.7181e-14,-8.9671e+00,1.8391e+01,7.5100e-02,-8.9615e+00,1.8419e+01,1.7181e-14,-8.9615e+00,1.8419e+01,7.5100e-02,-8.9523e+00,1.8446e+01,1.7181e-14,-8.9523e+00,1.8446e+01,7.5100e-02,-8.9397e+00,1.8471e+01,1.7181e-14,-8.9397e+00,1.8471e+01,7.5100e-02,-8.9237e+00,1.8495e+01,1.7181e-14,-8.9237e+00,1.8495e+01,7.5100e-02,-8.9049e+00,1.8517e+01,1.7181e-14,-8.9049e+00,1.8517e+01,7.5100e-02,-8.8833e+00,1.8536e+01,1.7181e-14,-8.8833e+00,1.8536e+01,7.5100e-02,-8.8595e+00,1.8552e+01,1.7181e-14,-8.8595e+00,1.8552e+01,7.5100e-02,-8.8338e+00,1.8564e+01,1.7181e-14,-8.8338e+00,1.8564e+01,7.5100e-02,-8.8067e+00,1.8574e+01,1.7181e-14,-8.8067e+00,1.8574e+01,7.5100e-02,-8.7786e+00,1.8579e+01,1.7181e-14,-8.7786e+00,1.8579e+01,7.5100e-02,-8.7500e+00,1.8581e+01,1.7181e-14,-8.7500e+00,1.8581e+01,7.5100e-02,-8.7214e+00,1.8579e+01,1.7181e-14,-8.7214e+00,1.8579e+01,7.5100e-02,-8.6933e+00,1.8574e+01,1.7181e-14,-8.6933e+00,1.8574e+01,7.5100e-02,-8.6662e+00,1.8564e+01,1.7181e-14,-8.6662e+00,1.8564e+01,7.5100e-02,-8.6405e+00,1.8552e+01,1.7181e-14,-8.6405e+00,1.8552e+01,7.5100e-02,-8.6167e+00,1.8536e+01,1.7181e-14,-8.6167e+00,1.8536e+01,7.5100e-02,-8.5951e+00,1.8517e+01,1.7181e-14,-8.5951e+00,1.8517e+01,7.5100e-02,-8.5763e+00,1.8495e+01,1.7181e-14,-8.5763e+00,1.8495e+01,7.5100e-02,-8.5603e+00,1.8471e+01,1.7181e-14,-8.5603e+00,1.8471e+01,7.5100e-02,-8.5477e+00,1.8446e+01,1.7181e-14,-8.5477e+00,1.8446e+01,7.5100e-02,-8.5385e+00,1.8419e+01,1.7181e-14,-8.5385e+00,1.8419e+01,7.5100e-02,-8.5329e+00,1.8391e+01,1.7181e-14,-8.5329e+00,1.8391e+01,7.5100e-02,-8.5310e+00,1.8362e+01,1.7181e-14,-8.5310e+00,1.8362e+01,7.5100e-02,-8.5329e+00,1.8333e+01,1.7181e-14,-8.5329e+00,1.8333e+01,7.5100e-02,-8.5385e+00,1.8305e+01,1.7181e-14,-8.5385e+00,1.8305e+01,7.5100e-02,-8.5477e+00,1.8278e+01,1.7181e-14,-8.5477e+00,1.8278e+01,7.5100e-02,-8.5603e+00,1.8252e+01,1.7181e-14,-8.5603e+00,1.8252e+01,7.5100e-02,-8.5763e+00,1.8229e+01,1.7181e-14,-8.5763e+00,1.8229e+01,7.5100e-02,-8.5951e+00,1.8207e+01,1.7181e-14,-8.5951e+00,1.8207e+01,7.5100e-02,-8.6167e+00,1.8188e+01,1.7181e-14,-8.6167e+00,1.8188e+01,7.5100e-02,-8.6405e+00,1.8172e+01,1.7181e-14,-8.6405e+00,1.8172e+01,7.5100e-02,-8.6662e+00,1.8160e+01,1.7181e-14,-8.6662e+00,1.8160e+01,7.5100e-02,-8.6933e+00,1.8150e+01,1.7181e-14,-8.6933e+00,1.8150e+01,7.5100e-02,-8.7214e+00,1.8145e+01,1.7181e-14,-8.7214e+00,1.8145e+01,7.5100e-02});
			return Coordinate_7_432_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #433, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_433_vector()
		{
			MFVec3f Normal_7_433_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,2.9923e-17,-0.0000e+00,1.0000e+00,2.9923e-17,1.3053e-01,9.9144e-01,2.9667e-17,1.3053e-01,9.9144e-01,2.9667e-17,2.5882e-01,9.6593e-01,2.8903e-17,2.5882e-01,9.6593e-01,2.8903e-17,3.8268e-01,9.2388e-01,2.7645e-17,3.8268e-01,9.2388e-01,2.7645e-17,5.0000e-01,8.6603e-01,2.5914e-17,5.0000e-01,8.6603e-01,2.5914e-17,6.0876e-01,7.9335e-01,2.3739e-17,6.0876e-01,7.9335e-01,2.3739e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.0711e-01,7.0711e-01,2.1159e-17,7.9335e-01,6.0876e-01,1.8216e-17,7.9335e-01,6.0876e-01,1.8216e-17,8.6603e-01,5.0000e-01,1.4961e-17,8.6603e-01,5.0000e-01,1.4961e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.2388e-01,3.8268e-01,1.1451e-17,9.6593e-01,2.5882e-01,7.7446e-18,9.6593e-01,2.5882e-01,7.7446e-18,9.9144e-01,1.3053e-01,3.9057e-18,9.9144e-01,1.3053e-01,3.9057e-18,1.0000e+00,6.1232e-17,1.8323e-33,1.0000e+00,6.1232e-17,1.8323e-33,9.9144e-01,-1.3053e-01,-3.9057e-18,9.9144e-01,-1.3053e-01,-3.9057e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.6593e-01,-2.5882e-01,-7.7446e-18,9.2388e-01,-3.8268e-01,-1.1451e-17,9.2388e-01,-3.8268e-01,-1.1451e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,8.6603e-01,-5.0000e-01,-1.4961e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.9335e-01,-6.0876e-01,-1.8216e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,7.0711e-01,-7.0711e-01,-2.1159e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,6.0876e-01,-7.9335e-01,-2.3739e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,5.0000e-01,-8.6603e-01,-2.5914e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,3.8268e-01,-9.2388e-01,-2.7645e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,2.5882e-01,-9.6593e-01,-2.8903e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.3053e-01,-9.9144e-01,-2.9667e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,1.2246e-16,-1.0000e+00,-2.9923e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-1.3053e-01,-9.9144e-01,-2.9667e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-2.5882e-01,-9.6593e-01,-2.8903e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-3.8268e-01,-9.2388e-01,-2.7645e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-5.0000e-01,-8.6603e-01,-2.5914e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-6.0876e-01,-7.9335e-01,-2.3739e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.0711e-01,-7.0711e-01,-2.1159e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-7.9335e-01,-6.0876e-01,-1.8216e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-8.6603e-01,-5.0000e-01,-1.4961e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.2388e-01,-3.8268e-01,-1.1451e-17,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.6593e-01,-2.5882e-01,-7.7446e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-9.9144e-01,-1.3053e-01,-3.9057e-18,-1.0000e+00,-1.8370e-16,-5.4968e-33,-1.0000e+00,-1.8370e-16,-5.4968e-33,-9.9144e-01,1.3053e-01,3.9057e-18,-9.9144e-01,1.3053e-01,3.9057e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.6593e-01,2.5882e-01,7.7446e-18,-9.2388e-01,3.8268e-01,1.1451e-17,-9.2388e-01,3.8268e-01,1.1451e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-8.6603e-01,5.0000e-01,1.4961e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.9335e-01,6.0876e-01,1.8216e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-7.0711e-01,7.0711e-01,2.1159e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-6.0876e-01,7.9335e-01,2.3739e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-5.0000e-01,8.6603e-01,2.5914e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-3.8268e-01,9.2388e-01,2.7645e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-2.5882e-01,9.6593e-01,2.8903e-17,-1.3053e-01,9.9144e-01,2.9667e-17,-1.3053e-01,9.9144e-01,2.9667e-17});
			return Normal_7_433_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #439, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_439_point()
		{
			MFVec3f Coordinate_7_439_point = new MFVec3f(new double[] {-5.3560e+00,4.8060e+00,3.0751e+00,-5.3560e+00,4.8060e+00,3.0000e+00,-5.3528e+00,4.7571e+00,3.0751e+00,-5.3528e+00,4.7571e+00,3.0000e+00,-5.3432e+00,4.7089e+00,3.0751e+00,-5.3432e+00,4.7089e+00,3.0000e+00,-5.3275e+00,4.6625e+00,3.0751e+00,-5.3275e+00,4.6625e+00,3.0000e+00,-5.3058e+00,4.6185e+00,3.0751e+00,-5.3058e+00,4.6185e+00,3.0000e+00,-5.2785e+00,4.5777e+00,3.0751e+00,-5.2785e+00,4.5777e+00,3.0000e+00,-5.2462e+00,4.5408e+00,3.0751e+00,-5.2462e+00,4.5408e+00,3.0000e+00,-5.2093e+00,4.5085e+00,3.0751e+00,-5.2093e+00,4.5085e+00,3.0000e+00,-5.1685e+00,4.4812e+00,3.0751e+00,-5.1685e+00,4.4812e+00,3.0000e+00,-5.1245e+00,4.4595e+00,3.0751e+00,-5.1245e+00,4.4595e+00,3.0000e+00,-5.0781e+00,4.4438e+00,3.0751e+00,-5.0781e+00,4.4438e+00,3.0000e+00,-5.0299e+00,4.4342e+00,3.0751e+00,-5.0299e+00,4.4342e+00,3.0000e+00,-4.9810e+00,4.4310e+00,3.0751e+00,-4.9810e+00,4.4310e+00,3.0000e+00,-4.9321e+00,4.4342e+00,3.0751e+00,-4.9321e+00,4.4342e+00,3.0000e+00,-4.8839e+00,4.4438e+00,3.0751e+00,-4.8839e+00,4.4438e+00,3.0000e+00,-4.8375e+00,4.4595e+00,3.0751e+00,-4.8375e+00,4.4595e+00,3.0000e+00,-4.7935e+00,4.4812e+00,3.0751e+00,-4.7935e+00,4.4812e+00,3.0000e+00,-4.7527e+00,4.5085e+00,3.0751e+00,-4.7527e+00,4.5085e+00,3.0000e+00,-4.7158e+00,4.5408e+00,3.0751e+00,-4.7158e+00,4.5408e+00,3.0000e+00,-4.6835e+00,4.5777e+00,3.0751e+00,-4.6835e+00,4.5777e+00,3.0000e+00,-4.6562e+00,4.6185e+00,3.0751e+00,-4.6562e+00,4.6185e+00,3.0000e+00,-4.6345e+00,4.6625e+00,3.0751e+00,-4.6345e+00,4.6625e+00,3.0000e+00,-4.6188e+00,4.7089e+00,3.0751e+00,-4.6188e+00,4.7089e+00,3.0000e+00,-4.6092e+00,4.7571e+00,3.0751e+00,-4.6092e+00,4.7571e+00,3.0000e+00,-4.6060e+00,4.8060e+00,3.0751e+00,-4.6060e+00,4.8060e+00,3.0000e+00});
			return Coordinate_7_439_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #440, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_440_vector()
		{
			MFVec3f Normal_7_440_vector = new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00});
			return Normal_7_440_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #452, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_452_point()
		{
			MFVec3f Coordinate_7_452_point = new MFVec3f(new double[] {-4.6060e+00,8.3060e+00,3.0751e+00,-4.6060e+00,8.3060e+00,3.0000e+00,-4.6092e+00,8.3549e+00,3.0751e+00,-4.6092e+00,8.3549e+00,3.0000e+00,-4.6188e+00,8.4031e+00,3.0751e+00,-4.6188e+00,8.4031e+00,3.0000e+00,-4.6345e+00,8.4495e+00,3.0751e+00,-4.6345e+00,8.4495e+00,3.0000e+00,-4.6562e+00,8.4935e+00,3.0751e+00,-4.6562e+00,8.4935e+00,3.0000e+00,-4.6835e+00,8.5343e+00,3.0751e+00,-4.6835e+00,8.5343e+00,3.0000e+00,-4.7158e+00,8.5712e+00,3.0751e+00,-4.7158e+00,8.5712e+00,3.0000e+00,-4.7527e+00,8.6035e+00,3.0751e+00,-4.7527e+00,8.6035e+00,3.0000e+00,-4.7935e+00,8.6308e+00,3.0751e+00,-4.7935e+00,8.6308e+00,3.0000e+00,-4.8375e+00,8.6525e+00,3.0751e+00,-4.8375e+00,8.6525e+00,3.0000e+00,-4.8839e+00,8.6682e+00,3.0751e+00,-4.8839e+00,8.6682e+00,3.0000e+00,-4.9321e+00,8.6778e+00,3.0751e+00,-4.9321e+00,8.6778e+00,3.0000e+00,-4.9810e+00,8.6810e+00,3.0751e+00,-4.9810e+00,8.6810e+00,3.0000e+00,-5.0299e+00,8.6778e+00,3.0751e+00,-5.0299e+00,8.6778e+00,3.0000e+00,-5.0781e+00,8.6682e+00,3.0751e+00,-5.0781e+00,8.6682e+00,3.0000e+00,-5.1245e+00,8.6525e+00,3.0751e+00,-5.1245e+00,8.6525e+00,3.0000e+00,-5.1685e+00,8.6308e+00,3.0751e+00,-5.1685e+00,8.6308e+00,3.0000e+00,-5.2093e+00,8.6035e+00,3.0751e+00,-5.2093e+00,8.6035e+00,3.0000e+00,-5.2462e+00,8.5712e+00,3.0751e+00,-5.2462e+00,8.5712e+00,3.0000e+00,-5.2785e+00,8.5343e+00,3.0751e+00,-5.2785e+00,8.5343e+00,3.0000e+00,-5.3058e+00,8.4935e+00,3.0751e+00,-5.3058e+00,8.4935e+00,3.0000e+00,-5.3275e+00,8.4495e+00,3.0751e+00,-5.3275e+00,8.4495e+00,3.0000e+00,-5.3432e+00,8.4031e+00,3.0751e+00,-5.3432e+00,8.4031e+00,3.0000e+00,-5.3528e+00,8.3549e+00,3.0751e+00,-5.3528e+00,8.3549e+00,3.0000e+00,-5.3560e+00,8.3060e+00,3.0751e+00,-5.3560e+00,8.3060e+00,3.0000e+00});
			return Coordinate_7_452_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #453, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_453_vector()
		{
			MFVec3f Normal_7_453_vector = new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00});
			return Normal_7_453_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #465, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_465_point()
		{
			MFVec3f Coordinate_7_465_point = new MFVec3f(new double[] {-7.8560e+00,4.8060e+00,3.0751e+00,-7.8560e+00,4.8060e+00,3.0000e+00,-7.8530e+00,4.7590e+00,3.0751e+00,-7.8530e+00,4.7590e+00,3.0000e+00,-7.8442e+00,4.7127e+00,3.0751e+00,-7.8442e+00,4.7127e+00,3.0000e+00,-7.8297e+00,4.6680e+00,3.0751e+00,-7.8297e+00,4.6680e+00,3.0000e+00,-7.8096e+00,4.6253e+00,3.0751e+00,-7.8096e+00,4.6253e+00,3.0000e+00,-7.7844e+00,4.5856e+00,3.0751e+00,-7.7844e+00,4.5856e+00,3.0000e+00,-7.7544e+00,4.5493e+00,3.0751e+00,-7.7544e+00,4.5493e+00,3.0000e+00,-7.7200e+00,4.5171e+00,3.0751e+00,-7.7200e+00,4.5171e+00,3.0000e+00,-7.6819e+00,4.4894e+00,3.0751e+00,-7.6819e+00,4.4894e+00,3.0000e+00,-7.6407e+00,4.4667e+00,3.0751e+00,-7.6407e+00,4.4667e+00,3.0000e+00,-7.5969e+00,4.4494e+00,3.0751e+00,-7.5969e+00,4.4494e+00,3.0000e+00,-7.5513e+00,4.4376e+00,3.0751e+00,-7.5513e+00,4.4376e+00,3.0000e+00,-7.5045e+00,4.4317e+00,3.0751e+00,-7.5045e+00,4.4317e+00,3.0000e+00,-7.4575e+00,4.4317e+00,3.0751e+00,-7.4575e+00,4.4317e+00,3.0000e+00,-7.4107e+00,4.4376e+00,3.0751e+00,-7.4107e+00,4.4376e+00,3.0000e+00,-7.3651e+00,4.4494e+00,3.0751e+00,-7.3651e+00,4.4494e+00,3.0000e+00,-7.3213e+00,4.4667e+00,3.0751e+00,-7.3213e+00,4.4667e+00,3.0000e+00,-7.2801e+00,4.4894e+00,3.0751e+00,-7.2801e+00,4.4894e+00,3.0000e+00,-7.2420e+00,4.5171e+00,3.0751e+00,-7.2420e+00,4.5171e+00,3.0000e+00,-7.2076e+00,4.5493e+00,3.0751e+00,-7.2076e+00,4.5493e+00,3.0000e+00,-7.1776e+00,4.5856e+00,3.0751e+00,-7.1776e+00,4.5856e+00,3.0000e+00,-7.1524e+00,4.6253e+00,3.0751e+00,-7.1524e+00,4.6253e+00,3.0000e+00,-7.1323e+00,4.6680e+00,3.0751e+00,-7.1323e+00,4.6680e+00,3.0000e+00,-7.1178e+00,4.7127e+00,3.0751e+00,-7.1178e+00,4.7127e+00,3.0000e+00,-7.1090e+00,4.7590e+00,3.0751e+00,-7.1090e+00,4.7590e+00,3.0000e+00,-7.1060e+00,4.8060e+00,3.0751e+00,-7.1060e+00,4.8060e+00,3.0000e+00});
			return Coordinate_7_465_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #466, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_466_vector()
		{
			MFVec3f Normal_7_466_vector = new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9211e-01,1.2533e-01,-0.0000e+00,9.9211e-01,1.2533e-01,-0.0000e+00,9.6858e-01,2.4869e-01,-0.0000e+00,9.6858e-01,2.4869e-01,-0.0000e+00,9.2978e-01,3.6812e-01,-0.0000e+00,9.2978e-01,3.6812e-01,-0.0000e+00,8.7631e-01,4.8175e-01,-0.0000e+00,8.7631e-01,4.8175e-01,-0.0000e+00,8.0902e-01,5.8779e-01,-0.0000e+00,8.0902e-01,5.8779e-01,-0.0000e+00,7.2897e-01,6.8455e-01,-0.0000e+00,7.2897e-01,6.8455e-01,-0.0000e+00,6.3742e-01,7.7051e-01,-0.0000e+00,6.3742e-01,7.7051e-01,-0.0000e+00,5.3583e-01,8.4433e-01,-0.0000e+00,5.3583e-01,8.4433e-01,-0.0000e+00,4.2578e-01,9.0483e-01,-0.0000e+00,4.2578e-01,9.0483e-01,-0.0000e+00,3.0902e-01,9.5106e-01,-0.0000e+00,3.0902e-01,9.5106e-01,-0.0000e+00,1.8738e-01,9.8229e-01,-0.0000e+00,1.8738e-01,9.8229e-01,-0.0000e+00,6.2791e-02,9.9803e-01,-0.0000e+00,6.2791e-02,9.9803e-01,-0.0000e+00,-6.2791e-02,9.9803e-01,-0.0000e+00,-6.2791e-02,9.9803e-01,-0.0000e+00,-1.8738e-01,9.8229e-01,-0.0000e+00,-1.8738e-01,9.8229e-01,-0.0000e+00,-3.0902e-01,9.5106e-01,-0.0000e+00,-3.0902e-01,9.5106e-01,-0.0000e+00,-4.2578e-01,9.0483e-01,-0.0000e+00,-4.2578e-01,9.0483e-01,-0.0000e+00,-5.3583e-01,8.4433e-01,-0.0000e+00,-5.3583e-01,8.4433e-01,-0.0000e+00,-6.3742e-01,7.7051e-01,-0.0000e+00,-6.3742e-01,7.7051e-01,-0.0000e+00,-7.2897e-01,6.8455e-01,-0.0000e+00,-7.2897e-01,6.8455e-01,-0.0000e+00,-8.0902e-01,5.8779e-01,-0.0000e+00,-8.0902e-01,5.8779e-01,-0.0000e+00,-8.7631e-01,4.8175e-01,-0.0000e+00,-8.7631e-01,4.8175e-01,-0.0000e+00,-9.2978e-01,3.6812e-01,-0.0000e+00,-9.2978e-01,3.6812e-01,-0.0000e+00,-9.6858e-01,2.4869e-01,-0.0000e+00,-9.6858e-01,2.4869e-01,-0.0000e+00,-9.9211e-01,1.2533e-01,-0.0000e+00,-9.9211e-01,1.2533e-01,-0.0000e+00,-1.0000e+00,-2.6667e-08,-0.0000e+00,-1.0000e+00,-2.6667e-08,-0.0000e+00});
			return Normal_7_466_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #478, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_478_point()
		{
			MFVec3f Coordinate_7_478_point = new MFVec3f(new double[] {-7.1060e+00,8.3060e+00,3.0751e+00,-7.1060e+00,8.3060e+00,3.0000e+00,-7.1092e+00,8.3549e+00,3.0751e+00,-7.1092e+00,8.3549e+00,3.0000e+00,-7.1188e+00,8.4031e+00,3.0751e+00,-7.1188e+00,8.4031e+00,3.0000e+00,-7.1345e+00,8.4495e+00,3.0751e+00,-7.1345e+00,8.4495e+00,3.0000e+00,-7.1562e+00,8.4935e+00,3.0751e+00,-7.1562e+00,8.4935e+00,3.0000e+00,-7.1835e+00,8.5343e+00,3.0751e+00,-7.1835e+00,8.5343e+00,3.0000e+00,-7.2158e+00,8.5712e+00,3.0751e+00,-7.2158e+00,8.5712e+00,3.0000e+00,-7.2527e+00,8.6035e+00,3.0751e+00,-7.2527e+00,8.6035e+00,3.0000e+00,-7.2935e+00,8.6308e+00,3.0751e+00,-7.2935e+00,8.6308e+00,3.0000e+00,-7.3375e+00,8.6525e+00,3.0751e+00,-7.3375e+00,8.6525e+00,3.0000e+00,-7.3839e+00,8.6682e+00,3.0751e+00,-7.3839e+00,8.6682e+00,3.0000e+00,-7.4321e+00,8.6778e+00,3.0751e+00,-7.4321e+00,8.6778e+00,3.0000e+00,-7.4810e+00,8.6810e+00,3.0751e+00,-7.4810e+00,8.6810e+00,3.0000e+00,-7.5299e+00,8.6778e+00,3.0751e+00,-7.5299e+00,8.6778e+00,3.0000e+00,-7.5781e+00,8.6682e+00,3.0751e+00,-7.5781e+00,8.6682e+00,3.0000e+00,-7.6245e+00,8.6525e+00,3.0751e+00,-7.6245e+00,8.6525e+00,3.0000e+00,-7.6685e+00,8.6308e+00,3.0751e+00,-7.6685e+00,8.6308e+00,3.0000e+00,-7.7093e+00,8.6035e+00,3.0751e+00,-7.7093e+00,8.6035e+00,3.0000e+00,-7.7462e+00,8.5712e+00,3.0751e+00,-7.7462e+00,8.5712e+00,3.0000e+00,-7.7785e+00,8.5343e+00,3.0751e+00,-7.7785e+00,8.5343e+00,3.0000e+00,-7.8058e+00,8.4935e+00,3.0751e+00,-7.8058e+00,8.4935e+00,3.0000e+00,-7.8275e+00,8.4495e+00,3.0751e+00,-7.8275e+00,8.4495e+00,3.0000e+00,-7.8432e+00,8.4031e+00,3.0751e+00,-7.8432e+00,8.4031e+00,3.0000e+00,-7.8528e+00,8.3549e+00,3.0751e+00,-7.8528e+00,8.3549e+00,3.0000e+00,-7.8560e+00,8.3060e+00,3.0751e+00,-7.8560e+00,8.3060e+00,3.0000e+00});
			return Coordinate_7_478_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #479, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_479_vector()
		{
			MFVec3f Normal_7_479_vector = new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00});
			return Normal_7_479_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #491, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_491_point()
		{
			MFVec3f Coordinate_7_491_point = new MFVec3f(new double[] {-5.9810e+00,1.5052e+01,3.0751e+00,-5.9810e+00,1.5052e+01,3.0000e+00,-6.1115e+00,1.5043e+01,3.0751e+00,-6.1115e+00,1.5043e+01,3.0000e+00,-6.2398e+00,1.5018e+01,3.0751e+00,-6.2398e+00,1.5018e+01,3.0000e+00,-6.3637e+00,1.4976e+01,3.0751e+00,-6.3637e+00,1.4976e+01,3.0000e+00,-6.4810e+00,1.4918e+01,3.0751e+00,-6.4810e+00,1.4918e+01,3.0000e+00,-6.5898e+00,1.4845e+01,3.0751e+00,-6.5898e+00,1.4845e+01,3.0000e+00,-6.6881e+00,1.4759e+01,3.0751e+00,-6.6881e+00,1.4759e+01,3.0000e+00,-6.7744e+00,1.4661e+01,3.0751e+00,-6.7744e+00,1.4661e+01,3.0000e+00,-6.8470e+00,1.4552e+01,3.0751e+00,-6.8470e+00,1.4552e+01,3.0000e+00,-6.9049e+00,1.4435e+01,3.0751e+00,-6.9049e+00,1.4435e+01,3.0000e+00,-6.9469e+00,1.4311e+01,3.0751e+00,-6.9469e+00,1.4311e+01,3.0000e+00,-6.9724e+00,1.4183e+01,3.0751e+00,-6.9724e+00,1.4183e+01,3.0000e+00,-6.9810e+00,1.4052e+01,3.0751e+00,-6.9810e+00,1.4052e+01,3.0000e+00,-6.9724e+00,1.3921e+01,3.0751e+00,-6.9724e+00,1.3921e+01,3.0000e+00,-6.9469e+00,1.3793e+01,3.0751e+00,-6.9469e+00,1.3793e+01,3.0000e+00,-6.9049e+00,1.3669e+01,3.0751e+00,-6.9049e+00,1.3669e+01,3.0000e+00,-6.8470e+00,1.3552e+01,3.0751e+00,-6.8470e+00,1.3552e+01,3.0000e+00,-6.7744e+00,1.3443e+01,3.0751e+00,-6.7744e+00,1.3443e+01,3.0000e+00,-6.6881e+00,1.3345e+01,3.0751e+00,-6.6881e+00,1.3345e+01,3.0000e+00,-6.5898e+00,1.3259e+01,3.0751e+00,-6.5898e+00,1.3259e+01,3.0000e+00,-6.4810e+00,1.3186e+01,3.0751e+00,-6.4810e+00,1.3186e+01,3.0000e+00,-6.3637e+00,1.3128e+01,3.0751e+00,-6.3637e+00,1.3128e+01,3.0000e+00,-6.2398e+00,1.3086e+01,3.0751e+00,-6.2398e+00,1.3086e+01,3.0000e+00,-6.1115e+00,1.3061e+01,3.0751e+00,-6.1115e+00,1.3061e+01,3.0000e+00,-5.9810e+00,1.3052e+01,3.0751e+00,-5.9810e+00,1.3052e+01,3.0000e+00,-5.8505e+00,1.3061e+01,3.0751e+00,-5.8505e+00,1.3061e+01,3.0000e+00,-5.7222e+00,1.3086e+01,3.0751e+00,-5.7222e+00,1.3086e+01,3.0000e+00,-5.5983e+00,1.3128e+01,3.0751e+00,-5.5983e+00,1.3128e+01,3.0000e+00,-5.4810e+00,1.3186e+01,3.0751e+00,-5.4810e+00,1.3186e+01,3.0000e+00,-5.3722e+00,1.3259e+01,3.0751e+00,-5.3722e+00,1.3259e+01,3.0000e+00,-5.2739e+00,1.3345e+01,3.0751e+00,-5.2739e+00,1.3345e+01,3.0000e+00,-5.1876e+00,1.3443e+01,3.0751e+00,-5.1876e+00,1.3443e+01,3.0000e+00,-5.1150e+00,1.3552e+01,3.0751e+00,-5.1150e+00,1.3552e+01,3.0000e+00,-5.0571e+00,1.3669e+01,3.0751e+00,-5.0571e+00,1.3669e+01,3.0000e+00,-5.0151e+00,1.3793e+01,3.0751e+00,-5.0151e+00,1.3793e+01,3.0000e+00,-4.9896e+00,1.3921e+01,3.0751e+00,-4.9896e+00,1.3921e+01,3.0000e+00,-4.9810e+00,1.4052e+01,3.0751e+00,-4.9810e+00,1.4052e+01,3.0000e+00,-4.9896e+00,1.4183e+01,3.0751e+00,-4.9896e+00,1.4183e+01,3.0000e+00,-5.0151e+00,1.4311e+01,3.0751e+00,-5.0151e+00,1.4311e+01,3.0000e+00,-5.0571e+00,1.4435e+01,3.0751e+00,-5.0571e+00,1.4435e+01,3.0000e+00,-5.1150e+00,1.4552e+01,3.0751e+00,-5.1150e+00,1.4552e+01,3.0000e+00,-5.1876e+00,1.4661e+01,3.0751e+00,-5.1876e+00,1.4661e+01,3.0000e+00,-5.2739e+00,1.4759e+01,3.0751e+00,-5.2739e+00,1.4759e+01,3.0000e+00,-5.3722e+00,1.4845e+01,3.0751e+00,-5.3722e+00,1.4845e+01,3.0000e+00,-5.4810e+00,1.4918e+01,3.0751e+00,-5.4810e+00,1.4918e+01,3.0000e+00,-5.5983e+00,1.4976e+01,3.0751e+00,-5.5983e+00,1.4976e+01,3.0000e+00,-5.7222e+00,1.5018e+01,3.0751e+00,-5.7222e+00,1.5018e+01,3.0000e+00,-5.8505e+00,1.5043e+01,3.0751e+00,-5.8505e+00,1.5043e+01,3.0000e+00});
			return Coordinate_7_491_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #492, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_492_vector()
		{
			MFVec3f Normal_7_492_vector = new MFVec3f(new double[] {-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00});
			return Normal_7_492_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #498, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_498_point()
		{
			MFVec3f Coordinate_7_498_point = new MFVec3f(new double[] {-2.4810e+00,1.3802e+01,3.0751e+00,-2.4810e+00,1.3802e+01,3.0000e+00,-2.5789e+00,1.3796e+01,3.0751e+00,-2.5789e+00,1.3796e+01,3.0000e+00,-2.6751e+00,1.3776e+01,3.0751e+00,-2.6751e+00,1.3776e+01,3.0000e+00,-2.7680e+00,1.3745e+01,3.0751e+00,-2.7680e+00,1.3745e+01,3.0000e+00,-2.8560e+00,1.3702e+01,3.0751e+00,-2.8560e+00,1.3702e+01,3.0000e+00,-2.9376e+00,1.3647e+01,3.0751e+00,-2.9376e+00,1.3647e+01,3.0000e+00,-3.0113e+00,1.3582e+01,3.0751e+00,-3.0113e+00,1.3582e+01,3.0000e+00,-3.0760e+00,1.3509e+01,3.0751e+00,-3.0760e+00,1.3509e+01,3.0000e+00,-3.1305e+00,1.3427e+01,3.0751e+00,-3.1305e+00,1.3427e+01,3.0000e+00,-3.1739e+00,1.3339e+01,3.0751e+00,-3.1739e+00,1.3339e+01,3.0000e+00,-3.2054e+00,1.3246e+01,3.0751e+00,-3.2054e+00,1.3246e+01,3.0000e+00,-3.2246e+00,1.3150e+01,3.0751e+00,-3.2246e+00,1.3150e+01,3.0000e+00,-3.2310e+00,1.3052e+01,3.0751e+00,-3.2310e+00,1.3052e+01,3.0000e+00,-3.2246e+00,1.2954e+01,3.0751e+00,-3.2246e+00,1.2954e+01,3.0000e+00,-3.2054e+00,1.2858e+01,3.0751e+00,-3.2054e+00,1.2858e+01,3.0000e+00,-3.1739e+00,1.2765e+01,3.0751e+00,-3.1739e+00,1.2765e+01,3.0000e+00,-3.1305e+00,1.2677e+01,3.0751e+00,-3.1305e+00,1.2677e+01,3.0000e+00,-3.0760e+00,1.2595e+01,3.0751e+00,-3.0760e+00,1.2595e+01,3.0000e+00,-3.0113e+00,1.2522e+01,3.0751e+00,-3.0113e+00,1.2522e+01,3.0000e+00,-2.9376e+00,1.2457e+01,3.0751e+00,-2.9376e+00,1.2457e+01,3.0000e+00,-2.8560e+00,1.2402e+01,3.0751e+00,-2.8560e+00,1.2402e+01,3.0000e+00,-2.7680e+00,1.2359e+01,3.0751e+00,-2.7680e+00,1.2359e+01,3.0000e+00,-2.6751e+00,1.2328e+01,3.0751e+00,-2.6751e+00,1.2328e+01,3.0000e+00,-2.5789e+00,1.2308e+01,3.0751e+00,-2.5789e+00,1.2308e+01,3.0000e+00,-2.4810e+00,1.2302e+01,3.0751e+00,-2.4810e+00,1.2302e+01,3.0000e+00,-2.3831e+00,1.2308e+01,3.0751e+00,-2.3831e+00,1.2308e+01,3.0000e+00,-2.2869e+00,1.2328e+01,3.0751e+00,-2.2869e+00,1.2328e+01,3.0000e+00,-2.1940e+00,1.2359e+01,3.0751e+00,-2.1940e+00,1.2359e+01,3.0000e+00,-2.1060e+00,1.2402e+01,3.0751e+00,-2.1060e+00,1.2402e+01,3.0000e+00,-2.0244e+00,1.2457e+01,3.0751e+00,-2.0244e+00,1.2457e+01,3.0000e+00,-1.9507e+00,1.2522e+01,3.0751e+00,-1.9507e+00,1.2522e+01,3.0000e+00,-1.8860e+00,1.2595e+01,3.0751e+00,-1.8860e+00,1.2595e+01,3.0000e+00,-1.8315e+00,1.2677e+01,3.0751e+00,-1.8315e+00,1.2677e+01,3.0000e+00,-1.7881e+00,1.2765e+01,3.0751e+00,-1.7881e+00,1.2765e+01,3.0000e+00,-1.7566e+00,1.2858e+01,3.0751e+00,-1.7566e+00,1.2858e+01,3.0000e+00,-1.7374e+00,1.2954e+01,3.0751e+00,-1.7374e+00,1.2954e+01,3.0000e+00,-1.7310e+00,1.3052e+01,3.0751e+00,-1.7310e+00,1.3052e+01,3.0000e+00,-1.7374e+00,1.3150e+01,3.0751e+00,-1.7374e+00,1.3150e+01,3.0000e+00,-1.7566e+00,1.3246e+01,3.0751e+00,-1.7566e+00,1.3246e+01,3.0000e+00,-1.7881e+00,1.3339e+01,3.0751e+00,-1.7881e+00,1.3339e+01,3.0000e+00,-1.8315e+00,1.3427e+01,3.0751e+00,-1.8315e+00,1.3427e+01,3.0000e+00,-1.8860e+00,1.3509e+01,3.0751e+00,-1.8860e+00,1.3509e+01,3.0000e+00,-1.9507e+00,1.3582e+01,3.0751e+00,-1.9507e+00,1.3582e+01,3.0000e+00,-2.0244e+00,1.3647e+01,3.0751e+00,-2.0244e+00,1.3647e+01,3.0000e+00,-2.1060e+00,1.3702e+01,3.0751e+00,-2.1060e+00,1.3702e+01,3.0000e+00,-2.1940e+00,1.3745e+01,3.0751e+00,-2.1940e+00,1.3745e+01,3.0000e+00,-2.2869e+00,1.3776e+01,3.0751e+00,-2.2869e+00,1.3776e+01,3.0000e+00,-2.3831e+00,1.3796e+01,3.0751e+00,-2.3831e+00,1.3796e+01,3.0000e+00});
			return Coordinate_7_498_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #499, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_499_vector()
		{
			MFVec3f Normal_7_499_vector = new MFVec3f(new double[] {-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00});
			return Normal_7_499_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #505, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_505_point()
		{
			MFVec3f Coordinate_7_505_point = new MFVec3f(new double[] {-1.5000e+00,3.4975e+00,3.0000e+00,-1.5000e+00,3.4975e+00,3.0751e+00,-1.5408e+00,3.5002e+00,3.0000e+00,-1.5408e+00,3.5002e+00,3.0751e+00,-1.5809e+00,3.5081e+00,3.0000e+00,-1.5809e+00,3.5081e+00,3.0751e+00,-1.6196e+00,3.5213e+00,3.0000e+00,-1.6196e+00,3.5213e+00,3.0751e+00,-1.6562e+00,3.5394e+00,3.0000e+00,-1.6562e+00,3.5394e+00,3.0751e+00,-1.6902e+00,3.5621e+00,3.0000e+00,-1.6902e+00,3.5621e+00,3.0751e+00,-1.7210e+00,3.5890e+00,3.0000e+00,-1.7210e+00,3.5890e+00,3.0751e+00,-1.7479e+00,3.6198e+00,3.0000e+00,-1.7479e+00,3.6198e+00,3.0751e+00,-1.7706e+00,3.6538e+00,3.0000e+00,-1.7706e+00,3.6538e+00,3.0751e+00,-1.7887e+00,3.6904e+00,3.0000e+00,-1.7887e+00,3.6904e+00,3.0751e+00,-1.8019e+00,3.7291e+00,3.0000e+00,-1.8019e+00,3.7291e+00,3.0751e+00,-1.8098e+00,3.7692e+00,3.0000e+00,-1.8098e+00,3.7692e+00,3.0751e+00,-1.8125e+00,3.8100e+00,3.0000e+00,-1.8125e+00,3.8100e+00,3.0751e+00,-1.8098e+00,3.8508e+00,3.0000e+00,-1.8098e+00,3.8508e+00,3.0751e+00,-1.8019e+00,3.8909e+00,3.0000e+00,-1.8019e+00,3.8909e+00,3.0751e+00,-1.7887e+00,3.9296e+00,3.0000e+00,-1.7887e+00,3.9296e+00,3.0751e+00,-1.7706e+00,3.9663e+00,3.0000e+00,-1.7706e+00,3.9663e+00,3.0751e+00,-1.7479e+00,4.0002e+00,3.0000e+00,-1.7479e+00,4.0002e+00,3.0751e+00,-1.7210e+00,4.0310e+00,3.0000e+00,-1.7210e+00,4.0310e+00,3.0751e+00,-1.6902e+00,4.0579e+00,3.0000e+00,-1.6902e+00,4.0579e+00,3.0751e+00,-1.6562e+00,4.0806e+00,3.0000e+00,-1.6562e+00,4.0806e+00,3.0751e+00,-1.6196e+00,4.0987e+00,3.0000e+00,-1.6196e+00,4.0987e+00,3.0751e+00,-1.5809e+00,4.1119e+00,3.0000e+00,-1.5809e+00,4.1119e+00,3.0751e+00,-1.5408e+00,4.1198e+00,3.0000e+00,-1.5408e+00,4.1198e+00,3.0751e+00,-1.5000e+00,4.1225e+00,3.0000e+00,-1.5000e+00,4.1225e+00,3.0751e+00,-1.4592e+00,4.1198e+00,3.0000e+00,-1.4592e+00,4.1198e+00,3.0751e+00,-1.4191e+00,4.1119e+00,3.0000e+00,-1.4191e+00,4.1119e+00,3.0751e+00,-1.3804e+00,4.0987e+00,3.0000e+00,-1.3804e+00,4.0987e+00,3.0751e+00,-1.3438e+00,4.0806e+00,3.0000e+00,-1.3438e+00,4.0806e+00,3.0751e+00,-1.3098e+00,4.0579e+00,3.0000e+00,-1.3098e+00,4.0579e+00,3.0751e+00,-1.2790e+00,4.0310e+00,3.0000e+00,-1.2790e+00,4.0310e+00,3.0751e+00,-1.2521e+00,4.0002e+00,3.0000e+00,-1.2521e+00,4.0002e+00,3.0751e+00,-1.2294e+00,3.9663e+00,3.0000e+00,-1.2294e+00,3.9663e+00,3.0751e+00,-1.2113e+00,3.9296e+00,3.0000e+00,-1.2113e+00,3.9296e+00,3.0751e+00,-1.1981e+00,3.8909e+00,3.0000e+00,-1.1981e+00,3.8909e+00,3.0751e+00,-1.1902e+00,3.8508e+00,3.0000e+00,-1.1902e+00,3.8508e+00,3.0751e+00,-1.1875e+00,3.8100e+00,3.0000e+00,-1.1875e+00,3.8100e+00,3.0751e+00,-1.1902e+00,3.7692e+00,3.0000e+00,-1.1902e+00,3.7692e+00,3.0751e+00,-1.1981e+00,3.7291e+00,3.0000e+00,-1.1981e+00,3.7291e+00,3.0751e+00,-1.2113e+00,3.6904e+00,3.0000e+00,-1.2113e+00,3.6904e+00,3.0751e+00,-1.2294e+00,3.6538e+00,3.0000e+00,-1.2294e+00,3.6538e+00,3.0751e+00,-1.2521e+00,3.6198e+00,3.0000e+00,-1.2521e+00,3.6198e+00,3.0751e+00,-1.2790e+00,3.5890e+00,3.0000e+00,-1.2790e+00,3.5890e+00,3.0751e+00,-1.3098e+00,3.5621e+00,3.0000e+00,-1.3098e+00,3.5621e+00,3.0751e+00,-1.3437e+00,3.5394e+00,3.0000e+00,-1.3437e+00,3.5394e+00,3.0751e+00,-1.3804e+00,3.5213e+00,3.0000e+00,-1.3804e+00,3.5213e+00,3.0751e+00,-1.4191e+00,3.5081e+00,3.0000e+00,-1.4191e+00,3.5081e+00,3.0751e+00,-1.4592e+00,3.5002e+00,3.0000e+00,-1.4592e+00,3.5002e+00,3.0751e+00});
			return Coordinate_7_505_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #506, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_506_vector()
		{
			MFVec3f Normal_7_506_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00});
			return Normal_7_506_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #512, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_512_point()
		{
			MFVec3f Coordinate_7_512_point = new MFVec3f(new double[] {-1.5000e+00,5.2475e+00,3.0000e+00,-1.5000e+00,5.2475e+00,3.0751e+00,-1.5408e+00,5.2502e+00,3.0000e+00,-1.5408e+00,5.2502e+00,3.0751e+00,-1.5809e+00,5.2581e+00,3.0000e+00,-1.5809e+00,5.2581e+00,3.0751e+00,-1.6196e+00,5.2713e+00,3.0000e+00,-1.6196e+00,5.2713e+00,3.0751e+00,-1.6562e+00,5.2894e+00,3.0000e+00,-1.6562e+00,5.2894e+00,3.0751e+00,-1.6902e+00,5.3121e+00,3.0000e+00,-1.6902e+00,5.3121e+00,3.0751e+00,-1.7210e+00,5.3390e+00,3.0000e+00,-1.7210e+00,5.3390e+00,3.0751e+00,-1.7479e+00,5.3698e+00,3.0000e+00,-1.7479e+00,5.3698e+00,3.0751e+00,-1.7706e+00,5.4037e+00,3.0000e+00,-1.7706e+00,5.4037e+00,3.0751e+00,-1.7887e+00,5.4404e+00,3.0000e+00,-1.7887e+00,5.4404e+00,3.0751e+00,-1.8019e+00,5.4791e+00,3.0000e+00,-1.8019e+00,5.4791e+00,3.0751e+00,-1.8098e+00,5.5192e+00,3.0000e+00,-1.8098e+00,5.5192e+00,3.0751e+00,-1.8125e+00,5.5600e+00,3.0000e+00,-1.8125e+00,5.5600e+00,3.0751e+00,-1.8098e+00,5.6008e+00,3.0000e+00,-1.8098e+00,5.6008e+00,3.0751e+00,-1.8019e+00,5.6409e+00,3.0000e+00,-1.8019e+00,5.6409e+00,3.0751e+00,-1.7887e+00,5.6796e+00,3.0000e+00,-1.7887e+00,5.6796e+00,3.0751e+00,-1.7706e+00,5.7162e+00,3.0000e+00,-1.7706e+00,5.7162e+00,3.0751e+00,-1.7479e+00,5.7502e+00,3.0000e+00,-1.7479e+00,5.7502e+00,3.0751e+00,-1.7210e+00,5.7810e+00,3.0000e+00,-1.7210e+00,5.7810e+00,3.0751e+00,-1.6902e+00,5.8079e+00,3.0000e+00,-1.6902e+00,5.8079e+00,3.0751e+00,-1.6562e+00,5.8306e+00,3.0000e+00,-1.6562e+00,5.8306e+00,3.0751e+00,-1.6196e+00,5.8487e+00,3.0000e+00,-1.6196e+00,5.8487e+00,3.0751e+00,-1.5809e+00,5.8619e+00,3.0000e+00,-1.5809e+00,5.8619e+00,3.0751e+00,-1.5408e+00,5.8698e+00,3.0000e+00,-1.5408e+00,5.8698e+00,3.0751e+00,-1.5000e+00,5.8725e+00,3.0000e+00,-1.5000e+00,5.8725e+00,3.0751e+00,-1.4592e+00,5.8698e+00,3.0000e+00,-1.4592e+00,5.8698e+00,3.0751e+00,-1.4191e+00,5.8619e+00,3.0000e+00,-1.4191e+00,5.8619e+00,3.0751e+00,-1.3804e+00,5.8487e+00,3.0000e+00,-1.3804e+00,5.8487e+00,3.0751e+00,-1.3438e+00,5.8306e+00,3.0000e+00,-1.3438e+00,5.8306e+00,3.0751e+00,-1.3098e+00,5.8079e+00,3.0000e+00,-1.3098e+00,5.8079e+00,3.0751e+00,-1.2790e+00,5.7810e+00,3.0000e+00,-1.2790e+00,5.7810e+00,3.0751e+00,-1.2521e+00,5.7502e+00,3.0000e+00,-1.2521e+00,5.7502e+00,3.0751e+00,-1.2294e+00,5.7162e+00,3.0000e+00,-1.2294e+00,5.7162e+00,3.0751e+00,-1.2113e+00,5.6796e+00,3.0000e+00,-1.2113e+00,5.6796e+00,3.0751e+00,-1.1981e+00,5.6409e+00,3.0000e+00,-1.1981e+00,5.6409e+00,3.0751e+00,-1.1902e+00,5.6008e+00,3.0000e+00,-1.1902e+00,5.6008e+00,3.0751e+00,-1.1875e+00,5.5600e+00,3.0000e+00,-1.1875e+00,5.5600e+00,3.0751e+00,-1.1902e+00,5.5192e+00,3.0000e+00,-1.1902e+00,5.5192e+00,3.0751e+00,-1.1981e+00,5.4791e+00,3.0000e+00,-1.1981e+00,5.4791e+00,3.0751e+00,-1.2113e+00,5.4404e+00,3.0000e+00,-1.2113e+00,5.4404e+00,3.0751e+00,-1.2294e+00,5.4037e+00,3.0000e+00,-1.2294e+00,5.4037e+00,3.0751e+00,-1.2521e+00,5.3698e+00,3.0000e+00,-1.2521e+00,5.3698e+00,3.0751e+00,-1.2790e+00,5.3390e+00,3.0000e+00,-1.2790e+00,5.3390e+00,3.0751e+00,-1.3098e+00,5.3121e+00,3.0000e+00,-1.3098e+00,5.3121e+00,3.0751e+00,-1.3437e+00,5.2894e+00,3.0000e+00,-1.3437e+00,5.2894e+00,3.0751e+00,-1.3804e+00,5.2713e+00,3.0000e+00,-1.3804e+00,5.2713e+00,3.0751e+00,-1.4191e+00,5.2581e+00,3.0000e+00,-1.4191e+00,5.2581e+00,3.0751e+00,-1.4592e+00,5.2502e+00,3.0000e+00,-1.4592e+00,5.2502e+00,3.0751e+00});
			return Coordinate_7_512_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #513, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_513_vector()
		{
			MFVec3f Normal_7_513_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00});
			return Normal_7_513_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #519, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_519_point()
		{
			MFVec3f Coordinate_7_519_point = new MFVec3f(new double[] {-1.5000e+00,6.9975e+00,3.0000e+00,-1.5000e+00,6.9975e+00,3.0751e+00,-1.5408e+00,7.0002e+00,3.0000e+00,-1.5408e+00,7.0002e+00,3.0751e+00,-1.5809e+00,7.0081e+00,3.0000e+00,-1.5809e+00,7.0081e+00,3.0751e+00,-1.6196e+00,7.0213e+00,3.0000e+00,-1.6196e+00,7.0213e+00,3.0751e+00,-1.6562e+00,7.0394e+00,3.0000e+00,-1.6562e+00,7.0394e+00,3.0751e+00,-1.6902e+00,7.0621e+00,3.0000e+00,-1.6902e+00,7.0621e+00,3.0751e+00,-1.7210e+00,7.0890e+00,3.0000e+00,-1.7210e+00,7.0890e+00,3.0751e+00,-1.7479e+00,7.1198e+00,3.0000e+00,-1.7479e+00,7.1198e+00,3.0751e+00,-1.7706e+00,7.1537e+00,3.0000e+00,-1.7706e+00,7.1537e+00,3.0751e+00,-1.7887e+00,7.1904e+00,3.0000e+00,-1.7887e+00,7.1904e+00,3.0751e+00,-1.8019e+00,7.2291e+00,3.0000e+00,-1.8019e+00,7.2291e+00,3.0751e+00,-1.8098e+00,7.2692e+00,3.0000e+00,-1.8098e+00,7.2692e+00,3.0751e+00,-1.8125e+00,7.3100e+00,3.0000e+00,-1.8125e+00,7.3100e+00,3.0751e+00,-1.8098e+00,7.3508e+00,3.0000e+00,-1.8098e+00,7.3508e+00,3.0751e+00,-1.8019e+00,7.3909e+00,3.0000e+00,-1.8019e+00,7.3909e+00,3.0751e+00,-1.7887e+00,7.4296e+00,3.0000e+00,-1.7887e+00,7.4296e+00,3.0751e+00,-1.7706e+00,7.4662e+00,3.0000e+00,-1.7706e+00,7.4662e+00,3.0751e+00,-1.7479e+00,7.5002e+00,3.0000e+00,-1.7479e+00,7.5002e+00,3.0751e+00,-1.7210e+00,7.5310e+00,3.0000e+00,-1.7210e+00,7.5310e+00,3.0751e+00,-1.6902e+00,7.5579e+00,3.0000e+00,-1.6902e+00,7.5579e+00,3.0751e+00,-1.6562e+00,7.5806e+00,3.0000e+00,-1.6562e+00,7.5806e+00,3.0751e+00,-1.6196e+00,7.5987e+00,3.0000e+00,-1.6196e+00,7.5987e+00,3.0751e+00,-1.5809e+00,7.6119e+00,3.0000e+00,-1.5809e+00,7.6119e+00,3.0751e+00,-1.5408e+00,7.6198e+00,3.0000e+00,-1.5408e+00,7.6198e+00,3.0751e+00,-1.5000e+00,7.6225e+00,3.0000e+00,-1.5000e+00,7.6225e+00,3.0751e+00,-1.4592e+00,7.6198e+00,3.0000e+00,-1.4592e+00,7.6198e+00,3.0751e+00,-1.4191e+00,7.6119e+00,3.0000e+00,-1.4191e+00,7.6119e+00,3.0751e+00,-1.3804e+00,7.5987e+00,3.0000e+00,-1.3804e+00,7.5987e+00,3.0751e+00,-1.3438e+00,7.5806e+00,3.0000e+00,-1.3438e+00,7.5806e+00,3.0751e+00,-1.3098e+00,7.5579e+00,3.0000e+00,-1.3098e+00,7.5579e+00,3.0751e+00,-1.2790e+00,7.5310e+00,3.0000e+00,-1.2790e+00,7.5310e+00,3.0751e+00,-1.2521e+00,7.5002e+00,3.0000e+00,-1.2521e+00,7.5002e+00,3.0751e+00,-1.2294e+00,7.4662e+00,3.0000e+00,-1.2294e+00,7.4662e+00,3.0751e+00,-1.2113e+00,7.4296e+00,3.0000e+00,-1.2113e+00,7.4296e+00,3.0751e+00,-1.1981e+00,7.3909e+00,3.0000e+00,-1.1981e+00,7.3909e+00,3.0751e+00,-1.1902e+00,7.3508e+00,3.0000e+00,-1.1902e+00,7.3508e+00,3.0751e+00,-1.1875e+00,7.3100e+00,3.0000e+00,-1.1875e+00,7.3100e+00,3.0751e+00,-1.1902e+00,7.2692e+00,3.0000e+00,-1.1902e+00,7.2692e+00,3.0751e+00,-1.1981e+00,7.2291e+00,3.0000e+00,-1.1981e+00,7.2291e+00,3.0751e+00,-1.2113e+00,7.1904e+00,3.0000e+00,-1.2113e+00,7.1904e+00,3.0751e+00,-1.2294e+00,7.1537e+00,3.0000e+00,-1.2294e+00,7.1537e+00,3.0751e+00,-1.2521e+00,7.1198e+00,3.0000e+00,-1.2521e+00,7.1198e+00,3.0751e+00,-1.2790e+00,7.0890e+00,3.0000e+00,-1.2790e+00,7.0890e+00,3.0751e+00,-1.3098e+00,7.0621e+00,3.0000e+00,-1.3098e+00,7.0621e+00,3.0751e+00,-1.3437e+00,7.0394e+00,3.0000e+00,-1.3437e+00,7.0394e+00,3.0751e+00,-1.3804e+00,7.0213e+00,3.0000e+00,-1.3804e+00,7.0213e+00,3.0751e+00,-1.4191e+00,7.0081e+00,3.0000e+00,-1.4191e+00,7.0081e+00,3.0751e+00,-1.4592e+00,7.0002e+00,3.0000e+00,-1.4592e+00,7.0002e+00,3.0751e+00});
			return Coordinate_7_519_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #520, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_520_vector()
		{
			MFVec3f Normal_7_520_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00});
			return Normal_7_520_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #526, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_526_point()
		{
			MFVec3f Coordinate_7_526_point = new MFVec3f(new double[] {-1.5000e+00,8.7475e+00,3.0000e+00,-1.5000e+00,8.7475e+00,3.0751e+00,-1.5408e+00,8.7502e+00,3.0000e+00,-1.5408e+00,8.7502e+00,3.0751e+00,-1.5809e+00,8.7581e+00,3.0000e+00,-1.5809e+00,8.7581e+00,3.0751e+00,-1.6196e+00,8.7713e+00,3.0000e+00,-1.6196e+00,8.7713e+00,3.0751e+00,-1.6562e+00,8.7894e+00,3.0000e+00,-1.6562e+00,8.7894e+00,3.0751e+00,-1.6902e+00,8.8121e+00,3.0000e+00,-1.6902e+00,8.8121e+00,3.0751e+00,-1.7210e+00,8.8390e+00,3.0000e+00,-1.7210e+00,8.8390e+00,3.0751e+00,-1.7479e+00,8.8698e+00,3.0000e+00,-1.7479e+00,8.8698e+00,3.0751e+00,-1.7706e+00,8.9038e+00,3.0000e+00,-1.7706e+00,8.9038e+00,3.0751e+00,-1.7887e+00,8.9404e+00,3.0000e+00,-1.7887e+00,8.9404e+00,3.0751e+00,-1.8019e+00,8.9791e+00,3.0000e+00,-1.8019e+00,8.9791e+00,3.0751e+00,-1.8098e+00,9.0192e+00,3.0000e+00,-1.8098e+00,9.0192e+00,3.0751e+00,-1.8125e+00,9.0600e+00,3.0000e+00,-1.8125e+00,9.0600e+00,3.0751e+00,-1.8098e+00,9.1008e+00,3.0000e+00,-1.8098e+00,9.1008e+00,3.0751e+00,-1.8019e+00,9.1409e+00,3.0000e+00,-1.8019e+00,9.1409e+00,3.0751e+00,-1.7887e+00,9.1796e+00,3.0000e+00,-1.7887e+00,9.1796e+00,3.0751e+00,-1.7706e+00,9.2163e+00,3.0000e+00,-1.7706e+00,9.2163e+00,3.0751e+00,-1.7479e+00,9.2502e+00,3.0000e+00,-1.7479e+00,9.2502e+00,3.0751e+00,-1.7210e+00,9.2810e+00,3.0000e+00,-1.7210e+00,9.2810e+00,3.0751e+00,-1.6902e+00,9.3079e+00,3.0000e+00,-1.6902e+00,9.3079e+00,3.0751e+00,-1.6562e+00,9.3306e+00,3.0000e+00,-1.6562e+00,9.3306e+00,3.0751e+00,-1.6196e+00,9.3487e+00,3.0000e+00,-1.6196e+00,9.3487e+00,3.0751e+00,-1.5809e+00,9.3619e+00,3.0000e+00,-1.5809e+00,9.3619e+00,3.0751e+00,-1.5408e+00,9.3698e+00,3.0000e+00,-1.5408e+00,9.3698e+00,3.0751e+00,-1.5000e+00,9.3725e+00,3.0000e+00,-1.5000e+00,9.3725e+00,3.0751e+00,-1.4592e+00,9.3698e+00,3.0000e+00,-1.4592e+00,9.3698e+00,3.0751e+00,-1.4191e+00,9.3619e+00,3.0000e+00,-1.4191e+00,9.3619e+00,3.0751e+00,-1.3804e+00,9.3487e+00,3.0000e+00,-1.3804e+00,9.3487e+00,3.0751e+00,-1.3438e+00,9.3306e+00,3.0000e+00,-1.3438e+00,9.3306e+00,3.0751e+00,-1.3098e+00,9.3079e+00,3.0000e+00,-1.3098e+00,9.3079e+00,3.0751e+00,-1.2790e+00,9.2810e+00,3.0000e+00,-1.2790e+00,9.2810e+00,3.0751e+00,-1.2521e+00,9.2502e+00,3.0000e+00,-1.2521e+00,9.2502e+00,3.0751e+00,-1.2294e+00,9.2163e+00,3.0000e+00,-1.2294e+00,9.2163e+00,3.0751e+00,-1.2113e+00,9.1796e+00,3.0000e+00,-1.2113e+00,9.1796e+00,3.0751e+00,-1.1981e+00,9.1409e+00,3.0000e+00,-1.1981e+00,9.1409e+00,3.0751e+00,-1.1902e+00,9.1008e+00,3.0000e+00,-1.1902e+00,9.1008e+00,3.0751e+00,-1.1875e+00,9.0600e+00,3.0000e+00,-1.1875e+00,9.0600e+00,3.0751e+00,-1.1902e+00,9.0192e+00,3.0000e+00,-1.1902e+00,9.0192e+00,3.0751e+00,-1.1981e+00,8.9791e+00,3.0000e+00,-1.1981e+00,8.9791e+00,3.0751e+00,-1.2113e+00,8.9404e+00,3.0000e+00,-1.2113e+00,8.9404e+00,3.0751e+00,-1.2294e+00,8.9038e+00,3.0000e+00,-1.2294e+00,8.9038e+00,3.0751e+00,-1.2521e+00,8.8698e+00,3.0000e+00,-1.2521e+00,8.8698e+00,3.0751e+00,-1.2790e+00,8.8390e+00,3.0000e+00,-1.2790e+00,8.8390e+00,3.0751e+00,-1.3098e+00,8.8121e+00,3.0000e+00,-1.3098e+00,8.8121e+00,3.0751e+00,-1.3437e+00,8.7894e+00,3.0000e+00,-1.3437e+00,8.7894e+00,3.0751e+00,-1.3804e+00,8.7713e+00,3.0000e+00,-1.3804e+00,8.7713e+00,3.0751e+00,-1.4191e+00,8.7581e+00,3.0000e+00,-1.4191e+00,8.7581e+00,3.0751e+00,-1.4592e+00,8.7502e+00,3.0000e+00,-1.4592e+00,8.7502e+00,3.0751e+00});
			return Coordinate_7_526_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #527, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_527_vector()
		{
			MFVec3f Normal_7_527_vector = new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,1.0000e+00,6.1232e-17,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,1.2246e-16,-1.0000e+00,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-1.0000e+00,-1.8370e-16,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00});
			return Normal_7_527_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #533, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_533_point()
		{
			MFVec3f Coordinate_7_533_point = new MFVec3f(new double[] {8.2391e-01,9.6310e+00,5.1797e+00,8.7739e-01,9.6310e+00,5.1262e+00,8.2713e-01,9.5615e+00,5.1829e+00,8.8061e-01,9.5615e+00,5.1294e+00,8.3674e-01,9.4932e+00,5.1925e+00,8.9022e-01,9.4932e+00,5.1390e+00,8.5257e-01,9.4272e+00,5.2083e+00,9.0605e-01,9.4272e+00,5.1548e+00,8.7435e-01,9.3648e+00,5.2301e+00,9.2783e-01,9.3648e+00,5.1766e+00,9.0172e-01,9.3068e+00,5.2575e+00,9.5520e-01,9.3068e+00,5.2040e+00,9.3419e-01,9.2545e+00,5.2900e+00,9.8767e-01,9.2545e+00,5.2365e+00,9.7122e-01,9.2085e+00,5.3270e+00,1.0247e+00,9.2085e+00,5.2735e+00,1.0122e+00,9.1698e+00,5.3679e+00,1.0657e+00,9.1698e+00,5.3145e+00,1.0563e+00,9.1390e+00,5.4121e+00,1.1098e+00,9.1390e+00,5.3586e+00,1.1030e+00,9.1166e+00,5.4587e+00,1.1565e+00,9.1166e+00,5.4053e+00,1.1513e+00,9.1031e+00,5.5071e+00,1.2048e+00,9.1031e+00,5.4536e+00,1.2004e+00,9.0985e+00,5.5562e+00,1.2539e+00,9.0985e+00,5.5027e+00,1.2496e+00,9.1031e+00,5.6053e+00,1.3031e+00,9.1031e+00,5.5519e+00,1.2979e+00,9.1166e+00,5.6537e+00,1.3514e+00,9.1166e+00,5.6002e+00,1.3445e+00,9.1390e+00,5.7003e+00,1.3980e+00,9.1390e+00,5.6468e+00,1.3887e+00,9.1698e+00,5.7445e+00,1.4422e+00,9.1698e+00,5.6910e+00,1.4297e+00,9.2085e+00,5.7854e+00,1.4831e+00,9.2085e+00,5.7319e+00,1.4667e+00,9.2545e+00,5.8225e+00,1.5202e+00,9.2545e+00,5.7690e+00,1.4992e+00,9.3068e+00,5.8549e+00,1.5526e+00,9.3068e+00,5.8014e+00,1.5265e+00,9.3648e+00,5.8823e+00,1.5800e+00,9.3648e+00,5.8288e+00,1.5483e+00,9.4272e+00,5.9041e+00,1.6018e+00,9.4272e+00,5.8506e+00,1.5641e+00,9.4932e+00,5.9199e+00,1.6176e+00,9.4932e+00,5.8664e+00,1.5738e+00,9.5615e+00,5.9295e+00,1.6272e+00,9.5615e+00,5.8760e+00,1.5770e+00,9.6310e+00,5.9327e+00,1.6305e+00,9.6310e+00,5.8793e+00,1.5738e+00,9.7005e+00,5.9295e+00,1.6272e+00,9.7005e+00,5.8760e+00,1.5641e+00,9.7688e+00,5.9199e+00,1.6176e+00,9.7688e+00,5.8664e+00,1.5483e+00,9.8348e+00,5.9041e+00,1.6018e+00,9.8348e+00,5.8506e+00,1.5265e+00,9.8972e+00,5.8823e+00,1.5800e+00,9.8972e+00,5.8288e+00,1.4992e+00,9.9552e+00,5.8549e+00,1.5526e+00,9.9552e+00,5.8014e+00,1.4667e+00,1.0008e+01,5.8225e+00,1.5202e+00,1.0008e+01,5.7690e+00,1.4297e+00,1.0053e+01,5.7854e+00,1.4831e+00,1.0053e+01,5.7319e+00,1.3887e+00,1.0092e+01,5.7445e+00,1.4422e+00,1.0092e+01,5.6910e+00,1.3445e+00,1.0123e+01,5.7003e+00,1.3980e+00,1.0123e+01,5.6468e+00,1.2979e+00,1.0145e+01,5.6537e+00,1.3514e+00,1.0145e+01,5.6002e+00,1.2496e+00,1.0159e+01,5.6053e+00,1.3031e+00,1.0159e+01,5.5519e+00,1.2004e+00,1.0164e+01,5.5562e+00,1.2539e+00,1.0164e+01,5.5027e+00,1.1513e+00,1.0159e+01,5.5071e+00,1.2048e+00,1.0159e+01,5.4536e+00,1.1030e+00,1.0145e+01,5.4587e+00,1.1565e+00,1.0145e+01,5.4053e+00,1.0563e+00,1.0123e+01,5.4121e+00,1.1098e+00,1.0123e+01,5.3586e+00,1.0122e+00,1.0092e+01,5.3679e+00,1.0657e+00,1.0092e+01,5.3145e+00,9.7122e-01,1.0053e+01,5.3270e+00,1.0247e+00,1.0053e+01,5.2735e+00,9.3419e-01,1.0008e+01,5.2900e+00,9.8767e-01,1.0008e+01,5.2365e+00,9.0172e-01,9.9552e+00,5.2575e+00,9.5520e-01,9.9552e+00,5.2040e+00,8.7435e-01,9.8972e+00,5.2301e+00,9.2783e-01,9.8972e+00,5.1766e+00,8.5257e-01,9.8348e+00,5.2083e+00,9.0605e-01,9.8348e+00,5.1548e+00,8.3674e-01,9.7688e+00,5.1925e+00,8.9022e-01,9.7688e+00,5.1390e+00,8.2713e-01,9.7005e+00,5.1829e+00,8.8061e-01,9.7005e+00,5.1294e+00});
			return Coordinate_7_533_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #534, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_534_vector()
		{
			MFVec3f Normal_7_534_vector = new MFVec3f(new double[] {7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0106e-01,1.3053e-01,7.0106e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.1237e-01,5.0000e-01,6.1237e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.0000e-01,7.0711e-01,5.0000e-01,4.3046e-01,7.9335e-01,4.3046e-01,4.3046e-01,7.9335e-01,4.3046e-01,3.5355e-01,8.6603e-01,3.5355e-01,3.5355e-01,8.6603e-01,3.5355e-01,2.7060e-01,9.2388e-01,2.7060e-01,2.7060e-01,9.2388e-01,2.7060e-01,1.8301e-01,9.6593e-01,1.8301e-01,1.8301e-01,9.6593e-01,1.8301e-01,9.2296e-02,9.9144e-01,9.2296e-02,9.2296e-02,9.9144e-01,9.2296e-02,4.3298e-17,1.0000e+00,4.3298e-17,4.3298e-17,1.0000e+00,4.3298e-17,-9.2296e-02,9.9144e-01,-9.2296e-02,-9.2296e-02,9.9144e-01,-9.2296e-02,-1.8301e-01,9.6593e-01,-1.8301e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-7.0711e-01,1.2246e-16,-7.0711e-01,-7.0711e-01,1.2246e-16,-7.0711e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-1.8301e-01,-9.6593e-01,-1.8301e-01,-1.8301e-01,-9.6593e-01,-1.8301e-01,-9.2296e-02,-9.9144e-01,-9.2296e-02,-9.2296e-02,-9.9144e-01,-9.2296e-02,-1.2989e-16,-1.0000e+00,-1.2989e-16,-1.2989e-16,-1.0000e+00,-1.2989e-16,9.2296e-02,-9.9144e-01,9.2296e-02,9.2296e-02,-9.9144e-01,9.2296e-02,1.8301e-01,-9.6593e-01,1.8301e-01,1.8301e-01,-9.6593e-01,1.8301e-01,2.7060e-01,-9.2388e-01,2.7060e-01,2.7060e-01,-9.2388e-01,2.7060e-01,3.5355e-01,-8.6603e-01,3.5355e-01,3.5355e-01,-8.6603e-01,3.5355e-01,4.3046e-01,-7.9335e-01,4.3046e-01,4.3046e-01,-7.9335e-01,4.3046e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.6099e-01,-6.0876e-01,5.6099e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.8301e-01,-2.5882e-01,6.8301e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0106e-01,-1.3053e-01,7.0106e-01});
			return Normal_7_534_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #540, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_540_point()
		{
			MFVec3f Coordinate_7_540_point = new MFVec3f(new double[] {1.8154e+00,8.8810e+00,6.0642e+00,1.7619e+00,8.8810e+00,6.1176e+00,1.8148e+00,8.8687e+00,6.0636e+00,1.7613e+00,8.8687e+00,6.1171e+00,1.8131e+00,8.8567e+00,6.0619e+00,1.7596e+00,8.8567e+00,6.1154e+00,1.8103e+00,8.8450e+00,6.0591e+00,1.7568e+00,8.8450e+00,6.1126e+00,1.8065e+00,8.8340e+00,6.0553e+00,1.7530e+00,8.8340e+00,6.1087e+00,1.8016e+00,8.8238e+00,6.0504e+00,1.7481e+00,8.8238e+00,6.1039e+00,1.7959e+00,8.8145e+00,6.0447e+00,1.7424e+00,8.8145e+00,6.0982e+00,1.7894e+00,8.8064e+00,6.0382e+00,1.7359e+00,8.8064e+00,6.0916e+00,1.7821e+00,8.7996e+00,6.0309e+00,1.7287e+00,8.7996e+00,6.0844e+00,1.7743e+00,8.7942e+00,6.0231e+00,1.7209e+00,8.7942e+00,6.0766e+00,1.7661e+00,8.7902e+00,6.0149e+00,1.7126e+00,8.7902e+00,6.0684e+00,1.7576e+00,8.7878e+00,6.0064e+00,1.7041e+00,8.7878e+00,6.0599e+00,1.7489e+00,8.7870e+00,5.9977e+00,1.6954e+00,8.7870e+00,6.0512e+00,1.7402e+00,8.7878e+00,5.9890e+00,1.6867e+00,8.7878e+00,6.0425e+00,1.7317e+00,8.7902e+00,5.9805e+00,1.6782e+00,8.7902e+00,6.0340e+00,1.7235e+00,8.7942e+00,5.9723e+00,1.6700e+00,8.7942e+00,6.0257e+00,1.7157e+00,8.7996e+00,5.9645e+00,1.6622e+00,8.7996e+00,6.0179e+00,1.7084e+00,8.8064e+00,5.9572e+00,1.6550e+00,8.8064e+00,6.0107e+00,1.7019e+00,8.8145e+00,5.9507e+00,1.6484e+00,8.8145e+00,6.0042e+00,1.6962e+00,8.8238e+00,5.9450e+00,1.6427e+00,8.8238e+00,5.9984e+00,1.6913e+00,8.8340e+00,5.9401e+00,1.6379e+00,8.8340e+00,5.9936e+00,1.6875e+00,8.8450e+00,5.9363e+00,1.6340e+00,8.8450e+00,5.9898e+00,1.6847e+00,8.8567e+00,5.9335e+00,1.6312e+00,8.8567e+00,5.9870e+00,1.6830e+00,8.8687e+00,5.9318e+00,1.6295e+00,8.8687e+00,5.9853e+00,1.6824e+00,8.8810e+00,5.9312e+00,1.6289e+00,8.8810e+00,5.9847e+00,1.6830e+00,8.8933e+00,5.9318e+00,1.6295e+00,8.8933e+00,5.9853e+00,1.6847e+00,8.9053e+00,5.9335e+00,1.6312e+00,8.9053e+00,5.9870e+00,1.6875e+00,8.9170e+00,5.9363e+00,1.6340e+00,8.9170e+00,5.9898e+00,1.6913e+00,8.9280e+00,5.9401e+00,1.6379e+00,8.9280e+00,5.9936e+00,1.6962e+00,8.9382e+00,5.9450e+00,1.6427e+00,8.9382e+00,5.9984e+00,1.7019e+00,8.9475e+00,5.9507e+00,1.6484e+00,8.9475e+00,6.0042e+00,1.7084e+00,8.9556e+00,5.9572e+00,1.6550e+00,8.9556e+00,6.0107e+00,1.7157e+00,8.9624e+00,5.9645e+00,1.6622e+00,8.9624e+00,6.0179e+00,1.7235e+00,8.9678e+00,5.9723e+00,1.6700e+00,8.9678e+00,6.0257e+00,1.7317e+00,8.9718e+00,5.9805e+00,1.6782e+00,8.9718e+00,6.0340e+00,1.7402e+00,8.9742e+00,5.9890e+00,1.6867e+00,8.9742e+00,6.0425e+00,1.7489e+00,8.9750e+00,5.9977e+00,1.6954e+00,8.9750e+00,6.0512e+00,1.7576e+00,8.9742e+00,6.0064e+00,1.7041e+00,8.9742e+00,6.0599e+00,1.7661e+00,8.9718e+00,6.0149e+00,1.7126e+00,8.9718e+00,6.0684e+00,1.7743e+00,8.9678e+00,6.0231e+00,1.7209e+00,8.9678e+00,6.0766e+00,1.7821e+00,8.9624e+00,6.0309e+00,1.7287e+00,8.9624e+00,6.0844e+00,1.7894e+00,8.9556e+00,6.0382e+00,1.7359e+00,8.9556e+00,6.0916e+00,1.7959e+00,8.9475e+00,6.0447e+00,1.7424e+00,8.9475e+00,6.0982e+00,1.8016e+00,8.9382e+00,6.0504e+00,1.7481e+00,8.9382e+00,6.1039e+00,1.8065e+00,8.9280e+00,6.0553e+00,1.7530e+00,8.9280e+00,6.1087e+00,1.8103e+00,8.9170e+00,6.0591e+00,1.7568e+00,8.9170e+00,6.1126e+00,1.8131e+00,8.9053e+00,6.0619e+00,1.7596e+00,8.9053e+00,6.1154e+00,1.8148e+00,8.8933e+00,6.0636e+00,1.7613e+00,8.8933e+00,6.1171e+00});
			return Coordinate_7_540_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #541, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_541_vector()
		{
			MFVec3f Normal_7_541_vector = new MFVec3f(new double[] {-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-9.2296e-02,9.9144e-01,-9.2296e-02,-9.2296e-02,9.9144e-01,-9.2296e-02,-4.3298e-17,1.0000e+00,-4.3298e-17,-4.3298e-17,1.0000e+00,-4.3298e-17,9.2296e-02,9.9144e-01,9.2296e-02,9.2296e-02,9.9144e-01,9.2296e-02,1.8301e-01,9.6593e-01,1.8301e-01,1.8301e-01,9.6593e-01,1.8301e-01,2.7060e-01,9.2388e-01,2.7060e-01,2.7060e-01,9.2388e-01,2.7060e-01,3.5355e-01,8.6603e-01,3.5355e-01,3.5355e-01,8.6603e-01,3.5355e-01,4.3046e-01,7.9335e-01,4.3046e-01,4.3046e-01,7.9335e-01,4.3046e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.6099e-01,6.0876e-01,5.6099e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.8301e-01,2.5882e-01,6.8301e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0106e-01,-1.3053e-01,7.0106e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.1237e-01,-5.0000e-01,6.1237e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.0000e-01,-7.0711e-01,5.0000e-01,4.3046e-01,-7.9335e-01,4.3046e-01,4.3046e-01,-7.9335e-01,4.3046e-01,3.5355e-01,-8.6603e-01,3.5355e-01,3.5355e-01,-8.6603e-01,3.5355e-01,2.7060e-01,-9.2388e-01,2.7060e-01,2.7060e-01,-9.2388e-01,2.7060e-01,1.8301e-01,-9.6593e-01,1.8301e-01,1.8301e-01,-9.6593e-01,1.8301e-01,9.2296e-02,-9.9144e-01,9.2296e-02,9.2296e-02,-9.9144e-01,9.2296e-02,1.2989e-16,-1.0000e+00,1.2989e-16,1.2989e-16,-1.0000e+00,1.2989e-16,-9.2296e-02,-9.9144e-01,-9.2296e-02,-9.2296e-02,-9.9144e-01,-9.2296e-02,-1.8301e-01,-9.6593e-01,-1.8301e-01,-1.8301e-01,-9.6593e-01,-1.8301e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01});
			return Normal_7_541_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #547, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_547_point()
		{
			MFVec3f Coordinate_7_547_point = new MFVec3f(new double[] {1.8154e+00,1.0381e+01,6.0642e+00,1.7619e+00,1.0381e+01,6.1176e+00,1.8148e+00,1.0369e+01,6.0636e+00,1.7613e+00,1.0369e+01,6.1171e+00,1.8131e+00,1.0357e+01,6.0619e+00,1.7596e+00,1.0357e+01,6.1154e+00,1.8103e+00,1.0345e+01,6.0591e+00,1.7568e+00,1.0345e+01,6.1126e+00,1.8065e+00,1.0334e+01,6.0553e+00,1.7530e+00,1.0334e+01,6.1087e+00,1.8016e+00,1.0324e+01,6.0504e+00,1.7481e+00,1.0324e+01,6.1039e+00,1.7959e+00,1.0315e+01,6.0447e+00,1.7424e+00,1.0315e+01,6.0982e+00,1.7894e+00,1.0306e+01,6.0382e+00,1.7359e+00,1.0306e+01,6.0916e+00,1.7821e+00,1.0300e+01,6.0309e+00,1.7287e+00,1.0300e+01,6.0844e+00,1.7743e+00,1.0294e+01,6.0231e+00,1.7209e+00,1.0294e+01,6.0766e+00,1.7661e+00,1.0290e+01,6.0149e+00,1.7126e+00,1.0290e+01,6.0684e+00,1.7576e+00,1.0288e+01,6.0064e+00,1.7041e+00,1.0288e+01,6.0599e+00,1.7489e+00,1.0287e+01,5.9977e+00,1.6954e+00,1.0287e+01,6.0512e+00,1.7402e+00,1.0288e+01,5.9890e+00,1.6867e+00,1.0288e+01,6.0425e+00,1.7317e+00,1.0290e+01,5.9805e+00,1.6782e+00,1.0290e+01,6.0340e+00,1.7235e+00,1.0294e+01,5.9723e+00,1.6700e+00,1.0294e+01,6.0257e+00,1.7157e+00,1.0300e+01,5.9645e+00,1.6622e+00,1.0300e+01,6.0179e+00,1.7084e+00,1.0306e+01,5.9572e+00,1.6550e+00,1.0306e+01,6.0107e+00,1.7019e+00,1.0315e+01,5.9507e+00,1.6484e+00,1.0315e+01,6.0042e+00,1.6962e+00,1.0324e+01,5.9450e+00,1.6427e+00,1.0324e+01,5.9984e+00,1.6913e+00,1.0334e+01,5.9401e+00,1.6379e+00,1.0334e+01,5.9936e+00,1.6875e+00,1.0345e+01,5.9363e+00,1.6340e+00,1.0345e+01,5.9898e+00,1.6847e+00,1.0357e+01,5.9335e+00,1.6312e+00,1.0357e+01,5.9870e+00,1.6830e+00,1.0369e+01,5.9318e+00,1.6295e+00,1.0369e+01,5.9853e+00,1.6824e+00,1.0381e+01,5.9312e+00,1.6289e+00,1.0381e+01,5.9847e+00,1.6830e+00,1.0393e+01,5.9318e+00,1.6295e+00,1.0393e+01,5.9853e+00,1.6847e+00,1.0405e+01,5.9335e+00,1.6312e+00,1.0405e+01,5.9870e+00,1.6875e+00,1.0417e+01,5.9363e+00,1.6340e+00,1.0417e+01,5.9898e+00,1.6913e+00,1.0428e+01,5.9401e+00,1.6379e+00,1.0428e+01,5.9936e+00,1.6962e+00,1.0438e+01,5.9450e+00,1.6427e+00,1.0438e+01,5.9984e+00,1.7019e+00,1.0447e+01,5.9507e+00,1.6484e+00,1.0447e+01,6.0042e+00,1.7084e+00,1.0456e+01,5.9572e+00,1.6550e+00,1.0456e+01,6.0107e+00,1.7157e+00,1.0462e+01,5.9645e+00,1.6622e+00,1.0462e+01,6.0179e+00,1.7235e+00,1.0468e+01,5.9723e+00,1.6700e+00,1.0468e+01,6.0257e+00,1.7317e+00,1.0472e+01,5.9805e+00,1.6782e+00,1.0472e+01,6.0340e+00,1.7402e+00,1.0474e+01,5.9890e+00,1.6867e+00,1.0474e+01,6.0425e+00,1.7489e+00,1.0475e+01,5.9977e+00,1.6954e+00,1.0475e+01,6.0512e+00,1.7576e+00,1.0474e+01,6.0064e+00,1.7041e+00,1.0474e+01,6.0599e+00,1.7661e+00,1.0472e+01,6.0149e+00,1.7126e+00,1.0472e+01,6.0684e+00,1.7743e+00,1.0468e+01,6.0231e+00,1.7209e+00,1.0468e+01,6.0766e+00,1.7821e+00,1.0462e+01,6.0309e+00,1.7287e+00,1.0462e+01,6.0844e+00,1.7894e+00,1.0456e+01,6.0382e+00,1.7359e+00,1.0456e+01,6.0916e+00,1.7959e+00,1.0447e+01,6.0447e+00,1.7424e+00,1.0447e+01,6.0982e+00,1.8016e+00,1.0438e+01,6.0504e+00,1.7481e+00,1.0438e+01,6.1039e+00,1.8065e+00,1.0428e+01,6.0553e+00,1.7530e+00,1.0428e+01,6.1087e+00,1.8103e+00,1.0417e+01,6.0591e+00,1.7568e+00,1.0417e+01,6.1126e+00,1.8131e+00,1.0405e+01,6.0619e+00,1.7596e+00,1.0405e+01,6.1154e+00,1.8148e+00,1.0393e+01,6.0636e+00,1.7613e+00,1.0393e+01,6.1171e+00});
			return Coordinate_7_547_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #548, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_548_vector()
		{
			MFVec3f Normal_7_548_vector = new MFVec3f(new double[] {-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-9.2296e-02,9.9144e-01,-9.2296e-02,-9.2296e-02,9.9144e-01,-9.2296e-02,-4.3298e-17,1.0000e+00,-4.3298e-17,-4.3298e-17,1.0000e+00,-4.3298e-17,9.2296e-02,9.9144e-01,9.2296e-02,9.2296e-02,9.9144e-01,9.2296e-02,1.8301e-01,9.6593e-01,1.8301e-01,1.8301e-01,9.6593e-01,1.8301e-01,2.7060e-01,9.2388e-01,2.7060e-01,2.7060e-01,9.2388e-01,2.7060e-01,3.5355e-01,8.6603e-01,3.5355e-01,3.5355e-01,8.6603e-01,3.5355e-01,4.3046e-01,7.9335e-01,4.3046e-01,4.3046e-01,7.9335e-01,4.3046e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.6099e-01,6.0876e-01,5.6099e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.8301e-01,2.5882e-01,6.8301e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0106e-01,-1.3053e-01,7.0106e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.1237e-01,-5.0000e-01,6.1237e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.0000e-01,-7.0711e-01,5.0000e-01,4.3046e-01,-7.9335e-01,4.3046e-01,4.3046e-01,-7.9335e-01,4.3046e-01,3.5355e-01,-8.6603e-01,3.5355e-01,3.5355e-01,-8.6603e-01,3.5355e-01,2.7060e-01,-9.2388e-01,2.7060e-01,2.7060e-01,-9.2388e-01,2.7060e-01,1.8301e-01,-9.6593e-01,1.8301e-01,1.8301e-01,-9.6593e-01,1.8301e-01,9.2296e-02,-9.9144e-01,9.2296e-02,9.2296e-02,-9.9144e-01,9.2296e-02,1.2989e-16,-1.0000e+00,1.2989e-16,1.2989e-16,-1.0000e+00,1.2989e-16,-9.2296e-02,-9.9144e-01,-9.2296e-02,-9.2296e-02,-9.9144e-01,-9.2296e-02,-1.8301e-01,-9.6593e-01,-1.8301e-01,-1.8301e-01,-9.6593e-01,-1.8301e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01});
			return Normal_7_548_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #554, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_554_point()
		{
			MFVec3f Coordinate_7_554_point = new MFVec3f(new double[] {9.3148e-01,8.8810e+00,5.1803e+00,8.7800e-01,8.8810e+00,5.2338e+00,9.3091e-01,8.8687e+00,5.1797e+00,8.7743e-01,8.8687e+00,5.2332e+00,9.2922e-01,8.8567e+00,5.1780e+00,8.7574e-01,8.8567e+00,5.2315e+00,9.2642e-01,8.8450e+00,5.1752e+00,8.7294e-01,8.8450e+00,5.2287e+00,9.2258e-01,8.8340e+00,5.1714e+00,8.6910e-01,8.8340e+00,5.2249e+00,9.1775e-01,8.8238e+00,5.1665e+00,8.6427e-01,8.8238e+00,5.2200e+00,9.1201e-01,8.8145e+00,5.1608e+00,8.5853e-01,8.8145e+00,5.2143e+00,9.0548e-01,8.8064e+00,5.1543e+00,8.5200e-01,8.8064e+00,5.2078e+00,8.9825e-01,8.7996e+00,5.1470e+00,8.4477e-01,8.7996e+00,5.2005e+00,8.9045e-01,8.7942e+00,5.1392e+00,8.3697e-01,8.7942e+00,5.1927e+00,8.8222e-01,8.7902e+00,5.1310e+00,8.2874e-01,8.7902e+00,5.1845e+00,8.7369e-01,8.7878e+00,5.1225e+00,8.2021e-01,8.7878e+00,5.1760e+00,8.6501e-01,8.7870e+00,5.1138e+00,8.1153e-01,8.7870e+00,5.1673e+00,8.5634e-01,8.7878e+00,5.1051e+00,8.0286e-01,8.7878e+00,5.1586e+00,8.4781e-01,8.7902e+00,5.0966e+00,7.9433e-01,8.7902e+00,5.1501e+00,8.3958e-01,8.7942e+00,5.0884e+00,7.8610e-01,8.7942e+00,5.1419e+00,8.3178e-01,8.7996e+00,5.0806e+00,7.7830e-01,8.7996e+00,5.1341e+00,8.2455e-01,8.8064e+00,5.0733e+00,7.7107e-01,8.8064e+00,5.1268e+00,8.1801e-01,8.8145e+00,5.0668e+00,7.6453e-01,8.8145e+00,5.1203e+00,8.1228e-01,8.8238e+00,5.0611e+00,7.5880e-01,8.8238e+00,5.1146e+00,8.0745e-01,8.8340e+00,5.0562e+00,7.5397e-01,8.8340e+00,5.1097e+00,8.0361e-01,8.8450e+00,5.0524e+00,7.5012e-01,8.8450e+00,5.1059e+00,8.0081e-01,8.8567e+00,5.0496e+00,7.4733e-01,8.8567e+00,5.1031e+00,7.9911e-01,8.8687e+00,5.0479e+00,7.4563e-01,8.8687e+00,5.1014e+00,7.9855e-01,8.8810e+00,5.0473e+00,7.4507e-01,8.8810e+00,5.1008e+00,7.9911e-01,8.8933e+00,5.0479e+00,7.4563e-01,8.8933e+00,5.1014e+00,8.0081e-01,8.9053e+00,5.0496e+00,7.4733e-01,8.9053e+00,5.1031e+00,8.0361e-01,8.9170e+00,5.0524e+00,7.5012e-01,8.9170e+00,5.1059e+00,8.0745e-01,8.9280e+00,5.0562e+00,7.5397e-01,8.9280e+00,5.1097e+00,8.1228e-01,8.9382e+00,5.0611e+00,7.5880e-01,8.9382e+00,5.1146e+00,8.1801e-01,8.9475e+00,5.0668e+00,7.6453e-01,8.9475e+00,5.1203e+00,8.2455e-01,8.9556e+00,5.0733e+00,7.7107e-01,8.9556e+00,5.1268e+00,8.3178e-01,8.9624e+00,5.0806e+00,7.7830e-01,8.9624e+00,5.1341e+00,8.3958e-01,8.9678e+00,5.0884e+00,7.8610e-01,8.9678e+00,5.1419e+00,8.4781e-01,8.9718e+00,5.0966e+00,7.9433e-01,8.9718e+00,5.1501e+00,8.5634e-01,8.9742e+00,5.1051e+00,8.0286e-01,8.9742e+00,5.1586e+00,8.6501e-01,8.9750e+00,5.1138e+00,8.1153e-01,8.9750e+00,5.1673e+00,8.7369e-01,8.9742e+00,5.1225e+00,8.2021e-01,8.9742e+00,5.1760e+00,8.8222e-01,8.9718e+00,5.1310e+00,8.2874e-01,8.9718e+00,5.1845e+00,8.9045e-01,8.9678e+00,5.1392e+00,8.3697e-01,8.9678e+00,5.1927e+00,8.9825e-01,8.9624e+00,5.1470e+00,8.4477e-01,8.9624e+00,5.2005e+00,9.0548e-01,8.9556e+00,5.1543e+00,8.5200e-01,8.9556e+00,5.2078e+00,9.1201e-01,8.9475e+00,5.1608e+00,8.5853e-01,8.9475e+00,5.2143e+00,9.1775e-01,8.9382e+00,5.1665e+00,8.6427e-01,8.9382e+00,5.2200e+00,9.2258e-01,8.9280e+00,5.1714e+00,8.6910e-01,8.9280e+00,5.2249e+00,9.2642e-01,8.9170e+00,5.1752e+00,8.7294e-01,8.9170e+00,5.2287e+00,9.2922e-01,8.9053e+00,5.1780e+00,8.7574e-01,8.9053e+00,5.2315e+00,9.3091e-01,8.8933e+00,5.1797e+00,8.7743e-01,8.8933e+00,5.2332e+00});
			return Coordinate_7_554_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #555, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_555_vector()
		{
			MFVec3f Normal_7_555_vector = new MFVec3f(new double[] {-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-9.2296e-02,9.9144e-01,-9.2296e-02,-9.2296e-02,9.9144e-01,-9.2296e-02,-4.3298e-17,1.0000e+00,-4.3298e-17,-4.3298e-17,1.0000e+00,-4.3298e-17,9.2296e-02,9.9144e-01,9.2296e-02,9.2296e-02,9.9144e-01,9.2296e-02,1.8301e-01,9.6593e-01,1.8301e-01,1.8301e-01,9.6593e-01,1.8301e-01,2.7060e-01,9.2388e-01,2.7060e-01,2.7060e-01,9.2388e-01,2.7060e-01,3.5355e-01,8.6603e-01,3.5355e-01,3.5355e-01,8.6603e-01,3.5355e-01,4.3046e-01,7.9335e-01,4.3046e-01,4.3046e-01,7.9335e-01,4.3046e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.6099e-01,6.0876e-01,5.6099e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.8301e-01,2.5882e-01,6.8301e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0106e-01,-1.3053e-01,7.0106e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.1237e-01,-5.0000e-01,6.1237e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.0000e-01,-7.0711e-01,5.0000e-01,4.3046e-01,-7.9335e-01,4.3046e-01,4.3046e-01,-7.9335e-01,4.3046e-01,3.5355e-01,-8.6603e-01,3.5355e-01,3.5355e-01,-8.6603e-01,3.5355e-01,2.7060e-01,-9.2388e-01,2.7060e-01,2.7060e-01,-9.2388e-01,2.7060e-01,1.8301e-01,-9.6593e-01,1.8301e-01,1.8301e-01,-9.6593e-01,1.8301e-01,9.2296e-02,-9.9144e-01,9.2296e-02,9.2296e-02,-9.9144e-01,9.2296e-02,1.2989e-16,-1.0000e+00,1.2989e-16,1.2989e-16,-1.0000e+00,1.2989e-16,-9.2296e-02,-9.9144e-01,-9.2296e-02,-9.2296e-02,-9.9144e-01,-9.2296e-02,-1.8301e-01,-9.6593e-01,-1.8301e-01,-1.8301e-01,-9.6593e-01,-1.8301e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01});
			return Normal_7_555_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #561, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_561_point()
		{
			MFVec3f Coordinate_7_561_point = new MFVec3f(new double[] {9.3148e-01,1.0381e+01,5.1803e+00,8.7800e-01,1.0381e+01,5.2338e+00,9.3091e-01,1.0369e+01,5.1797e+00,8.7743e-01,1.0369e+01,5.2332e+00,9.2922e-01,1.0357e+01,5.1780e+00,8.7574e-01,1.0357e+01,5.2315e+00,9.2642e-01,1.0345e+01,5.1752e+00,8.7294e-01,1.0345e+01,5.2287e+00,9.2258e-01,1.0334e+01,5.1714e+00,8.6910e-01,1.0334e+01,5.2249e+00,9.1775e-01,1.0324e+01,5.1665e+00,8.6427e-01,1.0324e+01,5.2200e+00,9.1201e-01,1.0315e+01,5.1608e+00,8.5853e-01,1.0315e+01,5.2143e+00,9.0548e-01,1.0306e+01,5.1543e+00,8.5200e-01,1.0306e+01,5.2078e+00,8.9825e-01,1.0300e+01,5.1470e+00,8.4477e-01,1.0300e+01,5.2005e+00,8.9045e-01,1.0294e+01,5.1392e+00,8.3697e-01,1.0294e+01,5.1927e+00,8.8222e-01,1.0290e+01,5.1310e+00,8.2874e-01,1.0290e+01,5.1845e+00,8.7369e-01,1.0288e+01,5.1225e+00,8.2021e-01,1.0288e+01,5.1760e+00,8.6501e-01,1.0287e+01,5.1138e+00,8.1153e-01,1.0287e+01,5.1673e+00,8.5634e-01,1.0288e+01,5.1051e+00,8.0286e-01,1.0288e+01,5.1586e+00,8.4781e-01,1.0290e+01,5.0966e+00,7.9433e-01,1.0290e+01,5.1501e+00,8.3958e-01,1.0294e+01,5.0884e+00,7.8610e-01,1.0294e+01,5.1419e+00,8.3178e-01,1.0300e+01,5.0806e+00,7.7830e-01,1.0300e+01,5.1341e+00,8.2455e-01,1.0306e+01,5.0733e+00,7.7107e-01,1.0306e+01,5.1268e+00,8.1801e-01,1.0315e+01,5.0668e+00,7.6453e-01,1.0315e+01,5.1203e+00,8.1228e-01,1.0324e+01,5.0611e+00,7.5880e-01,1.0324e+01,5.1146e+00,8.0745e-01,1.0334e+01,5.0562e+00,7.5397e-01,1.0334e+01,5.1097e+00,8.0361e-01,1.0345e+01,5.0524e+00,7.5012e-01,1.0345e+01,5.1059e+00,8.0081e-01,1.0357e+01,5.0496e+00,7.4733e-01,1.0357e+01,5.1031e+00,7.9911e-01,1.0369e+01,5.0479e+00,7.4563e-01,1.0369e+01,5.1014e+00,7.9855e-01,1.0381e+01,5.0473e+00,7.4507e-01,1.0381e+01,5.1008e+00,7.9911e-01,1.0393e+01,5.0479e+00,7.4563e-01,1.0393e+01,5.1014e+00,8.0081e-01,1.0405e+01,5.0496e+00,7.4733e-01,1.0405e+01,5.1031e+00,8.0361e-01,1.0417e+01,5.0524e+00,7.5012e-01,1.0417e+01,5.1059e+00,8.0745e-01,1.0428e+01,5.0562e+00,7.5397e-01,1.0428e+01,5.1097e+00,8.1228e-01,1.0438e+01,5.0611e+00,7.5880e-01,1.0438e+01,5.1146e+00,8.1801e-01,1.0447e+01,5.0668e+00,7.6453e-01,1.0447e+01,5.1203e+00,8.2455e-01,1.0456e+01,5.0733e+00,7.7107e-01,1.0456e+01,5.1268e+00,8.3178e-01,1.0462e+01,5.0806e+00,7.7830e-01,1.0462e+01,5.1341e+00,8.3958e-01,1.0468e+01,5.0884e+00,7.8610e-01,1.0468e+01,5.1419e+00,8.4781e-01,1.0472e+01,5.0966e+00,7.9433e-01,1.0472e+01,5.1501e+00,8.5634e-01,1.0474e+01,5.1051e+00,8.0286e-01,1.0474e+01,5.1586e+00,8.6501e-01,1.0475e+01,5.1138e+00,8.1153e-01,1.0475e+01,5.1673e+00,8.7369e-01,1.0474e+01,5.1225e+00,8.2021e-01,1.0474e+01,5.1760e+00,8.8222e-01,1.0472e+01,5.1310e+00,8.2874e-01,1.0472e+01,5.1845e+00,8.9045e-01,1.0468e+01,5.1392e+00,8.3697e-01,1.0468e+01,5.1927e+00,8.9825e-01,1.0462e+01,5.1470e+00,8.4477e-01,1.0462e+01,5.2005e+00,9.0548e-01,1.0456e+01,5.1543e+00,8.5200e-01,1.0456e+01,5.2078e+00,9.1201e-01,1.0447e+01,5.1608e+00,8.5853e-01,1.0447e+01,5.2143e+00,9.1775e-01,1.0438e+01,5.1665e+00,8.6427e-01,1.0438e+01,5.2200e+00,9.2258e-01,1.0428e+01,5.1714e+00,8.6910e-01,1.0428e+01,5.2249e+00,9.2642e-01,1.0417e+01,5.1752e+00,8.7294e-01,1.0417e+01,5.2287e+00,9.2922e-01,1.0405e+01,5.1780e+00,8.7574e-01,1.0405e+01,5.2315e+00,9.3091e-01,1.0393e+01,5.1797e+00,8.7743e-01,1.0393e+01,5.2332e+00});
			return Coordinate_7_561_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #562, 288 total numbers made up of 96 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_562_vector()
		{
			MFVec3f Normal_7_562_vector = new MFVec3f(new double[] {-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-7.0106e-01,1.3053e-01,-7.0106e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.8301e-01,2.5882e-01,-6.8301e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.5328e-01,3.8268e-01,-6.5328e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-6.1237e-01,5.0000e-01,-6.1237e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.6099e-01,6.0876e-01,-5.6099e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-5.0000e-01,7.0711e-01,-5.0000e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-4.3046e-01,7.9335e-01,-4.3046e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-3.5355e-01,8.6603e-01,-3.5355e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-2.7060e-01,9.2388e-01,-2.7060e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-1.8301e-01,9.6593e-01,-1.8301e-01,-9.2296e-02,9.9144e-01,-9.2296e-02,-9.2296e-02,9.9144e-01,-9.2296e-02,-4.3298e-17,1.0000e+00,-4.3298e-17,-4.3298e-17,1.0000e+00,-4.3298e-17,9.2296e-02,9.9144e-01,9.2296e-02,9.2296e-02,9.9144e-01,9.2296e-02,1.8301e-01,9.6593e-01,1.8301e-01,1.8301e-01,9.6593e-01,1.8301e-01,2.7060e-01,9.2388e-01,2.7060e-01,2.7060e-01,9.2388e-01,2.7060e-01,3.5355e-01,8.6603e-01,3.5355e-01,3.5355e-01,8.6603e-01,3.5355e-01,4.3046e-01,7.9335e-01,4.3046e-01,4.3046e-01,7.9335e-01,4.3046e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.6099e-01,6.0876e-01,5.6099e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.8301e-01,2.5882e-01,6.8301e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0106e-01,-1.3053e-01,7.0106e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.1237e-01,-5.0000e-01,6.1237e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.0000e-01,-7.0711e-01,5.0000e-01,4.3046e-01,-7.9335e-01,4.3046e-01,4.3046e-01,-7.9335e-01,4.3046e-01,3.5355e-01,-8.6603e-01,3.5355e-01,3.5355e-01,-8.6603e-01,3.5355e-01,2.7060e-01,-9.2388e-01,2.7060e-01,2.7060e-01,-9.2388e-01,2.7060e-01,1.8301e-01,-9.6593e-01,1.8301e-01,1.8301e-01,-9.6593e-01,1.8301e-01,9.2296e-02,-9.9144e-01,9.2296e-02,9.2296e-02,-9.9144e-01,9.2296e-02,1.2989e-16,-1.0000e+00,1.2989e-16,1.2989e-16,-1.0000e+00,1.2989e-16,-9.2296e-02,-9.9144e-01,-9.2296e-02,-9.2296e-02,-9.9144e-01,-9.2296e-02,-1.8301e-01,-9.6593e-01,-1.8301e-01,-1.8301e-01,-9.6593e-01,-1.8301e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-2.7060e-01,-9.2388e-01,-2.7060e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-3.5355e-01,-8.6603e-01,-3.5355e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-4.3046e-01,-7.9335e-01,-4.3046e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.0000e-01,-7.0711e-01,-5.0000e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-5.6099e-01,-6.0876e-01,-5.6099e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.1237e-01,-5.0000e-01,-6.1237e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.5328e-01,-3.8268e-01,-6.5328e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-6.8301e-01,-2.5882e-01,-6.8301e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01,-7.0106e-01,-1.3053e-01,-7.0106e-01});
			return Normal_7_562_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #730, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_730_point()
		{
			MFVec3f Coordinate_7_730_point = new MFVec3f(new double[] {-8.3790e+00,1.7112e+01,2.0232e+00,-8.3790e+00,1.7087e+01,2.0232e+00,-8.3775e+00,1.7112e+01,2.0217e+00,-8.3775e+00,1.7087e+01,2.0217e+00,-8.3762e+00,1.7112e+01,2.0200e+00,-8.3762e+00,1.7087e+01,2.0200e+00,-8.3752e+00,1.7112e+01,2.0181e+00,-8.3752e+00,1.7087e+01,2.0181e+00,-8.3745e+00,1.7112e+01,2.0161e+00,-8.3745e+00,1.7087e+01,2.0161e+00,-8.3740e+00,1.7112e+01,2.0140e+00,-8.3740e+00,1.7087e+01,2.0140e+00,-8.3737e+00,1.7112e+01,2.0119e+00,-8.3737e+00,1.7087e+01,2.0119e+00,-8.3738e+00,1.7112e+01,2.0098e+00,-8.3738e+00,1.7087e+01,2.0098e+00,-8.3741e+00,1.7112e+01,2.0077e+00,-8.3741e+00,1.7087e+01,2.0077e+00,-8.3747e+00,1.7112e+01,2.0056e+00,-8.3747e+00,1.7087e+01,2.0056e+00,-8.3756e+00,1.7112e+01,2.0037e+00,-8.3756e+00,1.7087e+01,2.0037e+00,-8.3767e+00,1.7112e+01,2.0019e+00,-8.3767e+00,1.7087e+01,2.0019e+00,-8.3780e+00,1.7112e+01,2.0002e+00,-8.3780e+00,1.7087e+01,2.0002e+00,-8.3795e+00,1.7112e+01,1.9987e+00,-8.3795e+00,1.7087e+01,1.9987e+00,-8.3813e+00,1.7112e+01,1.9975e+00,-8.3813e+00,1.7087e+01,1.9975e+00,-8.3831e+00,1.7112e+01,1.9965e+00,-8.3831e+00,1.7087e+01,1.9965e+00,-8.3851e+00,1.7112e+01,1.9957e+00,-8.3851e+00,1.7087e+01,1.9957e+00,-8.3872e+00,1.7112e+01,1.9952e+00,-8.3872e+00,1.7087e+01,1.9952e+00,-8.3893e+00,1.7112e+01,1.9949e+00,-8.3893e+00,1.7087e+01,1.9949e+00,-8.3914e+00,1.7112e+01,1.9950e+00,-8.3914e+00,1.7087e+01,1.9950e+00});
			return Coordinate_7_730_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #731, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_731_vector()
		{
			MFVec3f Normal_7_731_vector = new MFVec3f(new double[] {6.7893e-01,0.0000e+00,7.3420e-01,6.7893e-01,0.0000e+00,7.3420e-01,7.6869e-01,0.0000e+00,6.3963e-01,7.6869e-01,0.0000e+00,6.3963e-01,8.4537e-01,0.0000e+00,5.3418e-01,8.4537e-01,0.0000e+00,5.3418e-01,9.0769e-01,0.0000e+00,4.1965e-01,9.0769e-01,0.0000e+00,4.1965e-01,9.5457e-01,0.0000e+00,2.9799e-01,9.5457e-01,0.0000e+00,2.9799e-01,9.8523e-01,0.0000e+00,1.7126e-01,9.8523e-01,0.0000e+00,1.7126e-01,9.9913e-01,0.0000e+00,4.1619e-02,9.9913e-01,0.0000e+00,4.1619e-02,9.9606e-01,0.0000e+00,-8.8728e-02,9.9606e-01,0.0000e+00,-8.8728e-02,9.7605e-01,0.0000e+00,-2.1757e-01,9.7605e-01,0.0000e+00,-2.1757e-01,9.3944e-01,0.0000e+00,-3.4271e-01,9.3944e-01,0.0000e+00,-3.4271e-01,8.8687e-01,0.0000e+00,-4.6202e-01,8.8687e-01,0.0000e+00,-4.6202e-01,8.1922e-01,0.0000e+00,-5.7348e-01,8.1922e-01,0.0000e+00,-5.7348e-01,7.3764e-01,0.0000e+00,-6.7519e-01,7.3764e-01,0.0000e+00,-6.7519e-01,6.4353e-01,0.0000e+00,-7.6542e-01,6.4353e-01,0.0000e+00,-7.6542e-01,5.3847e-01,0.0000e+00,-8.4264e-01,5.3847e-01,0.0000e+00,-8.4264e-01,4.2426e-01,0.0000e+00,-9.0554e-01,4.2426e-01,0.0000e+00,-9.0554e-01,3.0284e-01,0.0000e+00,-9.5304e-01,3.0284e-01,0.0000e+00,-9.5304e-01,1.7627e-01,0.0000e+00,-9.8434e-01,1.7627e-01,0.0000e+00,-9.8434e-01,4.6700e-02,0.0000e+00,-9.9891e-01,4.6700e-02,0.0000e+00,-9.9891e-01,-8.3661e-02,0.0000e+00,-9.9649e-01,-8.3661e-02,0.0000e+00,-9.9649e-01});
			return Normal_7_731_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #743, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_743_point()
		{
			MFVec3f Coordinate_7_743_point = new MFVec3f(new double[] {-8.8160e+00,1.7112e+01,2.4274e+00,-8.8160e+00,1.7087e+01,2.4274e+00,-8.8271e+00,1.7112e+01,2.4391e+00,-8.8271e+00,1.7087e+01,2.4391e+00,-8.8367e+00,1.7112e+01,2.4521e+00,-8.8367e+00,1.7087e+01,2.4521e+00,-8.8446e+00,1.7112e+01,2.4662e+00,-8.8446e+00,1.7087e+01,2.4662e+00,-8.8507e+00,1.7112e+01,2.4812e+00,-8.8507e+00,1.7087e+01,2.4812e+00,-8.8548e+00,1.7112e+01,2.4968e+00,-8.8548e+00,1.7087e+01,2.4968e+00,-8.8569e+00,1.7112e+01,2.5129e+00,-8.8569e+00,1.7087e+01,2.5129e+00,-8.8570e+00,1.7112e+01,2.5291e+00,-8.8570e+00,1.7087e+01,2.5291e+00,-8.8550e+00,1.7112e+01,2.5451e+00,-8.8550e+00,1.7087e+01,2.5451e+00,-8.8511e+00,1.7112e+01,2.5608e+00,-8.8511e+00,1.7087e+01,2.5608e+00,-8.8452e+00,1.7112e+01,2.5759e+00,-8.8452e+00,1.7087e+01,2.5759e+00,-8.8374e+00,1.7112e+01,2.5901e+00,-8.8374e+00,1.7087e+01,2.5901e+00,-8.8280e+00,1.7112e+01,2.6032e+00,-8.8280e+00,1.7087e+01,2.6032e+00,-8.8169e+00,1.7112e+01,2.6150e+00,-8.8169e+00,1.7087e+01,2.6150e+00,-8.8045e+00,1.7112e+01,2.6253e+00,-8.8045e+00,1.7087e+01,2.6253e+00,-8.7909e+00,1.7112e+01,2.6340e+00,-8.7909e+00,1.7087e+01,2.6340e+00,-8.7762e+00,1.7112e+01,2.6409e+00,-8.7762e+00,1.7087e+01,2.6409e+00,-8.7609e+00,1.7112e+01,2.6459e+00,-8.7609e+00,1.7087e+01,2.6459e+00,-8.7450e+00,1.7112e+01,2.6490e+00,-8.7450e+00,1.7087e+01,2.6490e+00,-8.7288e+00,1.7112e+01,2.6500e+00,-8.7288e+00,1.7087e+01,2.6500e+00});
			return Coordinate_7_743_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #744, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_744_vector()
		{
			MFVec3f Normal_7_744_vector = new MFVec3f(new double[] {6.7893e-01,-0.0000e+00,7.3420e-01,6.7893e-01,-0.0000e+00,7.3420e-01,7.6586e-01,-0.0000e+00,6.4301e-01,7.6586e-01,-0.0000e+00,6.4301e-01,8.4063e-01,-0.0000e+00,5.4161e-01,8.4063e-01,-0.0000e+00,5.4161e-01,9.0206e-01,-0.0000e+00,4.3162e-01,9.0206e-01,-0.0000e+00,4.3162e-01,9.4917e-01,-0.0000e+00,3.1477e-01,9.4917e-01,-0.0000e+00,3.1477e-01,9.8121e-01,-0.0000e+00,1.9293e-01,9.8121e-01,-0.0000e+00,1.9293e-01,9.9768e-01,-0.0000e+00,6.8029e-02,9.9768e-01,-0.0000e+00,6.8029e-02,9.9832e-01,-0.0000e+00,-5.7953e-02,9.9832e-01,-0.0000e+00,-5.7953e-02,9.8311e-01,-0.0000e+00,-1.8302e-01,9.8311e-01,-0.0000e+00,-1.8302e-01,9.5230e-01,-0.0000e+00,-3.0517e-01,9.5230e-01,-0.0000e+00,-3.0517e-01,9.0637e-01,-0.0000e+00,-4.2249e-01,9.0637e-01,-0.0000e+00,-4.2249e-01,8.4605e-01,-0.0000e+00,-5.3310e-01,8.4605e-01,-0.0000e+00,-5.3310e-01,7.7231e-01,-0.0000e+00,-6.3524e-01,7.7231e-01,-0.0000e+00,-6.3524e-01,6.8631e-01,-0.0000e+00,-7.2731e-01,6.8631e-01,-0.0000e+00,-7.2731e-01,5.8942e-01,-0.0000e+00,-8.0783e-01,5.8942e-01,-0.0000e+00,-8.0783e-01,4.8317e-01,-0.0000e+00,-8.7553e-01,4.8317e-01,-0.0000e+00,-8.7553e-01,3.6925e-01,-0.0000e+00,-9.2933e-01,3.6925e-01,-0.0000e+00,-9.2933e-01,2.4947e-01,-0.0000e+00,-9.6838e-01,2.4947e-01,-0.0000e+00,-9.6838e-01,1.2573e-01,-0.0000e+00,-9.9206e-01,1.2573e-01,-0.0000e+00,-9.9206e-01,1.2246e-16,-0.0000e+00,-1.0000e+00,1.2246e-16,-0.0000e+00,-1.0000e+00});
			return Normal_7_744_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #768, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_768_point()
		{
			MFVec3f Coordinate_7_768_point = new MFVec3f(new double[] {-8.7070e+00,1.7112e+01,2.4910e+00,-8.7070e+00,1.7087e+01,2.4910e+00,-8.7089e+00,1.7112e+01,2.4929e+00,-8.7089e+00,1.7087e+01,2.4929e+00,-8.7105e+00,1.7112e+01,2.4950e+00,-8.7105e+00,1.7087e+01,2.4950e+00,-8.7118e+00,1.7112e+01,2.4974e+00,-8.7118e+00,1.7087e+01,2.4974e+00,-8.7128e+00,1.7112e+01,2.4999e+00,-8.7128e+00,1.7087e+01,2.4999e+00,-8.7135e+00,1.7112e+01,2.5025e+00,-8.7135e+00,1.7087e+01,2.5025e+00,-8.7139e+00,1.7112e+01,2.5051e+00,-8.7139e+00,1.7087e+01,2.5051e+00,-8.7139e+00,1.7112e+01,2.5078e+00,-8.7139e+00,1.7087e+01,2.5078e+00,-8.7136e+00,1.7112e+01,2.5105e+00,-8.7136e+00,1.7087e+01,2.5105e+00,-8.7129e+00,1.7112e+01,2.5131e+00,-8.7129e+00,1.7087e+01,2.5131e+00,-8.7119e+00,1.7112e+01,2.5156e+00,-8.7119e+00,1.7087e+01,2.5156e+00,-8.7107e+00,1.7112e+01,2.5179e+00,-8.7107e+00,1.7087e+01,2.5179e+00,-8.7091e+00,1.7112e+01,2.5201e+00,-8.7091e+00,1.7087e+01,2.5201e+00,-8.7073e+00,1.7112e+01,2.5220e+00,-8.7073e+00,1.7087e+01,2.5220e+00,-8.7052e+00,1.7112e+01,2.5238e+00,-8.7052e+00,1.7087e+01,2.5238e+00,-8.7029e+00,1.7112e+01,2.5252e+00,-8.7029e+00,1.7087e+01,2.5252e+00,-8.7005e+00,1.7112e+01,2.5263e+00,-8.7005e+00,1.7087e+01,2.5263e+00,-8.6980e+00,1.7112e+01,2.5272e+00,-8.6980e+00,1.7087e+01,2.5272e+00,-8.6953e+00,1.7112e+01,2.5277e+00,-8.6953e+00,1.7087e+01,2.5277e+00,-8.6927e+00,1.7112e+01,2.5279e+00,-8.6927e+00,1.7087e+01,2.5279e+00});
			return Coordinate_7_768_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #769, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_769_vector()
		{
			MFVec3f Normal_7_769_vector = new MFVec3f(new double[] {-6.7708e-01,0.0000e+00,-7.3591e-01,-6.7708e-01,0.0000e+00,-7.3591e-01,-7.6433e-01,0.0000e+00,-6.4483e-01,-7.6433e-01,0.0000e+00,-6.4483e-01,-8.3941e-01,0.0000e+00,-5.4350e-01,-8.3941e-01,0.0000e+00,-5.4350e-01,-9.0114e-01,0.0000e+00,-4.3353e-01,-9.0114e-01,0.0000e+00,-4.3353e-01,-9.4854e-01,0.0000e+00,-3.1666e-01,-9.4854e-01,0.0000e+00,-3.1666e-01,-9.8085e-01,0.0000e+00,-1.9475e-01,-9.8085e-01,0.0000e+00,-1.9475e-01,-9.9756e-01,0.0000e+00,-6.9746e-02,-9.9756e-01,0.0000e+00,-6.9746e-02,-9.9841e-01,0.0000e+00,5.6367e-02,-9.9841e-01,0.0000e+00,5.6367e-02,-9.8338e-01,0.0000e+00,1.8158e-01,-9.8338e-01,0.0000e+00,1.8158e-01,-9.5270e-01,0.0000e+00,3.0391e-01,-9.5270e-01,0.0000e+00,3.0391e-01,-9.0687e-01,0.0000e+00,4.2141e-01,-9.0687e-01,0.0000e+00,4.2141e-01,-8.4662e-01,0.0000e+00,5.3220e-01,-8.4662e-01,0.0000e+00,5.3220e-01,-7.7290e-01,0.0000e+00,6.3453e-01,-7.7290e-01,0.0000e+00,6.3453e-01,-6.8689e-01,0.0000e+00,7.2676e-01,-6.8689e-01,0.0000e+00,7.2676e-01,-5.8995e-01,0.0000e+00,8.0744e-01,-5.8995e-01,0.0000e+00,8.0744e-01,-4.8363e-01,0.0000e+00,8.7527e-01,-4.8363e-01,0.0000e+00,8.7527e-01,-3.6962e-01,0.0000e+00,9.2918e-01,-3.6962e-01,0.0000e+00,9.2918e-01,-2.4973e-01,0.0000e+00,9.6832e-01,-2.4973e-01,0.0000e+00,9.6832e-01,-1.2587e-01,0.0000e+00,9.9205e-01,-1.2587e-01,0.0000e+00,9.9205e-01,-1.2246e-16,0.0000e+00,1.0000e+00,-1.2246e-16,0.0000e+00,1.0000e+00});
			return Normal_7_769_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #781, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_781_point()
		{
			MFVec3f Coordinate_7_781_point = new MFVec3f(new double[] {-8.3019e+00,1.7112e+01,2.1182e+00,-8.3019e+00,1.7087e+01,2.1182e+00,-8.2887e+00,1.7112e+01,2.1061e+00,-8.2887e+00,1.7087e+01,2.1061e+00,-8.2771e+00,1.7112e+01,2.0924e+00,-8.2771e+00,1.7087e+01,2.0924e+00,-8.2674e+00,1.7112e+01,2.0773e+00,-8.2674e+00,1.7087e+01,2.0773e+00,-8.2597e+00,1.7112e+01,2.0610e+00,-8.2597e+00,1.7087e+01,2.0610e+00,-8.2542e+00,1.7112e+01,2.0439e+00,-8.2542e+00,1.7087e+01,2.0439e+00,-8.2509e+00,1.7112e+01,2.0263e+00,-8.2509e+00,1.7087e+01,2.0263e+00,-8.2500e+00,1.7112e+01,2.0083e+00,-8.2500e+00,1.7087e+01,2.0083e+00,-8.2514e+00,1.7112e+01,1.9904e+00,-8.2514e+00,1.7087e+01,1.9904e+00,-8.2551e+00,1.7112e+01,1.9729e+00,-8.2551e+00,1.7087e+01,1.9729e+00,-8.2611e+00,1.7112e+01,1.9559e+00,-8.2611e+00,1.7087e+01,1.9559e+00,-8.2692e+00,1.7112e+01,1.9399e+00,-8.2692e+00,1.7087e+01,1.9399e+00,-8.2793e+00,1.7112e+01,1.9250e+00,-8.2793e+00,1.7087e+01,1.9250e+00,-8.2912e+00,1.7112e+01,1.9116e+00,-8.2912e+00,1.7087e+01,1.9116e+00,-8.3048e+00,1.7112e+01,1.8998e+00,-8.3048e+00,1.7087e+01,1.8998e+00,-8.3198e+00,1.7112e+01,1.8899e+00,-8.3198e+00,1.7087e+01,1.8899e+00,-8.3359e+00,1.7112e+01,1.8820e+00,-8.3359e+00,1.7087e+01,1.8820e+00,-8.3529e+00,1.7112e+01,1.8763e+00,-8.3529e+00,1.7087e+01,1.8763e+00,-8.3705e+00,1.7112e+01,1.8728e+00,-8.3705e+00,1.7087e+01,1.8728e+00,-8.3885e+00,1.7112e+01,1.8717e+00,-8.3885e+00,1.7087e+01,1.8717e+00});
			return Coordinate_7_781_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #782, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_782_vector()
		{
			MFVec3f Normal_7_782_vector = new MFVec3f(new double[] {-6.2486e-01,-0.0000e+00,-7.8074e-01,-6.2486e-01,-0.0000e+00,-7.8074e-01,-7.2067e-01,-0.0000e+00,-6.9327e-01,-7.2067e-01,-0.0000e+00,-6.9327e-01,-8.0436e-01,-0.0000e+00,-5.9414e-01,-8.0436e-01,-0.0000e+00,-5.9414e-01,-8.7451e-01,-0.0000e+00,-4.8501e-01,-8.7451e-01,-0.0000e+00,-4.8501e-01,-9.2994e-01,-0.0000e+00,-3.6772e-01,-9.2994e-01,-0.0000e+00,-3.6772e-01,-9.6972e-01,-0.0000e+00,-2.4423e-01,-9.6972e-01,-0.0000e+00,-2.4423e-01,-9.9317e-01,-0.0000e+00,-1.1664e-01,-9.9317e-01,-0.0000e+00,-1.1664e-01,-9.9992e-01,-0.0000e+00,1.2917e-02,-9.9992e-01,-0.0000e+00,1.2917e-02,-9.8983e-01,-0.0000e+00,1.4226e-01,-9.8983e-01,-0.0000e+00,1.4226e-01,-9.6308e-01,-0.0000e+00,2.6920e-01,-9.6308e-01,-0.0000e+00,2.6920e-01,-9.2013e-01,-0.0000e+00,3.9162e-01,-9.2013e-01,-0.0000e+00,3.9162e-01,-8.6169e-01,-0.0000e+00,5.0744e-01,-8.6169e-01,-0.0000e+00,5.0744e-01,-7.8874e-01,-0.0000e+00,6.1472e-01,-7.8874e-01,-0.0000e+00,6.1472e-01,-7.0253e-01,-0.0000e+00,7.1166e-01,-7.0253e-01,-0.0000e+00,7.1166e-01,-6.0448e-01,-0.0000e+00,7.9662e-01,-6.0448e-01,-0.0000e+00,7.9662e-01,-4.9627e-01,-0.0000e+00,8.6817e-01,-4.9627e-01,-0.0000e+00,8.6817e-01,-3.7970e-01,-0.0000e+00,9.2511e-01,-3.7970e-01,-0.0000e+00,9.2511e-01,-2.5674e-01,-0.0000e+00,9.6648e-01,-2.5674e-01,-0.0000e+00,9.6648e-01,-1.2946e-01,-0.0000e+00,9.9158e-01,-1.2946e-01,-0.0000e+00,9.9158e-01,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00});
			return Normal_7_782_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #794, 174 total numbers made up of 58 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_794_point()
		{
			MFVec3f Coordinate_7_794_point = new MFVec3f(new double[] {-8.8406e+00,1.7087e+01,1.9950e+00,-8.3914e+00,1.7087e+01,1.9950e+00,-8.3883e+00,1.7087e+01,1.9950e+00,-8.3853e+00,1.7087e+01,1.9956e+00,-8.3824e+00,1.7087e+01,1.9968e+00,-8.3798e+00,1.7087e+01,1.9985e+00,-8.3776e+00,1.7087e+01,2.0007e+00,-8.3758e+00,1.7087e+01,2.0033e+00,-8.3745e+00,1.7087e+01,2.0061e+00,-8.3739e+00,1.7087e+01,2.0091e+00,-8.3738e+00,1.7087e+01,2.0122e+00,-8.3742e+00,1.7087e+01,2.0153e+00,-8.3753e+00,1.7087e+01,2.0182e+00,-8.3769e+00,1.7087e+01,2.0209e+00,-8.3790e+00,1.7087e+01,2.0232e+00,-8.8160e+00,1.7087e+01,2.4274e+00,-8.8329e+00,1.7087e+01,2.4465e+00,-8.8458e+00,1.7087e+01,2.4686e+00,-8.8540e+00,1.7087e+01,2.4929e+00,-8.8572e+00,1.7087e+01,2.5183e+00,-8.8553e+00,1.7087e+01,2.5438e+00,-8.8484e+00,1.7087e+01,2.5684e+00,-8.8367e+00,1.7087e+01,2.5912e+00,-8.8208e+00,1.7087e+01,2.6112e+00,-8.8012e+00,1.7087e+01,2.6277e+00,-8.7787e+00,1.7087e+01,2.6399e+00,-8.7543e+00,1.7087e+01,2.6475e+00,-8.7288e+00,1.7087e+01,2.6500e+00,-8.2500e+00,1.7087e+01,2.6500e+00,-8.2500e+00,1.7087e+01,2.5279e+00,-8.6927e+00,1.7087e+01,2.5279e+00,-8.6969e+00,1.7087e+01,2.5274e+00,-8.7009e+00,1.7087e+01,2.5262e+00,-8.7046e+00,1.7087e+01,2.5241e+00,-8.7079e+00,1.7087e+01,2.5214e+00,-8.7105e+00,1.7087e+01,2.5181e+00,-8.7125e+00,1.7087e+01,2.5143e+00,-8.7136e+00,1.7087e+01,2.5102e+00,-8.7139e+00,1.7087e+01,2.5060e+00,-8.7134e+00,1.7087e+01,2.5018e+00,-8.7120e+00,1.7087e+01,2.4978e+00,-8.7099e+00,1.7087e+01,2.4941e+00,-8.7070e+00,1.7087e+01,2.4910e+00,-8.3019e+00,1.7087e+01,2.1182e+00,-8.2831e+00,1.7087e+01,2.1000e+00,-8.2681e+00,1.7087e+01,2.0785e+00,-8.2573e+00,1.7087e+01,2.0546e+00,-8.2513e+00,1.7087e+01,2.0290e+00,-8.2502e+00,1.7087e+01,2.0028e+00,-8.2541e+00,1.7087e+01,1.9769e+00,-8.2627e+00,1.7087e+01,1.9521e+00,-8.2759e+00,1.7087e+01,1.9294e+00,-8.2932e+00,1.7087e+01,1.9097e+00,-8.3138e+00,1.7087e+01,1.8935e+00,-8.3372e+00,1.7087e+01,1.8815e+00,-8.3624e+00,1.7087e+01,1.8741e+00,-8.3885e+00,1.7087e+01,1.8717e+00,-8.8406e+00,1.7087e+01,1.8717e+00});
			return Coordinate_7_794_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #806, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_806_point()
		{
			MFVec3f Coordinate_7_806_point = new MFVec3f(new double[] {-8.8406e+00,1.7112e+01,1.4191e+00,-8.8406e+00,1.7087e+01,1.4191e+00,-8.8391e+00,1.7112e+01,1.4421e+00,-8.8391e+00,1.7087e+01,1.4421e+00,-8.8347e+00,1.7112e+01,1.4647e+00,-8.8347e+00,1.7087e+01,1.4647e+00,-8.8274e+00,1.7112e+01,1.4865e+00,-8.8274e+00,1.7087e+01,1.4865e+00,-8.8174e+00,1.7112e+01,1.5073e+00,-8.8174e+00,1.7087e+01,1.5073e+00,-8.8048e+00,1.7112e+01,1.5265e+00,-8.8048e+00,1.7087e+01,1.5265e+00,-8.7898e+00,1.7112e+01,1.5440e+00,-8.7898e+00,1.7087e+01,1.5440e+00,-8.7727e+00,1.7112e+01,1.5594e+00,-8.7727e+00,1.7087e+01,1.5594e+00,-8.7538e+00,1.7112e+01,1.5725e+00,-8.7538e+00,1.7087e+01,1.5725e+00,-8.7333e+00,1.7112e+01,1.5831e+00,-8.7333e+00,1.7087e+01,1.5831e+00,-8.7117e+00,1.7112e+01,1.5910e+00,-8.7117e+00,1.7087e+01,1.5910e+00,-8.6892e+00,1.7112e+01,1.5960e+00,-8.6892e+00,1.7087e+01,1.5960e+00,-8.6663e+00,1.7112e+01,1.5981e+00,-8.6663e+00,1.7087e+01,1.5981e+00,-8.6433e+00,1.7112e+01,1.5972e+00,-8.6433e+00,1.7087e+01,1.5972e+00,-8.6206e+00,1.7112e+01,1.5934e+00,-8.6206e+00,1.7087e+01,1.5934e+00,-8.5986e+00,1.7112e+01,1.5867e+00,-8.5986e+00,1.7087e+01,1.5867e+00,-8.5776e+00,1.7112e+01,1.5772e+00,-8.5776e+00,1.7087e+01,1.5772e+00,-8.5580e+00,1.7112e+01,1.5651e+00,-8.5580e+00,1.7087e+01,1.5651e+00,-8.5401e+00,1.7112e+01,1.5506e+00,-8.5401e+00,1.7087e+01,1.5506e+00,-8.5242e+00,1.7112e+01,1.5340e+00,-8.5242e+00,1.7087e+01,1.5340e+00,-8.5106e+00,1.7112e+01,1.5154e+00,-8.5106e+00,1.7087e+01,1.5154e+00,-8.4995e+00,1.7112e+01,1.4952e+00,-8.4995e+00,1.7087e+01,1.4952e+00,-8.4911e+00,1.7112e+01,1.4738e+00,-8.4911e+00,1.7087e+01,1.4738e+00,-8.4855e+00,1.7112e+01,1.4515e+00,-8.4855e+00,1.7087e+01,1.4515e+00,-8.4828e+00,1.7112e+01,1.4286e+00,-8.4828e+00,1.7087e+01,1.4286e+00,-8.4831e+00,1.7112e+01,1.4056e+00,-8.4831e+00,1.7087e+01,1.4056e+00});
			return Coordinate_7_806_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #807, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_807_vector()
		{
			MFVec3f Normal_7_807_vector = new MFVec3f(new double[] {1.0000e+00,-0.0000e+00,-1.8370e-16,1.0000e+00,-0.0000e+00,-1.8370e-16,9.9173e-01,-0.0000e+00,-1.2834e-01,9.9173e-01,-0.0000e+00,-1.2834e-01,9.6706e-01,-0.0000e+00,-2.5455e-01,9.6706e-01,-0.0000e+00,-2.5455e-01,9.2639e-01,-0.0000e+00,-3.7656e-01,9.2639e-01,-0.0000e+00,-3.7656e-01,8.7041e-01,-0.0000e+00,-4.9233e-01,8.7041e-01,-0.0000e+00,-4.9233e-01,8.0002e-01,-0.0000e+00,-5.9997e-01,8.0002e-01,-0.0000e+00,-5.9997e-01,7.1641e-01,-0.0000e+00,-6.9768e-01,7.1641e-01,-0.0000e+00,-6.9768e-01,6.2095e-01,-0.0000e+00,-7.8385e-01,6.2095e-01,-0.0000e+00,-7.8385e-01,5.1521e-01,-0.0000e+00,-8.5706e-01,5.1521e-01,-0.0000e+00,-8.5706e-01,4.0096e-01,-0.0000e+00,-9.1610e-01,4.0096e-01,-0.0000e+00,-9.1610e-01,2.8008e-01,-0.0000e+00,-9.5998e-01,2.8008e-01,-0.0000e+00,-9.5998e-01,1.5456e-01,-0.0000e+00,-9.8798e-01,1.5456e-01,-0.0000e+00,-9.8798e-01,2.6486e-02,-0.0000e+00,-9.9965e-01,2.6486e-02,-0.0000e+00,-9.9965e-01,-1.0203e-01,-0.0000e+00,-9.9478e-01,-1.0203e-01,-0.0000e+00,-9.9478e-01,-2.2885e-01,-0.0000e+00,-9.7346e-01,-2.2885e-01,-0.0000e+00,-9.7346e-01,-3.5189e-01,-0.0000e+00,-9.3604e-01,-3.5189e-01,-0.0000e+00,-9.3604e-01,-4.6911e-01,-0.0000e+00,-8.8314e-01,-4.6911e-01,-0.0000e+00,-8.8314e-01,-5.7857e-01,-0.0000e+00,-8.1563e-01,-5.7857e-01,-0.0000e+00,-8.1563e-01,-6.7846e-01,-0.0000e+00,-7.3464e-01,-6.7846e-01,-0.0000e+00,-7.3464e-01,-7.6713e-01,-0.0000e+00,-6.4149e-01,-7.6713e-01,-0.0000e+00,-6.4149e-01,-8.4311e-01,-0.0000e+00,-5.3773e-01,-8.4311e-01,-0.0000e+00,-5.3773e-01,-9.0515e-01,-0.0000e+00,-4.2508e-01,-9.0515e-01,-0.0000e+00,-4.2508e-01,-9.5222e-01,-0.0000e+00,-3.0540e-01,-9.5222e-01,-0.0000e+00,-3.0540e-01,-9.8354e-01,-0.0000e+00,-1.8067e-01,-9.8354e-01,-0.0000e+00,-1.8067e-01,-9.9860e-01,-0.0000e+00,-5.2953e-02,-9.9860e-01,-0.0000e+00,-5.2953e-02,-9.9714e-01,-0.0000e+00,7.5642e-02,-9.9714e-01,-0.0000e+00,7.5642e-02});
			return Normal_7_807_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #819, 144 total numbers made up of 48 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_819_point()
		{
			MFVec3f Coordinate_7_819_point = new MFVec3f(new double[] {-8.3722e+00,1.7112e+01,1.0470e+00,-8.3722e+00,1.7087e+01,1.0470e+00,-8.3735e+00,1.7112e+01,1.0400e+00,-8.3735e+00,1.7087e+01,1.0400e+00,-8.3757e+00,1.7112e+01,1.0333e+00,-8.3757e+00,1.7087e+01,1.0333e+00,-8.3788e+00,1.7112e+01,1.0269e+00,-8.3788e+00,1.7087e+01,1.0269e+00,-8.3826e+00,1.7112e+01,1.0209e+00,-8.3826e+00,1.7087e+01,1.0209e+00,-8.3872e+00,1.7112e+01,1.0155e+00,-8.3872e+00,1.7087e+01,1.0155e+00,-8.3924e+00,1.7112e+01,1.0107e+00,-8.3924e+00,1.7087e+01,1.0107e+00,-8.3982e+00,1.7112e+01,1.0066e+00,-8.3982e+00,1.7087e+01,1.0066e+00,-8.4045e+00,1.7112e+01,1.0032e+00,-8.4045e+00,1.7087e+01,1.0032e+00,-8.4111e+00,1.7112e+01,1.0007e+00,-8.4111e+00,1.7087e+01,1.0007e+00,-8.4180e+00,1.7112e+01,9.9908e-01,-8.4180e+00,1.7087e+01,9.9908e-01,-8.4251e+00,1.7112e+01,9.9833e-01,-8.4251e+00,1.7087e+01,9.9833e-01,-8.4322e+00,1.7112e+01,9.9847e-01,-8.4322e+00,1.7087e+01,9.9847e-01,-8.4392e+00,1.7112e+01,9.9952e-01,-8.4392e+00,1.7087e+01,9.9952e-01,-8.4460e+00,1.7112e+01,1.0014e+00,-8.4460e+00,1.7087e+01,1.0014e+00,-8.4525e+00,1.7112e+01,1.0042e+00,-8.4525e+00,1.7087e+01,1.0042e+00,-8.4587e+00,1.7112e+01,1.0078e+00,-8.4587e+00,1.7087e+01,1.0078e+00,-8.4643e+00,1.7112e+01,1.0121e+00,-8.4643e+00,1.7087e+01,1.0121e+00,-8.4693e+00,1.7112e+01,1.0171e+00,-8.4693e+00,1.7087e+01,1.0171e+00,-8.4737e+00,1.7112e+01,1.0227e+00,-8.4737e+00,1.7087e+01,1.0227e+00,-8.4773e+00,1.7112e+01,1.0289e+00,-8.4773e+00,1.7087e+01,1.0289e+00,-8.4800e+00,1.7112e+01,1.0354e+00,-8.4800e+00,1.7087e+01,1.0354e+00,-8.4820e+00,1.7112e+01,1.0422e+00,-8.4820e+00,1.7087e+01,1.0422e+00,-8.4831e+00,1.7112e+01,1.0492e+00,-8.4831e+00,1.7087e+01,1.0492e+00});
			return Coordinate_7_819_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #820, 144 total numbers made up of 48 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_820_vector()
		{
			MFVec3f Normal_7_820_vector = new MFVec3f(new double[] {9.9188e-01,0.0000e+00,-1.2721e-01,9.9188e-01,0.0000e+00,-1.2721e-01,9.6771e-01,0.0000e+00,-2.5208e-01,9.6771e-01,0.0000e+00,-2.5208e-01,9.2788e-01,0.0000e+00,-3.7287e-01,9.2788e-01,0.0000e+00,-3.7287e-01,8.7305e-01,0.0000e+00,-4.8763e-01,8.7305e-01,0.0000e+00,-4.8763e-01,8.0409e-01,0.0000e+00,-5.9451e-01,8.0409e-01,0.0000e+00,-5.9451e-01,7.2213e-01,0.0000e+00,-6.9176e-01,7.2213e-01,0.0000e+00,-6.9176e-01,6.2848e-01,0.0000e+00,-7.7783e-01,6.2848e-01,0.0000e+00,-7.7783e-01,5.2467e-01,0.0000e+00,-8.5131e-01,5.2467e-01,0.0000e+00,-8.5131e-01,4.1237e-01,0.0000e+00,-9.1102e-01,4.1237e-01,0.0000e+00,-9.1102e-01,2.9339e-01,0.0000e+00,-9.5599e-01,2.9339e-01,0.0000e+00,-9.5599e-01,1.6968e-01,0.0000e+00,-9.8550e-01,1.6968e-01,0.0000e+00,-9.8550e-01,4.3213e-02,0.0000e+00,-9.9907e-01,4.3213e-02,0.0000e+00,-9.9907e-01,-8.3948e-02,0.0000e+00,-9.9647e-01,-8.3948e-02,0.0000e+00,-9.9647e-01,-2.0975e-01,0.0000e+00,-9.7775e-01,-2.0975e-01,0.0000e+00,-9.7775e-01,-3.3216e-01,0.0000e+00,-9.4322e-01,-3.3216e-01,0.0000e+00,-9.4322e-01,-4.4920e-01,0.0000e+00,-8.9343e-01,-4.4920e-01,0.0000e+00,-8.9343e-01,-5.5897e-01,0.0000e+00,-8.2919e-01,-5.5897e-01,0.0000e+00,-8.2919e-01,-6.5970e-01,0.0000e+00,-7.5153e-01,-6.5970e-01,0.0000e+00,-7.5153e-01,-7.4976e-01,0.0000e+00,-6.6171e-01,-7.4976e-01,0.0000e+00,-6.6171e-01,-8.2768e-01,0.0000e+00,-5.6120e-01,-8.2768e-01,0.0000e+00,-5.6120e-01,-8.9222e-01,0.0000e+00,-4.5160e-01,-8.9222e-01,0.0000e+00,-4.5160e-01,-9.4233e-01,0.0000e+00,-3.3469e-01,-9.4233e-01,0.0000e+00,-3.3469e-01,-9.7719e-01,0.0000e+00,-2.1238e-01,-9.7719e-01,0.0000e+00,-2.1238e-01,-9.9624e-01,0.0000e+00,-8.6624e-02,-9.9624e-01,0.0000e+00,-8.6624e-02});
			return Normal_7_820_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #870, 138 total numbers made up of 46 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_870_point()
		{
			MFVec3f Coordinate_7_870_point = new MFVec3f(new double[] {-8.2500e+00,1.7112e+01,1.0288e+00,-8.2500e+00,1.7087e+01,1.0288e+00,-8.2551e+00,1.7112e+01,1.0063e+00,-8.2551e+00,1.7087e+01,1.0063e+00,-8.2630e+00,1.7112e+01,9.8465e-01,-8.2630e+00,1.7087e+01,9.8465e-01,-8.2737e+00,1.7112e+01,9.6416e-01,-8.2737e+00,1.7087e+01,9.6416e-01,-8.2868e+00,1.7112e+01,9.4520e-01,-8.2868e+00,1.7087e+01,9.4520e-01,-8.3023e+00,1.7112e+01,9.2809e-01,-8.3023e+00,1.7087e+01,9.2809e-01,-8.3199e+00,1.7112e+01,9.1311e-01,-8.3199e+00,1.7087e+01,9.1311e-01,-8.3392e+00,1.7112e+01,9.0050e-01,-8.3392e+00,1.7087e+01,9.0050e-01,-8.3600e+00,1.7112e+01,8.9046e-01,-8.3600e+00,1.7087e+01,8.9046e-01,-8.3819e+00,1.7112e+01,8.8318e-01,-8.3819e+00,1.7087e+01,8.8318e-01,-8.4046e+00,1.7112e+01,8.7876e-01,-8.4046e+00,1.7087e+01,8.7876e-01,-8.4276e+00,1.7112e+01,8.7728e-01,-8.4276e+00,1.7087e+01,8.7728e-01,-8.4507e+00,1.7112e+01,8.7876e-01,-8.4507e+00,1.7087e+01,8.7876e-01,-8.4733e+00,1.7112e+01,8.8318e-01,-8.4733e+00,1.7087e+01,8.8318e-01,-8.4952e+00,1.7112e+01,8.9046e-01,-8.4952e+00,1.7087e+01,8.9046e-01,-8.5160e+00,1.7112e+01,9.0050e-01,-8.5160e+00,1.7087e+01,9.0050e-01,-8.5353e+00,1.7112e+01,9.1311e-01,-8.5353e+00,1.7087e+01,9.1311e-01,-8.5529e+00,1.7112e+01,9.2809e-01,-8.5529e+00,1.7087e+01,9.2809e-01,-8.5684e+00,1.7112e+01,9.4520e-01,-8.5684e+00,1.7087e+01,9.4520e-01,-8.5816e+00,1.7112e+01,9.6416e-01,-8.5816e+00,1.7087e+01,9.6416e-01,-8.5922e+00,1.7112e+01,9.8465e-01,-8.5922e+00,1.7087e+01,9.8465e-01,-8.6001e+00,1.7112e+01,1.0063e+00,-8.6001e+00,1.7087e+01,1.0063e+00,-8.6052e+00,1.7112e+01,1.0288e+00,-8.6052e+00,1.7087e+01,1.0288e+00});
			return Coordinate_7_870_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #871, 138 total numbers made up of 46 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_871_vector()
		{
			MFVec3f Normal_7_871_vector = new MFVec3f(new double[] {-9.8756e-01,-0.0000e+00,1.5726e-01,-9.8756e-01,-0.0000e+00,1.5726e-01,-9.5928e-01,-0.0000e+00,2.8246e-01,-9.5928e-01,-0.0000e+00,2.8246e-01,-9.1519e-01,-0.0000e+00,4.0301e-01,-9.1519e-01,-0.0000e+00,4.0301e-01,-8.5603e-01,-0.0000e+00,5.1692e-01,-8.5603e-01,-0.0000e+00,5.1692e-01,-7.8277e-01,-0.0000e+00,6.2231e-01,-7.8277e-01,-0.0000e+00,6.2231e-01,-6.9661e-01,-0.0000e+00,7.1745e-01,-6.9661e-01,-0.0000e+00,7.1745e-01,-5.9897e-01,-0.0000e+00,8.0077e-01,-5.9897e-01,-0.0000e+00,8.0077e-01,-4.9147e-01,-0.0000e+00,8.7090e-01,-4.9147e-01,-0.0000e+00,8.7090e-01,-3.7587e-01,-0.0000e+00,9.2667e-01,-3.7587e-01,-0.0000e+00,9.2667e-01,-2.5407e-01,-0.0000e+00,9.6719e-01,-2.5407e-01,-0.0000e+00,9.6719e-01,-1.2809e-01,-0.0000e+00,9.9176e-01,-1.2809e-01,-0.0000e+00,9.9176e-01,-4.3719e-09,-0.0000e+00,1.0000e+00,-4.3719e-09,-0.0000e+00,1.0000e+00,1.2809e-01,-0.0000e+00,9.9176e-01,1.2809e-01,-0.0000e+00,9.9176e-01,2.5407e-01,-0.0000e+00,9.6719e-01,2.5407e-01,-0.0000e+00,9.6719e-01,3.7587e-01,-0.0000e+00,9.2667e-01,3.7587e-01,-0.0000e+00,9.2667e-01,4.9147e-01,-0.0000e+00,8.7090e-01,4.9147e-01,-0.0000e+00,8.7090e-01,5.9897e-01,-0.0000e+00,8.0077e-01,5.9897e-01,-0.0000e+00,8.0077e-01,6.9661e-01,-0.0000e+00,7.1745e-01,6.9661e-01,-0.0000e+00,7.1745e-01,7.8277e-01,-0.0000e+00,6.2231e-01,7.8277e-01,-0.0000e+00,6.2231e-01,8.5603e-01,-0.0000e+00,5.1692e-01,8.5603e-01,-0.0000e+00,5.1692e-01,9.1519e-01,-0.0000e+00,4.0301e-01,9.1519e-01,-0.0000e+00,4.0301e-01,9.5928e-01,-0.0000e+00,2.8246e-01,9.5928e-01,-0.0000e+00,2.8246e-01,9.8756e-01,-0.0000e+00,1.5726e-01,9.8756e-01,-0.0000e+00,1.5726e-01});
			return Normal_7_871_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #883, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_883_point()
		{
			MFVec3f Coordinate_7_883_point = new MFVec3f(new double[] {-8.7161e+00,1.7112e+01,1.4033e+00,-8.7161e+00,1.7087e+01,1.4033e+00,-8.7162e+00,1.7112e+01,1.4105e+00,-8.7162e+00,1.7087e+01,1.4105e+00,-8.7154e+00,1.7112e+01,1.4176e+00,-8.7154e+00,1.7087e+01,1.4176e+00,-8.7137e+00,1.7112e+01,1.4245e+00,-8.7137e+00,1.7087e+01,1.4245e+00,-8.7111e+00,1.7112e+01,1.4312e+00,-8.7111e+00,1.7087e+01,1.4312e+00,-8.7077e+00,1.7112e+01,1.4375e+00,-8.7077e+00,1.7087e+01,1.4375e+00,-8.7035e+00,1.7112e+01,1.4433e+00,-8.7035e+00,1.7087e+01,1.4433e+00,-8.6986e+00,1.7112e+01,1.4485e+00,-8.6986e+00,1.7087e+01,1.4485e+00,-8.6931e+00,1.7112e+01,1.4530e+00,-8.6931e+00,1.7087e+01,1.4530e+00,-8.6870e+00,1.7112e+01,1.4568e+00,-8.6870e+00,1.7087e+01,1.4568e+00,-8.6805e+00,1.7112e+01,1.4598e+00,-8.6805e+00,1.7087e+01,1.4598e+00,-8.6736e+00,1.7112e+01,1.4619e+00,-8.6736e+00,1.7087e+01,1.4619e+00,-8.6666e+00,1.7112e+01,1.4631e+00,-8.6666e+00,1.7087e+01,1.4631e+00,-8.6594e+00,1.7112e+01,1.4634e+00,-8.6594e+00,1.7087e+01,1.4634e+00,-8.6523e+00,1.7112e+01,1.4627e+00,-8.6523e+00,1.7087e+01,1.4627e+00,-8.6453e+00,1.7112e+01,1.4612e+00,-8.6453e+00,1.7087e+01,1.4612e+00,-8.6386e+00,1.7112e+01,1.4588e+00,-8.6386e+00,1.7087e+01,1.4588e+00,-8.6322e+00,1.7112e+01,1.4555e+00,-8.6322e+00,1.7087e+01,1.4555e+00,-8.6264e+00,1.7112e+01,1.4514e+00,-8.6264e+00,1.7087e+01,1.4514e+00,-8.6210e+00,1.7112e+01,1.4466e+00,-8.6210e+00,1.7087e+01,1.4466e+00,-8.6164e+00,1.7112e+01,1.4412e+00,-8.6164e+00,1.7087e+01,1.4412e+00,-8.6125e+00,1.7112e+01,1.4352e+00,-8.6125e+00,1.7087e+01,1.4352e+00,-8.6093e+00,1.7112e+01,1.4288e+00,-8.6093e+00,1.7087e+01,1.4288e+00,-8.6071e+00,1.7112e+01,1.4220e+00,-8.6071e+00,1.7087e+01,1.4220e+00,-8.6057e+00,1.7112e+01,1.4150e+00,-8.6057e+00,1.7087e+01,1.4150e+00,-8.6052e+00,1.7112e+01,1.4079e+00,-8.6052e+00,1.7087e+01,1.4079e+00});
			return Coordinate_7_883_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #884, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_884_vector()
		{
			MFVec3f Normal_7_884_vector = new MFVec3f(new double[] {-9.9667e-01,0.0000e+00,-8.1527e-02,-9.9667e-01,0.0000e+00,-8.1527e-02,-9.9888e-01,0.0000e+00,4.7294e-02,-9.9888e-01,0.0000e+00,4.7294e-02,-9.8451e-01,0.0000e+00,1.7533e-01,-9.8451e-01,0.0000e+00,1.7533e-01,-9.5380e-01,0.0000e+00,3.0045e-01,-9.5380e-01,0.0000e+00,3.0045e-01,-9.0725e-01,0.0000e+00,4.2059e-01,-9.0725e-01,0.0000e+00,4.2059e-01,-8.4564e-01,0.0000e+00,5.3375e-01,-8.4564e-01,0.0000e+00,5.3375e-01,-7.7000e-01,0.0000e+00,6.3804e-01,-7.7000e-01,0.0000e+00,6.3804e-01,-6.8158e-01,0.0000e+00,7.3175e-01,-6.8158e-01,0.0000e+00,7.3175e-01,-5.8184e-01,0.0000e+00,8.1330e-01,-5.8184e-01,0.0000e+00,8.1330e-01,-4.7244e-01,0.0000e+00,8.8136e-01,-4.7244e-01,0.0000e+00,8.8136e-01,-3.5520e-01,0.0000e+00,9.3479e-01,-3.5520e-01,0.0000e+00,9.3479e-01,-2.3207e-01,0.0000e+00,9.7270e-01,-2.3207e-01,0.0000e+00,9.7270e-01,-1.0508e-01,0.0000e+00,9.9446e-01,-1.0508e-01,0.0000e+00,9.9446e-01,2.3653e-02,0.0000e+00,9.9972e-01,2.3653e-02,0.0000e+00,9.9972e-01,1.5199e-01,0.0000e+00,9.8838e-01,1.5199e-01,0.0000e+00,9.8838e-01,2.7781e-01,0.0000e+00,9.6064e-01,2.7781e-01,0.0000e+00,9.6064e-01,3.9901e-01,0.0000e+00,9.1695e-01,3.9901e-01,0.0000e+00,9.1695e-01,5.1359e-01,0.0000e+00,8.5803e-01,5.1359e-01,0.0000e+00,8.5803e-01,6.1965e-01,0.0000e+00,7.8488e-01,6.1965e-01,0.0000e+00,7.8488e-01,7.1542e-01,0.0000e+00,6.9869e-01,7.1542e-01,0.0000e+00,6.9869e-01,7.9931e-01,0.0000e+00,6.0091e-01,7.9931e-01,0.0000e+00,6.0091e-01,8.6994e-01,0.0000e+00,4.9316e-01,8.6994e-01,0.0000e+00,4.9316e-01,9.2613e-01,0.0000e+00,3.7721e-01,9.2613e-01,0.0000e+00,3.7721e-01,9.6694e-01,0.0000e+00,2.5501e-01,9.6694e-01,0.0000e+00,2.5501e-01,9.9170e-01,0.0000e+00,1.2857e-01,9.9170e-01,0.0000e+00,1.2857e-01,1.0000e+00,0.0000e+00,1.8370e-16,1.0000e+00,0.0000e+00,1.8370e-16});
			return Normal_7_884_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #926, 273 total numbers made up of 91 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_926_point()
		{
			MFVec3f Coordinate_7_926_point = new MFVec3f(new double[] {-8.8406e+00,1.7087e+01,1.4191e+00,-8.8369e+00,1.7087e+01,1.4549e+00,-8.8263e+00,1.7087e+01,1.4892e+00,-8.8090e+00,1.7087e+01,1.5207e+00,-8.7857e+00,1.7087e+01,1.5481e+00,-8.7574e+00,1.7087e+01,1.5703e+00,-8.7253e+00,1.7087e+01,1.5864e+00,-8.6906e+00,1.7087e+01,1.5958e+00,-8.6548e+00,1.7087e+01,1.5980e+00,-8.6192e+00,1.7087e+01,1.5930e+00,-8.5853e+00,1.7087e+01,1.5811e+00,-8.5545e+00,1.7087e+01,1.5626e+00,-8.5280e+00,1.7087e+01,1.5383e+00,-8.5069e+00,1.7087e+01,1.5092e+00,-8.4920e+00,1.7087e+01,1.4765e+00,-8.4839e+00,1.7087e+01,1.4415e+00,-8.4831e+00,1.7087e+01,1.4056e+00,-8.4831e+00,1.7087e+01,1.0492e+00,-8.4811e+00,1.7087e+01,1.0385e+00,-8.4770e+00,1.7087e+01,1.0284e+00,-8.4711e+00,1.7087e+01,1.0193e+00,-8.4636e+00,1.7087e+01,1.0115e+00,-8.4546e+00,1.7087e+01,1.0053e+00,-8.4447e+00,1.7087e+01,1.0010e+00,-8.4341e+00,1.7087e+01,9.9866e-01,-8.4232e+00,1.7087e+01,9.9844e-01,-8.4125e+00,1.7087e+01,1.0003e+00,-8.4024e+00,1.7087e+01,1.0043e+00,-8.3932e+00,1.7087e+01,1.0101e+00,-8.3853e+00,1.7087e+01,1.0176e+00,-8.3790e+00,1.7087e+01,1.0264e+00,-8.3746e+00,1.7087e+01,1.0364e+00,-8.3722e+00,1.7087e+01,1.0470e+00,-8.3722e+00,1.7087e+01,1.6261e+00,-8.3730e+00,1.7087e+01,1.6345e+00,-8.3754e+00,1.7087e+01,1.6426e+00,-8.3794e+00,1.7087e+01,1.6500e+00,-8.3848e+00,1.7087e+01,1.6566e+00,-8.3913e+00,1.7087e+01,1.6619e+00,-8.3987e+00,1.7087e+01,1.6659e+00,-8.4068e+00,1.7087e+01,1.6683e+00,-8.4152e+00,1.7087e+01,1.6692e+00,-8.8406e+00,1.7087e+01,1.6692e+00,-8.8406e+00,1.7087e+01,1.7925e+00,-8.4152e+00,1.7087e+01,1.7925e+00,-8.3830e+00,1.7087e+01,1.7893e+00,-8.3520e+00,1.7087e+01,1.7799e+00,-8.3234e+00,1.7087e+01,1.7646e+00,-8.2984e+00,1.7087e+01,1.7441e+00,-8.2778e+00,1.7087e+01,1.7191e+00,-8.2626e+00,1.7087e+01,1.6905e+00,-8.2532e+00,1.7087e+01,1.6595e+00,-8.2500e+00,1.7087e+01,1.6273e+00,-8.2500e+00,1.7087e+01,1.0288e+00,-8.2593e+00,1.7087e+01,9.9381e-01,-8.2754e+00,1.7087e+01,9.6135e-01,-8.2977e+00,1.7087e+01,9.3278e-01,-8.3252e+00,1.7087e+01,9.0925e-01,-8.3570e+00,1.7087e+01,8.9173e-01,-8.3916e+00,1.7087e+01,8.8093e-01,-8.4276e+00,1.7087e+01,8.7728e-01,-8.4637e+00,1.7087e+01,8.8093e-01,-8.4983e+00,1.7087e+01,8.9173e-01,-8.5300e+00,1.7087e+01,9.0925e-01,-8.5576e+00,1.7087e+01,9.3278e-01,-8.5798e+00,1.7087e+01,9.6135e-01,-8.5960e+00,1.7087e+01,9.9381e-01,-8.6052e+00,1.7087e+01,1.0288e+00,-8.6052e+00,1.7087e+01,1.4079e+00,-8.6064e+00,1.7087e+01,1.4190e+00,-8.6097e+00,1.7087e+01,1.4296e+00,-8.6151e+00,1.7087e+01,1.4394e+00,-8.6223e+00,1.7087e+01,1.4479e+00,-8.6311e+00,1.7087e+01,1.4548e+00,-8.6411e+00,1.7087e+01,1.4598e+00,-8.6519e+00,1.7087e+01,1.4627e+00,-8.6630e+00,1.7087e+01,1.4633e+00,-8.6741e+00,1.7087e+01,1.4618e+00,-8.6846e+00,1.7087e+01,1.4580e+00,-8.6941e+00,1.7087e+01,1.4522e+00,-8.7024e+00,1.7087e+01,1.4446e+00,-8.7089e+00,1.7087e+01,1.4356e+00,-8.7134e+00,1.7087e+01,1.4254e+00,-8.7159e+00,1.7087e+01,1.4145e+00,-8.7161e+00,1.7087e+01,1.4033e+00,-8.7161e+00,1.7087e+01,7.8561e-01,-8.2500e+00,1.7087e+01,7.8561e-01,-8.2500e+00,1.7087e+01,6.6346e-01,-8.7161e+00,1.7087e+01,6.6346e-01,-8.7161e+00,1.7087e+01,4.1113e-01,-8.8406e+00,1.7087e+01,4.1113e-01});
			return Coordinate_7_926_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NistCtc03Asme1Ap203Spri model
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
        X3D thisExampleX3dModel = new NistCtc03Asme1Ap203Spri().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.NistCtc03Asme1Ap203Spri\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.NistCtc03Asme1Ap203Spri\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
