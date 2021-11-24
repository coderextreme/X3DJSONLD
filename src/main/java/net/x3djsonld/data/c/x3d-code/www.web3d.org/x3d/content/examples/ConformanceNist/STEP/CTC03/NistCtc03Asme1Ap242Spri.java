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
 <p> Related links: <a href="../../../../STEP/FTC03/NistCtc03Asme1Ap242Spri.java">NistCtc03Asme1Ap242Spri.java</a> source, <a href="../../../../STEP/FTC03/NistCtc03Asme1Ap242SpriIndex.html" target="_top">NistCtc03Asme1Ap242Spri catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../STEP/FTC03/NistCtc03Asme1Ap242Spri.x3d">NistCtc03Asme1Ap242Spri.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC03/NistCtc03Asme1Ap242Spri.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC03/NistCtc03Asme1Ap242Spri.x3d</a> </td>
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

public class NistCtc03Asme1Ap242Spri
{
	/** Default constructor to create this object. */
	public NistCtc03Asme1Ap242Spri ()
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
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("NistCtc03Asme1Ap242Spri.x3d"))
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
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/STEP/FTC03/NistCtc03Asme1Ap242Spri.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("NistCtc03Asme1Ap242Spri.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.094100,0.137300,0.498000}))
      .setMetadata(new MetadataString().setName("color").setReference("http://www.colourlovers.com/color/18237F/tienen_miedo").setValue(new String[] {"tienen miedo"})))
    .addChild(new DirectionalLight().setColor(1.000000,1.000000,1.000000).setDirection(-3.5355e-01,-3.5355e-01,-8.6603e-01))
    .addChild(new Viewpoint().setDescription("Oblique view").setCenterOfRotation(-9.8078e+01,2.4272e+02,8.1345e+01).setFieldOfView(1.6628e-01).setOrientation(0.901,0.241,0.361,1.277).setPosition(2.6500e+03,-4.5171e+03,2.3579e+03))
    .addChild(new Viewpoint().setDescription("Top").setCenterOfRotation(-9.8078e+01,2.4272e+02,8.1345e+01).setFieldOfView(1.6628e-01).setOrientation(1.000,0.000,0.000,0.000).setPosition(-9.8078e+01,2.4272e+02,6.0304e+03))
    .addChild(new Viewpoint().setDescription("Bottom").setCenterOfRotation(-9.8078e+01,2.4272e+02,8.1345e+01).setFieldOfView(1.6628e-01).setOrientation(1.000,0.000,0.000,3.142).setPosition(-9.8078e+01,2.4272e+02,-5.8677e+03))
    .addChild(new Viewpoint().setDescription("Right side").setCenterOfRotation(-9.8078e+01,2.4272e+02,8.1345e+01).setFieldOfView(1.6628e-01).setOrientation(0.577,0.577,0.577,2.094).setPosition(5.8509e+03,2.4272e+02,8.1345e+01))
    .addChild(new CADPart().setName("NIST PMI CTC 03 ASME1").setBboxCenter(-98.077647,242.722400,81.344869).setBboxSize(302.959787,485.444800,162.689737)
      .setMetadata(new MetadataSet().setName("_collection")
        .setMetadata(new MetadataString().setName("version").setValue(new String[] {"#46"}))
        .setMetadata(new MetadataSet().setName("STEP:length_unit")
          .setMetadata(new MetadataString().setName("name").setValue(new String[] {"millimetre"}))
          .setMetadata(new MetadataFloat().setName("conversionFactor").setValue(new double[] {0.001}))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#296"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_43_point()))
            .setNormal(new Normal().setVector(getNormal_7_44_vector())))
          .setAppearance(new Appearance("partcolor")
            .setMaterial(new Material().setAmbientIntensity(0.5).setDiffuseColor(0.651000,0.654900,0.721600)
              .setMetadata(new MetadataString().setName("color").setReference("http://www.colourlovers.com/color/A6A7B8/cool_silver").setValue(new String[] {"cool silver"}))))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#416"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_52_point()))
            .setNormal(new Normal().setVector(getNormal_7_53_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#1056"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_59_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_59_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#1696"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_65_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_65_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#1956"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,21,6,7,21,7,8,8,9,10,8,10,11,8,11,12,8,12,13,8,13,14,8,14,15,8,15,16,8,16,17,8,17,18,8,18,19,8,19,20,21,8,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {4.3073e+01,1.8112e+02,1.5371e+02,8.7686e+00,1.8112e+02,1.1940e+02,8.2244e+00,1.8112e+02,1.1880e+02,7.7416e+00,1.8112e+02,1.1815e+02,7.3250e+00,1.8112e+02,1.1746e+02,6.9786e+00,1.8112e+02,1.1673e+02,6.7056e+00,1.8112e+02,1.1596e+02,6.5087e+00,1.8112e+02,1.1518e+02,6.3898e+00,1.8112e+02,1.1438e+02,6.3500e+00,1.8112e+02,1.1357e+02,6.3500e+00,1.8112e+02,1.0097e+02,8.2575e+00,1.8112e+02,1.0097e+02,8.2575e+00,1.8112e+02,1.1357e+02,8.2881e+00,1.8112e+02,1.1419e+02,8.3796e+00,1.8112e+02,1.1480e+02,8.5310e+00,1.8112e+02,1.1541e+02,8.7409e+00,1.8112e+02,1.1600e+02,9.0073e+00,1.8112e+02,1.1656e+02,9.3277e+00,1.8112e+02,1.1709e+02,9.6989e+00,1.8112e+02,1.1759e+02,1.0117e+01,1.8112e+02,1.1806e+02,4.4422e+01,1.8112e+02,1.5236e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2076"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {8.2575e+00,3.0812e+02,1.1357e+02,8.2575e+00,1.8112e+02,1.1357e+02,8.3119e+00,3.0812e+02,1.1439e+02,8.3119e+00,1.8112e+02,1.1439e+02,8.4739e+00,3.0812e+02,1.1521e+02,8.4739e+00,1.8112e+02,1.1521e+02,8.7409e+00,3.0812e+02,1.1600e+02,8.7409e+00,1.8112e+02,1.1600e+02,9.1083e+00,3.0812e+02,1.1674e+02,9.1083e+00,1.8112e+02,1.1674e+02,9.5697e+00,3.0812e+02,1.1743e+02,9.5697e+00,1.8112e+02,1.1743e+02,1.0117e+01,3.0812e+02,1.1806e+02,1.0117e+01,1.8112e+02,1.1806e+02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0000e+00,-0.0000e+00,6.1232e-17,1.0000e+00,-0.0000e+00,6.1232e-17,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2301"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {8,9,10,7,8,10,7,10,11,6,7,11,5,6,11,4,5,11,3,4,11,2,3,11,1,2,11,1,11,12,0,1,12,21,0,12,21,12,13,21,13,14,21,14,15,21,15,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0117e+01,3.0812e+02,1.1806e+02,9.6989e+00,3.0812e+02,1.1759e+02,9.3277e+00,3.0812e+02,1.1709e+02,9.0073e+00,3.0812e+02,1.1656e+02,8.7409e+00,3.0812e+02,1.1600e+02,8.5310e+00,3.0812e+02,1.1541e+02,8.3796e+00,3.0812e+02,1.1480e+02,8.2881e+00,3.0812e+02,1.1419e+02,8.2575e+00,3.0812e+02,1.1357e+02,8.2575e+00,3.0812e+02,1.0097e+02,6.3500e+00,3.0812e+02,1.0097e+02,6.3500e+00,3.0812e+02,1.1357e+02,6.3898e+00,3.0812e+02,1.1438e+02,6.5087e+00,3.0812e+02,1.1518e+02,6.7056e+00,3.0812e+02,1.1596e+02,6.9786e+00,3.0812e+02,1.1673e+02,7.3250e+00,3.0812e+02,1.1746e+02,7.7416e+00,3.0812e+02,1.1815e+02,8.2244e+00,3.0812e+02,1.1880e+02,8.7686e+00,3.0812e+02,1.1940e+02,4.3073e+01,3.0812e+02,1.5371e+02,4.4422e+01,3.0812e+02,1.5236e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2386"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {5.2053e+01,2.9542e+02,1.6269e+02,5.3402e+01,2.9542e+02,1.6134e+02,5.1988e+01,2.9696e+02,1.6262e+02,5.3337e+01,2.9696e+02,1.6128e+02,5.1792e+01,2.9846e+02,1.6243e+02,5.3141e+01,2.9846e+02,1.6108e+02,5.1470e+01,2.9993e+02,1.6211e+02,5.2819e+01,2.9993e+02,1.6076e+02,5.1025e+01,3.0133e+02,1.6166e+02,5.2374e+01,3.0133e+02,1.6031e+02,5.0464e+01,3.0264e+02,1.6110e+02,5.1813e+01,3.0264e+02,1.5975e+02,4.9795e+01,3.0385e+02,1.6043e+02,5.1144e+01,3.0385e+02,1.5908e+02,4.9028e+01,3.0493e+02,1.5966e+02,5.0377e+01,3.0493e+02,1.5832e+02,4.8175e+01,3.0588e+02,1.5881e+02,4.9523e+01,3.0588e+02,1.5746e+02,4.7246e+01,3.0667e+02,1.5788e+02,4.8595e+01,3.0667e+02,1.5653e+02,4.6258e+01,3.0730e+02,1.5689e+02,4.7606e+01,3.0730e+02,1.5555e+02,4.5222e+01,3.0776e+02,1.5586e+02,4.6571e+01,3.0776e+02,1.5451e+02,4.4156e+01,3.0803e+02,1.5479e+02,4.5504e+01,3.0803e+02,1.5344e+02,4.3073e+01,3.0812e+02,1.5371e+02,4.4422e+01,3.0812e+02,1.5236e+02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {7.0711e-01,1.2246e-16,7.0711e-01,7.0711e-01,1.2246e-16,7.0711e-01,7.0195e-01,1.2054e-01,7.0195e-01,7.0195e-01,1.2054e-01,7.0195e-01,6.8656e-01,2.3932e-01,6.8656e-01,6.8656e-01,2.3932e-01,6.8656e-01,6.6116e-01,3.5460e-01,6.6116e-01,6.6116e-01,3.5460e-01,6.6116e-01,6.2611e-01,4.6472e-01,6.2611e-01,6.2611e-01,4.6472e-01,6.2611e-01,5.8194e-01,5.6806e-01,5.8194e-01,5.8194e-01,5.6806e-01,5.8194e-01,5.2928e-01,6.6312e-01,5.2928e-01,5.2928e-01,6.6312e-01,5.2928e-01,4.6890e-01,7.4851e-01,4.6890e-01,4.6890e-01,7.4851e-01,4.6890e-01,4.0168e-01,8.2298e-01,4.0168e-01,4.0168e-01,8.2298e-01,4.0168e-01,3.2861e-01,8.8546e-01,3.2861e-01,3.2861e-01,8.8546e-01,3.2861e-01,2.5074e-01,9.3502e-01,2.5074e-01,2.5074e-01,9.3502e-01,2.5074e-01,1.6922e-01,9.7094e-01,1.6922e-01,1.6922e-01,9.7094e-01,1.6922e-01,8.5232e-02,9.9271e-01,8.5232e-02,8.5232e-02,9.9271e-01,8.5232e-02,-3.9370e-09,1.0000e+00,-3.9370e-09,-3.9370e-09,1.0000e+00,-3.9370e-09}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2471"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {5.3402e+01,1.9382e+02,1.6134e+02,5.3402e+01,2.9542e+02,1.6134e+02,5.2053e+01,2.9542e+02,1.6269e+02,5.3402e+01,1.9382e+02,1.6134e+02,5.2053e+01,2.9542e+02,1.6269e+02,5.2053e+01,1.9382e+02,1.6269e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2531"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {4.3073e+01,1.8112e+02,1.5371e+02,4.4422e+01,1.8112e+02,1.5236e+02,4.4156e+01,1.8122e+02,1.5479e+02,4.5504e+01,1.8122e+02,1.5344e+02,4.5222e+01,1.8149e+02,1.5586e+02,4.6571e+01,1.8149e+02,1.5451e+02,4.6258e+01,1.8195e+02,1.5689e+02,4.7606e+01,1.8195e+02,1.5555e+02,4.7246e+01,1.8258e+02,1.5788e+02,4.8595e+01,1.8258e+02,1.5653e+02,4.8175e+01,1.8337e+02,1.5881e+02,4.9523e+01,1.8337e+02,1.5746e+02,4.9028e+01,1.8432e+02,1.5966e+02,5.0377e+01,1.8432e+02,1.5832e+02,4.9795e+01,1.8540e+02,1.6043e+02,5.1144e+01,1.8540e+02,1.5908e+02,5.0464e+01,1.8661e+02,1.6110e+02,5.1813e+01,1.8661e+02,1.5975e+02,5.1025e+01,1.8792e+02,1.6166e+02,5.2374e+01,1.8792e+02,1.6031e+02,5.1470e+01,1.8932e+02,1.6211e+02,5.2819e+01,1.8932e+02,1.6076e+02,5.1792e+01,1.9079e+02,1.6243e+02,5.3141e+01,1.9079e+02,1.6108e+02,5.1988e+01,1.9229e+02,1.6262e+02,5.3337e+01,1.9229e+02,1.6128e+02,5.2053e+01,1.9382e+02,1.6269e+02,5.3402e+01,1.9382e+02,1.6134e+02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-3.9370e-09,-1.0000e+00,-3.9370e-09,-3.9370e-09,-1.0000e+00,-3.9370e-09,8.5232e-02,-9.9271e-01,8.5232e-02,8.5232e-02,-9.9271e-01,8.5232e-02,1.6922e-01,-9.7094e-01,1.6922e-01,1.6922e-01,-9.7094e-01,1.6922e-01,2.5074e-01,-9.3502e-01,2.5074e-01,2.5074e-01,-9.3502e-01,2.5074e-01,3.2861e-01,-8.8546e-01,3.2861e-01,3.2861e-01,-8.8546e-01,3.2861e-01,4.0168e-01,-8.2298e-01,4.0168e-01,4.0168e-01,-8.2298e-01,4.0168e-01,4.6890e-01,-7.4851e-01,4.6890e-01,4.6890e-01,-7.4851e-01,4.6890e-01,5.2928e-01,-6.6312e-01,5.2928e-01,5.2928e-01,-6.6312e-01,5.2928e-01,5.8194e-01,-5.6806e-01,5.8194e-01,5.8194e-01,-5.6806e-01,5.8194e-01,6.2611e-01,-4.6472e-01,6.2611e-01,6.2611e-01,-4.6472e-01,6.2611e-01,6.6116e-01,-3.5460e-01,6.6116e-01,6.6116e-01,-3.5460e-01,6.6116e-01,6.8656e-01,-2.3932e-01,6.8656e-01,6.8656e-01,-2.3932e-01,6.8656e-01,7.0195e-01,-1.2054e-01,7.0195e-01,7.0195e-01,-1.2054e-01,7.0195e-01,7.0711e-01,-1.2246e-16,7.0711e-01,7.0711e-01,-1.2246e-16,7.0711e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2641"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_110_point()))
            .setNormal(new Normal().setVector(getNormal_7_111_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2701"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_117_point()))
            .setNormal(new Normal().setVector(getNormal_7_118_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2811"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_124_point()))
            .setNormal(new Normal().setVector(getNormal_7_125_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2871"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_131_point()))
            .setNormal(new Normal().setVector(getNormal_7_132_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#2981"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_138_point()))
            .setNormal(new Normal().setVector(getNormal_7_139_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#3041"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_145_point()))
            .setNormal(new Normal().setVector(getNormal_7_146_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#3151"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_152_point()))
            .setNormal(new Normal().setVector(getNormal_7_153_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#3211"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_159_point()))
            .setNormal(new Normal().setVector(getNormal_7_160_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#3296"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,3.0812e+02,1.1357e+02,6.3500e+00,1.8112e+02,1.1357e+02,6.4019e+00,3.0812e+02,1.1449e+02,6.4019e+00,1.8112e+02,1.1449e+02,6.5570e+00,3.0812e+02,1.1540e+02,6.5570e+00,1.8112e+02,1.1540e+02,6.8134e+00,3.0812e+02,1.1629e+02,6.8134e+00,1.8112e+02,1.1629e+02,7.1678e+00,3.0812e+02,1.1715e+02,7.1678e+00,1.8112e+02,1.1715e+02,7.6157e+00,3.0812e+02,1.1796e+02,7.6157e+00,1.8112e+02,1.1796e+02,8.1515e+00,3.0812e+02,1.1871e+02,8.1515e+00,1.8112e+02,1.1871e+02,8.7686e+00,3.0812e+02,1.1940e+02,8.7686e+00,1.8112e+02,1.1940e+02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0000e+00,0.0000e+00,-6.1232e-17,-1.0000e+00,0.0000e+00,-6.1232e-17,-9.9371e-01,0.0000e+00,1.1196e-01,-9.9371e-01,0.0000e+00,1.1196e-01,-9.7493e-01,0.0000e+00,2.2252e-01,-9.7493e-01,0.0000e+00,2.2252e-01,-9.4388e-01,0.0000e+00,3.3028e-01,-9.4388e-01,0.0000e+00,3.3028e-01,-9.0097e-01,0.0000e+00,4.3388e-01,-9.0097e-01,0.0000e+00,4.3388e-01,-8.4672e-01,0.0000e+00,5.3203e-01,-8.4672e-01,0.0000e+00,5.3203e-01,-7.8183e-01,0.0000e+00,6.2349e-01,-7.8183e-01,0.0000e+00,6.2349e-01,-7.0711e-01,0.0000e+00,7.0711e-01,-7.0711e-01,0.0000e+00,7.0711e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#3741"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {27,0,1,27,1,2,3,4,5,3,5,6,7,8,9,7,9,10,7,10,11,7,11,12,7,12,13,7,13,14,7,14,15,7,15,16,7,16,17,7,17,18,2,7,18,2,18,19,27,2,19,27,19,20,27,20,21,27,21,22,27,22,23,27,23,24,27,24,25,27,25,26}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,7.2690e+01,1.1621e+02,6.3500e+00,1.0238e+02,1.1621e+02,6.3500e+00,1.1762e+02,1.0097e+02,6.3500e+00,1.8112e+02,1.0097e+02,6.3500e+00,1.8112e+02,1.1357e+02,6.3500e+00,3.0812e+02,1.1357e+02,6.3500e+00,3.0812e+02,1.0097e+02,6.3500e+00,3.7162e+02,1.0097e+02,6.3500e+00,3.8686e+02,1.1621e+02,6.3500e+00,4.1276e+02,1.1621e+02,6.3500e+00,4.1523e+02,1.1596e+02,6.3500e+00,4.1762e+02,1.1524e+02,6.3500e+00,4.1981e+02,1.1407e+02,6.3500e+00,4.2174e+02,1.1249e+02,6.3500e+00,4.2331e+02,1.1056e+02,6.3500e+00,4.2449e+02,1.0837e+02,6.3500e+00,4.2521e+02,1.0599e+02,6.3500e+00,4.2546e+02,1.0351e+02,6.3500e+00,4.2546e+02,8.4458e+01,6.3500e+00,5.9990e+01,8.4458e+01,6.3500e+00,5.9990e+01,1.0351e+02,6.3500e+00,6.0234e+01,1.0599e+02,6.3500e+00,6.0956e+01,1.0837e+02,6.3500e+00,6.2130e+01,1.1056e+02,6.3500e+00,6.3709e+01,1.1249e+02,6.3500e+00,6.5634e+01,1.1407e+02,6.3500e+00,6.7830e+01,1.1524e+02,6.3500e+00,7.0212e+01,1.1596e+02,6.3500e+00,7.2690e+01,1.1621e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#3856"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,1.8112e+02,1.0097e+02,6.3500e+00,1.1762e+02,1.0097e+02,8.2575e+00,1.1762e+02,1.0097e+02,6.3500e+00,1.8112e+02,1.0097e+02,8.2575e+00,1.1762e+02,1.0097e+02,8.2575e+00,1.8112e+02,1.0097e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#4271"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {27,0,1,1,2,3,3,4,5,3,5,6,3,6,7,3,7,8,3,8,9,3,9,10,3,10,11,3,11,12,3,12,13,1,3,13,1,13,14,1,14,15,15,16,17,1,15,17,1,17,18,27,1,18,27,18,19,27,19,20,27,20,21,27,21,22,27,22,23,27,23,24,27,24,25,27,25,26}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {8.2575e+00,5.9990e+01,1.0351e+02,8.2575e+00,5.9990e+01,8.4458e+01,8.2575e+00,4.2546e+02,8.4458e+01,8.2575e+00,4.2546e+02,1.0351e+02,8.2575e+00,4.2521e+02,1.0599e+02,8.2575e+00,4.2449e+02,1.0837e+02,8.2575e+00,4.2331e+02,1.1056e+02,8.2575e+00,4.2174e+02,1.1249e+02,8.2575e+00,4.1981e+02,1.1407e+02,8.2575e+00,4.1762e+02,1.1524e+02,8.2575e+00,4.1523e+02,1.1596e+02,8.2575e+00,4.1276e+02,1.1621e+02,8.2575e+00,3.8686e+02,1.1621e+02,8.2575e+00,3.7162e+02,1.0097e+02,8.2575e+00,3.0812e+02,1.0097e+02,8.2575e+00,3.0812e+02,1.1357e+02,8.2575e+00,1.8112e+02,1.1357e+02,8.2575e+00,1.8112e+02,1.0097e+02,8.2575e+00,1.1762e+02,1.0097e+02,8.2575e+00,1.0238e+02,1.1621e+02,8.2575e+00,7.2690e+01,1.1621e+02,8.2575e+00,7.0212e+01,1.1596e+02,8.2575e+00,6.7830e+01,1.1524e+02,8.2575e+00,6.5634e+01,1.1407e+02,8.2575e+00,6.3709e+01,1.1249e+02,8.2575e+00,6.2130e+01,1.1056e+02,8.2575e+00,6.0956e+01,1.0837e+02,8.2575e+00,6.0234e+01,1.0599e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#4356"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {8.2575e+00,3.0812e+02,1.0097e+02,8.2575e+00,3.7162e+02,1.0097e+02,6.3500e+00,3.7162e+02,1.0097e+02,8.2575e+00,3.0812e+02,1.0097e+02,6.3500e+00,3.7162e+02,1.0097e+02,6.3500e+00,3.0812e+02,1.0097e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#4466"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {8.2575e+00,7.2690e+01,1.1621e+02,8.2575e+00,1.0238e+02,1.1621e+02,6.3500e+00,1.0238e+02,1.1621e+02,8.2575e+00,7.2690e+01,1.1621e+02,6.3500e+00,1.0238e+02,1.1621e+02,6.3500e+00,7.2690e+01,1.1621e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#4526"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {8.2575e+00,1.0238e+02,1.1621e+02,8.2575e+00,1.1762e+02,1.0097e+02,6.3500e+00,1.1762e+02,1.0097e+02,8.2575e+00,1.0238e+02,1.1621e+02,6.3500e+00,1.1762e+02,1.0097e+02,6.3500e+00,1.0238e+02,1.1621e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#4611"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,3.7162e+02,1.0097e+02,8.2575e+00,3.7162e+02,1.0097e+02,8.2575e+00,3.8686e+02,1.1621e+02,6.3500e+00,3.7162e+02,1.0097e+02,8.2575e+00,3.8686e+02,1.1621e+02,6.3500e+00,3.8686e+02,1.1621e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#4696"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,4.1276e+02,1.1621e+02,6.3500e+00,3.8686e+02,1.1621e+02,8.2575e+00,3.8686e+02,1.1621e+02,6.3500e+00,4.1276e+02,1.1621e+02,8.2575e+00,3.8686e+02,1.1621e+02,8.2575e+00,4.1276e+02,1.1621e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#4781"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,4.1276e+02,1.1621e+02,8.2575e+00,4.1276e+02,1.1621e+02,6.3500e+00,4.1441e+02,1.1610e+02,8.2575e+00,4.1441e+02,1.1610e+02,6.3500e+00,4.1604e+02,1.1577e+02,8.2575e+00,4.1604e+02,1.1577e+02,6.3500e+00,4.1762e+02,1.1524e+02,8.2575e+00,4.1762e+02,1.1524e+02,6.3500e+00,4.1911e+02,1.1451e+02,8.2575e+00,4.1911e+02,1.1451e+02,6.3500e+00,4.2049e+02,1.1358e+02,8.2575e+00,4.2049e+02,1.1358e+02,6.3500e+00,4.2174e+02,1.1249e+02,8.2575e+00,4.2174e+02,1.1249e+02,6.3500e+00,4.2283e+02,1.1124e+02,8.2575e+00,4.2283e+02,1.1124e+02,6.3500e+00,4.2375e+02,1.0986e+02,8.2575e+00,4.2375e+02,1.0986e+02,6.3500e+00,4.2449e+02,1.0837e+02,8.2575e+00,4.2449e+02,1.0837e+02,6.3500e+00,4.2502e+02,1.0679e+02,8.2575e+00,4.2502e+02,1.0679e+02,6.3500e+00,4.2535e+02,1.0517e+02,8.2575e+00,4.2535e+02,1.0517e+02,6.3500e+00,4.2546e+02,1.0351e+02,8.2575e+00,4.2546e+02,1.0351e+02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,-1.2246e-16,1.0000e+00,0.0000e+00,-1.2246e-16,1.0000e+00,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,1.0000e+00,1.8370e-16,0.0000e+00,1.0000e+00,1.8370e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#5016"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,4,5,6,4,6,7,4,7,8,4,8,9,9,10,11,4,9,11,4,11,12,4,12,13,4,13,14,4,14,15,4,15,16,4,16,17,4,17,18,21,4,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {8.2575e+00,4.2546e+02,8.4458e+01,8.0989e+00,4.2546e+02,8.2847e+01,7.6290e+00,4.2546e+02,8.1297e+01,6.8660e+00,4.2546e+02,7.9870e+01,5.8390e+00,4.2546e+02,7.8619e+01,4.5877e+00,4.2546e+02,7.7592e+01,3.1601e+00,4.2546e+02,7.6829e+01,1.6110e+00,4.2546e+02,7.6359e+01,-1.3269e-12,4.2546e+02,7.6200e+01,-8.8900e+00,4.2546e+02,7.6200e+01,-8.8900e+00,4.2546e+02,7.8108e+01,3.5527e-15,4.2546e+02,7.8108e+01,1.2388e+00,4.2546e+02,7.8230e+01,2.4301e+00,4.2546e+02,7.8591e+01,3.5279e+00,4.2546e+02,7.9178e+01,4.4902e+00,4.2546e+02,7.9967e+01,5.2799e+00,4.2546e+02,8.0930e+01,5.8667e+00,4.2546e+02,8.2027e+01,6.2280e+00,4.2546e+02,8.3219e+01,6.3500e+00,4.2546e+02,8.4458e+01,6.3500e+00,4.2546e+02,1.0351e+02,8.2575e+00,4.2546e+02,1.0351e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#5136"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,4.2546e+02,8.4458e+01,6.3500e+00,5.9990e+01,8.4458e+01,6.2957e+00,4.2546e+02,8.3629e+01,6.2957e+00,5.9990e+01,8.3629e+01,6.1336e+00,4.2546e+02,8.2814e+01,6.1336e+00,5.9990e+01,8.2814e+01,5.8666e+00,4.2546e+02,8.2028e+01,5.8666e+00,5.9990e+01,8.2028e+01,5.4993e+00,4.2546e+02,8.1283e+01,5.4993e+00,5.9990e+01,8.1283e+01,5.0378e+00,4.2546e+02,8.0592e+01,5.0378e+00,5.9990e+01,8.0592e+01,4.4901e+00,4.2546e+02,7.9967e+01,4.4901e+00,5.9990e+01,7.9967e+01,3.8656e+00,4.2546e+02,7.9420e+01,3.8656e+00,5.9990e+01,7.9420e+01,3.1750e+00,4.2546e+02,7.8958e+01,3.1750e+00,5.9990e+01,7.8958e+01,2.4300e+00,4.2546e+02,7.8591e+01,2.4300e+00,5.9990e+01,7.8591e+01,1.6435e+00,4.2546e+02,7.8324e+01,1.6435e+00,5.9990e+01,7.8324e+01,8.2884e-01,4.2546e+02,7.8162e+01,8.2884e-01,5.9990e+01,7.8162e+01,3.4032e-15,4.2546e+02,7.8108e+01,3.4032e-15,5.9990e+01,7.8108e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0000e+00,-0.0000e+00,6.1232e-17,-1.0000e+00,-0.0000e+00,6.1232e-17,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-5.3594e-16,-0.0000e+00,1.0000e+00,-5.3594e-16,-0.0000e+00,1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#5361"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,9,10,11,8,9,11,8,11,12,7,8,12,6,7,12,5,6,12,5,12,13,4,5,13,4,13,14,3,4,14,3,14,15,2,3,15,2,15,16,21,2,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,5.9990e+01,1.0351e+02,6.3500e+00,5.9990e+01,8.4458e+01,6.2280e+00,5.9990e+01,8.3219e+01,5.8667e+00,5.9990e+01,8.2027e+01,5.2799e+00,5.9990e+01,8.0930e+01,4.4902e+00,5.9990e+01,7.9967e+01,3.5279e+00,5.9990e+01,7.9178e+01,2.4301e+00,5.9990e+01,7.8591e+01,1.2388e+00,5.9990e+01,7.8230e+01,1.1671e-12,5.9990e+01,7.8108e+01,-8.8900e+00,5.9990e+01,7.8108e+01,-8.8900e+00,5.9990e+01,7.6200e+01,1.7764e-15,5.9990e+01,7.6200e+01,1.6110e+00,5.9990e+01,7.6359e+01,3.1600e+00,5.9990e+01,7.6829e+01,4.5877e+00,5.9990e+01,7.7592e+01,5.8390e+00,5.9990e+01,7.8619e+01,6.8659e+00,5.9990e+01,7.9870e+01,7.6290e+00,5.9990e+01,8.1297e+01,8.0989e+00,5.9990e+01,8.2847e+01,8.2575e+00,5.9990e+01,8.4458e+01,8.2575e+00,5.9990e+01,1.0351e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#5421"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {6.3500e+00,5.9990e+01,1.0351e+02,8.2575e+00,5.9990e+01,1.0351e+02,6.3500e+00,6.0098e+01,1.0517e+02,8.2575e+00,6.0098e+01,1.0517e+02,6.3500e+00,6.0422e+01,1.0679e+02,8.2575e+00,6.0422e+01,1.0679e+02,6.3500e+00,6.0956e+01,1.0837e+02,8.2575e+00,6.0956e+01,1.0837e+02,6.3500e+00,6.1691e+01,1.0986e+02,8.2575e+00,6.1691e+01,1.0986e+02,6.3500e+00,6.2614e+01,1.1124e+02,8.2575e+00,6.2614e+01,1.1124e+02,6.3500e+00,6.3709e+01,1.1249e+02,8.2575e+00,6.3709e+01,1.1249e+02,6.3500e+00,6.4958e+01,1.1358e+02,8.2575e+00,6.4958e+01,1.1358e+02,6.3500e+00,6.6340e+01,1.1451e+02,8.2575e+00,6.6340e+01,1.1451e+02,6.3500e+00,6.7830e+01,1.1524e+02,8.2575e+00,6.7830e+01,1.1524e+02,6.3500e+00,6.9403e+01,1.1577e+02,8.2575e+00,6.9403e+01,1.1577e+02,6.3500e+00,7.1032e+01,1.1610e+02,8.2575e+00,7.1032e+01,1.1610e+02,6.3500e+00,7.2690e+01,1.1621e+02,8.2575e+00,7.2690e+01,1.1621e+02})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,-1.0000e+00,-6.1232e-17,0.0000e+00,-1.0000e+00,-6.1232e-17,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.2246e-16,1.0000e+00,0.0000e+00,-1.2246e-16,1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#5506"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {8.2575e+00,4.2546e+02,8.4458e+01,8.2575e+00,5.9990e+01,8.4458e+01,8.1973e+00,4.2546e+02,8.3462e+01,8.1973e+00,5.9990e+01,8.3462e+01,8.0176e+00,4.2546e+02,8.2481e+01,8.0176e+00,5.9990e+01,8.2481e+01,7.7209e+00,4.2546e+02,8.1529e+01,7.7209e+00,5.9990e+01,8.1529e+01,7.3117e+00,4.2546e+02,8.0620e+01,7.3117e+00,5.9990e+01,8.0620e+01,6.7958e+00,4.2546e+02,7.9767e+01,6.7958e+00,5.9990e+01,7.9767e+01,6.1809e+00,4.2546e+02,7.8982e+01,6.1809e+00,5.9990e+01,7.8982e+01,5.4758e+00,4.2546e+02,7.8277e+01,5.4758e+00,5.9990e+01,7.8277e+01,4.6908e+00,4.2546e+02,7.7662e+01,4.6908e+00,5.9990e+01,7.7662e+01,3.8375e+00,4.2546e+02,7.7146e+01,3.8375e+00,5.9990e+01,7.7146e+01,2.9282e+00,4.2546e+02,7.6737e+01,2.9282e+00,5.9990e+01,7.6737e+01,1.9762e+00,4.2546e+02,7.6440e+01,1.9762e+00,5.9990e+01,7.6440e+01,9.9534e-01,4.2546e+02,7.6260e+01,9.9534e-01,5.9990e+01,7.6260e+01,-1.1905e-14,4.2546e+02,7.6200e+01,-1.1905e-14,5.9990e+01,7.6200e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0000e+00,0.0000e+00,-6.1232e-17,1.0000e+00,0.0000e+00,-6.1232e-17,9.9271e-01,0.0000e+00,-1.2054e-01,9.9271e-01,0.0000e+00,-1.2054e-01,9.7094e-01,0.0000e+00,-2.3932e-01,9.7094e-01,0.0000e+00,-2.3932e-01,9.3502e-01,0.0000e+00,-3.5460e-01,9.3502e-01,0.0000e+00,-3.5460e-01,8.8546e-01,0.0000e+00,-4.6472e-01,8.8546e-01,0.0000e+00,-4.6472e-01,8.2298e-01,0.0000e+00,-5.6806e-01,8.2298e-01,0.0000e+00,-5.6806e-01,7.4851e-01,0.0000e+00,-6.6312e-01,7.4851e-01,0.0000e+00,-6.6312e-01,6.6312e-01,0.0000e+00,-7.4851e-01,6.6312e-01,0.0000e+00,-7.4851e-01,5.6806e-01,0.0000e+00,-8.2298e-01,5.6806e-01,0.0000e+00,-8.2298e-01,4.6472e-01,0.0000e+00,-8.8546e-01,4.6472e-01,0.0000e+00,-8.8546e-01,3.5460e-01,0.0000e+00,-9.3502e-01,3.5460e-01,0.0000e+00,-9.3502e-01,2.3932e-01,0.0000e+00,-9.7094e-01,2.3932e-01,0.0000e+00,-9.7094e-01,1.2054e-01,0.0000e+00,-9.9271e-01,1.2054e-01,0.0000e+00,-9.9271e-01,-1.4417e-15,0.0000e+00,-1.0000e+00,-1.4417e-15,0.0000e+00,-1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#6731"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_261_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_261_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#6996"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {8,9,10,7,8,10,7,10,11,6,7,11,5,6,11,4,5,11,4,11,12,3,4,12,3,12,13,2,3,13,2,13,14,1,2,14,1,14,15,0,1,15,0,15,16,21,0,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,4.2639e+02,7.6200e+01,-8.8900e+00,4.2763e+02,7.6078e+01,-8.8900e+00,4.2882e+02,7.5717e+01,-8.8900e+00,4.2992e+02,7.5130e+01,-8.8900e+00,4.3088e+02,7.4340e+01,-8.8900e+00,4.3167e+02,7.3378e+01,-8.8900e+00,4.3225e+02,7.2280e+01,-8.8900e+00,4.3262e+02,7.1089e+01,-8.8900e+00,4.3274e+02,6.9850e+01,-8.8900e+00,4.3274e+02,5.7280e+01,-8.8900e+00,4.3464e+02,5.7280e+01,-8.8900e+00,4.3464e+02,6.9850e+01,-8.8900e+00,4.3449e+02,7.1461e+01,-8.8900e+00,4.3402e+02,7.3010e+01,-8.8900e+00,4.3325e+02,7.4438e+01,-8.8900e+00,4.3223e+02,7.5689e+01,-8.8900e+00,4.3097e+02,7.6716e+01,-8.8900e+00,4.2955e+02,7.7479e+01,-8.8900e+00,4.2800e+02,7.7949e+01,-8.8900e+00,4.2639e+02,7.8108e+01,-8.8900e+00,4.2546e+02,7.8108e+01,-8.8900e+00,4.2546e+02,7.6200e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#8191"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_273_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_273_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#8426"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,21,4,5,21,5,6,6,7,8,6,8,9,6,9,10,6,10,11,6,11,12,6,12,13,6,13,14,6,14,15,6,15,16,21,6,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,5.8087e+01,7.8108e+01,-8.8900e+00,5.6476e+01,7.7949e+01,-8.8900e+00,5.4927e+01,7.7479e+01,-8.8900e+00,5.3500e+01,7.6716e+01,-8.8900e+00,5.2248e+01,7.5689e+01,-8.8900e+00,5.1221e+01,7.4438e+01,-8.8900e+00,5.0458e+01,7.3010e+01,-8.8900e+00,4.9988e+01,7.1461e+01,-8.8900e+00,4.9830e+01,6.9850e+01,-8.8900e+00,4.9830e+01,5.7280e+01,-8.8900e+00,5.1737e+01,5.7280e+01,-8.8900e+00,5.1737e+01,6.9850e+01,-8.8900e+00,5.1859e+01,7.1089e+01,-8.8900e+00,5.2221e+01,7.2280e+01,-8.8900e+00,5.2807e+01,7.3378e+01,-8.8900e+00,5.3597e+01,7.4340e+01,-8.8900e+00,5.4559e+01,7.5130e+01,-8.8900e+00,5.5657e+01,7.5717e+01,-8.8900e+00,5.6848e+01,7.6078e+01,-8.8900e+00,5.8087e+01,7.6200e+01,-8.8900e+00,5.9990e+01,7.6200e+01,-8.8900e+00,5.9990e+01,7.8108e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#8546"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,5.8087e+01,7.6200e+01,-2.3241e+02,5.8087e+01,7.6200e+01,-8.8900e+00,5.7258e+01,7.6146e+01,-2.3241e+02,5.7258e+01,7.6146e+01,-8.8900e+00,5.6444e+01,7.5984e+01,-2.3241e+02,5.6444e+01,7.5984e+01,-8.8900e+00,5.5657e+01,7.5717e+01,-2.3241e+02,5.5657e+01,7.5717e+01,-8.8900e+00,5.4912e+01,7.5349e+01,-2.3241e+02,5.4912e+01,7.5349e+01,-8.8900e+00,5.4222e+01,7.4888e+01,-2.3241e+02,5.4222e+01,7.4888e+01,-8.8900e+00,5.3597e+01,7.4340e+01,-2.3241e+02,5.3597e+01,7.4340e+01,-8.8900e+00,5.3049e+01,7.3716e+01,-2.3241e+02,5.3049e+01,7.3716e+01,-8.8900e+00,5.2588e+01,7.3025e+01,-2.3241e+02,5.2588e+01,7.3025e+01,-8.8900e+00,5.2221e+01,7.2280e+01,-2.3241e+02,5.2221e+01,7.2280e+01,-8.8900e+00,5.1954e+01,7.1494e+01,-2.3241e+02,5.1954e+01,7.1494e+01,-8.8900e+00,5.1792e+01,7.0679e+01,-2.3241e+02,5.1792e+01,7.0679e+01,-8.8900e+00,5.1737e+01,6.9850e+01,-2.3241e+02,5.1737e+01,6.9850e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#8771"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {8,9,10,7,8,10,7,10,11,6,7,11,5,6,11,4,5,11,4,11,12,3,4,12,3,12,13,2,3,13,2,13,14,1,2,14,1,14,15,0,1,15,0,15,16,21,0,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.3241e+02,5.8087e+01,7.6200e+01,-2.3241e+02,5.6848e+01,7.6078e+01,-2.3241e+02,5.5657e+01,7.5717e+01,-2.3241e+02,5.4559e+01,7.5130e+01,-2.3241e+02,5.3597e+01,7.4340e+01,-2.3241e+02,5.2807e+01,7.3378e+01,-2.3241e+02,5.2221e+01,7.2280e+01,-2.3241e+02,5.1859e+01,7.1089e+01,-2.3241e+02,5.1737e+01,6.9850e+01,-2.3241e+02,5.1737e+01,5.7280e+01,-2.3241e+02,4.9830e+01,5.7280e+01,-2.3241e+02,4.9830e+01,6.9850e+01,-2.3241e+02,4.9988e+01,7.1461e+01,-2.3241e+02,5.0458e+01,7.3010e+01,-2.3241e+02,5.1221e+01,7.4438e+01,-2.3241e+02,5.2248e+01,7.5689e+01,-2.3241e+02,5.3500e+01,7.6716e+01,-2.3241e+02,5.4927e+01,7.7479e+01,-2.3241e+02,5.6476e+01,7.7949e+01,-2.3241e+02,5.8087e+01,7.8108e+01,-2.3241e+02,5.9990e+01,7.8108e+01,-2.3241e+02,5.9990e+01,7.6200e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9006"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,4,5,6,4,6,7,4,7,8,4,8,9,9,10,11,9,11,12,9,12,13,4,9,13,4,13,14,4,14,15,4,15,16,4,16,17,4,17,18,4,18,19,4,19,20,21,4,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4956e+02,5.9990e+01,1.0351e+02,-2.4956e+02,5.9990e+01,8.4458e+01,-2.4940e+02,5.9990e+01,8.2847e+01,-2.4893e+02,5.9990e+01,8.1297e+01,-2.4817e+02,5.9990e+01,7.9870e+01,-2.4714e+02,5.9990e+01,7.8619e+01,-2.4589e+02,5.9990e+01,7.7592e+01,-2.4446e+02,5.9990e+01,7.6828e+01,-2.4291e+02,5.9990e+01,7.6359e+01,-2.4130e+02,5.9990e+01,7.6200e+01,-2.3241e+02,5.9990e+01,7.6200e+01,-2.3241e+02,5.9990e+01,7.8108e+01,-2.4130e+02,5.9990e+01,7.8108e+01,-2.4254e+02,5.9990e+01,7.8230e+01,-2.4373e+02,5.9990e+01,7.8591e+01,-2.4483e+02,5.9990e+01,7.9178e+01,-2.4579e+02,5.9990e+01,7.9967e+01,-2.4658e+02,5.9990e+01,8.0930e+01,-2.4717e+02,5.9990e+01,8.2027e+01,-2.4753e+02,5.9990e+01,8.3219e+01,-2.4765e+02,5.9990e+01,8.4458e+01,-2.4765e+02,5.9990e+01,1.0351e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9126"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4130e+02,4.2546e+02,7.6200e+01,-2.4130e+02,5.9990e+01,7.6200e+01,-2.4238e+02,4.2546e+02,7.6271e+01,-2.4238e+02,5.9990e+01,7.6271e+01,-2.4344e+02,4.2546e+02,7.6481e+01,-2.4344e+02,5.9990e+01,7.6481e+01,-2.4446e+02,4.2546e+02,7.6829e+01,-2.4446e+02,5.9990e+01,7.6829e+01,-2.4543e+02,4.2546e+02,7.7306e+01,-2.4543e+02,5.9990e+01,7.7306e+01,-2.4633e+02,4.2546e+02,7.7906e+01,-2.4633e+02,5.9990e+01,7.7906e+01,-2.4714e+02,4.2546e+02,7.8619e+01,-2.4714e+02,5.9990e+01,7.8619e+01,-2.4785e+02,4.2546e+02,7.9431e+01,-2.4785e+02,5.9990e+01,7.9431e+01,-2.4845e+02,4.2546e+02,8.0329e+01,-2.4845e+02,5.9990e+01,8.0329e+01,-2.4893e+02,4.2546e+02,8.1298e+01,-2.4893e+02,5.9990e+01,8.1298e+01,-2.4928e+02,4.2546e+02,8.2320e+01,-2.4928e+02,5.9990e+01,8.2320e+01,-2.4949e+02,4.2546e+02,8.3380e+01,-2.4949e+02,5.9990e+01,8.3380e+01,-2.4956e+02,4.2546e+02,8.4458e+01,-2.4956e+02,5.9990e+01,8.4458e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,0.0000e+00,-1.0000e+00,0.0000e+00,0.0000e+00,-1.0000e+00,-1.3053e-01,0.0000e+00,-9.9144e-01,-1.3053e-01,0.0000e+00,-9.9144e-01,-2.5882e-01,0.0000e+00,-9.6593e-01,-2.5882e-01,0.0000e+00,-9.6593e-01,-3.8268e-01,0.0000e+00,-9.2388e-01,-3.8268e-01,0.0000e+00,-9.2388e-01,-5.0000e-01,0.0000e+00,-8.6603e-01,-5.0000e-01,0.0000e+00,-8.6603e-01,-6.0876e-01,0.0000e+00,-7.9335e-01,-6.0876e-01,0.0000e+00,-7.9335e-01,-7.0711e-01,0.0000e+00,-7.0711e-01,-7.0711e-01,0.0000e+00,-7.0711e-01,-7.9335e-01,0.0000e+00,-6.0876e-01,-7.9335e-01,0.0000e+00,-6.0876e-01,-8.6603e-01,0.0000e+00,-5.0000e-01,-8.6603e-01,0.0000e+00,-5.0000e-01,-9.2388e-01,0.0000e+00,-3.8268e-01,-9.2388e-01,0.0000e+00,-3.8268e-01,-9.6593e-01,0.0000e+00,-2.5882e-01,-9.6593e-01,0.0000e+00,-2.5882e-01,-9.9144e-01,0.0000e+00,-1.3053e-01,-9.9144e-01,0.0000e+00,-1.3053e-01,-1.0000e+00,0.0000e+00,-6.1232e-17,-1.0000e+00,0.0000e+00,-6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9351"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {8,9,10,7,8,10,7,10,11,6,7,11,5,6,11,4,5,11,4,11,12,3,4,12,3,12,13,2,3,13,2,13,14,1,2,14,1,14,15,0,1,15,0,15,16,21,0,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4765e+02,4.2546e+02,8.4458e+01,-2.4753e+02,4.2546e+02,8.3219e+01,-2.4717e+02,4.2546e+02,8.2027e+01,-2.4658e+02,4.2546e+02,8.0930e+01,-2.4579e+02,4.2546e+02,7.9967e+01,-2.4483e+02,4.2546e+02,7.9178e+01,-2.4373e+02,4.2546e+02,7.8591e+01,-2.4254e+02,4.2546e+02,7.8230e+01,-2.4130e+02,4.2546e+02,7.8108e+01,-2.3241e+02,4.2546e+02,7.8108e+01,-2.3241e+02,4.2546e+02,7.6200e+01,-2.4130e+02,4.2546e+02,7.6200e+01,-2.4291e+02,4.2546e+02,7.6359e+01,-2.4446e+02,4.2546e+02,7.6829e+01,-2.4589e+02,4.2546e+02,7.7592e+01,-2.4714e+02,4.2546e+02,7.8619e+01,-2.4817e+02,4.2546e+02,7.9870e+01,-2.4893e+02,4.2546e+02,8.1297e+01,-2.4940e+02,4.2546e+02,8.2847e+01,-2.4956e+02,4.2546e+02,8.4458e+01,-2.4956e+02,4.2546e+02,1.0351e+02,-2.4765e+02,4.2546e+02,1.0351e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9586"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,9,10,11,8,9,11,7,8,11,6,7,11,6,11,12,5,6,12,5,12,13,4,5,13,4,13,14,3,4,14,3,14,15,2,3,15,2,15,16,21,2,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.3241e+02,4.3274e+02,5.7280e+01,-2.3241e+02,4.3274e+02,6.9850e+01,-2.3241e+02,4.3262e+02,7.1089e+01,-2.3241e+02,4.3225e+02,7.2280e+01,-2.3241e+02,4.3167e+02,7.3378e+01,-2.3241e+02,4.3088e+02,7.4340e+01,-2.3241e+02,4.2992e+02,7.5130e+01,-2.3241e+02,4.2882e+02,7.5717e+01,-2.3241e+02,4.2763e+02,7.6078e+01,-2.3241e+02,4.2639e+02,7.6200e+01,-2.3241e+02,4.2546e+02,7.6200e+01,-2.3241e+02,4.2546e+02,7.8108e+01,-2.3241e+02,4.2639e+02,7.8108e+01,-2.3241e+02,4.2800e+02,7.7949e+01,-2.3241e+02,4.2955e+02,7.7479e+01,-2.3241e+02,4.3097e+02,7.6716e+01,-2.3241e+02,4.3223e+02,7.5689e+01,-2.3241e+02,4.3325e+02,7.4438e+01,-2.3241e+02,4.3402e+02,7.3010e+01,-2.3241e+02,4.3449e+02,7.1461e+01,-2.3241e+02,4.3464e+02,6.9850e+01,-2.3241e+02,4.3464e+02,5.7280e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9671"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,4.3274e+02,6.9850e+01,-2.3241e+02,4.3274e+02,6.9850e+01,-8.8900e+00,4.3268e+02,7.0679e+01,-2.3241e+02,4.3268e+02,7.0679e+01,-8.8900e+00,4.3252e+02,7.1494e+01,-2.3241e+02,4.3252e+02,7.1494e+01,-8.8900e+00,4.3225e+02,7.2280e+01,-2.3241e+02,4.3225e+02,7.2280e+01,-8.8900e+00,4.3189e+02,7.3025e+01,-2.3241e+02,4.3189e+02,7.3025e+01,-8.8900e+00,4.3143e+02,7.3716e+01,-2.3241e+02,4.3143e+02,7.3716e+01,-8.8900e+00,4.3088e+02,7.4340e+01,-2.3241e+02,4.3088e+02,7.4340e+01,-8.8900e+00,4.3025e+02,7.4888e+01,-2.3241e+02,4.3025e+02,7.4888e+01,-8.8900e+00,4.2956e+02,7.5349e+01,-2.3241e+02,4.2956e+02,7.5349e+01,-8.8900e+00,4.2882e+02,7.5717e+01,-2.3241e+02,4.2882e+02,7.5717e+01,-8.8900e+00,4.2803e+02,7.5984e+01,-2.3241e+02,4.2803e+02,7.5984e+01,-8.8900e+00,4.2722e+02,7.6146e+01,-2.3241e+02,4.2722e+02,7.6146e+01,-8.8900e+00,4.2639e+02,7.6200e+01,-2.3241e+02,4.2639e+02,7.6200e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9781"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_330_point()))
            .setNormal(new Normal().setVector(getNormal_7_331_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9841"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_337_point()))
            .setNormal(new Normal().setVector(getNormal_7_338_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#9951"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.3604e+02,2.1097e+02,7.6200e+01,-1.3604e+02,2.1097e+02,7.8108e+01,-1.3604e+02,1.2207e+02,7.8108e+01,-1.3604e+02,2.1097e+02,7.6200e+01,-1.3604e+02,1.2207e+02,7.8108e+01,-1.3604e+02,1.2207e+02,7.6200e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10036"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_350_point()))
            .setNormal(new Normal().setVector(getNormal_7_351_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10121"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.1699e+02,2.1097e+02,7.6200e+01,-1.1699e+02,1.2207e+02,7.6200e+01,-1.1699e+02,1.2207e+02,7.8108e+01,-1.1699e+02,2.1097e+02,7.6200e+01,-1.1699e+02,1.2207e+02,7.8108e+01,-1.1699e+02,2.1097e+02,7.8108e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10181"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_363_point()))
            .setNormal(new Normal().setVector(getNormal_7_364_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10291"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.8049e+02,2.1097e+02,7.6200e+01,-1.8049e+02,1.2207e+02,7.6200e+01,-1.8049e+02,1.2207e+02,7.8108e+01,-1.8049e+02,2.1097e+02,7.6200e+01,-1.8049e+02,1.2207e+02,7.8108e+01,-1.8049e+02,2.1097e+02,7.8108e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10376"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_376_point()))
            .setNormal(new Normal().setVector(getNormal_7_377_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10461"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.9954e+02,2.1097e+02,7.6200e+01,-1.9954e+02,2.1097e+02,7.8108e+01,-1.9954e+02,1.2207e+02,7.8108e+01,-1.9954e+02,2.1097e+02,7.6200e+01,-1.9954e+02,1.2207e+02,7.8108e+01,-1.9954e+02,1.2207e+02,7.6200e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10521"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_389_point()))
            .setNormal(new Normal().setVector(getNormal_7_390_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10631"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_396_point()))
            .setNormal(new Normal().setVector(getNormal_7_397_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10691"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_403_point()))
            .setNormal(new Normal().setVector(getNormal_7_404_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10801"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_410_point()))
            .setNormal(new Normal().setVector(getNormal_7_411_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10861"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_417_point()))
            .setNormal(new Normal().setVector(getNormal_7_418_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#10971"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_424_point()))
            .setNormal(new Normal().setVector(getNormal_7_425_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#11031"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_431_point()))
            .setNormal(new Normal().setVector(getNormal_7_432_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#11141"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_438_point()))
            .setNormal(new Normal().setVector(getNormal_7_439_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#11201"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_445_point()))
            .setNormal(new Normal().setVector(getNormal_7_446_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#11311"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_452_point()))
            .setNormal(new Normal().setVector(getNormal_7_453_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#11371"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_459_point()))
            .setNormal(new Normal().setVector(getNormal_7_460_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#11596"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,4.3274e+02,6.9850e+01,-2.3241e+02,4.3274e+02,6.9850e+01,-2.3241e+02,4.3274e+02,5.7280e+01,-2.3241e+02,4.3274e+02,5.7280e+01,-2.4130e+02,4.3274e+02,5.7280e+01,-2.4130e+02,4.3274e+02,8.2575e+00,-2.3241e+02,4.3274e+02,5.7280e+01,-2.4130e+02,4.3274e+02,8.2575e+00,0.0000e+00,4.3274e+02,8.2575e+00,-2.3241e+02,4.3274e+02,5.7280e+01,0.0000e+00,4.3274e+02,8.2575e+00,0.0000e+00,4.3274e+02,5.7280e+01,-2.3241e+02,4.3274e+02,5.7280e+01,-8.8900e+00,4.3274e+02,5.7280e+01,-8.8900e+00,4.3274e+02,6.9850e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#11711"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,4.3464e+02,5.7280e+01,-8.8900e+00,4.3274e+02,5.7280e+01,0.0000e+00,4.3274e+02,5.7280e+01,-8.8900e+00,4.3464e+02,5.7280e+01,0.0000e+00,4.3274e+02,5.7280e+01,0.0000e+00,4.3464e+02,5.7280e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#13201"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(getIndexedTriangleSet_6_478_index()).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_478_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#13261"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,4.3464e+02,6.9850e+01,-2.3241e+02,4.3464e+02,6.9850e+01,-8.8900e+00,4.3457e+02,7.0928e+01,-2.3241e+02,4.3457e+02,7.0928e+01,-8.8900e+00,4.3436e+02,7.1987e+01,-2.3241e+02,4.3436e+02,7.1987e+01,-8.8900e+00,4.3402e+02,7.3010e+01,-2.3241e+02,4.3402e+02,7.3010e+01,-8.8900e+00,4.3354e+02,7.3979e+01,-2.3241e+02,4.3354e+02,7.3979e+01,-8.8900e+00,4.3294e+02,7.4877e+01,-2.3241e+02,4.3294e+02,7.4877e+01,-8.8900e+00,4.3223e+02,7.5689e+01,-2.3241e+02,4.3223e+02,7.5689e+01,-8.8900e+00,4.3141e+02,7.6401e+01,-2.3241e+02,4.3141e+02,7.6401e+01,-8.8900e+00,4.3052e+02,7.7001e+01,-2.3241e+02,4.3052e+02,7.7001e+01,-8.8900e+00,4.2955e+02,7.7479e+01,-2.3241e+02,4.2955e+02,7.7479e+01,-8.8900e+00,4.2852e+02,7.7826e+01,-2.3241e+02,4.2852e+02,7.7826e+01,-8.8900e+00,4.2747e+02,7.8037e+01,-2.3241e+02,4.2747e+02,7.8037e+01,-8.8900e+00,4.2639e+02,7.8108e+01,-2.3241e+02,4.2639e+02,7.8108e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,1.0000e+00,6.1232e-17,0.0000e+00,1.0000e+00,6.1232e-17,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,0.0000e+00,1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#13346"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,5.8087e+01,7.8108e+01,-2.3241e+02,5.8087e+01,7.8108e+01,-8.8900e+00,5.7009e+01,7.8037e+01,-2.3241e+02,5.7009e+01,7.8037e+01,-8.8900e+00,5.5950e+01,7.7826e+01,-2.3241e+02,5.5950e+01,7.7826e+01,-8.8900e+00,5.4927e+01,7.7479e+01,-2.3241e+02,5.4927e+01,7.7479e+01,-8.8900e+00,5.3958e+01,7.7001e+01,-2.3241e+02,5.3958e+01,7.7001e+01,-8.8900e+00,5.3060e+01,7.6401e+01,-2.3241e+02,5.3060e+01,7.6401e+01,-8.8900e+00,5.2248e+01,7.5689e+01,-2.3241e+02,5.2248e+01,7.5689e+01,-8.8900e+00,5.1536e+01,7.4877e+01,-2.3241e+02,5.1536e+01,7.4877e+01,-8.8900e+00,5.0936e+01,7.3979e+01,-2.3241e+02,5.0936e+01,7.3979e+01,-8.8900e+00,5.0458e+01,7.3010e+01,-2.3241e+02,5.0458e+01,7.3010e+01,-8.8900e+00,5.0111e+01,7.1987e+01,-2.3241e+02,5.0111e+01,7.1987e+01,-8.8900e+00,4.9900e+01,7.0928e+01,-2.3241e+02,4.9900e+01,7.0928e+01,-8.8900e+00,4.9830e+01,6.9850e+01,-2.3241e+02,4.9830e+01,6.9850e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,0.0000e+00,1.0000e+00,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-1.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#13431"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4130e+02,4.2546e+02,7.8108e+01,-2.4130e+02,5.9990e+01,7.8108e+01,-2.4213e+02,4.2546e+02,7.8162e+01,-2.4213e+02,5.9990e+01,7.8162e+01,-2.4294e+02,4.2546e+02,7.8324e+01,-2.4294e+02,5.9990e+01,7.8324e+01,-2.4373e+02,4.2546e+02,7.8591e+01,-2.4373e+02,5.9990e+01,7.8591e+01,-2.4448e+02,4.2546e+02,7.8958e+01,-2.4448e+02,5.9990e+01,7.8958e+01,-2.4517e+02,4.2546e+02,7.9420e+01,-2.4517e+02,5.9990e+01,7.9420e+01,-2.4579e+02,4.2546e+02,7.9967e+01,-2.4579e+02,5.9990e+01,7.9967e+01,-2.4634e+02,4.2546e+02,8.0592e+01,-2.4634e+02,5.9990e+01,8.0592e+01,-2.4680e+02,4.2546e+02,8.1283e+01,-2.4680e+02,5.9990e+01,8.1283e+01,-2.4717e+02,4.2546e+02,8.2028e+01,-2.4717e+02,5.9990e+01,8.2028e+01,-2.4743e+02,4.2546e+02,8.2814e+01,-2.4743e+02,5.9990e+01,8.2814e+01,-2.4760e+02,4.2546e+02,8.3629e+01,-2.4760e+02,5.9990e+01,8.3629e+01,-2.4765e+02,4.2546e+02,8.4458e+01,-2.4765e+02,5.9990e+01,8.4458e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,1.0000e+00,-0.0000e+00,6.1232e-17,1.0000e+00,-0.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#13656"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,4.9830e+01,5.7280e+01,-8.8900e+00,4.9830e+01,6.9850e+01,-2.3241e+02,4.9830e+01,6.9850e+01,-8.8900e+00,4.9830e+01,5.7280e+01,-2.3241e+02,4.9830e+01,6.9850e+01,-2.3241e+02,4.9830e+01,5.7280e+01,-8.8900e+00,4.9830e+01,5.7280e+01,-2.4130e+02,4.9830e+01,5.7280e+01,-2.4130e+02,4.9830e+01,8.2575e+00,-8.8900e+00,4.9830e+01,5.7280e+01,-2.4130e+02,4.9830e+01,8.2575e+00,0.0000e+00,4.9830e+01,8.2575e+00,-8.8900e+00,4.9830e+01,5.7280e+01,0.0000e+00,4.9830e+01,8.2575e+00,0.0000e+00,4.9830e+01,5.7280e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#13771"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,5.1737e+01,5.7280e+01,-8.8900e+00,4.9830e+01,5.7280e+01,0.0000e+00,4.9830e+01,5.7280e+01,-8.8900e+00,5.1737e+01,5.7280e+01,0.0000e+00,4.9830e+01,5.7280e+01,0.0000e+00,5.1737e+01,5.7280e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#13966"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-8.8900e+00,5.1737e+01,5.7280e+01,0.0000e+00,5.1737e+01,5.7280e+01,0.0000e+00,5.1737e+01,8.2575e+00,-8.8900e+00,5.1737e+01,5.7280e+01,0.0000e+00,5.1737e+01,8.2575e+00,-2.4130e+02,5.1737e+01,8.2575e+00,-8.8900e+00,5.1737e+01,5.7280e+01,-2.4130e+02,5.1737e+01,8.2575e+00,-2.4130e+02,5.1737e+01,5.7280e+01,-8.8900e+00,5.1737e+01,5.7280e+01,-2.3241e+02,5.1737e+01,5.7280e+01,-2.3241e+02,5.1737e+01,6.9850e+01,-8.8900e+00,5.1737e+01,5.7280e+01,-2.3241e+02,5.1737e+01,6.9850e+01,-8.8900e+00,5.1737e+01,6.9850e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14051"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4130e+02,4.9830e+01,5.7280e+01,-2.3241e+02,4.9830e+01,5.7280e+01,-2.3241e+02,5.1737e+01,5.7280e+01,-2.4130e+02,4.9830e+01,5.7280e+01,-2.3241e+02,5.1737e+01,5.7280e+01,-2.4130e+02,5.1737e+01,5.7280e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14196"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4956e+02,8.5390e+01,1.2891e+02,-2.4956e+02,5.9990e+01,1.0351e+02,-2.4765e+02,5.9990e+01,1.0351e+02,-2.4956e+02,8.5390e+01,1.2891e+02,-2.4765e+02,5.9990e+01,1.0351e+02,-2.4765e+02,8.5390e+01,1.2891e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14321"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4956e+02,4.0006e+02,1.2891e+02,-2.4956e+02,4.2546e+02,1.0351e+02,-2.4956e+02,4.2546e+02,8.4458e+01,-2.4956e+02,4.0006e+02,1.2891e+02,-2.4956e+02,4.2546e+02,8.4458e+01,-2.4956e+02,5.9990e+01,8.4458e+01,-2.4956e+02,4.0006e+02,1.2891e+02,-2.4956e+02,5.9990e+01,8.4458e+01,-2.4956e+02,5.9990e+01,1.0351e+02,-2.4956e+02,4.0006e+02,1.2891e+02,-2.4956e+02,5.9990e+01,1.0351e+02,-2.4956e+02,8.5390e+01,1.2891e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14446"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4765e+02,4.2546e+02,1.0351e+02,-2.4765e+02,4.0006e+02,1.2891e+02,-2.4765e+02,8.5390e+01,1.2891e+02,-2.4765e+02,4.2546e+02,1.0351e+02,-2.4765e+02,8.5390e+01,1.2891e+02,-2.4765e+02,5.9990e+01,1.0351e+02,-2.4765e+02,4.2546e+02,1.0351e+02,-2.4765e+02,5.9990e+01,1.0351e+02,-2.4765e+02,5.9990e+01,8.4458e+01,-2.4765e+02,4.2546e+02,1.0351e+02,-2.4765e+02,5.9990e+01,8.4458e+01,-2.4765e+02,4.2546e+02,8.4458e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14531"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4956e+02,4.0006e+02,1.2891e+02,-2.4765e+02,4.0006e+02,1.2891e+02,-2.4765e+02,4.2546e+02,1.0351e+02,-2.4956e+02,4.0006e+02,1.2891e+02,-2.4765e+02,4.2546e+02,1.0351e+02,-2.4956e+02,4.2546e+02,1.0351e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14616"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.3241e+02,4.3274e+02,5.7280e+01,-2.3241e+02,4.3464e+02,5.7280e+01,-2.4130e+02,4.3464e+02,5.7280e+01,-2.3241e+02,4.3274e+02,5.7280e+01,-2.4130e+02,4.3464e+02,5.7280e+01,-2.4130e+02,4.3274e+02,5.7280e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14851"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,21,3,4,4,5,6,4,6,7,4,7,8,4,8,9,9,10,11,9,11,12,9,12,13,4,9,13,4,13,14,4,14,15,4,15,16,4,16,17,4,17,18,4,18,19,4,19,20,21,4,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4130e+02,4.7274e+02,6.7531e-14,-2.4130e+02,4.4099e+02,6.7531e-14,-2.4130e+02,4.3938e+02,1.5866e-01,-2.4130e+02,4.3783e+02,6.2856e-01,-2.4130e+02,4.3641e+02,1.3916e+00,-2.4130e+02,4.3516e+02,2.4186e+00,-2.4130e+02,4.3413e+02,3.6699e+00,-2.4130e+02,4.3337e+02,5.0975e+00,-2.4130e+02,4.3290e+02,6.6466e+00,-2.4130e+02,4.3274e+02,8.2575e+00,-2.4130e+02,4.3274e+02,5.7280e+01,-2.4130e+02,4.3464e+02,5.7280e+01,-2.4130e+02,4.3464e+02,8.2575e+00,-2.4130e+02,4.3477e+02,7.0187e+00,-2.4130e+02,4.3513e+02,5.8275e+00,-2.4130e+02,4.3571e+02,4.7297e+00,-2.4130e+02,4.3650e+02,3.7674e+00,-2.4130e+02,4.3747e+02,2.9777e+00,-2.4130e+02,4.3856e+02,2.3909e+00,-2.4130e+02,4.3976e+02,2.0295e+00,-2.4130e+02,4.4099e+02,1.9075e+00,-2.4130e+02,4.7274e+02,1.9075e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#14971"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,4.3274e+02,8.2575e+00,-2.4130e+02,4.3274e+02,8.2575e+00,0.0000e+00,4.3281e+02,7.1797e+00,-2.4130e+02,4.3281e+02,7.1797e+00,0.0000e+00,4.3302e+02,6.1203e+00,-2.4130e+02,4.3302e+02,6.1203e+00,0.0000e+00,4.3337e+02,5.0975e+00,-2.4130e+02,4.3337e+02,5.0975e+00,0.0000e+00,4.3384e+02,4.1288e+00,-2.4130e+02,4.3384e+02,4.1288e+00,0.0000e+00,4.3444e+02,3.2307e+00,-2.4130e+02,4.3444e+02,3.2307e+00,0.0000e+00,4.3516e+02,2.4186e+00,-2.4130e+02,4.3516e+02,2.4186e+00,0.0000e+00,4.3597e+02,1.7064e+00,-2.4130e+02,4.3597e+02,1.7064e+00,0.0000e+00,4.3687e+02,1.1063e+00,-2.4130e+02,4.3687e+02,1.1063e+00,0.0000e+00,4.3783e+02,6.2857e-01,-2.4130e+02,4.3783e+02,6.2857e-01,0.0000e+00,4.3886e+02,2.8137e-01,-2.4130e+02,4.3886e+02,2.8137e-01,0.0000e+00,4.3992e+02,7.0644e-02,-2.4130e+02,4.3992e+02,7.0644e-02,0.0000e+00,4.4099e+02,0.0000e+00,-2.4130e+02,4.4099e+02,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-1.0000e+00,6.1232e-17,0.0000e+00,-9.9144e-01,-1.3053e-01,0.0000e+00,-9.9144e-01,-1.3053e-01,0.0000e+00,-9.6593e-01,-2.5882e-01,0.0000e+00,-9.6593e-01,-2.5882e-01,0.0000e+00,-9.2388e-01,-3.8268e-01,0.0000e+00,-9.2388e-01,-3.8268e-01,0.0000e+00,-8.6603e-01,-5.0000e-01,0.0000e+00,-8.6603e-01,-5.0000e-01,0.0000e+00,-7.9335e-01,-6.0876e-01,0.0000e+00,-7.9335e-01,-6.0876e-01,0.0000e+00,-7.0711e-01,-7.0711e-01,0.0000e+00,-7.0711e-01,-7.0711e-01,0.0000e+00,-6.0876e-01,-7.9335e-01,0.0000e+00,-6.0876e-01,-7.9335e-01,0.0000e+00,-5.0000e-01,-8.6603e-01,0.0000e+00,-5.0000e-01,-8.6603e-01,0.0000e+00,-3.8268e-01,-9.2388e-01,0.0000e+00,-3.8268e-01,-9.2388e-01,0.0000e+00,-2.5882e-01,-9.6593e-01,0.0000e+00,-2.5882e-01,-9.6593e-01,0.0000e+00,-1.3053e-01,-9.9144e-01,0.0000e+00,-1.3053e-01,-9.9144e-01,0.0000e+00,-1.2246e-16,-1.0000e+00,0.0000e+00,-1.2246e-16,-1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15171"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {8,9,10,8,10,11,7,8,11,6,7,11,5,6,11,4,5,11,4,11,12,3,4,12,3,12,13,2,3,13,2,13,14,1,2,14,1,14,15,0,1,15,0,15,16,21,0,16,21,16,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,4.4099e+02,1.9075e+00,0.0000e+00,4.3976e+02,2.0295e+00,0.0000e+00,4.3856e+02,2.3909e+00,0.0000e+00,4.3747e+02,2.9777e+00,0.0000e+00,4.3650e+02,3.7674e+00,0.0000e+00,4.3571e+02,4.7297e+00,0.0000e+00,4.3513e+02,5.8275e+00,0.0000e+00,4.3477e+02,7.0187e+00,0.0000e+00,4.3464e+02,8.2575e+00,0.0000e+00,4.3464e+02,5.7280e+01,0.0000e+00,4.3274e+02,5.7280e+01,0.0000e+00,4.3274e+02,8.2575e+00,0.0000e+00,4.3290e+02,6.6466e+00,0.0000e+00,4.3337e+02,5.0975e+00,0.0000e+00,4.3413e+02,3.6699e+00,0.0000e+00,4.3516e+02,2.4186e+00,0.0000e+00,4.3641e+02,1.3916e+00,0.0000e+00,4.3783e+02,6.2855e-01,0.0000e+00,4.3938e+02,1.5865e-01,0.0000e+00,4.4099e+02,3.3766e-14,0.0000e+00,4.7274e+02,3.3766e-14,0.0000e+00,4.7274e+02,1.9075e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15256"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,4.3464e+02,8.2575e+00,-2.4130e+02,4.3464e+02,8.2575e+00,0.0000e+00,4.3470e+02,7.4287e+00,-2.4130e+02,4.3470e+02,7.4287e+00,0.0000e+00,4.3486e+02,6.6140e+00,-2.4130e+02,4.3486e+02,6.6140e+00,0.0000e+00,4.3513e+02,5.8275e+00,-2.4130e+02,4.3513e+02,5.8275e+00,0.0000e+00,4.3550e+02,5.0825e+00,-2.4130e+02,4.3550e+02,5.0825e+00,0.0000e+00,4.3596e+02,4.3919e+00,-2.4130e+02,4.3596e+02,4.3919e+00,0.0000e+00,4.3650e+02,3.7674e+00,-2.4130e+02,4.3650e+02,3.7674e+00,0.0000e+00,4.3713e+02,3.2197e+00,-2.4130e+02,4.3713e+02,3.2197e+00,0.0000e+00,4.3782e+02,2.7583e+00,-2.4130e+02,4.3782e+02,2.7583e+00,0.0000e+00,4.3856e+02,2.3909e+00,-2.4130e+02,4.3856e+02,2.3909e+00,0.0000e+00,4.3935e+02,2.1239e+00,-2.4130e+02,4.3935e+02,2.1239e+00,0.0000e+00,4.4017e+02,1.9619e+00,-2.4130e+02,4.4017e+02,1.9619e+00,0.0000e+00,4.4099e+02,1.9075e+00,-2.4130e+02,4.4099e+02,1.9075e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15401"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1375e+02,4.3401e+02,4.2397e+01,-2.1375e+02,4.3464e+02,4.2397e+01,-2.2455e+02,4.3464e+02,4.2397e+01,-2.1375e+02,4.3401e+02,4.2397e+01,-2.2455e+02,4.3464e+02,4.2397e+01,-2.2455e+02,4.3401e+02,4.2397e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15521"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1375e+02,4.3464e+02,4.2397e+01,-2.1375e+02,4.3401e+02,4.2397e+01,-2.1360e+02,4.3464e+02,4.2387e+01,-2.1360e+02,4.3401e+02,4.2387e+01,-2.1346e+02,4.3464e+02,4.2359e+01,-2.1346e+02,4.3401e+02,4.2359e+01,-2.1333e+02,4.3464e+02,4.2313e+01,-2.1333e+02,4.3401e+02,4.2313e+01,-2.1320e+02,4.3464e+02,4.2250e+01,-2.1320e+02,4.3401e+02,4.2250e+01,-2.1308e+02,4.3464e+02,4.2171e+01,-2.1308e+02,4.3401e+02,4.2171e+01,-2.1297e+02,4.3464e+02,4.2077e+01,-2.1297e+02,4.3401e+02,4.2077e+01,-2.1288e+02,4.3464e+02,4.1969e+01,-2.1288e+02,4.3401e+02,4.1969e+01,-2.1280e+02,4.3464e+02,4.1850e+01,-2.1280e+02,4.3401e+02,4.1850e+01,-2.1274e+02,4.3464e+02,4.1722e+01,-2.1274e+02,4.3401e+02,4.1722e+01,-2.1269e+02,4.3464e+02,4.1587e+01,-2.1269e+02,4.3401e+02,4.1587e+01,-2.1266e+02,4.3464e+02,4.1447e+01,-2.1266e+02,4.3401e+02,4.1447e+01,-2.1265e+02,4.3464e+02,4.1304e+01,-2.1265e+02,4.3401e+02,4.1304e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.2246e-16,0.0000e+00,1.0000e+00,-1.2246e-16,0.0000e+00,1.0000e+00,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,1.0000e+00,0.0000e+00,1.8370e-16,1.0000e+00,0.0000e+00,1.8370e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15636"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1265e+02,4.3401e+02,2.6593e+01,-2.1265e+02,4.3464e+02,2.6593e+01,-2.1265e+02,4.3464e+02,4.1304e+01,-2.1265e+02,4.3401e+02,2.6593e+01,-2.1265e+02,4.3464e+02,4.1304e+01,-2.1265e+02,4.3401e+02,4.1304e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15756"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27,28,26,27,28,27,29,30,28,29,30,29,31,32,30,31,32,31,33,34,32,33,34,33,35,36,34,35,36,35,37,38,36,37,38,37,39,40,38,39,40,39,41,42,40,41,42,41,43,44,42,43,44,43,45,46,44,45,46,45,47}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_604_point()))
            .setNormal(new Normal().setVector(getNormal_7_605_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15871"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1547e+02,4.3401e+02,3.5702e+01,-2.1547e+02,4.3464e+02,3.5702e+01,-2.1547e+02,4.3464e+02,2.6650e+01,-2.1547e+02,4.3401e+02,3.5702e+01,-2.1547e+02,4.3464e+02,2.6650e+01,-2.1547e+02,4.3401e+02,2.6650e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#15991"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1983e+02,4.3464e+02,4.0589e+01,-2.1983e+02,4.3401e+02,4.0589e+01,-2.1927e+02,4.3464e+02,4.0533e+01,-2.1927e+02,4.3401e+02,4.0533e+01,-2.1872e+02,4.3464e+02,4.0409e+01,-2.1872e+02,4.3401e+02,4.0409e+01,-2.1819e+02,4.3464e+02,4.0217e+01,-2.1819e+02,4.3401e+02,4.0217e+01,-2.1769e+02,4.3464e+02,3.9962e+01,-2.1769e+02,4.3401e+02,3.9962e+01,-2.1723e+02,4.3464e+02,3.9647e+01,-2.1723e+02,4.3401e+02,3.9647e+01,-2.1680e+02,4.3464e+02,3.9277e+01,-2.1680e+02,4.3401e+02,3.9277e+01,-2.1643e+02,4.3464e+02,3.8858e+01,-2.1643e+02,4.3401e+02,3.8858e+01,-2.1611e+02,4.3464e+02,3.8395e+01,-2.1611e+02,4.3401e+02,3.8395e+01,-2.1585e+02,4.3464e+02,3.7897e+01,-2.1585e+02,4.3401e+02,3.7897e+01,-2.1565e+02,4.3464e+02,3.7370e+01,-2.1565e+02,4.3401e+02,3.7370e+01,-2.1552e+02,4.3464e+02,3.6823e+01,-2.1552e+02,4.3401e+02,3.6823e+01,-2.1546e+02,4.3464e+02,3.6264e+01,-2.1546e+02,4.3401e+02,3.6264e+01,-2.1547e+02,4.3464e+02,3.5702e+01,-2.1547e+02,4.3401e+02,3.5702e+01})))
            .setNormal(new Normal().setVector(getNormal_7_618_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16111"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2455e+02,4.3464e+02,3.6046e+01,-2.2455e+02,4.3401e+02,3.6046e+01,-2.2452e+02,4.3464e+02,3.6607e+01,-2.2452e+02,4.3401e+02,3.6607e+01,-2.2441e+02,4.3464e+02,3.7160e+01,-2.2441e+02,4.3401e+02,3.7160e+01,-2.2424e+02,4.3464e+02,3.7695e+01,-2.2424e+02,4.3401e+02,3.7695e+01,-2.2400e+02,4.3464e+02,3.8206e+01,-2.2400e+02,4.3401e+02,3.8206e+01,-2.2371e+02,4.3464e+02,3.8683e+01,-2.2371e+02,4.3401e+02,3.8683e+01,-2.2335e+02,4.3464e+02,3.9120e+01,-2.2335e+02,4.3401e+02,3.9120e+01,-2.2295e+02,4.3464e+02,3.9510e+01,-2.2295e+02,4.3401e+02,3.9510e+01,-2.2250e+02,4.3464e+02,3.9847e+01,-2.2250e+02,4.3401e+02,3.9847e+01,-2.2201e+02,4.3464e+02,4.0126e+01,-2.2201e+02,4.3401e+02,4.0126e+01,-2.2149e+02,4.3464e+02,4.0342e+01,-2.2149e+02,4.3401e+02,4.0342e+01,-2.2095e+02,4.3464e+02,4.0493e+01,-2.2095e+02,4.3401e+02,4.0493e+01,-2.2039e+02,4.3464e+02,4.0576e+01,-2.2039e+02,4.3401e+02,4.0576e+01,-2.1983e+02,4.3464e+02,4.0589e+01,-2.1983e+02,4.3401e+02,4.0589e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0000e+00,-0.0000e+00,6.1232e-17,1.0000e+00,-0.0000e+00,6.1232e-17,9.9235e-01,-0.0000e+00,-1.2343e-01,9.9235e-01,-0.0000e+00,-1.2343e-01,9.6953e-01,-0.0000e+00,-2.4497e-01,9.6953e-01,-0.0000e+00,-2.4497e-01,9.3188e-01,-0.0000e+00,-3.6276e-01,9.3188e-01,-0.0000e+00,-3.6276e-01,8.7998e-01,-0.0000e+00,-4.7501e-01,8.7998e-01,-0.0000e+00,-4.7501e-01,8.1463e-01,-0.0000e+00,-5.7999e-01,8.1463e-01,-0.0000e+00,-5.7999e-01,7.3681e-01,-0.0000e+00,-6.7610e-01,7.3681e-01,-0.0000e+00,-6.7610e-01,6.4773e-01,-0.0000e+00,-7.6187e-01,6.4773e-01,-0.0000e+00,-7.6187e-01,5.4874e-01,-0.0000e+00,-8.3599e-01,5.4874e-01,-0.0000e+00,-8.3599e-01,4.4136e-01,-0.0000e+00,-8.9733e-01,4.4136e-01,-0.0000e+00,-8.9733e-01,3.2723e-01,-0.0000e+00,-9.4494e-01,3.2723e-01,-0.0000e+00,-9.4494e-01,2.0810e-01,-0.0000e+00,-9.7811e-01,2.0810e-01,-0.0000e+00,-9.7811e-01,8.5780e-02,-0.0000e+00,-9.9631e-01,8.5780e-02,-0.0000e+00,-9.9631e-01,-3.7848e-02,-0.0000e+00,-9.9928e-01,-3.7848e-02,-0.0000e+00,-9.9928e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16226"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2455e+02,4.3401e+02,1.0443e+01,-2.2455e+02,4.3464e+02,1.0443e+01,-2.2455e+02,4.3464e+02,3.6046e+01,-2.2455e+02,4.3401e+02,1.0443e+01,-2.2455e+02,4.3464e+02,3.6046e+01,-2.2455e+02,4.3401e+02,3.6046e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16341"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2139e+02,4.3401e+02,1.0443e+01,-2.2139e+02,4.3464e+02,1.0443e+01,-2.2455e+02,4.3464e+02,1.0443e+01,-2.2139e+02,4.3401e+02,1.0443e+01,-2.2455e+02,4.3464e+02,1.0443e+01,-2.2455e+02,4.3401e+02,1.0443e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16456"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2139e+02,4.3401e+02,1.6852e+01,-2.2139e+02,4.3464e+02,1.6852e+01,-2.2139e+02,4.3464e+02,1.0443e+01,-2.2139e+02,4.3401e+02,1.6852e+01,-2.2139e+02,4.3464e+02,1.0443e+01,-2.2139e+02,4.3401e+02,1.0443e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16571"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0955e+02,4.3401e+02,1.6852e+01,-2.0955e+02,4.3464e+02,1.6852e+01,-2.2139e+02,4.3464e+02,1.6852e+01,-2.0955e+02,4.3401e+02,1.6852e+01,-2.2139e+02,4.3464e+02,1.6852e+01,-2.2139e+02,4.3401e+02,1.6852e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16686"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0955e+02,4.3401e+02,1.9954e+01,-2.0955e+02,4.3464e+02,1.9954e+01,-2.0955e+02,4.3464e+02,1.6852e+01,-2.0955e+02,4.3401e+02,1.9954e+01,-2.0955e+02,4.3464e+02,1.6852e+01,-2.0955e+02,4.3401e+02,1.6852e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16801"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2139e+02,4.3401e+02,1.9954e+01,-2.2139e+02,4.3464e+02,1.9954e+01,-2.0955e+02,4.3464e+02,1.9954e+01,-2.2139e+02,4.3401e+02,1.9954e+01,-2.0955e+02,4.3464e+02,1.9954e+01,-2.0955e+02,4.3401e+02,1.9954e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#16916"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2139e+02,4.3401e+02,3.5644e+01,-2.2139e+02,4.3464e+02,3.5644e+01,-2.2139e+02,4.3464e+02,1.9954e+01,-2.2139e+02,4.3401e+02,3.5644e+01,-2.2139e+02,4.3464e+02,1.9954e+01,-2.2139e+02,4.3401e+02,1.9954e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17036"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2139e+02,4.3464e+02,3.5644e+01,-2.2139e+02,4.3401e+02,3.5644e+01,-2.2139e+02,4.3464e+02,3.5819e+01,-2.2139e+02,4.3401e+02,3.5819e+01,-2.2137e+02,4.3464e+02,3.5993e+01,-2.2137e+02,4.3401e+02,3.5993e+01,-2.2133e+02,4.3464e+02,3.6163e+01,-2.2133e+02,4.3401e+02,3.6163e+01,-2.2127e+02,4.3464e+02,3.6327e+01,-2.2127e+02,4.3401e+02,3.6327e+01,-2.2119e+02,4.3464e+02,3.6482e+01,-2.2119e+02,4.3401e+02,3.6482e+01,-2.2110e+02,4.3464e+02,3.6627e+01,-2.2110e+02,4.3401e+02,3.6627e+01,-2.2098e+02,4.3464e+02,3.6757e+01,-2.2098e+02,4.3401e+02,3.6757e+01,-2.2085e+02,4.3464e+02,3.6873e+01,-2.2085e+02,4.3401e+02,3.6873e+01,-2.2070e+02,4.3464e+02,3.6972e+01,-2.2070e+02,4.3401e+02,3.6972e+01,-2.2055e+02,4.3464e+02,3.7051e+01,-2.2055e+02,4.3401e+02,3.7051e+01,-2.2038e+02,4.3464e+02,3.7111e+01,-2.2038e+02,4.3401e+02,3.7111e+01,-2.2021e+02,4.3464e+02,3.7151e+01,-2.2021e+02,4.3401e+02,3.7151e+01,-2.2004e+02,4.3464e+02,3.7169e+01,-2.2004e+02,4.3401e+02,3.7169e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-9.9667e-01,0.0000e+00,-8.1527e-02,-9.9667e-01,0.0000e+00,-8.1527e-02,-9.9910e-01,0.0000e+00,4.2340e-02,-9.9910e-01,0.0000e+00,4.2340e-02,-9.8620e-01,0.0000e+00,1.6556e-01,-9.8620e-01,0.0000e+00,1.6556e-01,-9.5816e-01,0.0000e+00,2.8623e-01,-9.5816e-01,0.0000e+00,2.8623e-01,-9.1541e-01,0.0000e+00,4.0251e-01,-9.1541e-01,0.0000e+00,4.0251e-01,-8.5862e-01,0.0000e+00,5.1262e-01,-8.5862e-01,0.0000e+00,5.1262e-01,-7.8864e-01,0.0000e+00,6.1485e-01,-7.8864e-01,0.0000e+00,6.1485e-01,-7.0656e-01,0.0000e+00,7.0765e-01,-7.0656e-01,0.0000e+00,7.0765e-01,-6.1364e-01,0.0000e+00,7.8959e-01,-6.1364e-01,0.0000e+00,7.8959e-01,-5.1129e-01,0.0000e+00,8.5941e-01,-5.1129e-01,0.0000e+00,8.5941e-01,-4.0110e-01,0.0000e+00,9.1603e-01,-4.0110e-01,0.0000e+00,9.1603e-01,-2.8475e-01,0.0000e+00,9.5860e-01,-2.8475e-01,0.0000e+00,9.5860e-01,-1.6403e-01,0.0000e+00,9.8645e-01,-1.6403e-01,0.0000e+00,9.8645e-01,-4.0798e-02,0.0000e+00,9.9917e-01,-4.0798e-02,0.0000e+00,9.9917e-01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17156"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2004e+02,4.3464e+02,3.7169e+01,-2.2004e+02,4.3401e+02,3.7169e+01,-2.1987e+02,4.3464e+02,3.7165e+01,-2.1987e+02,4.3401e+02,3.7165e+01,-2.1969e+02,4.3464e+02,3.7140e+01,-2.1969e+02,4.3401e+02,3.7140e+01,-2.1952e+02,4.3464e+02,3.7093e+01,-2.1952e+02,4.3401e+02,3.7093e+01,-2.1936e+02,4.3464e+02,3.7026e+01,-2.1936e+02,4.3401e+02,3.7026e+01,-2.1921e+02,4.3464e+02,3.6940e+01,-2.1921e+02,4.3401e+02,3.6940e+01,-2.1907e+02,4.3464e+02,3.6835e+01,-2.1907e+02,4.3401e+02,3.6835e+01,-2.1895e+02,4.3464e+02,3.6714e+01,-2.1895e+02,4.3401e+02,3.6714e+01,-2.1884e+02,4.3464e+02,3.6579e+01,-2.1884e+02,4.3401e+02,3.6579e+01,-2.1874e+02,4.3464e+02,3.6431e+01,-2.1874e+02,4.3401e+02,3.6431e+01,-2.1867e+02,4.3464e+02,3.6272e+01,-2.1867e+02,4.3401e+02,3.6272e+01,-2.1862e+02,4.3464e+02,3.6106e+01,-2.1862e+02,4.3401e+02,3.6106e+01,-2.1858e+02,4.3464e+02,3.5934e+01,-2.1858e+02,4.3401e+02,3.5934e+01,-2.1857e+02,4.3464e+02,3.5759e+01,-2.1857e+02,4.3401e+02,3.5759e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-4.0798e-02,0.0000e+00,9.9917e-01,-4.0798e-02,0.0000e+00,9.9917e-01,8.3065e-02,0.0000e+00,9.9654e-01,8.3065e-02,0.0000e+00,9.9654e-01,2.0565e-01,0.0000e+00,9.7863e-01,2.0565e-01,0.0000e+00,9.7863e-01,3.2508e-01,0.0000e+00,9.4569e-01,3.2508e-01,0.0000e+00,9.4569e-01,4.3952e-01,0.0000e+00,8.9823e-01,4.3952e-01,0.0000e+00,8.9823e-01,5.4722e-01,0.0000e+00,8.3699e-01,5.4722e-01,0.0000e+00,8.3699e-01,6.4652e-01,0.0000e+00,7.6290e-01,6.4652e-01,0.0000e+00,7.6290e-01,7.3589e-01,0.0000e+00,6.7710e-01,7.3589e-01,0.0000e+00,6.7710e-01,8.1397e-01,0.0000e+00,5.8091e-01,8.1397e-01,0.0000e+00,5.8091e-01,8.7955e-01,0.0000e+00,4.7580e-01,8.7955e-01,0.0000e+00,4.7580e-01,9.3164e-01,0.0000e+00,3.6339e-01,9.3164e-01,0.0000e+00,3.6339e-01,9.6942e-01,0.0000e+00,2.4541e-01,9.6942e-01,0.0000e+00,2.4541e-01,9.9233e-01,0.0000e+00,1.2365e-01,9.9233e-01,0.0000e+00,1.2365e-01,1.0000e+00,0.0000e+00,-6.1232e-17,1.0000e+00,0.0000e+00,-6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17271"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1857e+02,4.3401e+02,2.6133e+01,-2.1857e+02,4.3464e+02,2.6133e+01,-2.1857e+02,4.3464e+02,3.5759e+01,-2.1857e+02,4.3401e+02,2.6133e+01,-2.1857e+02,4.3464e+02,3.5759e+01,-2.1857e+02,4.3401e+02,3.5759e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17391"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_693_point()))
            .setNormal(new Normal().setVector(getNormal_7_694_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17506"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0955e+02,4.3401e+02,4.1333e+01,-2.0955e+02,4.3464e+02,4.1333e+01,-2.0955e+02,4.3464e+02,2.6133e+01,-2.0955e+02,4.3401e+02,4.1333e+01,-2.0955e+02,4.3464e+02,2.6133e+01,-2.0955e+02,4.3401e+02,2.6133e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17626"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1375e+02,4.3464e+02,4.5529e+01,-2.1375e+02,4.3401e+02,4.5529e+01,-2.1320e+02,4.3464e+02,4.5493e+01,-2.1320e+02,4.3401e+02,4.5493e+01,-2.1266e+02,4.3464e+02,4.5386e+01,-2.1266e+02,4.3401e+02,4.5386e+01,-2.1214e+02,4.3464e+02,4.5210e+01,-2.1214e+02,4.3401e+02,4.5210e+01,-2.1165e+02,4.3464e+02,4.4967e+01,-2.1165e+02,4.3401e+02,4.4967e+01,-2.1119e+02,4.3464e+02,4.4662e+01,-2.1119e+02,4.3401e+02,4.4662e+01,-2.1078e+02,4.3464e+02,4.4300e+01,-2.1078e+02,4.3401e+02,4.4300e+01,-2.1042e+02,4.3464e+02,4.3887e+01,-2.1042e+02,4.3401e+02,4.3887e+01,-2.1011e+02,4.3464e+02,4.3431e+01,-2.1011e+02,4.3401e+02,4.3431e+01,-2.0987e+02,4.3464e+02,4.2939e+01,-2.0987e+02,4.3401e+02,4.2939e+01,-2.0969e+02,4.3464e+02,4.2419e+01,-2.0969e+02,4.3401e+02,4.2419e+01,-2.0959e+02,4.3464e+02,4.1881e+01,-2.0959e+02,4.3401e+02,4.1881e+01,-2.0955e+02,4.3464e+02,4.1333e+01,-2.0955e+02,4.3401e+02,4.1333e+01})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.2246e-16,-0.0000e+00,-1.0000e+00,-1.2246e-16,-0.0000e+00,-1.0000e+00,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-1.0000e+00,-0.0000e+00,6.1232e-17,-1.0000e+00,-0.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17741"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2455e+02,4.3401e+02,4.5529e+01,-2.2455e+02,4.3464e+02,4.5529e+01,-2.1375e+02,4.3464e+02,4.5529e+01,-2.2455e+02,4.3401e+02,4.5529e+01,-2.1375e+02,4.3464e+02,4.5529e+01,-2.1375e+02,4.3401e+02,4.5529e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17826"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2455e+02,4.3401e+02,4.2397e+01,-2.2455e+02,4.3464e+02,4.2397e+01,-2.2455e+02,4.3464e+02,4.5529e+01,-2.2455e+02,4.3401e+02,4.2397e+01,-2.2455e+02,4.3464e+02,4.5529e+01,-2.2455e+02,4.3401e+02,4.5529e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#17976"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_725_point()))
            .setNormal(new Normal().setVector(getNormal_7_726_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18091"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1283e+02,4.3401e+02,5.1390e+01,-2.1283e+02,4.3464e+02,5.1390e+01,-2.2393e+02,4.3464e+02,6.1655e+01,-2.1283e+02,4.3401e+02,5.1390e+01,-2.2393e+02,4.3464e+02,6.1655e+01,-2.2393e+02,4.3401e+02,6.1655e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18211"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27,28,26,27,28,27,29,30,28,29,30,29,31,32,30,31,32,31,33,34,32,33,34,33,35,36,34,35,36,35,37,38,36,37,38,37,39}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_738_point()))
            .setNormal(new Normal().setVector(getNormal_7_739_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18326"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2455e+02,4.3401e+02,5.0672e+01,-2.2455e+02,4.3464e+02,5.0672e+01,-2.1314e+02,4.3464e+02,5.0672e+01,-2.2455e+02,4.3401e+02,5.0672e+01,-2.1314e+02,4.3464e+02,5.0672e+01,-2.1314e+02,4.3401e+02,5.0672e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18441"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2455e+02,4.3401e+02,4.7540e+01,-2.2455e+02,4.3464e+02,4.7540e+01,-2.2455e+02,4.3464e+02,5.0672e+01,-2.2455e+02,4.3401e+02,4.7540e+01,-2.2455e+02,4.3464e+02,5.0672e+01,-2.2455e+02,4.3401e+02,5.0672e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18556"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.1307e+02,4.3401e+02,4.7540e+01,-2.1307e+02,4.3464e+02,4.7540e+01,-2.2455e+02,4.3464e+02,4.7540e+01,-2.1307e+02,4.3401e+02,4.7540e+01,-2.2455e+02,4.3464e+02,4.7540e+01,-2.2455e+02,4.3401e+02,4.7540e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18676"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_763_point()))
            .setNormal(new Normal().setVector(getNormal_7_764_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18791"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2116e+02,4.3401e+02,6.3270e+01,-2.2116e+02,4.3464e+02,6.3270e+01,-2.1087e+02,4.3464e+02,5.3803e+01,-2.2116e+02,4.3401e+02,6.3270e+01,-2.1087e+02,4.3464e+02,5.3803e+01,-2.1087e+02,4.3401e+02,5.3803e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#18911"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25,26,24,25,26,25,27,28,26,27,28,27,29,30,28,29,30,29,31,32,30,31,32,31,33,34,32,33,34,33,35,36,34,35,36,35,37,38,36,37,38,37,39}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_776_point()))
            .setNormal(new Normal().setVector(getNormal_7_777_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19026"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0955e+02,4.3401e+02,6.4208e+01,-2.0955e+02,4.3464e+02,6.4208e+01,-2.2079e+02,4.3464e+02,6.4208e+01,-2.0955e+02,4.3401e+02,6.4208e+01,-2.2079e+02,4.3464e+02,6.4208e+01,-2.2079e+02,4.3401e+02,6.4208e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19141"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.0955e+02,4.3401e+02,6.7310e+01,-2.0955e+02,4.3464e+02,6.7310e+01,-2.0955e+02,4.3464e+02,6.4208e+01,-2.0955e+02,4.3401e+02,6.7310e+01,-2.0955e+02,4.3464e+02,6.4208e+01,-2.0955e+02,4.3401e+02,6.4208e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19226"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2171e+02,4.3401e+02,6.7310e+01,-2.2171e+02,4.3464e+02,6.7310e+01,-2.0955e+02,4.3464e+02,6.7310e+01,-2.2171e+02,4.3401e+02,6.7310e+01,-2.0955e+02,4.3464e+02,6.7310e+01,-2.0955e+02,4.3401e+02,6.7310e+01}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19461"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,9,10,11,9,11,12,8,9,12,7,8,12,6,7,12,5,6,12,5,12,13,4,5,13,4,13,14,3,4,14,3,14,15,2,3,15,2,15,16,1,2,16,1,16,17,21,1,17,21,17,18,21,18,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4130e+02,1.2700e+01,1.9075e+00,-2.4130e+02,4.3480e+01,1.9075e+00,-2.4130e+02,4.4719e+01,2.0296e+00,-2.4130e+02,4.5910e+01,2.3909e+00,-2.4130e+02,4.7008e+01,2.9777e+00,-2.4130e+02,4.7970e+01,3.7674e+00,-2.4130e+02,4.8760e+01,4.7297e+00,-2.4130e+02,4.9346e+01,5.8275e+00,-2.4130e+02,4.9708e+01,7.0187e+00,-2.4130e+02,4.9830e+01,8.2575e+00,-2.4130e+02,4.9830e+01,5.7280e+01,-2.4130e+02,5.1737e+01,5.7280e+01,-2.4130e+02,5.1737e+01,8.2575e+00,-2.4130e+02,5.1579e+01,6.6466e+00,-2.4130e+02,5.1109e+01,5.0975e+00,-2.4130e+02,5.0346e+01,3.6699e+00,-2.4130e+02,4.9319e+01,2.4186e+00,-2.4130e+02,4.8067e+01,1.3916e+00,-2.4130e+02,4.6640e+01,6.2855e-01,-2.4130e+02,4.5091e+01,1.5865e-01,-2.4130e+02,4.3480e+01,-2.8863e-15,-2.4130e+02,1.2700e+01,-2.8863e-15}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19581"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,4.3480e+01,1.9075e+00,-2.4130e+02,4.3480e+01,1.9075e+00,0.0000e+00,4.4309e+01,1.9619e+00,-2.4130e+02,4.4309e+01,1.9619e+00,0.0000e+00,4.5123e+01,2.1239e+00,-2.4130e+02,4.5123e+01,2.1239e+00,0.0000e+00,4.5910e+01,2.3909e+00,-2.4130e+02,4.5910e+01,2.3909e+00,0.0000e+00,4.6655e+01,2.7583e+00,-2.4130e+02,4.6655e+01,2.7583e+00,0.0000e+00,4.7345e+01,3.2197e+00,-2.4130e+02,4.7345e+01,3.2197e+00,0.0000e+00,4.7970e+01,3.7674e+00,-2.4130e+02,4.7970e+01,3.7674e+00,0.0000e+00,4.8518e+01,4.3919e+00,-2.4130e+02,4.8518e+01,4.3919e+00,0.0000e+00,4.8979e+01,5.0825e+00,-2.4130e+02,4.8979e+01,5.0825e+00,0.0000e+00,4.9346e+01,5.8275e+00,-2.4130e+02,4.9346e+01,5.8275e+00,0.0000e+00,4.9613e+01,6.6140e+00,-2.4130e+02,4.9613e+01,6.6140e+00,0.0000e+00,4.9775e+01,7.4287e+00,-2.4130e+02,4.9775e+01,7.4287e+00,0.0000e+00,4.9830e+01,8.2575e+00,-2.4130e+02,4.9830e+01,8.2575e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19781"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {21,0,1,21,1,2,21,2,3,3,4,5,3,5,6,3,6,7,3,7,8,8,9,10,8,10,11,8,11,12,3,8,12,3,12,13,3,13,14,3,14,15,3,15,16,3,16,17,3,17,18,3,18,19,21,3,19,21,19,20}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,4.3480e+01,-2.1303e-14,0.0000e+00,4.5091e+01,1.5865e-01,0.0000e+00,4.6640e+01,6.2855e-01,0.0000e+00,4.8067e+01,1.3916e+00,0.0000e+00,4.9319e+01,2.4186e+00,0.0000e+00,5.0346e+01,3.6699e+00,0.0000e+00,5.1109e+01,5.0975e+00,0.0000e+00,5.1579e+01,6.6466e+00,0.0000e+00,5.1737e+01,8.2575e+00,0.0000e+00,5.1737e+01,5.7280e+01,0.0000e+00,4.9830e+01,5.7280e+01,0.0000e+00,4.9830e+01,8.2575e+00,0.0000e+00,4.9708e+01,7.0187e+00,0.0000e+00,4.9346e+01,5.8275e+00,0.0000e+00,4.8760e+01,4.7297e+00,0.0000e+00,4.7970e+01,3.7674e+00,0.0000e+00,4.7008e+01,2.9777e+00,0.0000e+00,4.5910e+01,2.3909e+00,0.0000e+00,4.4719e+01,2.0295e+00,0.0000e+00,4.3480e+01,1.9075e+00,0.0000e+00,1.2700e+01,1.9075e+00,0.0000e+00,1.2700e+01,-2.1303e-14}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19866"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0000e+00,4.3480e+01,0.0000e+00,-2.4130e+02,4.3480e+01,0.0000e+00,0.0000e+00,4.4558e+01,7.0644e-02,-2.4130e+02,4.4558e+01,7.0644e-02,0.0000e+00,4.5617e+01,2.8137e-01,-2.4130e+02,4.5617e+01,2.8137e-01,0.0000e+00,4.6640e+01,6.2857e-01,-2.4130e+02,4.6640e+01,6.2857e-01,0.0000e+00,4.7608e+01,1.1063e+00,-2.4130e+02,4.7608e+01,1.1063e+00,0.0000e+00,4.8507e+01,1.7064e+00,-2.4130e+02,4.8507e+01,1.7064e+00,0.0000e+00,4.9319e+01,2.4186e+00,-2.4130e+02,4.9319e+01,2.4186e+00,0.0000e+00,5.0031e+01,3.2307e+00,-2.4130e+02,5.0031e+01,3.2307e+00,0.0000e+00,5.0631e+01,4.1288e+00,-2.4130e+02,5.0631e+01,4.1288e+00,0.0000e+00,5.1109e+01,5.0975e+00,-2.4130e+02,5.1109e+01,5.0975e+00,0.0000e+00,5.1456e+01,6.1203e+00,-2.4130e+02,5.1456e+01,6.1203e+00,0.0000e+00,5.1667e+01,7.1797e+00,-2.4130e+02,5.1667e+01,7.1797e+00,0.0000e+00,5.1737e+01,8.2575e+00,-2.4130e+02,5.1737e+01,8.2575e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.0000e+00,1.2246e-16,-1.0000e+00,0.0000e+00,1.2246e-16,-1.0000e+00,0.0000e+00,1.3053e-01,-9.9144e-01,0.0000e+00,1.3053e-01,-9.9144e-01,0.0000e+00,2.5882e-01,-9.6593e-01,0.0000e+00,2.5882e-01,-9.6593e-01,0.0000e+00,3.8268e-01,-9.2388e-01,0.0000e+00,3.8268e-01,-9.2388e-01,0.0000e+00,5.0000e-01,-8.6603e-01,0.0000e+00,5.0000e-01,-8.6603e-01,0.0000e+00,6.0876e-01,-7.9335e-01,0.0000e+00,6.0876e-01,-7.9335e-01,0.0000e+00,7.0711e-01,-7.0711e-01,0.0000e+00,7.0711e-01,-7.0711e-01,0.0000e+00,7.9335e-01,-6.0876e-01,0.0000e+00,7.9335e-01,-6.0876e-01,0.0000e+00,8.6603e-01,-5.0000e-01,0.0000e+00,8.6603e-01,-5.0000e-01,0.0000e+00,9.2388e-01,-3.8268e-01,0.0000e+00,9.2388e-01,-3.8268e-01,0.0000e+00,9.6593e-01,-2.5882e-01,0.0000e+00,9.6593e-01,-2.5882e-01,0.0000e+00,9.9144e-01,-1.3053e-01,0.0000e+00,9.9144e-01,-1.3053e-01,0.0000e+00,1.0000e+00,6.1232e-17,0.0000e+00,1.0000e+00,6.1232e-17}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#19926"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4956e+02,4.0006e+02,1.2891e+02,-2.4956e+02,8.5390e+01,1.2891e+02,-2.4765e+02,8.5390e+01,1.2891e+02,-2.4956e+02,4.0006e+02,1.2891e+02,-2.4765e+02,8.5390e+01,1.2891e+02,-2.4765e+02,4.0006e+02,1.2891e+02}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#20071"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.4130e+02,4.7274e+02,1.9075e+00,-2.2860e+02,4.8544e+02,1.9075e+00,-2.2860e+02,4.8544e+02,6.7502e-14,-2.4130e+02,4.7274e+02,1.9075e+00,-2.2860e+02,4.8544e+02,6.7502e-14,-2.4130e+02,4.7274e+02,6.7531e-14}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#20676"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {76,40,41,41,0,1,41,1,2,41,2,3,41,3,4,41,4,5,41,5,6,41,6,7,41,7,8,41,8,9,41,9,10,41,10,11,41,11,12,41,12,13,41,13,14,26,27,28,26,28,29,26,29,30,26,30,31,26,31,32,25,26,32,25,32,33,25,33,34,25,34,35,25,35,36,24,25,36,23,24,36,22,23,36,21,22,36,36,67,68,36,68,69,36,69,70,36,70,71,21,36,71,20,21,71,20,71,72,20,72,73,20,73,42,20,42,43,20,43,44,20,44,45,20,45,46,19,20,46,19,46,47,19,47,48,19,48,49,19,49,50,19,50,51,19,51,52,19,52,53,66,67,36,65,66,36,64,65,36,63,64,36,62,63,36,61,62,36,60,61,36,60,36,37,59,60,37,58,59,37,57,58,37,56,57,37,56,37,38,55,56,38,54,55,38,53,54,38,19,53,38,18,19,38,17,18,38,17,38,39,16,17,39,15,16,39,14,15,39,39,40,76,39,76,77,39,77,78,39,78,79,39,79,80,39,80,81,39,81,82,39,82,83,39,83,84,39,84,85,14,39,85,14,85,86,14,86,87,14,87,88,14,88,89,14,89,90,14,90,91,14,91,92,14,92,93,14,93,94,14,94,95,14,95,96,14,96,97,41,14,97,41,97,98,41,98,99,41,99,100,41,100,101,41,101,102,41,102,103,41,103,104,41,104,105,41,105,106,41,106,75,76,41,75}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_839_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#21281"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {90,0,1,2,3,4,4,65,66,4,66,67,4,67,68,4,68,69,2,4,69,2,69,70,2,70,71,2,71,72,2,72,73,2,73,42,2,42,43,2,43,44,2,44,45,2,45,46,2,46,47,2,47,48,2,48,49,2,49,50,2,50,51,64,65,4,63,64,4,62,63,4,61,62,4,60,61,4,59,60,4,59,4,5,58,59,5,57,58,5,56,57,5,55,56,5,54,55,5,53,54,5,52,53,5,51,52,5,2,51,5,2,5,6,2,6,7,2,7,8,2,8,9,2,9,10,2,10,11,2,11,12,2,12,13,2,13,14,2,14,15,2,15,16,2,16,17,2,17,18,2,18,19,2,19,20,2,20,21,2,21,22,1,2,22,1,22,23,1,23,24,1,24,25,1,25,26,1,26,27,1,27,28,1,28,29,1,29,30,1,30,31,1,31,32,1,32,33,1,33,34,1,34,35,1,35,36,1,36,37,1,37,38,1,38,39,1,39,40,40,41,0,0,90,91,0,91,92,0,92,93,0,93,94,40,0,94,40,94,95,40,95,96,40,96,97,40,97,98,40,98,99,40,99,100,40,100,101,40,101,102,40,102,103,40,103,104,40,104,105,40,105,106,40,106,75,40,75,76,40,76,77,1,40,77,1,77,78,1,78,79,1,79,80,1,80,81,1,81,82,1,82,83,1,83,84,1,84,85,1,85,86,1,86,87,1,87,88,1,88,89,90,1,89}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_845_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#21366"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.2700e+01,4.8544e+02,1.9075e+00,0.0000e+00,4.7274e+02,1.9075e+00,1.7764e-15,4.7274e+02,3.3745e-14,-1.2700e+01,4.8544e+02,1.9075e+00,1.7764e-15,4.7274e+02,3.3745e-14,-1.2700e+01,4.8544e+02,1.6872e-14}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#21516"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {90,0,1,90,1,2,90,2,3,90,3,4,90,4,5,90,5,6,90,6,7,90,7,8,8,9,10,8,10,11,8,11,12,8,12,13,8,13,14,8,14,15,15,16,17,15,17,18,15,18,19,15,19,20,15,20,21,15,21,22,15,22,23,41,42,43,41,43,44,41,45,46,40,41,46,39,40,46,39,46,47,38,39,47,37,38,47,36,37,47,35,36,47,34,35,47,33,34,47,33,47,48,32,33,48,32,48,49,31,32,49,31,49,50,30,31,50,30,50,51,29,30,51,29,51,52,28,29,52,28,52,53,27,28,53,27,53,54,26,27,54,26,54,55,25,26,55,25,55,56,24,25,56,24,56,57,23,24,57,23,57,58,23,58,59,23,59,60,23,60,61,23,61,62,23,62,63,23,63,64,23,64,65,23,65,66,15,23,66,15,66,67,15,67,68,15,68,69,15,69,70,15,70,71,15,71,72,15,72,73,15,73,74,15,74,75,15,75,76,15,76,77,15,77,78,15,78,79,8,15,79,8,79,80,8,80,81,8,81,82,8,82,83,8,83,84,8,84,85,8,85,86,8,86,87,90,8,87,90,87,88,90,88,89}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_857_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#21616"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {57,0,1,57,1,2,13,14,15,13,15,16,13,16,17,13,17,18,13,18,19,13,19,20,12,13,20,12,20,21,12,21,22,12,22,23,23,24,25,23,25,26,23,26,27,23,27,28,23,28,29,23,29,30,23,30,31,23,31,32,23,32,33,23,33,34,23,34,35,23,35,36,23,36,37,23,37,38,23,38,39,23,39,40,23,40,41,23,41,42,12,23,42,12,42,43,12,43,44,11,12,44,10,11,44,9,10,44,8,9,44,7,8,44,6,7,44,5,6,44,5,44,45,4,5,45,4,45,46,3,4,46,3,46,47,2,3,47,57,2,47,57,47,48,57,48,49,57,49,50,57,50,51,57,51,52,57,52,53,57,53,54,57,54,55,57,55,56}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_863_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#21761"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2860e+02,-1.4211e-14,-1.7764e-15,-2.2860e+02,-1.0658e-14,1.9075e+00,-2.4130e+02,1.2700e+01,1.9075e+00,-2.2860e+02,-1.4211e-14,-1.7764e-15,-2.4130e+02,1.2700e+01,1.9075e+00,-2.4130e+02,1.2700e+01,-2.8863e-15}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#22286"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {74,22,23,24,25,0,0,33,34,0,34,35,0,35,36,0,36,37,24,0,37,24,37,38,24,38,39,24,39,40,24,40,41,24,41,42,24,42,43,24,43,44,24,44,45,24,45,46,24,46,47,24,47,48,24,48,49,24,49,50,24,50,51,32,33,0,31,32,0,30,31,0,29,30,0,28,29,0,27,28,0,27,0,1,26,27,1,57,26,1,56,57,1,55,56,1,54,55,1,53,54,1,52,53,1,51,52,1,24,51,1,24,1,2,24,2,3,24,3,4,24,4,5,24,5,6,24,6,7,24,7,8,24,8,9,24,9,10,23,24,10,23,10,11,23,11,12,23,12,13,23,13,14,23,14,15,23,15,16,23,16,17,23,17,18,23,18,19,23,19,20,20,21,22,22,74,75,22,75,76,22,76,77,22,77,78,22,78,79,20,22,79,20,79,80,20,80,81,20,81,82,20,82,83,20,83,84,20,84,85,20,85,86,20,86,87,20,87,88,20,88,89,20,89,90,20,90,59,20,59,60,20,60,61,23,20,61,23,61,62,23,62,63,23,63,64,23,64,65,23,65,66,23,66,67,23,67,68,23,68,69,23,69,70,23,70,71,23,71,72,23,72,73,74,23,73}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_875_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#22811"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {76,2,3,3,4,5,3,5,6,3,6,7,3,7,8,3,8,9,3,9,10,22,23,24,21,22,24,20,21,24,19,20,24,18,19,24,17,18,24,24,35,36,24,36,37,24,37,38,24,38,39,17,24,39,16,17,39,16,39,40,16,40,41,16,41,42,16,42,43,16,43,44,16,44,45,16,45,46,15,16,46,15,46,47,15,47,48,15,48,49,15,49,50,15,50,51,15,51,52,15,52,53,34,35,24,33,34,24,32,33,24,31,32,24,30,31,24,29,30,24,28,29,24,28,24,25,27,28,25,26,27,25,57,26,25,56,57,25,56,25,0,55,56,0,54,55,0,53,54,0,15,53,0,14,15,0,13,14,0,13,0,1,12,13,1,11,12,1,10,11,1,1,2,76,1,76,77,1,77,78,1,78,79,1,79,80,1,80,81,1,81,82,1,82,83,1,83,84,1,84,85,10,1,85,10,85,86,10,86,87,10,87,88,10,88,89,10,89,90,10,90,59,10,59,60,10,60,61,10,61,62,10,62,63,10,63,64,10,64,65,3,10,65,3,65,66,3,66,67,3,67,68,3,68,69,3,69,70,3,70,71,3,71,72,3,72,73,3,73,74,3,74,75,76,3,75}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_881_point())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#22896"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {7.1054e-15,1.2700e+01,-1.9706e-14,7.1054e-15,1.2700e+01,1.9075e+00,-1.2700e+01,1.5094e-14,1.9075e+00,7.1054e-15,1.2700e+01,-1.9706e-14,-1.2700e+01,1.5094e-14,1.9075e+00,-1.2700e+01,-2.8092e-15,-8.8688e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#22981"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2860e+02,4.8544e+02,6.7502e-14,-2.2860e+02,4.8544e+02,1.9075e+00,-1.9050e+02,4.8544e+02,1.9075e+00,-2.2860e+02,4.8544e+02,6.7502e-14,-1.9050e+02,4.8544e+02,1.9075e+00,-1.9050e+02,4.8544e+02,8.4516e-15}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23066"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.9050e+02,4.8544e+02,9.1038e-15,-1.9050e+02,4.8544e+02,1.9075e+00,-1.8967e+02,4.8539e+02,9.1038e-15,-1.8967e+02,4.8539e+02,1.9075e+00,-1.8886e+02,4.8523e+02,9.1038e-15,-1.8886e+02,4.8523e+02,1.9075e+00,-1.8807e+02,4.8496e+02,9.1038e-15,-1.8807e+02,4.8496e+02,1.9075e+00,-1.8732e+02,4.8459e+02,9.1038e-15,-1.8732e+02,4.8459e+02,1.9075e+00,-1.8663e+02,4.8413e+02,9.1038e-15,-1.8663e+02,4.8413e+02,1.9075e+00,-1.8601e+02,4.8358e+02,9.1038e-15,-1.8601e+02,4.8358e+02,1.9075e+00,-1.8546e+02,4.8296e+02,9.1038e-15,-1.8546e+02,4.8296e+02,1.9075e+00,-1.8500e+02,4.8227e+02,9.1038e-15,-1.8500e+02,4.8227e+02,1.9075e+00,-1.8463e+02,4.8152e+02,9.1038e-15,-1.8463e+02,4.8152e+02,1.9075e+00,-1.8437e+02,4.8074e+02,9.1038e-15,-1.8437e+02,4.8074e+02,1.9075e+00,-1.8420e+02,4.7992e+02,9.1038e-15,-1.8420e+02,4.7992e+02,1.9075e+00,-1.8415e+02,4.7909e+02,9.1038e-15,-1.8415e+02,4.7909e+02,1.9075e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.2246e-16,1.0000e+00,0.0000e+00,-1.2246e-16,1.0000e+00,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,1.3053e-01,9.9144e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,2.5882e-01,9.6593e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,3.8268e-01,9.2388e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,5.0000e-01,8.6603e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,6.0876e-01,7.9335e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.0711e-01,7.0711e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,7.9335e-01,6.0876e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,8.6603e-01,5.0000e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.2388e-01,3.8268e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.6593e-01,2.5882e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,9.9144e-01,1.3053e-01,0.0000e+00,1.0000e+00,1.8370e-16,0.0000e+00,1.0000e+00,1.8370e-16,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23151"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.8415e+02,4.7909e+02,1.9075e+00,-1.8415e+02,4.6004e+02,1.9075e+00,-1.8415e+02,4.6004e+02,0.0000e+00,-1.8415e+02,4.7909e+02,1.9075e+00,-1.8415e+02,4.6004e+02,0.0000e+00,-1.8415e+02,4.7909e+02,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23236"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.8415e+02,4.6004e+02,1.9075e+00,-1.8415e+02,4.6004e+02,0.0000e+00,-1.8410e+02,4.5922e+02,1.9075e+00,-1.8410e+02,4.5922e+02,0.0000e+00,-1.8393e+02,4.5840e+02,1.9075e+00,-1.8393e+02,4.5840e+02,0.0000e+00,-1.8367e+02,4.5761e+02,1.9075e+00,-1.8367e+02,4.5761e+02,0.0000e+00,-1.8330e+02,4.5687e+02,1.9075e+00,-1.8330e+02,4.5687e+02,0.0000e+00,-1.8284e+02,4.5618e+02,1.9075e+00,-1.8284e+02,4.5618e+02,0.0000e+00,-1.8229e+02,4.5555e+02,1.9075e+00,-1.8229e+02,4.5555e+02,0.0000e+00,-1.8167e+02,4.5501e+02,1.9075e+00,-1.8167e+02,4.5501e+02,0.0000e+00,-1.8098e+02,4.5455e+02,1.9075e+00,-1.8098e+02,4.5455e+02,0.0000e+00,-1.8023e+02,4.5418e+02,1.9075e+00,-1.8023e+02,4.5418e+02,0.0000e+00,-1.7944e+02,4.5391e+02,1.9075e+00,-1.7944e+02,4.5391e+02,0.0000e+00,-1.7863e+02,4.5375e+02,1.9075e+00,-1.7863e+02,4.5375e+02,0.0000e+00,-1.7780e+02,4.5369e+02,1.9075e+00,-1.7780e+02,4.5369e+02,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23321"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-6.3500e+01,4.5369e+02,-1.9984e-15,-1.7780e+02,4.5369e+02,1.3323e-15,-1.7780e+02,4.5369e+02,1.9075e+00,-6.3500e+01,4.5369e+02,-1.9984e-15,-1.7780e+02,4.5369e+02,1.9075e+00,-6.3500e+01,4.5369e+02,1.9075e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23406"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-6.3500e+01,4.5369e+02,1.9075e+00,-6.3500e+01,4.5369e+02,0.0000e+00,-6.2671e+01,4.5375e+02,1.9075e+00,-6.2671e+01,4.5375e+02,0.0000e+00,-6.1856e+01,4.5391e+02,1.9075e+00,-6.1856e+01,4.5391e+02,0.0000e+00,-6.1070e+01,4.5418e+02,1.9075e+00,-6.1070e+01,4.5418e+02,0.0000e+00,-6.0325e+01,4.5455e+02,1.9075e+00,-6.0325e+01,4.5455e+02,0.0000e+00,-5.9634e+01,4.5501e+02,1.9075e+00,-5.9634e+01,4.5501e+02,0.0000e+00,-5.9010e+01,4.5555e+02,1.9075e+00,-5.9010e+01,4.5555e+02,0.0000e+00,-5.8462e+01,4.5618e+02,1.9075e+00,-5.8462e+01,4.5618e+02,0.0000e+00,-5.8001e+01,4.5687e+02,1.9075e+00,-5.8001e+01,4.5687e+02,0.0000e+00,-5.7633e+01,4.5761e+02,1.9075e+00,-5.7633e+01,4.5761e+02,0.0000e+00,-5.7366e+01,4.5840e+02,1.9075e+00,-5.7366e+01,4.5840e+02,0.0000e+00,-5.7204e+01,4.5922e+02,1.9075e+00,-5.7204e+01,4.5922e+02,0.0000e+00,-5.7150e+01,4.6004e+02,1.9075e+00,-5.7150e+01,4.6004e+02,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23491"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.7150e+01,4.7909e+02,8.4377e-15,-5.7150e+01,4.6004e+02,0.0000e+00,-5.7150e+01,4.6004e+02,1.9075e+00,-5.7150e+01,4.7909e+02,8.4377e-15,-5.7150e+01,4.6004e+02,1.9075e+00,-5.7150e+01,4.7909e+02,1.9075e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23576"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {2,0,1,2,1,3,4,2,3,4,3,5,6,4,5,6,5,7,8,6,7,8,7,9,10,8,9,10,9,11,12,10,11,12,11,13,14,12,13,14,13,15,16,14,15,16,15,17,18,16,17,18,17,19,20,18,19,20,19,21,22,20,21,22,21,23,24,22,23,24,23,25}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.7150e+01,4.7909e+02,2.8311e-14,-5.7150e+01,4.7909e+02,1.9075e+00,-5.7096e+01,4.7992e+02,2.8311e-14,-5.7096e+01,4.7992e+02,1.9075e+00,-5.6934e+01,4.8074e+02,2.8311e-14,-5.6934e+01,4.8074e+02,1.9075e+00,-5.6667e+01,4.8152e+02,2.8311e-14,-5.6667e+01,4.8152e+02,1.9075e+00,-5.6299e+01,4.8227e+02,2.8311e-14,-5.6299e+01,4.8227e+02,1.9075e+00,-5.5838e+01,4.8296e+02,2.8311e-14,-5.5838e+01,4.8296e+02,1.9075e+00,-5.5290e+01,4.8358e+02,2.8311e-14,-5.5290e+01,4.8358e+02,1.9075e+00,-5.4666e+01,4.8413e+02,2.8311e-14,-5.4666e+01,4.8413e+02,1.9075e+00,-5.3975e+01,4.8459e+02,2.8311e-14,-5.3975e+01,4.8459e+02,1.9075e+00,-5.3230e+01,4.8496e+02,2.8311e-14,-5.3230e+01,4.8496e+02,1.9075e+00,-5.2444e+01,4.8523e+02,2.8311e-14,-5.2444e+01,4.8523e+02,1.9075e+00,-5.1629e+01,4.8539e+02,2.8311e-14,-5.1629e+01,4.8539e+02,1.9075e+00,-5.0800e+01,4.8544e+02,2.8311e-14,-5.0800e+01,4.8544e+02,1.9075e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,0.0000e+00,-1.0000e+00,-6.1232e-17,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.9144e-01,1.3053e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.6593e-01,2.5882e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-9.2388e-01,3.8268e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-8.6603e-01,5.0000e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.9335e-01,6.0876e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-7.0711e-01,7.0711e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-6.0876e-01,7.9335e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-5.0000e-01,8.6603e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-3.8268e-01,9.2388e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-2.5882e-01,9.6593e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.3053e-01,9.9144e-01,0.0000e+00,-1.2246e-16,1.0000e+00,0.0000e+00,-1.2246e-16,1.0000e+00,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23636"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.2700e+01,4.8544e+02,1.9075e+00,-1.2700e+01,4.8544e+02,1.6872e-14,-5.0800e+01,4.8544e+02,1.6875e-14,-1.2700e+01,4.8544e+02,1.9075e+00,-5.0800e+01,4.8544e+02,1.6875e-14,-5.0800e+01,4.8544e+02,1.9075e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23746"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_951_point()))
            .setNormal(new Normal().setVector(getNormal_7_952_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23806"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_958_point()))
            .setNormal(new Normal().setVector(getNormal_7_959_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23916"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48,49,48,50,51,49,50}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_965_point()))
            .setNormal(new Normal().setVector(getNormal_7_966_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#23976"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_972_point()))
            .setNormal(new Normal().setVector(getNormal_7_973_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24061"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-2.2860e+02,0.0000e+00,-8.8688e-16,-1.8415e+02,0.0000e+00,-1.1102e-16,-1.8415e+02,0.0000e+00,1.9075e+00,-2.2860e+02,0.0000e+00,-8.8688e-16,-1.8415e+02,0.0000e+00,1.9075e+00,-2.2860e+02,0.0000e+00,1.9075e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24146"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.8415e+02,2.5400e+01,1.3323e-15,-1.8415e+02,2.5400e+01,1.9075e+00,-1.8415e+02,3.1974e-14,1.9075e+00,-1.8415e+02,2.5400e+01,1.3323e-15,-1.8415e+02,3.1974e-14,1.9075e+00,-1.8415e+02,-3.5527e-15,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24231"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.7780e+02,3.1750e+01,1.9075e+00,-1.7780e+02,3.1750e+01,0.0000e+00,-1.7863e+02,3.1696e+01,1.9075e+00,-1.7863e+02,3.1696e+01,0.0000e+00,-1.7944e+02,3.1534e+01,1.9075e+00,-1.7944e+02,3.1534e+01,0.0000e+00,-1.8023e+02,3.1267e+01,1.9075e+00,-1.8023e+02,3.1267e+01,0.0000e+00,-1.8098e+02,3.0899e+01,1.9075e+00,-1.8098e+02,3.0899e+01,0.0000e+00,-1.8167e+02,3.0438e+01,1.9075e+00,-1.8167e+02,3.0438e+01,0.0000e+00,-1.8229e+02,2.9890e+01,1.9075e+00,-1.8229e+02,2.9890e+01,0.0000e+00,-1.8284e+02,2.9266e+01,1.9075e+00,-1.8284e+02,2.9266e+01,0.0000e+00,-1.8330e+02,2.8575e+01,1.9075e+00,-1.8330e+02,2.8575e+01,0.0000e+00,-1.8367e+02,2.7830e+01,1.9075e+00,-1.8367e+02,2.7830e+01,0.0000e+00,-1.8393e+02,2.7044e+01,1.9075e+00,-1.8393e+02,2.7044e+01,0.0000e+00,-1.8410e+02,2.6229e+01,1.9075e+00,-1.8410e+02,2.6229e+01,0.0000e+00,-1.8415e+02,2.5400e+01,1.9075e+00,-1.8415e+02,2.5400e+01,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24316"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-6.3500e+01,3.1750e+01,1.3323e-15,-6.3500e+01,3.1750e+01,1.9075e+00,-1.7780e+02,3.1750e+01,1.9075e+00,-6.3500e+01,3.1750e+01,1.3323e-15,-1.7780e+02,3.1750e+01,1.9075e+00,-1.7780e+02,3.1750e+01,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24401"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.7150e+01,2.5400e+01,1.9075e+00,-5.7150e+01,2.5400e+01,0.0000e+00,-5.7204e+01,2.6229e+01,1.9075e+00,-5.7204e+01,2.6229e+01,0.0000e+00,-5.7366e+01,2.7044e+01,1.9075e+00,-5.7366e+01,2.7044e+01,0.0000e+00,-5.7633e+01,2.7830e+01,1.9075e+00,-5.7633e+01,2.7830e+01,0.0000e+00,-5.8001e+01,2.8575e+01,1.9075e+00,-5.8001e+01,2.8575e+01,0.0000e+00,-5.8462e+01,2.9266e+01,1.9075e+00,-5.8462e+01,2.9266e+01,0.0000e+00,-5.9010e+01,2.9890e+01,1.9075e+00,-5.9010e+01,2.9890e+01,0.0000e+00,-5.9634e+01,3.0438e+01,1.9075e+00,-5.9634e+01,3.0438e+01,0.0000e+00,-6.0325e+01,3.0899e+01,1.9075e+00,-6.0325e+01,3.0899e+01,0.0000e+00,-6.1070e+01,3.1267e+01,1.9075e+00,-6.1070e+01,3.1267e+01,0.0000e+00,-6.1856e+01,3.1534e+01,1.9075e+00,-6.1856e+01,3.1534e+01,0.0000e+00,-6.2671e+01,3.1696e+01,1.9075e+00,-6.2671e+01,3.1696e+01,0.0000e+00,-6.3500e+01,3.1750e+01,1.9075e+00,-6.3500e+01,3.1750e+01,0.0000e+00})))
            .setNormal(new Normal().setVector(new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24486"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-5.7150e+01,2.1318e-14,1.9075e+00,-5.7150e+01,2.5400e+01,1.9075e+00,-5.7150e+01,2.5400e+01,0.0000e+00,-5.7150e+01,2.1318e-14,1.9075e+00,-5.7150e+01,2.5400e+01,0.0000e+00,-5.7150e+01,-3.9968e-15,0.0000e+00}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24546"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,3,4,5}).setNormalPerVertex(true).setSolid(true)
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.2700e+01,0.0000e+00,1.9075e+00,-5.7150e+01,0.0000e+00,1.9075e+00,-5.7150e+01,0.0000e+00,1.1102e-16,-1.2700e+01,0.0000e+00,1.9075e+00,-5.7150e+01,0.0000e+00,1.1102e-16,-1.2700e+01,0.0000e+00,-8.8688e-16}))))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24656"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_1023_point()))
            .setNormal(new Normal().setVector(getNormal_7_1024_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24716"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_1030_point()))
            .setNormal(new Normal().setVector(getNormal_7_1031_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24826"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_1037_point()))
            .setNormal(new Normal().setVector(getNormal_7_1038_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))
      .addChild(new CADFace()
        .setShape(new Shape()
          .setMetadata(new MetadataString().setName("instance").setValue(new String[] {"#24886"}))
          .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {1,0,2,3,1,2,3,2,4,5,3,4,5,4,6,7,5,6,7,6,8,9,7,8,9,8,10,11,9,10,11,10,12,13,11,12,13,12,14,15,13,14,15,14,16,17,15,16,17,16,18,19,17,18,19,18,20,21,19,20,21,20,22,23,21,22,23,22,24,25,23,24,25,24,26,27,25,26,27,26,28,29,27,28,29,28,30,31,29,30,31,30,32,33,31,32,33,32,34,35,33,34,35,34,36,37,35,36,37,36,38,39,37,38,39,38,40,41,39,40,41,40,42,43,41,42,43,42,44,45,43,44,45,44,46,47,45,46,47,46,48,49,47,48}).setNormalPerVertex(true).setSolid(false)
            .setCoord(new Coordinate().setPoint(getCoordinate_7_1044_point()))
            .setNormal(new Normal().setVector(getNormal_7_1045_vector())))
          .setAppearance(new Appearance().setUSE("partcolor"))))));
    }
	// end of initialize() method





		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_59_index_1()
		{
			int[] value = {11,111,112,11,112,113,11,113,114,11,114,115,11,115,116,11,116,117,11,117,86,92,93,32,91,92,32,90,91,32,89,90,32,88,89,32,87,88,32,86,87,32,11,86,32,11,32,33,11,33,34,11,34,35,11,35,36,11,36,37,11,37,38,11,38,39,11,39,166,11,166,167,11,167,168,11,168,169,11,169,170,11,170,171,11,171,172,11,172,173,11,173,174,11,174,175,11,175,176,11,176,177,11,177,178,11,178,179,11,179,180,11,180,181,165,166,39,164,165,39,163,164,39,162,163,39,161,162,39,160,161,39,159,160,39,159,39,40,158,159,40,158,40,41,157,158,41,157,41,42,156,157,42,156,42,43,156,43,44,155,156,44,155,44,45,48,49,142,47,48,142,46,47,142,45,46,142,155,45,142,155,142,143,155,143,144,155,144,145,155,145,146,155,146,147,155,147,148,155,148,149,155,149,150,155,150,119,155,119,120,155,120,121,155,121,122,141,142,49,140,141,49,139,140,49,138,139,49,137,138,49,136,137,49,135,136,49,135,49,50,134,135,50,134,50,51,133,134,51,133,51,20,132,133,20,132,20,21,132,21,22,23,24,83,22,23,83,132,22,83,131,132,83,130,131,83,130,83,84,130,84,53,130,53,54,130,54,55,130,55,56,130,56,57,130,57,58,130,58,59,130,59,60,130,60,61,130,61,62,130,62,63,130,63,64,82,83,24,81,82,24,80,81,24,79,80,24,78,79,24,77,78,24,76,77,24,76,24,25,75,76,25,75,25,26,74,75,26,74,26,27,74,27,28,73,74,28,73,28,29,73,29,30,31,32,93,30,31,93,73,30,93,72,73,93,72,93,94,72,94,95,72,95,96,72,96,97,72,97,98,72,98,99,72,99,100,72,100,101,72,101,102,72,102,103,72,103,104,72,104,105,110,111,11,109,110,11,108,109,11,107,108,11,106,107,11,105,106,11,72,105,11,71,72,11,71,11,12,70,71,12,69,70,12,68,69,12,67,68,12,66,67,12,65,66,12,64,65,12,130,64,12,129,130,12,128,129,12,127,128,12,127,12,13,126,127,13,126,13,14,126,14,15,126,15,16,126,16,17,126,17,18,125,126,18,125,18,19,125,19,0,125,0,1,124,125,1,123,124,1,122,123,1,155,122,1,154,155,1,154,1,2,153,154,2,152,153,2,183,152,2,182,183,2,181,182,2,11,181,2,11,2,3,11,3,4,11,4,5,11,5,6,11,6,7,11,7,8,11,8,9,11,9,10};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_59_point_1()
		{
			double[] value = {4.4422e+01,1.8112e+02,1.5236e+02,1.0117e+01,1.8112e+02,1.1806e+02,1.0117e+01,3.0812e+02,1.1806e+02,4.4422e+01,3.0812e+02,1.5236e+02,4.6174e+01,3.0788e+02,1.5411e+02,4.7859e+01,3.0716e+02,1.5580e+02,4.9411e+01,3.0598e+02,1.5735e+02,5.0772e+01,3.0441e+02,1.5871e+02,5.1889e+01,3.0248e+02,1.5983e+02,5.2719e+01,3.0028e+02,1.6066e+02,5.3230e+01,2.9790e+02,1.6117e+02,5.3402e+01,2.9542e+02,1.6134e+02,5.3402e+01,1.9382e+02,1.6134e+02,5.3230e+01,1.9135e+02,1.6117e+02,5.2719e+01,1.8896e+02,1.6066e+02,5.1889e+01,1.8677e+02,1.5983e+02,5.0772e+01,1.8484e+02,1.5871e+02,4.9411e+01,1.8327e+02,1.5735e+02,4.7859e+01,1.8209e+02,1.5580e+02,4.6174e+01,1.8137e+02,1.5411e+02,3.1850e+01,2.3110e+02,1.3979e+02,3.3715e+01,2.3136e+02,1.4165e+02,3.5510e+01,2.3213e+02,1.4345e+02,3.7163e+01,2.3338e+02,1.4510e+02,3.8612e+01,2.3506e+02,1.4655e+02,3.9802e+01,2.3711e+02,1.4774e+02,4.0686e+01,2.3945e+02,1.4862e+02,4.1230e+01,2.4199e+02,1.4917e+02,4.1414e+01,2.4462e+02,1.4935e+02,4.1230e+01,2.4726e+02,1.4917e+02,4.0686e+01,2.4980e+02,1.4862e+02,3.9802e+01,2.5214e+02,1.4774e+02,3.8612e+01,2.5419e+02,1.4655e+02,3.7163e+01,2.5587e+02,1.4510e+02,3.5510e+01,2.5712e+02,1.4345e+02,3.3715e+01,2.5789e+02,1.4165e+02,3.1850e+01,2.5815e+02,1.3979e+02,2.9984e+01,2.5789e+02,1.3792e+02,2.8190e+01,2.5712e+02,1.3613e+02,2.6536e+01,2.5587e+02,1.3447e+02,2.5087e+01,2.5419e+02,1.3303e+02,2.3897e+01,2.5214e+02,1.3184e+02,2.3014e+01,2.4980e+02,1.3095e+02,2.2469e+01,2.4726e+02,1.3041e+02,2.2286e+01,2.4462e+02,1.3022e+02,2.2469e+01,2.4199e+02,1.3041e+02,2.3014e+01,2.3945e+02,1.3095e+02,2.3897e+01,2.3711e+02,1.3184e+02,2.5087e+01,2.3506e+02,1.3303e+02,2.6536e+01,2.3338e+02,1.3447e+02,2.8190e+01,2.3213e+02,1.3613e+02,2.9984e+01,2.3136e+02,1.3792e+02,3.1850e+01,2.3110e+02,1.3979e+02,4.2944e+01,2.2672e+02,1.5088e+02,4.2815e+01,2.2629e+02,1.5075e+02,4.2748e+01,2.2583e+02,1.5069e+02,4.2745e+01,2.2536e+02,1.5068e+02,4.2806e+01,2.2490e+02,1.5074e+02,4.2930e+01,2.2447e+02,1.5087e+02,4.3111e+01,2.2408e+02,1.5105e+02,4.3342e+01,2.2375e+02,1.5128e+02,4.3615e+01,2.2349e+02,1.5155e+02,4.3918e+01,2.2330e+02,1.5186e+02,4.4242e+01,2.2321e+02,1.5218e+02,4.4572e+01,2.2320e+02,1.5251e+02,4.4896e+01,2.2329e+02,1.5283e+02,4.5202e+01,2.2346e+02,1.5314e+02,4.5478e+01,2.2372e+02,1.5342e+02,4.5714e+01,2.2405e+02,1.5365e+02,4.5900e+01,2.2443e+02,1.5384e+02,4.6029e+01,2.2486e+02,1.5397e+02,4.6096e+01,2.2532e+02,1.5403e+02,4.6099e+01,2.2579e+02,1.5404e+02,4.6038e+01,2.2625e+02,1.5398e+02,4.5914e+01,2.2668e+02,1.5385e+02,4.5733e+01,2.2707e+02,1.5367e+02,4.5502e+01,2.2740e+02,1.5344e+02,4.5229e+01,2.2766e+02,1.5317e+02,4.4925e+01,2.2785e+02,1.5286e+02,4.4602e+01,2.2794e+02,1.5254e+02,4.4272e+01,2.2795e+02,1.5221e+02,4.3948e+01,2.2786e+02,1.5189e+02,4.3642e+01,2.2769e+02,1.5158e+02,4.3366e+01,2.2743e+02,1.5130e+02,4.3130e+01,2.2710e+02,1.5107e+02,4.2944e+01,2.2672e+02,1.5088e+02,4.2944e+01,2.6482e+02,1.5088e+02,4.2815e+01,2.6439e+02,1.5075e+02,4.2748e+01,2.6393e+02,1.5069e+02,4.2745e+01,2.6346e+02,1.5068e+02,4.2806e+01,2.6300e+02,1.5074e+02,4.2930e+01,2.6257e+02,1.5087e+02,4.3111e+01,2.6218e+02,1.5105e+02,4.3342e+01,2.6185e+02,1.5128e+02,4.3615e+01,2.6159e+02,1.5155e+02,4.3918e+01,2.6140e+02,1.5186e+02,4.4242e+01,2.6131e+02,1.5218e+02,4.4572e+01,2.6130e+02,1.5251e+02,4.4896e+01,2.6139e+02,1.5283e+02,4.5202e+01,2.6156e+02,1.5314e+02};
			return value;
		}
		private double[] getCoordinate_7_59_point_2()
		{
			double[] value = {4.5478e+01,2.6182e+02,1.5342e+02,4.5714e+01,2.6215e+02,1.5365e+02,4.5900e+01,2.6253e+02,1.5384e+02,4.6029e+01,2.6296e+02,1.5397e+02,4.6096e+01,2.6342e+02,1.5403e+02,4.6099e+01,2.6389e+02,1.5404e+02,4.6038e+01,2.6435e+02,1.5398e+02,4.5914e+01,2.6478e+02,1.5385e+02,4.5733e+01,2.6517e+02,1.5367e+02,4.5502e+01,2.6550e+02,1.5344e+02,4.5229e+01,2.6576e+02,1.5317e+02,4.4925e+01,2.6595e+02,1.5286e+02,4.4602e+01,2.6604e+02,1.5254e+02,4.4272e+01,2.6605e+02,1.5221e+02,4.3948e+01,2.6596e+02,1.5189e+02,4.3642e+01,2.6579e+02,1.5158e+02,4.3366e+01,2.6553e+02,1.5130e+02,4.3130e+01,2.6520e+02,1.5107e+02,4.2944e+01,2.6482e+02,1.5088e+02,2.0494e+01,2.2672e+02,1.2843e+02,2.0365e+01,2.2629e+02,1.2830e+02,2.0297e+01,2.2583e+02,1.2824e+02,2.0294e+01,2.2536e+02,1.2823e+02,2.0356e+01,2.2490e+02,1.2829e+02,2.0479e+01,2.2447e+02,1.2842e+02,2.0660e+01,2.2408e+02,1.2860e+02,2.0891e+01,2.2375e+02,1.2883e+02,2.1164e+01,2.2349e+02,1.2910e+02,2.1468e+01,2.2330e+02,1.2941e+02,2.1791e+01,2.2321e+02,1.2973e+02,2.2121e+01,2.2320e+02,1.3006e+02,2.2445e+01,2.2329e+02,1.3038e+02,2.2752e+01,2.2346e+02,1.3069e+02,2.3028e+01,2.2372e+02,1.3097e+02,2.3263e+01,2.2405e+02,1.3120e+02,2.3449e+01,2.2443e+02,1.3139e+02,2.3578e+01,2.2486e+02,1.3152e+02,2.3646e+01,2.2532e+02,1.3158e+02,2.3649e+01,2.2579e+02,1.3159e+02,2.3587e+01,2.2625e+02,1.3153e+02,2.3464e+01,2.2668e+02,1.3140e+02,2.3283e+01,2.2707e+02,1.3122e+02,2.3051e+01,2.2740e+02,1.3099e+02,2.2779e+01,2.2766e+02,1.3072e+02,2.2475e+01,2.2785e+02,1.3041e+02,2.2152e+01,2.2794e+02,1.3009e+02,2.1822e+01,2.2795e+02,1.2976e+02,2.1497e+01,2.2786e+02,1.2944e+02,2.1191e+01,2.2769e+02,1.2913e+02,2.0915e+01,2.2743e+02,1.2885e+02,2.0680e+01,2.2710e+02,1.2862e+02,2.0494e+01,2.2672e+02,1.2843e+02,2.0494e+01,2.6482e+02,1.2843e+02,2.0365e+01,2.6439e+02,1.2830e+02,2.0297e+01,2.6393e+02,1.2824e+02,2.0294e+01,2.6346e+02,1.2823e+02,2.0356e+01,2.6300e+02,1.2829e+02,2.0479e+01,2.6257e+02,1.2842e+02,2.0660e+01,2.6218e+02,1.2860e+02,2.0891e+01,2.6185e+02,1.2883e+02,2.1164e+01,2.6159e+02,1.2910e+02,2.1468e+01,2.6140e+02,1.2941e+02,2.1791e+01,2.6131e+02,1.2973e+02,2.2121e+01,2.6130e+02,1.3006e+02,2.2445e+01,2.6139e+02,1.3038e+02,2.2752e+01,2.6156e+02,1.3069e+02,2.3028e+01,2.6182e+02,1.3097e+02,2.3263e+01,2.6215e+02,1.3120e+02,2.3449e+01,2.6253e+02,1.3139e+02,2.3578e+01,2.6296e+02,1.3152e+02,2.3646e+01,2.6342e+02,1.3158e+02,2.3649e+01,2.6389e+02,1.3159e+02,2.3587e+01,2.6435e+02,1.3153e+02,2.3464e+01,2.6478e+02,1.3140e+02,2.3283e+01,2.6517e+02,1.3122e+02,2.3051e+01,2.6550e+02,1.3099e+02,2.2779e+01,2.6576e+02,1.3072e+02,2.2475e+01,2.6595e+02,1.3041e+02,2.2152e+01,2.6604e+02,1.3009e+02,2.1822e+01,2.6605e+02,1.2976e+02,2.1497e+01,2.6596e+02,1.2944e+02,2.1191e+01,2.6579e+02,1.2913e+02,2.0915e+01,2.6553e+02,1.2885e+02,2.0680e+01,2.6520e+02,1.2862e+02,2.0494e+01,2.6482e+02,1.2843e+02};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_65_index_1()
		{
			int[] value = {8,109,110,8,110,111,8,111,112,8,112,113,8,113,114,8,114,115,8,115,116,8,116,117,94,95,40,93,94,40,92,93,40,91,92,40,90,91,40,89,90,40,88,89,40,88,40,41,87,88,41,87,41,42,86,87,42,86,42,43,86,43,44,117,86,44,117,44,45,117,45,46,47,48,55,46,47,55,117,46,55,8,117,55,8,55,56,8,56,57,8,57,58,8,58,59,8,59,60,8,60,61,8,61,62,8,62,63,8,63,64,8,64,65,8,65,66,8,66,67,54,55,48,53,54,48,84,53,48,83,84,48,82,83,48,81,82,48,80,81,48,80,48,49,79,80,49,79,49,50,78,79,50,78,50,51,77,78,51,77,51,20,77,20,21,76,77,21,76,21,22,22,23,144,76,22,144,75,76,144,75,144,145,75,145,146,75,146,147,75,147,148,75,148,149,75,149,150,75,150,119,75,119,120,75,120,121,75,121,122,74,75,122,74,122,123,74,123,124,143,144,23,142,143,23,141,142,23,140,141,23,139,140,23,138,139,23,137,138,23,137,23,24,136,137,24,136,24,25,135,136,25,135,25,26,134,135,26,134,26,27,133,134,27,133,27,28,133,28,29,32,33,154,31,32,154,30,31,154,29,30,154,133,29,154,133,154,155,133,155,156,133,156,157,133,157,158,133,158,159,133,159,160,133,160,161,133,161,162,133,162,163,132,133,163,132,163,164,132,164,165,153,154,33,152,153,33,183,152,33,182,183,33,181,182,33,180,181,33,179,180,33,179,33,34,178,179,34,178,34,35,177,178,35,177,35,36,176,177,36,176,36,37,176,37,38,39,40,95,38,39,95,176,38,95,175,176,95,174,175,95,174,95,96,174,96,97,174,97,98,174,98,99,174,99,100,174,100,101,174,101,102,174,102,103,174,103,104,174,104,105,173,174,105,173,105,106,173,106,107,108,109,8,107,108,8,173,107,8,172,173,8,171,172,8,171,8,9,170,171,9,170,9,10,170,10,11,170,11,12,170,12,13,169,170,13,169,13,14,169,14,15,169,15,16,169,16,17,168,169,17,167,168,17,166,167,17,165,166,17,132,165,17,132,17,18,131,132,18,130,131,18,129,130,18,128,129,18,127,128,18,126,127,18,125,126,18,124,125,18,74,124,18,73,74,18,72,73,18,71,72,18,71,18,19,70,71,19,69,70,19,68,69,19,67,68,19,8,67,19,8,19,0,8,0,1,8,1,2,8,2,3,8,3,4,8,4,5,8,5,6,8,6,7};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_65_point_1()
		{
			double[] value = {4.4825e+01,1.8137e+02,1.5546e+02,4.6510e+01,1.8209e+02,1.5715e+02,4.8062e+01,1.8327e+02,1.5870e+02,4.9423e+01,1.8484e+02,1.6006e+02,5.0540e+01,1.8677e+02,1.6118e+02,5.1370e+01,1.8896e+02,1.6201e+02,5.1881e+01,1.9135e+02,1.6252e+02,5.2053e+01,1.9382e+02,1.6269e+02,5.2053e+01,2.9542e+02,1.6269e+02,5.1881e+01,2.9790e+02,1.6252e+02,5.1370e+01,3.0028e+02,1.6201e+02,5.0540e+01,3.0248e+02,1.6118e+02,4.9423e+01,3.0441e+02,1.6006e+02,4.8062e+01,3.0598e+02,1.5870e+02,4.6510e+01,3.0716e+02,1.5715e+02,4.4825e+01,3.0788e+02,1.5546e+02,4.3073e+01,3.0812e+02,1.5371e+02,8.7686e+00,3.0812e+02,1.1940e+02,8.7686e+00,1.8112e+02,1.1940e+02,4.3073e+01,1.8112e+02,1.5371e+02,3.0501e+01,2.3110e+02,1.4114e+02,2.8635e+01,2.3136e+02,1.3927e+02,2.6841e+01,2.3213e+02,1.3748e+02,2.5187e+01,2.3338e+02,1.3582e+02,2.3738e+01,2.3506e+02,1.3437e+02,2.2549e+01,2.3711e+02,1.3318e+02,2.1665e+01,2.3945e+02,1.3230e+02,2.1121e+01,2.4199e+02,1.3176e+02,2.0937e+01,2.4462e+02,1.3157e+02,2.1121e+01,2.4726e+02,1.3176e+02,2.1665e+01,2.4980e+02,1.3230e+02,2.2549e+01,2.5214e+02,1.3318e+02,2.3738e+01,2.5419e+02,1.3437e+02,2.5187e+01,2.5587e+02,1.3582e+02,2.6841e+01,2.5712e+02,1.3748e+02,2.8635e+01,2.5789e+02,1.3927e+02,3.0501e+01,2.5815e+02,1.4114e+02,3.2367e+01,2.5789e+02,1.4300e+02,3.4161e+01,2.5712e+02,1.4480e+02,3.5814e+01,2.5587e+02,1.4645e+02,3.7264e+01,2.5419e+02,1.4790e+02,3.8453e+01,2.5214e+02,1.4909e+02,3.9337e+01,2.4980e+02,1.4997e+02,3.9881e+01,2.4726e+02,1.5052e+02,4.0065e+01,2.4462e+02,1.5070e+02,3.9881e+01,2.4199e+02,1.5052e+02,3.9337e+01,2.3945e+02,1.4997e+02,3.8453e+01,2.3711e+02,1.4909e+02,3.7264e+01,2.3506e+02,1.4790e+02,3.5814e+01,2.3338e+02,1.4645e+02,3.4161e+01,2.3213e+02,1.4480e+02,3.2367e+01,2.3136e+02,1.4300e+02,3.0501e+01,2.3110e+02,1.4114e+02,4.1595e+01,2.2672e+02,1.5223e+02,4.1781e+01,2.2710e+02,1.5242e+02,4.2017e+01,2.2743e+02,1.5265e+02,4.2293e+01,2.2769e+02,1.5293e+02,4.2599e+01,2.2786e+02,1.5324e+02,4.2923e+01,2.2795e+02,1.5356e+02,4.3253e+01,2.2794e+02,1.5389e+02,4.3577e+01,2.2785e+02,1.5421e+02,4.3880e+01,2.2766e+02,1.5452e+02,4.4153e+01,2.2740e+02,1.5479e+02,4.4384e+01,2.2707e+02,1.5502e+02,4.4565e+01,2.2668e+02,1.5520e+02,4.4689e+01,2.2625e+02,1.5533e+02,4.4750e+01,2.2579e+02,1.5539e+02,4.4747e+01,2.2532e+02,1.5538e+02,4.4680e+01,2.2486e+02,1.5532e+02,4.4551e+01,2.2443e+02,1.5519e+02,4.4365e+01,2.2405e+02,1.5500e+02,4.4129e+01,2.2372e+02,1.5477e+02,4.3853e+01,2.2346e+02,1.5449e+02,4.3547e+01,2.2329e+02,1.5418e+02,4.3223e+01,2.2320e+02,1.5386e+02,4.2893e+01,2.2321e+02,1.5353e+02,4.2570e+01,2.2330e+02,1.5321e+02,4.2266e+01,2.2349e+02,1.5290e+02,4.1993e+01,2.2375e+02,1.5263e+02,4.1762e+01,2.2408e+02,1.5240e+02,4.1581e+01,2.2447e+02,1.5222e+02,4.1457e+01,2.2490e+02,1.5209e+02,4.1396e+01,2.2536e+02,1.5203e+02,4.1399e+01,2.2583e+02,1.5204e+02,4.1466e+01,2.2629e+02,1.5210e+02,4.1595e+01,2.2672e+02,1.5223e+02,4.4551e+01,2.6253e+02,1.5519e+02,4.4365e+01,2.6215e+02,1.5500e+02,4.4129e+01,2.6182e+02,1.5477e+02,4.3853e+01,2.6156e+02,1.5449e+02,4.3547e+01,2.6139e+02,1.5418e+02,4.3223e+01,2.6130e+02,1.5386e+02,4.2893e+01,2.6131e+02,1.5353e+02,4.2570e+01,2.6140e+02,1.5321e+02,4.2266e+01,2.6159e+02,1.5290e+02,4.1993e+01,2.6185e+02,1.5263e+02,4.1762e+01,2.6218e+02,1.5240e+02,4.1581e+01,2.6257e+02,1.5222e+02,4.1457e+01,2.6300e+02,1.5209e+02,4.1396e+01,2.6346e+02,1.5203e+02};
			return value;
		}
		private double[] getCoordinate_7_65_point_2()
		{
			double[] value = {4.1399e+01,2.6393e+02,1.5204e+02,4.1466e+01,2.6439e+02,1.5210e+02,4.1595e+01,2.6482e+02,1.5223e+02,4.1781e+01,2.6520e+02,1.5242e+02,4.2017e+01,2.6553e+02,1.5265e+02,4.2293e+01,2.6579e+02,1.5293e+02,4.2599e+01,2.6596e+02,1.5324e+02,4.2923e+01,2.6605e+02,1.5356e+02,4.3253e+01,2.6604e+02,1.5389e+02,4.3577e+01,2.6595e+02,1.5421e+02,4.3880e+01,2.6576e+02,1.5452e+02,4.4153e+01,2.6550e+02,1.5479e+02,4.4384e+01,2.6517e+02,1.5502e+02,4.4565e+01,2.6478e+02,1.5520e+02,4.4689e+01,2.6435e+02,1.5533e+02,4.4750e+01,2.6389e+02,1.5539e+02,4.4747e+01,2.6342e+02,1.5538e+02,4.4680e+01,2.6296e+02,1.5532e+02,4.4551e+01,2.6253e+02,1.5519e+02,2.2100e+01,2.2443e+02,1.3274e+02,2.1914e+01,2.2405e+02,1.3255e+02,2.1679e+01,2.2372e+02,1.3232e+02,2.1403e+01,2.2346e+02,1.3204e+02,2.1097e+01,2.2329e+02,1.3173e+02,2.0772e+01,2.2320e+02,1.3141e+02,2.0442e+01,2.2321e+02,1.3108e+02,2.0119e+01,2.2330e+02,1.3076e+02,1.9815e+01,2.2349e+02,1.3045e+02,1.9542e+01,2.2375e+02,1.3018e+02,1.9311e+01,2.2408e+02,1.2995e+02,1.9130e+01,2.2447e+02,1.2977e+02,1.9007e+01,2.2490e+02,1.2964e+02,1.8945e+01,2.2536e+02,1.2958e+02,1.8948e+01,2.2583e+02,1.2958e+02,1.9016e+01,2.2629e+02,1.2965e+02,1.9145e+01,2.2672e+02,1.2978e+02,1.9331e+01,2.2710e+02,1.2997e+02,1.9566e+01,2.2743e+02,1.3020e+02,1.9842e+01,2.2769e+02,1.3048e+02,2.0148e+01,2.2786e+02,1.3078e+02,2.0473e+01,2.2795e+02,1.3111e+02,2.0803e+01,2.2794e+02,1.3144e+02,2.1126e+01,2.2785e+02,1.3176e+02,2.1430e+01,2.2766e+02,1.3207e+02,2.1703e+01,2.2740e+02,1.3234e+02,2.1934e+01,2.2707e+02,1.3257e+02,2.2115e+01,2.2668e+02,1.3275e+02,2.2238e+01,2.2625e+02,1.3287e+02,2.2300e+01,2.2579e+02,1.3294e+02,2.2297e+01,2.2532e+02,1.3293e+02,2.2229e+01,2.2486e+02,1.3287e+02,2.2100e+01,2.2443e+02,1.3274e+02,2.2100e+01,2.6253e+02,1.3274e+02,2.1914e+01,2.6215e+02,1.3255e+02,2.1679e+01,2.6182e+02,1.3232e+02,2.1403e+01,2.6156e+02,1.3204e+02,2.1097e+01,2.6139e+02,1.3173e+02,2.0772e+01,2.6130e+02,1.3141e+02,2.0442e+01,2.6131e+02,1.3108e+02,2.0119e+01,2.6140e+02,1.3076e+02,1.9815e+01,2.6159e+02,1.3045e+02,1.9542e+01,2.6185e+02,1.3018e+02,1.9311e+01,2.6218e+02,1.2995e+02,1.9130e+01,2.6257e+02,1.2977e+02,1.9007e+01,2.6300e+02,1.2964e+02,1.8945e+01,2.6346e+02,1.2958e+02,1.8948e+01,2.6393e+02,1.2958e+02,1.9016e+01,2.6439e+02,1.2965e+02,1.9145e+01,2.6482e+02,1.2978e+02,1.9331e+01,2.6520e+02,1.2997e+02,1.9566e+01,2.6553e+02,1.3020e+02,1.9842e+01,2.6579e+02,1.3048e+02,2.0148e+01,2.6596e+02,1.3078e+02,2.0473e+01,2.6605e+02,1.3111e+02,2.0803e+01,2.6604e+02,1.3144e+02,2.1126e+01,2.6595e+02,1.3176e+02,2.1430e+01,2.6576e+02,1.3207e+02,2.1703e+01,2.6550e+02,1.3234e+02,2.1934e+01,2.6517e+02,1.3257e+02,2.2115e+01,2.6478e+02,1.3275e+02,2.2238e+01,2.6435e+02,1.3287e+02,2.2300e+01,2.6389e+02,1.3294e+02,2.2297e+01,2.6342e+02,1.3293e+02,2.2229e+01,2.6296e+02,1.3287e+02,2.2100e+01,2.6253e+02,1.3274e+02};
			return value;
		}


















		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_261_index_1()
		{
			int[] value = {122,273,274,122,274,275,122,275,276,122,276,245,122,245,246,122,246,247,122,247,248,254,255,239,253,254,239,252,253,239,251,252,239,250,251,239,249,250,239,249,239,240,248,249,240,122,248,240,122,240,241,122,241,242,122,242,243,122,243,212,122,212,213,122,213,214,122,214,215,222,223,205,221,222,205,220,221,205,219,220,205,218,219,205,217,218,205,216,217,205,216,205,206,216,206,207,215,216,207,215,207,208,215,208,209,122,215,209,122,209,210,122,210,179,122,179,180,122,180,181,122,181,182,188,189,157,187,188,157,186,187,157,185,186,157,184,185,157,183,184,157,183,157,158,182,183,158,182,158,159,182,159,160,182,160,161,122,182,161,122,161,162,122,162,163,122,163,164,122,164,165,175,176,10,174,175,10,173,174,10,172,173,10,171,172,10,170,171,10,169,170,10,169,10,11,169,11,0,168,169,0,167,168,0,166,167,0,165,166,0,165,0,1,1,102,103,1,103,104,165,1,104,165,104,105,165,105,106,165,106,107,165,107,108,165,108,109,165,109,110,165,110,111,165,111,112,165,112,79,79,45,46,79,46,47,79,47,48,79,48,49,79,49,50,79,50,51,79,51,52,165,79,52,165,52,53,165,53,54,165,54,55,165,55,56,165,56,57,165,57,58,165,58,59,165,59,60,122,165,60,122,60,61,122,61,62,122,62,63,122,63,64,122,64,65,122,65,66,122,66,67,122,67,68,122,68,69,122,69,70,122,70,71,122,71,72,122,72,73,122,73,74,122,74,75,78,45,79,77,78,79,76,77,79,76,79,80,75,76,80,122,75,80,122,80,81,122,81,82,122,82,83,122,83,84,122,84,85,122,85,86,122,86,87,122,87,88,122,88,89,122,89,90,122,90,91,101,102,1,100,101,1,99,100,1,98,99,1,97,98,1,96,97,1,95,96,1,95,1,2,95,2,3,94,95,3,93,94,3,92,93,3,91,92,3,91,3,4,91,4,5,5,6,7,7,8,9,7,9,10,10,176,177,10,177,146,10,146,147,10,147,148,7,10,148,7,148,149,7,149,150,7,150,151,7,151,152,7,152,153,156,157,189,155,156,189,154,155,189,153,154,189,153,189,190,153,190,191,153,191,192,153,192,193,153,193,194,153,194,195,153,195,196,153,196,197,7,153,197,7,197,198,7,198,199,7,199,200,7,200,201,7,201,202,204,205,223,203,204,223,202,203,223,202,223,224,202,224,225,202,225,226,202,226,227,202,227,228,202,228,229,202,229,230,7,202,230,7,230,231,7,231,232,7,232,233,7,233,234,7,234,235,238,239,255,237,238,255,236,237,255,235,236,255,235,255,256,235,256,257,235,257,258,235,258,259,235,259,260,235,260,261,235,261,262,235,262,263,7,235,263,7,263,264,7,264,265,7,265,266,7,266,267,7,267,268,7,268,269,7,269,270,7,270,271,7,271,272,7,272,273,273,122,123,273,123,124,273,124,125,273,125,126,273,126,127,7,273,127,7,127,128,7,128,129,7,129,130,7,130,131,7,131,132,7,132,133,7,133,134,7,134,135,5,7,135,5,135,136,5,136,137,5,137,138,5,138,139,5,139,140,142,143,27,141,142,27,140,141,27,140,27,28,140,28,29,140,29,30,140,30,31,140,31,32,140,32,33,140,33,34,5,140,34,5,34,35,5,35,36,5,36,37,5,37,38,5,38,39,5,39,40,5,40,41,5,41,42,5,42,43,91,5,43,91,43,12,91,12,13,91,13,14,91,14,15,91,15,16,91,16,17,91,17,18,91,18,19,91,19,20,91,20,21,91,21,22,91,22,23,91,23,24,91,24,25,91,25,26,26,27,143,91,26,143,91,143,144,91,144,145,91,145,114,91,114,115,91,115,116,91,116,117,91,117,118,91,118,119,91,119,120,91,120,121,122,91,121};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_261_point_1()
		{
			double[] value = {-2.3241e+02,5.8087e+01,7.6200e+01,-2.3241e+02,5.9990e+01,7.6200e+01,-2.4130e+02,5.9990e+01,7.6200e+01,-2.4130e+02,4.2546e+02,7.6200e+01,-2.3241e+02,4.2546e+02,7.6200e+01,-2.3241e+02,4.2639e+02,7.6200e+01,-8.8900e+00,4.2639e+02,7.6200e+01,-8.8900e+00,4.2546e+02,7.6200e+01,8.8818e-16,4.2546e+02,7.6200e+01,8.8818e-16,5.9990e+01,7.6200e+01,-8.8900e+00,5.9990e+01,7.6200e+01,-8.8900e+00,5.8087e+01,7.6200e+01,-1.7732e+02,3.5692e+02,7.6200e+01,-1.7683e+02,3.5197e+02,7.6200e+01,-1.7538e+02,3.4720e+02,7.6200e+01,-1.7304e+02,3.4281e+02,7.6200e+01,-1.6988e+02,3.3896e+02,7.6200e+01,-1.6603e+02,3.3580e+02,7.6200e+01,-1.6164e+02,3.3345e+02,7.6200e+01,-1.5687e+02,3.3201e+02,7.6200e+01,-1.5192e+02,3.3152e+02,7.6200e+01,-1.4696e+02,3.3201e+02,7.6200e+01,-1.4220e+02,3.3345e+02,7.6200e+01,-1.3781e+02,3.3580e+02,7.6200e+01,-1.3396e+02,3.3896e+02,7.6200e+01,-1.3080e+02,3.4281e+02,7.6200e+01,-1.2845e+02,3.4720e+02,7.6200e+01,-1.2701e+02,3.5197e+02,7.6200e+01,-1.2652e+02,3.5692e+02,7.6200e+01,-1.2701e+02,3.6188e+02,7.6200e+01,-1.2845e+02,3.6664e+02,7.6200e+01,-1.3080e+02,3.7103e+02,7.6200e+01,-1.3396e+02,3.7488e+02,7.6200e+01,-1.3781e+02,3.7804e+02,7.6200e+01,-1.4220e+02,3.8039e+02,7.6200e+01,-1.4696e+02,3.8183e+02,7.6200e+01,-1.5192e+02,3.8232e+02,7.6200e+01,-1.5687e+02,3.8183e+02,7.6200e+01,-1.6164e+02,3.8039e+02,7.6200e+01,-1.6603e+02,3.7804e+02,7.6200e+01,-1.6988e+02,3.7488e+02,7.6200e+01,-1.7304e+02,3.7103e+02,7.6200e+01,-1.7538e+02,3.6664e+02,7.6200e+01,-1.7683e+02,3.6188e+02,7.6200e+01,-1.7732e+02,3.5692e+02,7.6200e+01,-1.3604e+02,1.2207e+02,7.6200e+01,-1.3586e+02,1.2021e+02,7.6200e+01,-1.3532e+02,1.1843e+02,7.6200e+01,-1.3444e+02,1.1678e+02,7.6200e+01,-1.3325e+02,1.1534e+02,7.6200e+01,-1.3181e+02,1.1415e+02,7.6200e+01,-1.3016e+02,1.1327e+02,7.6200e+01,-1.2838e+02,1.1273e+02,7.6200e+01,-1.2652e+02,1.1255e+02,7.6200e+01,-1.2466e+02,1.1273e+02,7.6200e+01,-1.2287e+02,1.1327e+02,7.6200e+01,-1.2123e+02,1.1415e+02,7.6200e+01,-1.1978e+02,1.1534e+02,7.6200e+01,-1.1860e+02,1.1678e+02,7.6200e+01,-1.1772e+02,1.1843e+02,7.6200e+01,-1.1718e+02,1.2021e+02,7.6200e+01,-1.1699e+02,1.2207e+02,7.6200e+01,-1.1699e+02,2.1097e+02,7.6200e+01,-1.1718e+02,2.1283e+02,7.6200e+01,-1.1772e+02,2.1462e+02,7.6200e+01,-1.1860e+02,2.1626e+02,7.6200e+01,-1.1978e+02,2.1771e+02,7.6200e+01,-1.2123e+02,2.1889e+02,7.6200e+01,-1.2287e+02,2.1977e+02,7.6200e+01,-1.2466e+02,2.2031e+02,7.6200e+01,-1.2652e+02,2.2050e+02,7.6200e+01,-1.2838e+02,2.2031e+02,7.6200e+01,-1.3016e+02,2.1977e+02,7.6200e+01,-1.3181e+02,2.1889e+02,7.6200e+01,-1.3325e+02,2.1771e+02,7.6200e+01,-1.3444e+02,2.1626e+02,7.6200e+01,-1.3532e+02,2.1462e+02,7.6200e+01,-1.3586e+02,2.1283e+02,7.6200e+01,-1.3604e+02,2.1097e+02,7.6200e+01,-1.8049e+02,1.2207e+02,7.6200e+01,-1.8049e+02,2.1097e+02,7.6200e+01,-1.8068e+02,2.1283e+02,7.6200e+01,-1.8122e+02,2.1462e+02,7.6200e+01,-1.8210e+02,2.1626e+02,7.6200e+01,-1.8328e+02,2.1771e+02,7.6200e+01,-1.8473e+02,2.1889e+02,7.6200e+01,-1.8637e+02,2.1977e+02,7.6200e+01,-1.8816e+02,2.2031e+02,7.6200e+01,-1.9002e+02,2.2050e+02,7.6200e+01,-1.9188e+02,2.2031e+02,7.6200e+01,-1.9366e+02,2.1977e+02,7.6200e+01,-1.9531e+02,2.1889e+02,7.6200e+01,-1.9675e+02,2.1771e+02,7.6200e+01,-1.9794e+02,2.1626e+02,7.6200e+01,-1.9882e+02,2.1462e+02,7.6200e+01,-1.9936e+02,2.1283e+02,7.6200e+01,-1.9954e+02,2.1097e+02,7.6200e+01,-1.9954e+02,1.2207e+02,7.6200e+01,-1.9936e+02,1.2021e+02,7.6200e+01,-1.9882e+02,1.1843e+02,7.6200e+01};
			return value;
		}
		private double[] getCoordinate_7_261_point_2()
		{
			double[] value = {-1.9794e+02,1.1678e+02,7.6200e+01,-1.9675e+02,1.1534e+02,7.6200e+01,-1.9531e+02,1.1415e+02,7.6200e+01,-1.9366e+02,1.1327e+02,7.6200e+01,-1.9188e+02,1.1273e+02,7.6200e+01,-1.9002e+02,1.1255e+02,7.6200e+01,-1.8816e+02,1.1273e+02,7.6200e+01,-1.8637e+02,1.1327e+02,7.6200e+01,-1.8473e+02,1.1415e+02,7.6200e+01,-1.8328e+02,1.1534e+02,7.6200e+01,-1.8210e+02,1.1678e+02,7.6200e+01,-1.8122e+02,1.1843e+02,7.6200e+01,-1.8068e+02,1.2021e+02,7.6200e+01,-1.8049e+02,1.2207e+02,7.6200e+01,-8.1701e+01,3.2780e+02,7.6200e+01,-8.0617e+01,3.2423e+02,7.6200e+01,-7.8857e+01,3.2094e+02,7.6200e+01,-7.6488e+01,3.1805e+02,7.6200e+01,-7.3601e+01,3.1568e+02,7.6200e+01,-7.0308e+01,3.1392e+02,7.6200e+01,-6.6734e+01,3.1284e+02,7.6200e+01,-6.3017e+01,3.1247e+02,7.6200e+01,-5.9301e+01,3.1284e+02,7.6200e+01,-5.5727e+01,3.1392e+02,7.6200e+01,-5.2434e+01,3.1568e+02,7.6200e+01,-4.9547e+01,3.1805e+02,7.6200e+01,-4.7178e+01,3.2094e+02,7.6200e+01,-4.5417e+01,3.2423e+02,7.6200e+01,-4.4333e+01,3.2780e+02,7.6200e+01,-4.3967e+01,3.3152e+02,7.6200e+01,-4.4333e+01,3.3524e+02,7.6200e+01,-4.5417e+01,3.3881e+02,7.6200e+01,-4.7178e+01,3.4210e+02,7.6200e+01,-4.9547e+01,3.4499e+02,7.6200e+01,-5.2434e+01,3.4736e+02,7.6200e+01,-5.5727e+01,3.4912e+02,7.6200e+01,-5.9301e+01,3.5020e+02,7.6200e+01,-6.3017e+01,3.5057e+02,7.6200e+01,-6.6734e+01,3.5020e+02,7.6200e+01,-7.0308e+01,3.4912e+02,7.6200e+01,-7.3601e+01,3.4736e+02,7.6200e+01,-7.6488e+01,3.4499e+02,7.6200e+01,-7.8857e+01,3.4210e+02,7.6200e+01,-8.0617e+01,3.3881e+02,7.6200e+01,-8.1701e+01,3.3524e+02,7.6200e+01,-8.2067e+01,3.3152e+02,7.6200e+01,-3.1134e+01,9.2969e+01,7.6200e+01,-3.0526e+01,9.4401e+01,7.6200e+01,-3.0208e+01,9.5924e+01,7.6200e+01,-3.0194e+01,9.7480e+01,7.6200e+01,-3.0484e+01,9.9009e+01,7.6200e+01,-3.1066e+01,1.0045e+02,7.6200e+01,-3.1919e+01,1.0175e+02,7.6200e+01,-3.3009e+01,1.0286e+02,7.6200e+01,-3.4295e+01,1.0374e+02,7.6200e+01,-3.5727e+01,1.0435e+02,7.6200e+01,-3.7250e+01,1.0467e+02,7.6200e+01,-3.8806e+01,1.0468e+02,7.6200e+01,-4.0335e+01,1.0439e+02,7.6200e+01,-4.1778e+01,1.0381e+02,7.6200e+01,-4.3079e+01,1.0296e+02,7.6200e+01,-4.4190e+01,1.0187e+02,7.6200e+01,-4.5066e+01,1.0058e+02,7.6200e+01,-4.5674e+01,9.9147e+01,7.6200e+01,-4.5992e+01,9.7624e+01,7.6200e+01,-4.6006e+01,9.6068e+01,7.6200e+01,-4.5716e+01,9.4539e+01,7.6200e+01,-4.5134e+01,9.3096e+01,7.6200e+01,-4.4281e+01,9.1795e+01,7.6200e+01,-4.3191e+01,9.0684e+01,7.6200e+01,-4.1905e+01,8.9808e+01,7.6200e+01,-4.0473e+01,8.9200e+01,7.6200e+01,-3.8950e+01,8.8882e+01,7.6200e+01,-3.7394e+01,8.8868e+01,7.6200e+01,-3.5865e+01,8.9158e+01,7.6200e+01,-3.4422e+01,8.9740e+01,7.6200e+01,-3.3121e+01,9.0593e+01,7.6200e+01,-3.2010e+01,9.1683e+01,7.6200e+01,-3.1134e+01,9.2969e+01,7.6200e+01,-4.5066e+01,1.4503e+02,7.6200e+01,-4.5674e+01,1.4360e+02,7.6200e+01,-4.5992e+01,1.4207e+02,7.6200e+01,-4.6006e+01,1.4052e+02,7.6200e+01,-4.5716e+01,1.3899e+02,7.6200e+01,-4.5134e+01,1.3755e+02,7.6200e+01,-4.4281e+01,1.3624e+02,7.6200e+01,-4.3191e+01,1.3513e+02,7.6200e+01,-4.1905e+01,1.3426e+02,7.6200e+01,-4.0473e+01,1.3365e+02,7.6200e+01,-3.8950e+01,1.3333e+02,7.6200e+01,-3.7394e+01,1.3332e+02,7.6200e+01,-3.5865e+01,1.3361e+02,7.6200e+01,-3.4422e+01,1.3419e+02,7.6200e+01,-3.3121e+01,1.3504e+02,7.6200e+01,-3.2010e+01,1.3613e+02,7.6200e+01,-3.1134e+01,1.3742e+02,7.6200e+01,-3.0526e+01,1.3885e+02,7.6200e+01,-3.0208e+01,1.4037e+02,7.6200e+01,-3.0194e+01,1.4193e+02,7.6200e+01,-3.0484e+01,1.4346e+02,7.6200e+01};
			return value;
		}
		private double[] getCoordinate_7_261_point_3()
		{
			double[] value = {-3.1066e+01,1.4490e+02,7.6200e+01,-3.1919e+01,1.4620e+02,7.6200e+01,-3.3009e+01,1.4731e+02,7.6200e+01,-3.4295e+01,1.4819e+02,7.6200e+01,-3.5727e+01,1.4880e+02,7.6200e+01,-3.7250e+01,1.4912e+02,7.6200e+01,-3.8806e+01,1.4913e+02,7.6200e+01,-4.0335e+01,1.4884e+02,7.6200e+01,-4.1778e+01,1.4826e+02,7.6200e+01,-4.3079e+01,1.4741e+02,7.6200e+01,-4.4190e+01,1.4632e+02,7.6200e+01,-4.5066e+01,1.4503e+02,7.6200e+01,-4.5066e+01,1.8948e+02,7.6200e+01,-4.5674e+01,1.8805e+02,7.6200e+01,-4.5992e+01,1.8652e+02,7.6200e+01,-4.6006e+01,1.8497e+02,7.6200e+01,-4.5716e+01,1.8344e+02,7.6200e+01,-4.5134e+01,1.8200e+02,7.6200e+01,-4.4281e+01,1.8069e+02,7.6200e+01,-4.3191e+01,1.7958e+02,7.6200e+01,-4.1905e+01,1.7871e+02,7.6200e+01,-4.0473e+01,1.7810e+02,7.6200e+01,-3.8950e+01,1.7778e+02,7.6200e+01,-3.7394e+01,1.7777e+02,7.6200e+01,-3.5865e+01,1.7806e+02,7.6200e+01,-3.4422e+01,1.7864e+02,7.6200e+01,-3.3121e+01,1.7949e+02,7.6200e+01,-3.2010e+01,1.8058e+02,7.6200e+01,-3.1134e+01,1.8187e+02,7.6200e+01,-3.0526e+01,1.8330e+02,7.6200e+01,-3.0208e+01,1.8482e+02,7.6200e+01,-3.0194e+01,1.8638e+02,7.6200e+01,-3.0484e+01,1.8791e+02,7.6200e+01,-3.1066e+01,1.8935e+02,7.6200e+01,-3.1919e+01,1.9065e+02,7.6200e+01,-3.3009e+01,1.9176e+02,7.6200e+01,-3.4295e+01,1.9264e+02,7.6200e+01,-3.5727e+01,1.9325e+02,7.6200e+01,-3.7250e+01,1.9357e+02,7.6200e+01,-3.8806e+01,1.9358e+02,7.6200e+01,-4.0335e+01,1.9329e+02,7.6200e+01,-4.1778e+01,1.9271e+02,7.6200e+01,-4.3079e+01,1.9186e+02,7.6200e+01,-4.4190e+01,1.9077e+02,7.6200e+01,-4.5066e+01,1.8948e+02,7.6200e+01,-4.5066e+01,2.3393e+02,7.6200e+01,-4.5674e+01,2.3250e+02,7.6200e+01,-4.5992e+01,2.3097e+02,7.6200e+01,-4.6006e+01,2.2942e+02,7.6200e+01,-4.5716e+01,2.2789e+02,7.6200e+01,-4.5134e+01,2.2645e+02,7.6200e+01,-4.4281e+01,2.2514e+02,7.6200e+01,-4.3191e+01,2.2403e+02,7.6200e+01,-4.1905e+01,2.2316e+02,7.6200e+01,-4.0473e+01,2.2255e+02,7.6200e+01,-3.8950e+01,2.2223e+02,7.6200e+01,-3.7394e+01,2.2222e+02,7.6200e+01,-3.5865e+01,2.2251e+02,7.6200e+01,-3.4422e+01,2.2309e+02,7.6200e+01,-3.3121e+01,2.2394e+02,7.6200e+01,-3.2010e+01,2.2503e+02,7.6200e+01,-3.1134e+01,2.2632e+02,7.6200e+01,-3.0526e+01,2.2775e+02,7.6200e+01,-3.0208e+01,2.2927e+02,7.6200e+01,-3.0194e+01,2.3083e+02,7.6200e+01,-3.0484e+01,2.3236e+02,7.6200e+01,-3.1066e+01,2.3380e+02,7.6200e+01,-3.1919e+01,2.3510e+02,7.6200e+01,-3.3009e+01,2.3621e+02,7.6200e+01,-3.4295e+01,2.3709e+02,7.6200e+01,-3.5727e+01,2.3770e+02,7.6200e+01,-3.7250e+01,2.3802e+02,7.6200e+01,-3.8806e+01,2.3803e+02,7.6200e+01,-4.0335e+01,2.3774e+02,7.6200e+01,-4.1778e+01,2.3716e+02,7.6200e+01,-4.3079e+01,2.3631e+02,7.6200e+01,-4.4190e+01,2.3522e+02,7.6200e+01,-4.5066e+01,2.3393e+02,7.6200e+01};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_273_index_1()
		{
			int[] value = {135,264,265,135,265,266,135,266,267,135,267,268,135,268,269,135,269,270,135,270,271,135,271,272,249,250,232,248,249,232,247,248,232,246,247,232,245,246,232,244,245,232,275,244,232,275,232,233,274,275,233,274,233,234,274,234,235,274,235,236,274,236,237,274,237,238,274,238,239,273,274,239,273,239,240,216,217,199,215,216,199,214,215,199,213,214,199,212,213,199,211,212,199,242,211,199,242,199,200,241,242,200,241,200,201,241,201,202,241,202,203,241,203,204,241,204,205,241,205,206,240,241,206,240,206,207,183,184,166,182,183,166,181,182,166,180,181,166,179,180,166,178,179,166,209,178,166,209,166,167,208,209,167,208,167,168,208,168,169,208,169,170,208,170,171,208,171,172,208,172,173,207,208,173,207,173,174,240,207,174,273,240,174,146,147,3,145,146,3,176,145,3,175,176,3,174,175,3,273,174,3,273,3,4,273,4,5,272,273,5,272,5,6,272,6,7,7,8,9,9,10,11,9,11,0,0,89,90,0,90,91,0,91,92,0,92,93,9,0,93,9,93,94,9,94,95,9,95,96,9,96,97,9,97,98,9,98,99,9,99,100,9,100,101,9,101,102,9,102,103,9,103,104,9,104,105,9,105,106,9,106,107,9,107,108,9,108,109,9,109,110,111,112,77,110,111,77,9,110,77,9,77,78,9,78,45,9,45,46,9,46,47,9,47,48,9,48,49,9,49,50,9,50,51,9,51,52,9,52,53,9,53,54,9,54,55,9,55,56,9,56,57,76,77,112,75,76,112,74,75,112,73,74,112,72,73,112,71,72,112,70,71,112,70,112,79,70,79,80,70,80,81,69,70,81,69,81,82,69,82,83,69,83,84,69,84,85,69,85,86,88,89,0,87,88,0,86,87,0,69,86,0,68,69,0,67,68,0,67,0,1,67,1,2,66,67,2,65,66,2,64,65,2,63,64,2,62,63,2,61,62,2,61,2,3,3,147,148,3,148,149,3,149,150,3,150,151,3,151,152,3,152,153,61,3,153,61,153,154,61,154,155,61,155,156,60,61,156,59,60,156,58,59,156,57,58,156,9,57,156,9,156,157,9,157,158,9,158,159,9,159,160,9,160,161,9,161,162,9,162,163,9,163,164,9,164,165,9,165,166,166,184,185,166,185,186,166,186,187,166,187,188,166,188,189,9,166,189,9,189,190,9,190,191,9,191,192,9,192,193,9,193,194,9,194,195,9,195,196,9,196,197,9,197,198,9,198,199,199,217,218,199,218,219,199,219,220,199,220,221,199,221,222,199,222,223,231,232,250,230,231,250,229,230,250,228,229,250,227,228,250,226,227,250,225,226,250,225,250,251,225,251,252,225,252,253,225,253,254,225,254,255,225,255,256,224,225,256,224,256,257,263,264,135,262,263,135,261,262,135,260,261,135,259,260,135,258,259,135,257,258,135,224,257,135,224,135,136,224,136,137,224,137,138,224,138,139,223,224,139,199,223,139,199,139,140,199,140,141,199,141,142,199,142,143,113,114,29,144,113,29,143,144,29,199,143,29,199,29,30,199,30,31,199,31,32,199,32,33,199,33,34,199,34,35,199,35,36,199,36,37,199,37,38,199,38,39,199,39,40,199,40,41,9,199,41,9,41,42,9,42,43,9,43,12,9,12,13,9,13,14,9,14,15,9,15,16,9,16,17,9,17,18,9,18,19,7,9,19,7,19,20,7,20,21,7,21,22,7,22,23,7,23,24,7,24,25,7,25,26,7,26,27,7,27,28,7,28,29,29,114,115,29,115,116,7,29,116,7,116,117,7,117,118,7,118,119,7,119,120,7,120,121,7,121,122,7,122,123,7,123,124,7,124,125,7,125,126,7,126,127,272,7,127,272,127,128,272,128,129,272,129,130,272,130,131,272,131,132,272,132,133,272,133,134,135,272,134};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_273_point_1()
		{
			double[] value = {-2.3241e+02,5.9990e+01,7.8108e+01,-2.3241e+02,5.8087e+01,7.8108e+01,-8.8900e+00,5.8087e+01,7.8108e+01,-8.8900e+00,5.9990e+01,7.8108e+01,1.0509e-14,5.9990e+01,7.8108e+01,1.0509e-14,4.2546e+02,7.8108e+01,-8.8900e+00,4.2546e+02,7.8108e+01,-8.8900e+00,4.2639e+02,7.8108e+01,-2.3241e+02,4.2639e+02,7.8108e+01,-2.3241e+02,4.2546e+02,7.8108e+01,-2.4130e+02,4.2546e+02,7.8108e+01,-2.4130e+02,5.9990e+01,7.8108e+01,-1.7732e+02,3.5692e+02,7.8108e+01,-1.7683e+02,3.6188e+02,7.8108e+01,-1.7538e+02,3.6664e+02,7.8108e+01,-1.7304e+02,3.7103e+02,7.8108e+01,-1.6988e+02,3.7488e+02,7.8108e+01,-1.6603e+02,3.7804e+02,7.8108e+01,-1.6164e+02,3.8039e+02,7.8108e+01,-1.5687e+02,3.8183e+02,7.8108e+01,-1.5192e+02,3.8232e+02,7.8108e+01,-1.4696e+02,3.8183e+02,7.8108e+01,-1.4220e+02,3.8039e+02,7.8108e+01,-1.3781e+02,3.7804e+02,7.8108e+01,-1.3396e+02,3.7488e+02,7.8108e+01,-1.3080e+02,3.7103e+02,7.8108e+01,-1.2845e+02,3.6664e+02,7.8108e+01,-1.2701e+02,3.6188e+02,7.8108e+01,-1.2652e+02,3.5692e+02,7.8108e+01,-1.2701e+02,3.5197e+02,7.8108e+01,-1.2845e+02,3.4720e+02,7.8108e+01,-1.3080e+02,3.4281e+02,7.8108e+01,-1.3396e+02,3.3896e+02,7.8108e+01,-1.3781e+02,3.3580e+02,7.8108e+01,-1.4220e+02,3.3345e+02,7.8108e+01,-1.4696e+02,3.3201e+02,7.8108e+01,-1.5192e+02,3.3152e+02,7.8108e+01,-1.5687e+02,3.3201e+02,7.8108e+01,-1.6164e+02,3.3345e+02,7.8108e+01,-1.6603e+02,3.3580e+02,7.8108e+01,-1.6988e+02,3.3896e+02,7.8108e+01,-1.7304e+02,3.4281e+02,7.8108e+01,-1.7538e+02,3.4720e+02,7.8108e+01,-1.7683e+02,3.5197e+02,7.8108e+01,-1.7732e+02,3.5692e+02,7.8108e+01,-1.3586e+02,2.1283e+02,7.8108e+01,-1.3532e+02,2.1462e+02,7.8108e+01,-1.3444e+02,2.1626e+02,7.8108e+01,-1.3325e+02,2.1771e+02,7.8108e+01,-1.3181e+02,2.1889e+02,7.8108e+01,-1.3016e+02,2.1977e+02,7.8108e+01,-1.2838e+02,2.2031e+02,7.8108e+01,-1.2652e+02,2.2050e+02,7.8108e+01,-1.2466e+02,2.2031e+02,7.8108e+01,-1.2287e+02,2.1977e+02,7.8108e+01,-1.2123e+02,2.1889e+02,7.8108e+01,-1.1978e+02,2.1771e+02,7.8108e+01,-1.1860e+02,2.1626e+02,7.8108e+01,-1.1772e+02,2.1462e+02,7.8108e+01,-1.1718e+02,2.1283e+02,7.8108e+01,-1.1699e+02,2.1097e+02,7.8108e+01,-1.1699e+02,1.2207e+02,7.8108e+01,-1.1718e+02,1.2021e+02,7.8108e+01,-1.1772e+02,1.1843e+02,7.8108e+01,-1.1860e+02,1.1678e+02,7.8108e+01,-1.1978e+02,1.1534e+02,7.8108e+01,-1.2123e+02,1.1415e+02,7.8108e+01,-1.2287e+02,1.1327e+02,7.8108e+01,-1.2466e+02,1.1273e+02,7.8108e+01,-1.2652e+02,1.1255e+02,7.8108e+01,-1.2838e+02,1.1273e+02,7.8108e+01,-1.3016e+02,1.1327e+02,7.8108e+01,-1.3181e+02,1.1415e+02,7.8108e+01,-1.3325e+02,1.1534e+02,7.8108e+01,-1.3444e+02,1.1678e+02,7.8108e+01,-1.3532e+02,1.1843e+02,7.8108e+01,-1.3586e+02,1.2021e+02,7.8108e+01,-1.3604e+02,1.2207e+02,7.8108e+01,-1.3604e+02,2.1097e+02,7.8108e+01,-1.8068e+02,1.2021e+02,7.8108e+01,-1.8122e+02,1.1843e+02,7.8108e+01,-1.8210e+02,1.1678e+02,7.8108e+01,-1.8328e+02,1.1534e+02,7.8108e+01,-1.8473e+02,1.1415e+02,7.8108e+01,-1.8637e+02,1.1327e+02,7.8108e+01,-1.8816e+02,1.1273e+02,7.8108e+01,-1.9002e+02,1.1255e+02,7.8108e+01,-1.9188e+02,1.1273e+02,7.8108e+01,-1.9366e+02,1.1327e+02,7.8108e+01,-1.9531e+02,1.1415e+02,7.8108e+01,-1.9675e+02,1.1534e+02,7.8108e+01,-1.9794e+02,1.1678e+02,7.8108e+01,-1.9882e+02,1.1843e+02,7.8108e+01,-1.9936e+02,1.2021e+02,7.8108e+01,-1.9954e+02,1.2207e+02,7.8108e+01,-1.9954e+02,2.1097e+02,7.8108e+01,-1.9936e+02,2.1283e+02,7.8108e+01,-1.9882e+02,2.1462e+02,7.8108e+01,-1.9794e+02,2.1626e+02,7.8108e+01,-1.9675e+02,2.1771e+02,7.8108e+01};
			return value;
		}
		private double[] getCoordinate_7_273_point_2()
		{
			double[] value = {-1.9531e+02,2.1889e+02,7.8108e+01,-1.9366e+02,2.1977e+02,7.8108e+01,-1.9188e+02,2.2031e+02,7.8108e+01,-1.9002e+02,2.2050e+02,7.8108e+01,-1.8816e+02,2.2031e+02,7.8108e+01,-1.8637e+02,2.1977e+02,7.8108e+01,-1.8473e+02,2.1889e+02,7.8108e+01,-1.8328e+02,2.1771e+02,7.8108e+01,-1.8210e+02,2.1626e+02,7.8108e+01,-1.8122e+02,2.1462e+02,7.8108e+01,-1.8068e+02,2.1283e+02,7.8108e+01,-1.8049e+02,2.1097e+02,7.8108e+01,-1.8049e+02,1.2207e+02,7.8108e+01,-8.1701e+01,3.3524e+02,7.8108e+01,-8.0617e+01,3.3881e+02,7.8108e+01,-7.8857e+01,3.4210e+02,7.8108e+01,-7.6488e+01,3.4499e+02,7.8108e+01,-7.3601e+01,3.4736e+02,7.8108e+01,-7.0308e+01,3.4912e+02,7.8108e+01,-6.6734e+01,3.5020e+02,7.8108e+01,-6.3017e+01,3.5057e+02,7.8108e+01,-5.9301e+01,3.5020e+02,7.8108e+01,-5.5727e+01,3.4912e+02,7.8108e+01,-5.2434e+01,3.4736e+02,7.8108e+01,-4.9547e+01,3.4499e+02,7.8108e+01,-4.7178e+01,3.4210e+02,7.8108e+01,-4.5417e+01,3.3881e+02,7.8108e+01,-4.4333e+01,3.3524e+02,7.8108e+01,-4.3967e+01,3.3152e+02,7.8108e+01,-4.4333e+01,3.2780e+02,7.8108e+01,-4.5417e+01,3.2423e+02,7.8108e+01,-4.7178e+01,3.2094e+02,7.8108e+01,-4.9547e+01,3.1805e+02,7.8108e+01,-5.2434e+01,3.1568e+02,7.8108e+01,-5.5727e+01,3.1392e+02,7.8108e+01,-5.9301e+01,3.1284e+02,7.8108e+01,-6.3017e+01,3.1247e+02,7.8108e+01,-6.6734e+01,3.1284e+02,7.8108e+01,-7.0308e+01,3.1392e+02,7.8108e+01,-7.3601e+01,3.1568e+02,7.8108e+01,-7.6488e+01,3.1805e+02,7.8108e+01,-7.8857e+01,3.2094e+02,7.8108e+01,-8.0617e+01,3.2423e+02,7.8108e+01,-8.1701e+01,3.2780e+02,7.8108e+01,-8.2067e+01,3.3152e+02,7.8108e+01,-3.1134e+01,9.2969e+01,7.8108e+01,-3.2010e+01,9.1683e+01,7.8108e+01,-3.3121e+01,9.0593e+01,7.8108e+01,-3.4422e+01,8.9740e+01,7.8108e+01,-3.5865e+01,8.9158e+01,7.8108e+01,-3.7394e+01,8.8868e+01,7.8108e+01,-3.8950e+01,8.8882e+01,7.8108e+01,-4.0473e+01,8.9200e+01,7.8108e+01,-4.1905e+01,8.9808e+01,7.8108e+01,-4.3191e+01,9.0684e+01,7.8108e+01,-4.4282e+01,9.1795e+01,7.8108e+01,-4.5134e+01,9.3096e+01,7.8108e+01,-4.5716e+01,9.4539e+01,7.8108e+01,-4.6006e+01,9.6068e+01,7.8108e+01,-4.5992e+01,9.7624e+01,7.8108e+01,-4.5674e+01,9.9147e+01,7.8108e+01,-4.5066e+01,1.0058e+02,7.8108e+01,-4.4190e+01,1.0187e+02,7.8108e+01,-4.3079e+01,1.0296e+02,7.8108e+01,-4.1778e+01,1.0381e+02,7.8108e+01,-4.0335e+01,1.0439e+02,7.8108e+01,-3.8806e+01,1.0468e+02,7.8108e+01,-3.7250e+01,1.0467e+02,7.8108e+01,-3.5727e+01,1.0435e+02,7.8108e+01,-3.4295e+01,1.0374e+02,7.8108e+01,-3.3009e+01,1.0286e+02,7.8108e+01,-3.1918e+01,1.0175e+02,7.8108e+01,-3.1066e+01,1.0045e+02,7.8108e+01,-3.0484e+01,9.9009e+01,7.8108e+01,-3.0194e+01,9.7480e+01,7.8108e+01,-3.0208e+01,9.5924e+01,7.8108e+01,-3.0526e+01,9.4401e+01,7.8108e+01,-3.1134e+01,9.2969e+01,7.8108e+01,-3.1134e+01,1.3742e+02,7.8108e+01,-3.2010e+01,1.3613e+02,7.8108e+01,-3.3121e+01,1.3504e+02,7.8108e+01,-3.4422e+01,1.3419e+02,7.8108e+01,-3.5865e+01,1.3361e+02,7.8108e+01,-3.7394e+01,1.3332e+02,7.8108e+01,-3.8950e+01,1.3333e+02,7.8108e+01,-4.0473e+01,1.3365e+02,7.8108e+01,-4.1905e+01,1.3426e+02,7.8108e+01,-4.3191e+01,1.3513e+02,7.8108e+01,-4.4282e+01,1.3624e+02,7.8108e+01,-4.5134e+01,1.3755e+02,7.8108e+01,-4.5716e+01,1.3899e+02,7.8108e+01,-4.6006e+01,1.4052e+02,7.8108e+01,-4.5992e+01,1.4207e+02,7.8108e+01,-4.5674e+01,1.4360e+02,7.8108e+01,-4.5066e+01,1.4503e+02,7.8108e+01,-4.4190e+01,1.4632e+02,7.8108e+01,-4.3079e+01,1.4741e+02,7.8108e+01,-4.1778e+01,1.4826e+02,7.8108e+01,-4.0335e+01,1.4884e+02,7.8108e+01,-3.8806e+01,1.4913e+02,7.8108e+01};
			return value;
		}
		private double[] getCoordinate_7_273_point_3()
		{
			double[] value = {-3.7250e+01,1.4912e+02,7.8108e+01,-3.5727e+01,1.4880e+02,7.8108e+01,-3.4295e+01,1.4819e+02,7.8108e+01,-3.3009e+01,1.4731e+02,7.8108e+01,-3.1918e+01,1.4620e+02,7.8108e+01,-3.1066e+01,1.4490e+02,7.8108e+01,-3.0484e+01,1.4346e+02,7.8108e+01,-3.0194e+01,1.4193e+02,7.8108e+01,-3.0208e+01,1.4037e+02,7.8108e+01,-3.0526e+01,1.3885e+02,7.8108e+01,-3.1134e+01,1.3742e+02,7.8108e+01,-3.1134e+01,1.8187e+02,7.8108e+01,-3.2010e+01,1.8058e+02,7.8108e+01,-3.3121e+01,1.7949e+02,7.8108e+01,-3.4422e+01,1.7864e+02,7.8108e+01,-3.5865e+01,1.7806e+02,7.8108e+01,-3.7394e+01,1.7777e+02,7.8108e+01,-3.8950e+01,1.7778e+02,7.8108e+01,-4.0473e+01,1.7810e+02,7.8108e+01,-4.1905e+01,1.7871e+02,7.8108e+01,-4.3191e+01,1.7958e+02,7.8108e+01,-4.4282e+01,1.8069e+02,7.8108e+01,-4.5134e+01,1.8200e+02,7.8108e+01,-4.5716e+01,1.8344e+02,7.8108e+01,-4.6006e+01,1.8497e+02,7.8108e+01,-4.5992e+01,1.8652e+02,7.8108e+01,-4.5674e+01,1.8805e+02,7.8108e+01,-4.5066e+01,1.8948e+02,7.8108e+01,-4.4190e+01,1.9077e+02,7.8108e+01,-4.3079e+01,1.9186e+02,7.8108e+01,-4.1778e+01,1.9271e+02,7.8108e+01,-4.0335e+01,1.9329e+02,7.8108e+01,-3.8806e+01,1.9358e+02,7.8108e+01,-3.7250e+01,1.9357e+02,7.8108e+01,-3.5727e+01,1.9325e+02,7.8108e+01,-3.4295e+01,1.9264e+02,7.8108e+01,-3.3009e+01,1.9176e+02,7.8108e+01,-3.1918e+01,1.9065e+02,7.8108e+01,-3.1066e+01,1.8935e+02,7.8108e+01,-3.0484e+01,1.8791e+02,7.8108e+01,-3.0194e+01,1.8638e+02,7.8108e+01,-3.0208e+01,1.8482e+02,7.8108e+01,-3.0526e+01,1.8330e+02,7.8108e+01,-3.1134e+01,1.8187e+02,7.8108e+01,-3.1134e+01,2.2632e+02,7.8108e+01,-3.2010e+01,2.2503e+02,7.8108e+01,-3.3121e+01,2.2394e+02,7.8108e+01,-3.4422e+01,2.2309e+02,7.8108e+01,-3.5865e+01,2.2251e+02,7.8108e+01,-3.7394e+01,2.2222e+02,7.8108e+01,-3.8950e+01,2.2223e+02,7.8108e+01,-4.0473e+01,2.2255e+02,7.8108e+01,-4.1905e+01,2.2316e+02,7.8108e+01,-4.3191e+01,2.2403e+02,7.8108e+01,-4.4282e+01,2.2514e+02,7.8108e+01,-4.5134e+01,2.2645e+02,7.8108e+01,-4.5716e+01,2.2789e+02,7.8108e+01,-4.6006e+01,2.2942e+02,7.8108e+01,-4.5992e+01,2.3097e+02,7.8108e+01,-4.5674e+01,2.3250e+02,7.8108e+01,-4.5066e+01,2.3393e+02,7.8108e+01,-4.4190e+01,2.3522e+02,7.8108e+01,-4.3079e+01,2.3631e+02,7.8108e+01,-4.1778e+01,2.3716e+02,7.8108e+01,-4.0335e+01,2.3774e+02,7.8108e+01,-3.8806e+01,2.3803e+02,7.8108e+01,-3.7250e+01,2.3802e+02,7.8108e+01,-3.5727e+01,2.3770e+02,7.8108e+01,-3.4295e+01,2.3709e+02,7.8108e+01,-3.3009e+01,2.3621e+02,7.8108e+01,-3.1918e+01,2.3510e+02,7.8108e+01,-3.1066e+01,2.3380e+02,7.8108e+01,-3.0484e+01,2.3236e+02,7.8108e+01,-3.0194e+01,2.3083e+02,7.8108e+01,-3.0208e+01,2.2927e+02,7.8108e+01,-3.0526e+01,2.2775e+02,7.8108e+01,-3.1134e+01,2.2632e+02,7.8108e+01};
			return value;
		}


































		/** Define subarrays using type int[] */
		private int[] getIndexedTriangleSet_6_478_index_1()
		{
			int[] value = {7,103,104,7,104,105,7,105,106,7,106,107,7,107,108,7,108,109,7,109,110,110,111,112,110,112,113,110,113,114,110,114,115,110,115,116,110,116,117,110,117,118,110,118,119,7,110,119,7,119,120,7,120,121,7,121,122,7,122,123,7,123,124,7,124,125,7,125,126,7,126,97,7,97,98,98,8,9,98,9,10,98,10,11,98,11,12,98,12,13,98,13,14,98,14,15,98,15,16,16,17,18,16,18,19,16,19,20,16,20,21,16,21,22,16,22,23,16,23,24,16,24,25,16,25,26,16,26,27,16,27,28,16,28,29,16,29,30,16,30,31,16,31,32,16,32,33,16,33,34,16,34,35,16,35,36,16,36,37,16,37,38,16,38,39,16,39,40,98,16,40,98,40,41,98,41,42,98,42,43,98,43,44,98,44,45,98,45,46,7,98,46,7,46,47,7,47,48,7,48,49,7,49,50,51,52,53,55,56,57,55,57,58,55,58,59,55,59,60,55,60,61,55,61,62,55,62,63,55,63,64,55,64,65,55,65,66,55,66,67,55,67,68,55,68,69,55,69,70,55,70,71,55,71,72,55,72,73,55,73,74,55,74,75,55,75,76,55,76,77,55,77,78,54,55,78,54,78,79,54,79,80,54,80,81,54,81,82,54,82,83,54,83,84,54,84,85,54,85,86,54,86,87,96,97,126,95,96,126,95,126,127,94,95,127,93,94,127,92,93,127,91,92,127,91,127,128,91,128,129,90,91,129,90,129,130,89,90,130,89,130,131,89,131,132,88,89,132,88,132,133,88,133,134,88,134,135,140,141,142,140,142,143,140,143,144,140,144,145,140,145,146,140,146,147,140,147,148,139,140,148,139,148,149,139,149,150,139,150,151,139,151,152,139,152,153,139,153,154,138,139,154,137,138,154,136,137,154,135,136,154,88,135,154,102,103,7,101,102,7,100,101,7,99,100,7,156,99,7,155,156,7,155,7,0,53,155,0,51,53,0,51,0,1,51,1,2,51,2,3,50,51,3,50,3,4,50,4,5,50,5,6,7,50,6};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_478_point_1()
		{
			double[] value = {-8.8900e+00,4.3464e+02,6.9850e+01,-8.8900e+00,4.3464e+02,5.7280e+01,0.0000e+00,4.3464e+02,5.7280e+01,0.0000e+00,4.3464e+02,8.2575e+00,-2.4130e+02,4.3464e+02,8.2575e+00,-2.4130e+02,4.3464e+02,5.7280e+01,-2.3241e+02,4.3464e+02,5.7280e+01,-2.3241e+02,4.3464e+02,6.9850e+01,-2.1375e+02,4.3464e+02,4.2397e+01,-2.1353e+02,4.3464e+02,4.2376e+01,-2.1333e+02,4.3464e+02,4.2314e+01,-2.1314e+02,4.3464e+02,4.2213e+01,-2.1297e+02,4.3464e+02,4.2077e+01,-2.1284e+02,4.3464e+02,4.1911e+01,-2.1274e+02,4.3464e+02,4.1722e+01,-2.1267e+02,4.3464e+02,4.1517e+01,-2.1265e+02,4.3464e+02,4.1304e+01,-2.1265e+02,4.3464e+02,2.6593e+01,-2.1271e+02,4.3464e+02,2.6324e+01,-2.1283e+02,4.3464e+02,2.6072e+01,-2.1299e+02,4.3464e+02,2.5846e+01,-2.1319e+02,4.3464e+02,2.5656e+01,-2.1342e+02,4.3464e+02,2.5508e+01,-2.1368e+02,4.3464e+02,2.5408e+01,-2.1395e+02,4.3464e+02,2.5360e+01,-2.1423e+02,4.3464e+02,2.5366e+01,-2.1449e+02,4.3464e+02,2.5425e+01,-2.1475e+02,4.3464e+02,2.5535e+01,-2.1497e+02,4.3464e+02,2.5692e+01,-2.1517e+02,4.3464e+02,2.5891e+01,-2.1532e+02,4.3464e+02,2.6122e+01,-2.1542e+02,4.3464e+02,2.6379e+01,-2.1547e+02,4.3464e+02,2.6650e+01,-2.1547e+02,4.3464e+02,3.5702e+01,-2.1549e+02,4.3464e+02,3.6614e+01,-2.1570e+02,4.3464e+02,3.7504e+01,-2.1607e+02,4.3464e+02,3.8335e+01,-2.1661e+02,4.3464e+02,3.9073e+01,-2.1728e+02,4.3464e+02,3.9690e+01,-2.1807e+02,4.3464e+02,4.0159e+01,-2.1893e+02,4.3464e+02,4.0463e+01,-2.1983e+02,4.3464e+02,4.0589e+01,-2.2074e+02,4.3464e+02,4.0532e+01,-2.2162e+02,4.3464e+02,4.0294e+01,-2.2244e+02,4.3464e+02,3.9885e+01,-2.2316e+02,4.3464e+02,3.9321e+01,-2.2375e+02,4.3464e+02,3.8625e+01,-2.2419e+02,4.3464e+02,3.7826e+01,-2.2446e+02,4.3464e+02,3.6954e+01,-2.2455e+02,4.3464e+02,3.6046e+01,-2.2455e+02,4.3464e+02,1.0443e+01,-2.2139e+02,4.3464e+02,1.0443e+01,-2.2139e+02,4.3464e+02,1.6852e+01,-2.0955e+02,4.3464e+02,1.6852e+01,-2.0955e+02,4.3464e+02,1.9954e+01,-2.2139e+02,4.3464e+02,1.9954e+01,-2.2139e+02,4.3464e+02,3.5644e+01,-2.2138e+02,4.3464e+02,3.5928e+01,-2.2132e+02,4.3464e+02,3.6205e+01,-2.2121e+02,4.3464e+02,3.6464e+01,-2.2104e+02,4.3464e+02,3.6694e+01,-2.2083e+02,4.3464e+02,3.6886e+01,-2.2059e+02,4.3464e+02,3.7033e+01,-2.2032e+02,4.3464e+02,3.7129e+01,-2.2004e+02,4.3464e+02,3.7169e+01,-2.1976e+02,4.3464e+02,3.7152e+01,-2.1948e+02,4.3464e+02,3.7078e+01,-2.1923e+02,4.3464e+02,3.6952e+01,-2.1901e+02,4.3464e+02,3.6777e+01,-2.1882e+02,4.3464e+02,3.6561e+01,-2.1869e+02,4.3464e+02,3.6313e+01,-2.1860e+02,4.3464e+02,3.6042e+01,-2.1857e+02,4.3464e+02,3.5759e+01,-2.1857e+02,4.3464e+02,2.6133e+01,-2.1834e+02,4.3464e+02,2.5243e+01,-2.1793e+02,4.3464e+02,2.4418e+01,-2.1736e+02,4.3464e+02,2.3693e+01,-2.1666e+02,4.3464e+02,2.3095e+01,-2.1586e+02,4.3464e+02,2.2650e+01,-2.1498e+02,4.3464e+02,2.2376e+01,-2.1406e+02,4.3464e+02,2.2283e+01,-2.1315e+02,4.3464e+02,2.2376e+01,-2.1227e+02,4.3464e+02,2.2650e+01,-2.1146e+02,4.3464e+02,2.3095e+01,-2.1076e+02,4.3464e+02,2.3693e+01,-2.1019e+02,4.3464e+02,2.4418e+01,-2.0979e+02,4.3464e+02,2.5243e+01,-2.0955e+02,4.3464e+02,2.6133e+01,-2.0955e+02,4.3464e+02,4.1333e+01,-2.0963e+02,4.3464e+02,4.2152e+01,-2.0987e+02,4.3464e+02,4.2939e+01,-2.1026e+02,4.3464e+02,4.3664e+01,-2.1078e+02,4.3464e+02,4.4300e+01,-2.1141e+02,4.3464e+02,4.4822e+01,-2.1214e+02,4.3464e+02,4.5210e+01,-2.1293e+02,4.3464e+02,4.5448e+01,-2.1375e+02,4.3464e+02,4.5529e+01,-2.2455e+02,4.3464e+02,4.5529e+01,-2.2455e+02,4.3464e+02,4.2397e+01,-2.2236e+02,4.3464e+02,6.7245e+01};
			return value;
		}
		private double[] getCoordinate_7_478_point_2()
		{
			double[] value = {-2.2298e+02,4.3464e+02,6.7054e+01,-2.2355e+02,4.3464e+02,6.6743e+01,-2.2405e+02,4.3464e+02,6.6325e+01,-2.2445e+02,4.3464e+02,6.5817e+01,-2.2475e+02,4.3464e+02,6.5238e+01,-2.2492e+02,4.3464e+02,6.4612e+01,-2.2497e+02,4.3464e+02,6.3964e+01,-2.2489e+02,4.3464e+02,6.3319e+01,-2.2468e+02,4.3464e+02,6.2704e+01,-2.2436e+02,4.3464e+02,6.2141e+01,-2.2393e+02,4.3464e+02,6.1655e+01,-2.1283e+02,4.3464e+02,5.1390e+01,-2.1277e+02,4.3464e+02,5.1331e+01,-2.1273e+02,4.3464e+02,5.1263e+01,-2.1271e+02,4.3464e+02,5.1189e+01,-2.1269e+02,4.3464e+02,5.1111e+01,-2.1270e+02,4.3464e+02,5.1032e+01,-2.1271e+02,4.3464e+02,5.0955e+01,-2.1275e+02,4.3464e+02,5.0883e+01,-2.1279e+02,4.3464e+02,5.0818e+01,-2.1285e+02,4.3464e+02,5.0763e+01,-2.1291e+02,4.3464e+02,5.0719e+01,-2.1299e+02,4.3464e+02,5.0689e+01,-2.1306e+02,4.3464e+02,5.0673e+01,-2.1314e+02,4.3464e+02,5.0672e+01,-2.2455e+02,4.3464e+02,5.0672e+01,-2.2455e+02,4.3464e+02,4.7540e+01,-2.1307e+02,4.3464e+02,4.7540e+01,-2.1240e+02,4.3464e+02,4.7603e+01,-2.1176e+02,4.3464e+02,4.7790e+01,-2.1117e+02,4.3464e+02,4.8094e+01,-2.1065e+02,4.3464e+02,4.8505e+01,-2.1021e+02,4.3464e+02,4.9007e+01,-2.0987e+02,4.3464e+02,4.9583e+01,-2.0965e+02,4.3464e+02,5.0212e+01,-2.0955e+02,4.3464e+02,5.0871e+01,-2.0958e+02,4.3464e+02,5.1537e+01,-2.0974e+02,4.3464e+02,5.2186e+01,-2.1001e+02,4.3464e+02,5.2794e+01,-2.1039e+02,4.3464e+02,5.3339e+01,-2.1087e+02,4.3464e+02,5.3803e+01,-2.2116e+02,4.3464e+02,6.3270e+01,-2.2123e+02,4.3464e+02,6.3351e+01,-2.2128e+02,4.3464e+02,6.3444e+01,-2.2132e+02,4.3464e+02,6.3546e+01,-2.2133e+02,4.3464e+02,6.3653e+01,-2.2133e+02,4.3464e+02,6.3760e+01,-2.2130e+02,4.3464e+02,6.3864e+01,-2.2125e+02,4.3464e+02,6.3960e+01,-2.2118e+02,4.3464e+02,6.4044e+01,-2.2110e+02,4.3464e+02,6.4113e+01,-2.2100e+02,4.3464e+02,6.4165e+01,-2.2090e+02,4.3464e+02,6.4197e+01,-2.2079e+02,4.3464e+02,6.4208e+01,-2.0955e+02,4.3464e+02,6.4208e+01,-2.0955e+02,4.3464e+02,6.7310e+01,-2.2171e+02,4.3464e+02,6.7310e+01};
			return value;
		}















		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_839_point_1()
		{
			double[] value = {-1.9050e+02,4.8544e+02,0.0000e+00,-1.8926e+02,4.8532e+02,0.0000e+00,-1.8807e+02,4.8496e+02,0.0000e+00,-1.8697e+02,4.8437e+02,0.0000e+00,-1.8601e+02,4.8358e+02,0.0000e+00,-1.8522e+02,4.8262e+02,0.0000e+00,-1.8463e+02,4.8152e+02,0.0000e+00,-1.8427e+02,4.8033e+02,0.0000e+00,-1.8415e+02,4.7909e+02,0.0000e+00,-1.8415e+02,4.6004e+02,0.0000e+00,-1.8403e+02,4.5881e+02,0.0000e+00,-1.8367e+02,4.5761e+02,0.0000e+00,-1.8308e+02,4.5652e+02,0.0000e+00,-1.8229e+02,4.5555e+02,0.0000e+00,-1.8133e+02,4.5476e+02,0.0000e+00,-1.8023e+02,4.5418e+02,0.0000e+00,-1.7904e+02,4.5382e+02,0.0000e+00,-1.7780e+02,4.5369e+02,0.0000e+00,-6.3500e+01,4.5369e+02,0.0000e+00,-6.2261e+01,4.5382e+02,0.0000e+00,-6.1070e+01,4.5418e+02,0.0000e+00,-5.9972e+01,4.5476e+02,0.0000e+00,-5.9010e+01,4.5555e+02,0.0000e+00,-5.8220e+01,4.5652e+02,0.0000e+00,-5.7633e+01,4.5761e+02,0.0000e+00,-5.7272e+01,4.5881e+02,0.0000e+00,-5.7150e+01,4.6004e+02,0.0000e+00,-5.7150e+01,4.7909e+02,0.0000e+00,-5.7028e+01,4.8033e+02,0.0000e+00,-5.6667e+01,4.8152e+02,0.0000e+00,-5.6080e+01,4.8262e+02,0.0000e+00,-5.5290e+01,4.8358e+02,0.0000e+00,-5.4328e+01,4.8437e+02,0.0000e+00,-5.3230e+01,4.8496e+02,0.0000e+00,-5.2039e+01,4.8532e+02,0.0000e+00,-5.0800e+01,4.8544e+02,0.0000e+00,-1.2700e+01,4.8544e+02,0.0000e+00,0.0000e+00,4.7274e+02,0.0000e+00,0.0000e+00,4.4099e+02,0.0000e+00,-2.4130e+02,4.4099e+02,0.0000e+00,-2.4130e+02,4.7274e+02,0.0000e+00,-2.2860e+02,4.8544e+02,0.0000e+00,-2.3932e+01,4.6906e+02,0.0000e+00,-2.4358e+01,4.6806e+02,0.0000e+00,-2.4581e+01,4.6699e+02,0.0000e+00,-2.4591e+01,4.6590e+02,0.0000e+00,-2.4388e+01,4.6483e+02,0.0000e+00,-2.3980e+01,4.6382e+02,0.0000e+00,-2.3382e+01,4.6291e+02,0.0000e+00,-2.2618e+01,4.6213e+02,0.0000e+00,-2.1717e+01,4.6151e+02,0.0000e+00,-2.0713e+01,4.6109e+02,0.0000e+00,-1.9646e+01,4.6086e+02,0.0000e+00,-1.8555e+01,4.6085e+02,0.0000e+00,-1.7484e+01,4.6106e+02,0.0000e+00,-1.6473e+01,4.6147e+02,0.0000e+00,-1.5560e+01,4.6206e+02,0.0000e+00,-1.4782e+01,4.6283e+02,0.0000e+00,-1.4168e+01,4.6373e+02,0.0000e+00,-1.3742e+01,4.6473e+02,0.0000e+00,-1.3519e+01,4.6580e+02,0.0000e+00,-1.3509e+01,4.6689e+02,0.0000e+00,-1.3712e+01,4.6796e+02,0.0000e+00,-1.4120e+01,4.6897e+02,0.0000e+00,-1.4718e+01,4.6988e+02,0.0000e+00,-1.5482e+01,4.7066e+02,0.0000e+00,-1.6383e+01,4.7128e+02,0.0000e+00,-1.7387e+01,4.7170e+02,0.0000e+00,-1.8454e+01,4.7193e+02,0.0000e+00,-1.9545e+01,4.7194e+02,0.0000e+00,-2.0616e+01,4.7173e+02,0.0000e+00,-2.1627e+01,4.7132e+02,0.0000e+00,-2.2539e+01,4.7073e+02,0.0000e+00,-2.3318e+01,4.6996e+02,0.0000e+00,-2.3932e+01,4.6906e+02,0.0000e+00,-2.2713e+02,4.6906e+02,0.0000e+00,-2.2756e+02,4.6806e+02,0.0000e+00,-2.2778e+02,4.6699e+02,0.0000e+00,-2.2779e+02,4.6590e+02,0.0000e+00,-2.2759e+02,4.6483e+02,0.0000e+00,-2.2718e+02,4.6382e+02,0.0000e+00,-2.2658e+02,4.6291e+02,0.0000e+00,-2.2582e+02,4.6213e+02,0.0000e+00,-2.2492e+02,4.6151e+02,0.0000e+00,-2.2391e+02,4.6109e+02,0.0000e+00,-2.2285e+02,4.6086e+02,0.0000e+00,-2.2176e+02,4.6085e+02,0.0000e+00,-2.2068e+02,4.6106e+02,0.0000e+00,-2.1967e+02,4.6147e+02,0.0000e+00,-2.1876e+02,4.6206e+02,0.0000e+00,-2.1798e+02,4.6283e+02,0.0000e+00,-2.1737e+02,4.6373e+02,0.0000e+00,-2.1694e+02,4.6473e+02,0.0000e+00,-2.1672e+02,4.6580e+02,0.0000e+00,-2.1671e+02,4.6689e+02,0.0000e+00,-2.1691e+02,4.6796e+02,0.0000e+00,-2.1732e+02,4.6897e+02,0.0000e+00,-2.1792e+02,4.6988e+02,0.0000e+00,-2.1868e+02,4.7066e+02,0.0000e+00,-2.1958e+02,4.7128e+02,0.0000e+00};
			return value;
		}
		private double[] getCoordinate_7_839_point_2()
		{
			double[] value = {-2.2059e+02,4.7170e+02,0.0000e+00,-2.2165e+02,4.7193e+02,0.0000e+00,-2.2274e+02,4.7194e+02,0.0000e+00,-2.2382e+02,4.7173e+02,0.0000e+00,-2.2483e+02,4.7132e+02,0.0000e+00,-2.2574e+02,4.7073e+02,0.0000e+00,-2.2652e+02,4.6996e+02,0.0000e+00,-2.2713e+02,4.6906e+02,0.0000e+00};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_845_point_1()
		{
			double[] value = {-2.4130e+02,4.7274e+02,1.9075e+00,-2.4130e+02,4.4099e+02,1.9075e+00,0.0000e+00,4.4099e+02,1.9075e+00,0.0000e+00,4.7274e+02,1.9075e+00,-1.2700e+01,4.8544e+02,1.9075e+00,-5.0800e+01,4.8544e+02,1.9075e+00,-5.2039e+01,4.8532e+02,1.9075e+00,-5.3230e+01,4.8496e+02,1.9075e+00,-5.4328e+01,4.8437e+02,1.9075e+00,-5.5290e+01,4.8358e+02,1.9075e+00,-5.6080e+01,4.8262e+02,1.9075e+00,-5.6667e+01,4.8152e+02,1.9075e+00,-5.7028e+01,4.8033e+02,1.9075e+00,-5.7150e+01,4.7909e+02,1.9075e+00,-5.7150e+01,4.6004e+02,1.9075e+00,-5.7272e+01,4.5881e+02,1.9075e+00,-5.7633e+01,4.5761e+02,1.9075e+00,-5.8220e+01,4.5652e+02,1.9075e+00,-5.9010e+01,4.5555e+02,1.9075e+00,-5.9972e+01,4.5476e+02,1.9075e+00,-6.1070e+01,4.5418e+02,1.9075e+00,-6.2261e+01,4.5382e+02,1.9075e+00,-6.3500e+01,4.5369e+02,1.9075e+00,-1.7780e+02,4.5369e+02,1.9075e+00,-1.7904e+02,4.5382e+02,1.9075e+00,-1.8023e+02,4.5418e+02,1.9075e+00,-1.8133e+02,4.5476e+02,1.9075e+00,-1.8229e+02,4.5555e+02,1.9075e+00,-1.8308e+02,4.5652e+02,1.9075e+00,-1.8367e+02,4.5761e+02,1.9075e+00,-1.8403e+02,4.5881e+02,1.9075e+00,-1.8415e+02,4.6004e+02,1.9075e+00,-1.8415e+02,4.7909e+02,1.9075e+00,-1.8427e+02,4.8033e+02,1.9075e+00,-1.8463e+02,4.8152e+02,1.9075e+00,-1.8522e+02,4.8262e+02,1.9075e+00,-1.8601e+02,4.8358e+02,1.9075e+00,-1.8697e+02,4.8437e+02,1.9075e+00,-1.8807e+02,4.8496e+02,1.9075e+00,-1.8926e+02,4.8532e+02,1.9075e+00,-1.9050e+02,4.8544e+02,1.9075e+00,-2.2860e+02,4.8544e+02,1.9075e+00,-1.4168e+01,4.6373e+02,1.9075e+00,-1.4782e+01,4.6283e+02,1.9075e+00,-1.5560e+01,4.6206e+02,1.9075e+00,-1.6473e+01,4.6147e+02,1.9075e+00,-1.7484e+01,4.6106e+02,1.9075e+00,-1.8555e+01,4.6085e+02,1.9075e+00,-1.9646e+01,4.6086e+02,1.9075e+00,-2.0713e+01,4.6109e+02,1.9075e+00,-2.1717e+01,4.6151e+02,1.9075e+00,-2.2618e+01,4.6213e+02,1.9075e+00,-2.3382e+01,4.6291e+02,1.9075e+00,-2.3980e+01,4.6382e+02,1.9075e+00,-2.4388e+01,4.6483e+02,1.9075e+00,-2.4591e+01,4.6590e+02,1.9075e+00,-2.4581e+01,4.6699e+02,1.9075e+00,-2.4358e+01,4.6806e+02,1.9075e+00,-2.3932e+01,4.6906e+02,1.9075e+00,-2.3318e+01,4.6996e+02,1.9075e+00,-2.2540e+01,4.7073e+02,1.9075e+00,-2.1627e+01,4.7132e+02,1.9075e+00,-2.0616e+01,4.7173e+02,1.9075e+00,-1.9545e+01,4.7194e+02,1.9075e+00,-1.8454e+01,4.7193e+02,1.9075e+00,-1.7387e+01,4.7170e+02,1.9075e+00,-1.6383e+01,4.7128e+02,1.9075e+00,-1.5482e+01,4.7066e+02,1.9075e+00,-1.4718e+01,4.6988e+02,1.9075e+00,-1.4120e+01,4.6897e+02,1.9075e+00,-1.3712e+01,4.6796e+02,1.9075e+00,-1.3509e+01,4.6689e+02,1.9075e+00,-1.3519e+01,4.6580e+02,1.9075e+00,-1.3742e+01,4.6473e+02,1.9075e+00,-1.4168e+01,4.6373e+02,1.9075e+00,-2.1737e+02,4.6373e+02,1.9075e+00,-2.1798e+02,4.6283e+02,1.9075e+00,-2.1876e+02,4.6206e+02,1.9075e+00,-2.1967e+02,4.6147e+02,1.9075e+00,-2.2068e+02,4.6106e+02,1.9075e+00,-2.2176e+02,4.6085e+02,1.9075e+00,-2.2285e+02,4.6086e+02,1.9075e+00,-2.2391e+02,4.6109e+02,1.9075e+00,-2.2492e+02,4.6151e+02,1.9075e+00,-2.2582e+02,4.6213e+02,1.9075e+00,-2.2658e+02,4.6291e+02,1.9075e+00,-2.2718e+02,4.6382e+02,1.9075e+00,-2.2759e+02,4.6483e+02,1.9075e+00,-2.2779e+02,4.6590e+02,1.9075e+00,-2.2778e+02,4.6699e+02,1.9075e+00,-2.2756e+02,4.6806e+02,1.9075e+00,-2.2713e+02,4.6906e+02,1.9075e+00,-2.2652e+02,4.6996e+02,1.9075e+00,-2.2574e+02,4.7073e+02,1.9075e+00,-2.2483e+02,4.7132e+02,1.9075e+00,-2.2382e+02,4.7173e+02,1.9075e+00,-2.2274e+02,4.7194e+02,1.9075e+00,-2.2165e+02,4.7193e+02,1.9075e+00,-2.2059e+02,4.7170e+02,1.9075e+00,-2.1958e+02,4.7128e+02,1.9075e+00};
			return value;
		}
		private double[] getCoordinate_7_845_point_2()
		{
			double[] value = {-2.1868e+02,4.7066e+02,1.9075e+00,-2.1792e+02,4.6988e+02,1.9075e+00,-2.1732e+02,4.6897e+02,1.9075e+00,-2.1691e+02,4.6796e+02,1.9075e+00,-2.1671e+02,4.6689e+02,1.9075e+00,-2.1672e+02,4.6580e+02,1.9075e+00,-2.1694e+02,4.6473e+02,1.9075e+00,-2.1737e+02,4.6373e+02,1.9075e+00};
			return value;
		}





















		/** Large attribute array: Coordinate point field, scene-graph level=7, element #43, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_43_point()
		{
			MFVec3f Coordinate_7_43_point = new MFVec3f(new double[] {4.2944e+01,2.2672e+02,1.5088e+02,4.1595e+01,2.2672e+02,1.5223e+02,4.3062e+01,2.2698e+02,1.5100e+02,4.1713e+01,2.2698e+02,1.5235e+02,4.3204e+01,2.2722e+02,1.5114e+02,4.1855e+01,2.2722e+02,1.5249e+02,4.3366e+01,2.2743e+02,1.5130e+02,4.2017e+01,2.2743e+02,1.5265e+02,4.3546e+01,2.2761e+02,1.5148e+02,4.2197e+01,2.2761e+02,1.5283e+02,4.3741e+01,2.2775e+02,1.5168e+02,4.2392e+01,2.2775e+02,1.5303e+02,4.3948e+01,2.2786e+02,1.5189e+02,4.2599e+01,2.2786e+02,1.5324e+02,4.4163e+01,2.2793e+02,1.5210e+02,4.2814e+01,2.2793e+02,1.5345e+02,4.4382e+01,2.2796e+02,1.5232e+02,4.3033e+01,2.2796e+02,1.5367e+02,4.4602e+01,2.2794e+02,1.5254e+02,4.3253e+01,2.2794e+02,1.5389e+02,4.4819e+01,2.2789e+02,1.5276e+02,4.3470e+01,2.2789e+02,1.5411e+02,4.5029e+01,2.2780e+02,1.5297e+02,4.3681e+01,2.2780e+02,1.5432e+02,4.5229e+01,2.2766e+02,1.5317e+02,4.3880e+01,2.2766e+02,1.5452e+02,4.5415e+01,2.2750e+02,1.5335e+02,4.4066e+01,2.2750e+02,1.5470e+02,4.5584e+01,2.2730e+02,1.5352e+02,4.4235e+01,2.2730e+02,1.5487e+02,4.5733e+01,2.2707e+02,1.5367e+02,4.4384e+01,2.2707e+02,1.5502e+02,4.5860e+01,2.2681e+02,1.5380e+02,4.4511e+01,2.2681e+02,1.5515e+02,4.5962e+01,2.2654e+02,1.5390e+02,4.4613e+01,2.2654e+02,1.5525e+02,4.6038e+01,2.2625e+02,1.5398e+02,4.4689e+01,2.2625e+02,1.5533e+02,4.6086e+01,2.2594e+02,1.5402e+02,4.4737e+01,2.2594e+02,1.5537e+02,4.6105e+01,2.2563e+02,1.5404e+02,4.4756e+01,2.2563e+02,1.5539e+02,4.6096e+01,2.2532e+02,1.5403e+02,4.4747e+01,2.2532e+02,1.5538e+02,4.6058e+01,2.2501e+02,1.5400e+02,4.4709e+01,2.2501e+02,1.5535e+02,4.5992e+01,2.2472e+02,1.5393e+02,4.4644e+01,2.2472e+02,1.5528e+02,4.5900e+01,2.2443e+02,1.5384e+02,4.4551e+01,2.2443e+02,1.5519e+02});
			return Coordinate_7_43_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #44, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_44_vector()
		{
			MFVec3f Normal_7_44_vector = new MFVec3f(new double[] {6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01,5.7099e-01,-5.8987e-01,5.7099e-01,5.7099e-01,-5.8987e-01,5.7099e-01,5.1166e-01,-6.9022e-01,5.1166e-01,5.1166e-01,-6.9022e-01,5.1166e-01,4.4358e-01,-7.7877e-01,4.4358e-01,4.4358e-01,-7.7877e-01,4.4358e-01,3.6790e-01,-8.5399e-01,3.6790e-01,3.6790e-01,-8.5399e-01,3.6790e-01,2.8594e-01,-9.1459e-01,2.8594e-01,2.8594e-01,-9.1459e-01,2.8594e-01,1.9908e-01,-9.5955e-01,1.9908e-01,1.9908e-01,-9.5955e-01,1.9908e-01,1.0881e-01,-9.8809e-01,1.0881e-01,1.0881e-01,-9.8809e-01,1.0881e-01,1.6685e-02,-9.9972e-01,1.6685e-02,1.6685e-02,-9.9972e-01,1.6685e-02,-7.5728e-02,-9.9425e-01,-7.5728e-02,-7.5728e-02,-9.9425e-01,-7.5728e-02,-1.6684e-01,-9.7176e-01,-1.6684e-01,-1.6684e-01,-9.7176e-01,-1.6684e-01,-2.5511e-01,-9.3265e-01,-2.5511e-01,-2.5511e-01,-9.3265e-01,-2.5511e-01,-3.3901e-01,-8.7758e-01,-3.3901e-01,-3.3901e-01,-8.7758e-01,-3.3901e-01,-4.1710e-01,-8.0750e-01,-4.1710e-01,-4.1710e-01,-8.0750e-01,-4.1710e-01,-4.8806e-01,-7.2360e-01,-4.8806e-01,-4.8806e-01,-7.2360e-01,-4.8806e-01,-5.5067e-01,-6.2731e-01,-5.5067e-01,-5.5067e-01,-6.2731e-01,-5.5067e-01,-6.0386e-01,-5.2030e-01,-6.0386e-01,-6.0386e-01,-5.2030e-01,-6.0386e-01,-6.4671e-01,-4.0438e-01,-6.4671e-01,-6.4671e-01,-4.0438e-01,-6.4671e-01,-6.7850e-01,-2.8154e-01,-6.7850e-01,-6.7850e-01,-2.8154e-01,-6.7850e-01,-6.9868e-01,-1.5388e-01,-6.9868e-01,-6.9868e-01,-1.5388e-01,-6.9868e-01,-7.0691e-01,-2.3597e-02,-7.0691e-01,-7.0691e-01,-2.3597e-02,-7.0691e-01,-7.0304e-01,1.0710e-01,-7.0304e-01,-7.0304e-01,1.0710e-01,-7.0304e-01,-6.8714e-01,2.3595e-01,-6.8714e-01,-6.8714e-01,2.3595e-01,-6.8714e-01,-6.5948e-01,3.6078e-01,-6.5948e-01,-6.5948e-01,3.6078e-01,-6.5948e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01});
			return Normal_7_44_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #52, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_52_point()
		{
			MFVec3f Coordinate_7_52_point = new MFVec3f(new double[] {4.5900e+01,2.2443e+02,1.5384e+02,4.4551e+01,2.2443e+02,1.5519e+02,4.5787e+01,2.2418e+02,1.5373e+02,4.4438e+01,2.2418e+02,1.5507e+02,4.5652e+01,2.2395e+02,1.5359e+02,4.4304e+01,2.2395e+02,1.5494e+02,4.5499e+01,2.2374e+02,1.5344e+02,4.4150e+01,2.2374e+02,1.5479e+02,4.5328e+01,2.2357e+02,1.5327e+02,4.3979e+01,2.2357e+02,1.5462e+02,4.5143e+01,2.2342e+02,1.5308e+02,4.3794e+01,2.2342e+02,1.5443e+02,4.4947e+01,2.2331e+02,1.5289e+02,4.3598e+01,2.2331e+02,1.5423e+02,4.4742e+01,2.2324e+02,1.5268e+02,4.3393e+01,2.2324e+02,1.5403e+02,4.4532e+01,2.2320e+02,1.5247e+02,4.3183e+01,2.2320e+02,1.5382e+02,4.4321e+01,2.2320e+02,1.5226e+02,4.2972e+01,2.2320e+02,1.5361e+02,4.4111e+01,2.2323e+02,1.5205e+02,4.2762e+01,2.2323e+02,1.5340e+02,4.3906e+01,2.2331e+02,1.5184e+02,4.2557e+01,2.2331e+02,1.5319e+02,4.3709e+01,2.2342e+02,1.5165e+02,4.2360e+01,2.2342e+02,1.5300e+02,4.3524e+01,2.2356e+02,1.5146e+02,4.2175e+01,2.2356e+02,1.5281e+02,4.3352e+01,2.2374e+02,1.5129e+02,4.2003e+01,2.2374e+02,1.5264e+02,4.3198e+01,2.2394e+02,1.5114e+02,4.1849e+01,2.2394e+02,1.5249e+02,4.3062e+01,2.2417e+02,1.5100e+02,4.1714e+01,2.2417e+02,1.5235e+02,4.2949e+01,2.2442e+02,1.5089e+02,4.1600e+01,2.2442e+02,1.5224e+02,4.2858e+01,2.2469e+02,1.5080e+02,4.1509e+01,2.2469e+02,1.5215e+02,4.2792e+01,2.2498e+02,1.5073e+02,4.1443e+01,2.2498e+02,1.5208e+02,4.2752e+01,2.2527e+02,1.5069e+02,4.1403e+01,2.2527e+02,1.5204e+02,4.2738e+01,2.2557e+02,1.5068e+02,4.1389e+01,2.2557e+02,1.5203e+02,4.2751e+01,2.2587e+02,1.5069e+02,4.1402e+01,2.2587e+02,1.5204e+02,4.2790e+01,2.2616e+02,1.5073e+02,4.1441e+01,2.2616e+02,1.5208e+02,4.2855e+01,2.2645e+02,1.5079e+02,4.1506e+01,2.2645e+02,1.5214e+02,4.2944e+01,2.2672e+02,1.5088e+02,4.1595e+01,2.2672e+02,1.5223e+02});
			return Coordinate_7_52_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #53, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_53_vector()
		{
			MFVec3f Normal_7_53_vector = new MFVec3f(new double[] {-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-5.7316e-01,5.8564e-01,-5.7316e-01,-5.7316e-01,5.8564e-01,-5.7316e-01,-5.1674e-01,6.8261e-01,-5.1674e-01,-5.1674e-01,6.8261e-01,-5.1674e-01,-4.5217e-01,7.6882e-01,-4.5217e-01,-4.5217e-01,7.6882e-01,-4.5217e-01,-3.8047e-01,8.4290e-01,-3.8047e-01,-3.8047e-01,8.4290e-01,-3.8047e-01,-3.0277e-01,9.0369e-01,-3.0277e-01,-3.0277e-01,9.0369e-01,-3.0277e-01,-2.2029e-01,9.5023e-01,-2.2029e-01,-2.2029e-01,9.5023e-01,-2.2029e-01,-1.3434e-01,9.8179e-01,-1.3434e-01,-1.3434e-01,9.8179e-01,-1.3434e-01,-4.6273e-02,9.9786e-01,-4.6273e-02,-4.6273e-02,9.9786e-01,-4.6273e-02,4.2526e-02,9.9819e-01,4.2526e-02,4.2526e-02,9.9819e-01,4.2526e-02,1.3065e-01,9.8278e-01,1.3065e-01,1.3065e-01,9.8278e-01,1.3065e-01,2.1672e-01,9.5187e-01,2.1672e-01,2.1672e-01,9.5187e-01,2.1672e-01,2.9937e-01,9.0595e-01,2.9937e-01,2.9937e-01,9.0595e-01,2.9937e-01,3.7730e-01,8.4575e-01,3.7730e-01,3.7730e-01,8.4575e-01,3.7730e-01,4.4928e-01,7.7220e-01,4.4928e-01,4.4928e-01,7.7220e-01,4.4928e-01,5.1417e-01,6.8648e-01,5.1417e-01,5.1417e-01,6.8648e-01,5.1417e-01,5.7096e-01,5.8993e-01,5.7096e-01,5.7096e-01,5.8993e-01,5.7096e-01,6.1874e-01,4.8408e-01,6.1874e-01,6.1874e-01,4.8408e-01,6.1874e-01,6.5676e-01,3.7059e-01,6.5676e-01,6.5676e-01,3.7059e-01,6.5676e-01,6.8442e-01,2.5126e-01,6.8442e-01,6.8442e-01,2.5126e-01,6.8442e-01,7.0129e-01,1.2797e-01,7.0129e-01,7.0129e-01,1.2797e-01,7.0129e-01,7.0710e-01,2.6548e-03,7.0710e-01,7.0710e-01,2.6548e-03,7.0710e-01,7.0176e-01,-1.2270e-01,7.0176e-01,7.0176e-01,-1.2270e-01,7.0176e-01,6.8536e-01,-2.4612e-01,6.8536e-01,6.8536e-01,-2.4612e-01,6.8536e-01,6.5814e-01,-3.6565e-01,6.5814e-01,6.5814e-01,-3.6565e-01,6.5814e-01,6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01});
			return Normal_7_53_vector;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #59, 564 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_59_index()
		{
			MFInt32 IndexedTriangleSet_6_59_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_59_index_1()));
			return IndexedTriangleSet_6_59_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #59, 555 total numbers made up of 185 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_59_point()
		{
			MFVec3f Coordinate_7_59_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_59_point_1()))
				.append(new MFVec3f(getCoordinate_7_59_point_2()));
			return Coordinate_7_59_point;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #65, 564 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_65_index()
		{
			MFInt32 IndexedTriangleSet_6_65_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_65_index_1()));
			return IndexedTriangleSet_6_65_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #65, 555 total numbers made up of 185 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_65_point()
		{
			MFVec3f Coordinate_7_65_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_65_point_1()))
				.append(new MFVec3f(getCoordinate_7_65_point_2()));
			return Coordinate_7_65_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #110, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_110_point()
		{
			MFVec3f Coordinate_7_110_point = new MFVec3f(new double[] {3.0501e+01,2.3110e+02,1.4114e+02,3.1850e+01,2.3110e+02,1.3979e+02,3.1699e+01,2.3121e+02,1.4234e+02,3.3048e+01,2.3121e+02,1.4099e+02,3.2879e+01,2.3152e+02,1.4352e+02,3.4228e+01,2.3152e+02,1.4217e+02,3.4022e+01,2.3205e+02,1.4466e+02,3.5370e+01,2.3205e+02,1.4331e+02,3.5108e+01,2.3277e+02,1.4574e+02,3.6457e+01,2.3277e+02,1.4440e+02,3.6122e+01,2.3368e+02,1.4676e+02,3.7471e+01,2.3368e+02,1.4541e+02,3.7048e+01,2.3477e+02,1.4768e+02,3.8397e+01,2.3477e+02,1.4634e+02,3.7870e+01,2.3600e+02,1.4851e+02,3.9219e+01,2.3600e+02,1.4716e+02,3.8576e+01,2.3738e+02,1.4921e+02,3.9925e+01,2.3738e+02,1.4786e+02,3.9155e+01,2.3887e+02,1.4979e+02,4.0503e+01,2.3887e+02,1.4844e+02,3.9597e+01,2.4045e+02,1.5023e+02,4.0946e+01,2.4045e+02,1.4888e+02,3.9895e+01,2.4209e+02,1.5053e+02,4.1244e+01,2.4209e+02,1.4918e+02,4.0046e+01,2.4378e+02,1.5068e+02,4.1395e+01,2.4378e+02,1.4933e+02,4.0046e+01,2.4547e+02,1.5068e+02,4.1395e+01,2.4547e+02,1.4933e+02,3.9895e+01,2.4716e+02,1.5053e+02,4.1244e+01,2.4716e+02,1.4918e+02,3.9597e+01,2.4880e+02,1.5023e+02,4.0946e+01,2.4880e+02,1.4888e+02,3.9155e+01,2.5038e+02,1.4979e+02,4.0503e+01,2.5038e+02,1.4844e+02,3.8576e+01,2.5187e+02,1.4921e+02,3.9925e+01,2.5187e+02,1.4786e+02,3.7870e+01,2.5325e+02,1.4851e+02,3.9219e+01,2.5325e+02,1.4716e+02,3.7048e+01,2.5448e+02,1.4768e+02,3.8397e+01,2.5448e+02,1.4634e+02,3.6122e+01,2.5557e+02,1.4676e+02,3.7471e+01,2.5557e+02,1.4541e+02,3.5108e+01,2.5648e+02,1.4574e+02,3.6457e+01,2.5648e+02,1.4440e+02,3.4022e+01,2.5720e+02,1.4466e+02,3.5370e+01,2.5720e+02,1.4331e+02,3.2879e+01,2.5773e+02,1.4352e+02,3.4228e+01,2.5773e+02,1.4217e+02,3.1699e+01,2.5804e+02,1.4234e+02,3.3048e+01,2.5804e+02,1.4099e+02,3.0501e+01,2.5815e+02,1.4114e+02,3.1850e+01,2.5815e+02,1.3979e+02});
			return Coordinate_7_110_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #111, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_111_vector()
		{
			MFVec3f Normal_7_111_vector = new MFVec3f(new double[] {1.1090e-08,1.0000e+00,1.1090e-08,1.1090e-08,1.0000e+00,1.1090e-08,-8.8624e-02,9.9211e-01,-8.8624e-02,-8.8624e-02,9.9211e-01,-8.8624e-02,-1.7585e-01,9.6858e-01,-1.7585e-01,-1.7585e-01,9.6858e-01,-1.7585e-01,-2.6030e-01,9.2978e-01,-2.6030e-01,-2.6030e-01,9.2978e-01,-2.6030e-01,-3.4065e-01,8.7631e-01,-3.4065e-01,-3.4065e-01,8.7631e-01,-3.4065e-01,-4.1563e-01,8.0902e-01,-4.1563e-01,-4.1563e-01,8.0902e-01,-4.1563e-01,-4.8405e-01,7.2897e-01,-4.8405e-01,-4.8405e-01,7.2897e-01,-4.8405e-01,-5.4484e-01,6.3742e-01,-5.4484e-01,-5.4484e-01,6.3742e-01,-5.4484e-01,-5.9703e-01,5.3583e-01,-5.9703e-01,-5.9703e-01,5.3583e-01,-5.9703e-01,-6.3981e-01,4.2578e-01,-6.3981e-01,-6.3981e-01,4.2578e-01,-6.3981e-01,-6.7250e-01,3.0902e-01,-6.7250e-01,-6.7250e-01,3.0902e-01,-6.7250e-01,-6.9458e-01,1.8738e-01,-6.9458e-01,-6.9458e-01,1.8738e-01,-6.9458e-01,-7.0571e-01,6.2791e-02,-7.0571e-01,-7.0571e-01,6.2791e-02,-7.0571e-01,-7.0571e-01,-6.2791e-02,-7.0571e-01,-7.0571e-01,-6.2791e-02,-7.0571e-01,-6.9458e-01,-1.8738e-01,-6.9458e-01,-6.9458e-01,-1.8738e-01,-6.9458e-01,-6.7250e-01,-3.0902e-01,-6.7250e-01,-6.7250e-01,-3.0902e-01,-6.7250e-01,-6.3981e-01,-4.2578e-01,-6.3981e-01,-6.3981e-01,-4.2578e-01,-6.3981e-01,-5.9703e-01,-5.3583e-01,-5.9703e-01,-5.9703e-01,-5.3583e-01,-5.9703e-01,-5.4484e-01,-6.3742e-01,-5.4484e-01,-5.4484e-01,-6.3742e-01,-5.4484e-01,-4.8405e-01,-7.2897e-01,-4.8405e-01,-4.8405e-01,-7.2897e-01,-4.8405e-01,-4.1563e-01,-8.0902e-01,-4.1563e-01,-4.1563e-01,-8.0902e-01,-4.1563e-01,-3.4065e-01,-8.7631e-01,-3.4065e-01,-3.4065e-01,-8.7631e-01,-3.4065e-01,-2.6030e-01,-9.2978e-01,-2.6030e-01,-2.6030e-01,-9.2978e-01,-2.6030e-01,-1.7585e-01,-9.6858e-01,-1.7585e-01,-1.7585e-01,-9.6858e-01,-1.7585e-01,-8.8624e-02,-9.9211e-01,-8.8624e-02,-8.8624e-02,-9.9211e-01,-8.8624e-02,1.1090e-08,-1.0000e+00,1.1090e-08,1.1090e-08,-1.0000e+00,1.1090e-08});
			return Normal_7_111_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #117, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_117_point()
		{
			MFVec3f Coordinate_7_117_point = new MFVec3f(new double[] {3.0501e+01,2.5815e+02,1.4114e+02,3.1850e+01,2.5815e+02,1.3979e+02,2.9252e+01,2.5803e+02,1.3989e+02,3.0601e+01,2.5803e+02,1.3854e+02,2.8025e+01,2.5769e+02,1.3866e+02,2.9374e+01,2.5769e+02,1.3731e+02,2.6841e+01,2.5712e+02,1.3748e+02,2.8190e+01,2.5712e+02,1.3613e+02,2.5719e+01,2.5634e+02,1.3636e+02,2.7068e+01,2.5634e+02,1.3501e+02,2.4679e+01,2.5536e+02,1.3531e+02,2.6027e+01,2.5536e+02,1.3397e+02,2.3738e+01,2.5419e+02,1.3437e+02,2.5087e+01,2.5419e+02,1.3303e+02,2.2913e+01,2.5286e+02,1.3355e+02,2.4262e+01,2.5286e+02,1.3220e+02,2.2218e+01,2.5139e+02,1.3285e+02,2.3567e+01,2.5139e+02,1.3151e+02,2.1665e+01,2.4980e+02,1.3230e+02,2.3014e+01,2.4980e+02,1.3095e+02,2.1263e+01,2.4813e+02,1.3190e+02,2.2612e+01,2.4813e+02,1.3055e+02,2.1019e+01,2.4639e+02,1.3165e+02,2.2367e+01,2.4639e+02,1.3031e+02,2.0937e+01,2.4462e+02,1.3157e+02,2.2286e+01,2.4462e+02,1.3022e+02,2.1019e+01,2.4286e+02,1.3165e+02,2.2367e+01,2.4286e+02,1.3031e+02,2.1263e+01,2.4112e+02,1.3190e+02,2.2612e+01,2.4112e+02,1.3055e+02,2.1665e+01,2.3945e+02,1.3230e+02,2.3014e+01,2.3945e+02,1.3095e+02,2.2218e+01,2.3786e+02,1.3285e+02,2.3567e+01,2.3786e+02,1.3151e+02,2.2913e+01,2.3639e+02,1.3355e+02,2.4262e+01,2.3639e+02,1.3220e+02,2.3738e+01,2.3506e+02,1.3437e+02,2.5087e+01,2.3506e+02,1.3303e+02,2.4679e+01,2.3389e+02,1.3531e+02,2.6027e+01,2.3389e+02,1.3397e+02,2.5719e+01,2.3291e+02,1.3636e+02,2.7068e+01,2.3291e+02,1.3501e+02,2.6841e+01,2.3213e+02,1.3748e+02,2.8190e+01,2.3213e+02,1.3613e+02,2.8025e+01,2.3156e+02,1.3866e+02,2.9374e+01,2.3156e+02,1.3731e+02,2.9252e+01,2.3122e+02,1.3989e+02,3.0601e+01,2.3122e+02,1.3854e+02,3.0501e+01,2.3110e+02,1.4114e+02,3.1850e+01,2.3110e+02,1.3979e+02});
			return Coordinate_7_117_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #118, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_118_vector()
		{
			MFVec3f Normal_7_118_vector = new MFVec3f(new double[] {1.1090e-08,-1.0000e+00,1.1090e-08,1.1090e-08,-1.0000e+00,1.1090e-08,9.2296e-02,-9.9144e-01,9.2296e-02,9.2296e-02,-9.9144e-01,9.2296e-02,1.8301e-01,-9.6593e-01,1.8301e-01,1.8301e-01,-9.6593e-01,1.8301e-01,2.7060e-01,-9.2388e-01,2.7060e-01,2.7060e-01,-9.2388e-01,2.7060e-01,3.5355e-01,-8.6603e-01,3.5355e-01,3.5355e-01,-8.6603e-01,3.5355e-01,4.3046e-01,-7.9335e-01,4.3046e-01,4.3046e-01,-7.9335e-01,4.3046e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.0000e-01,-7.0711e-01,5.0000e-01,5.6099e-01,-6.0876e-01,5.6099e-01,5.6099e-01,-6.0876e-01,5.6099e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.1237e-01,-5.0000e-01,6.1237e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.5328e-01,-3.8268e-01,6.5328e-01,6.8301e-01,-2.5882e-01,6.8301e-01,6.8301e-01,-2.5882e-01,6.8301e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0106e-01,-1.3053e-01,7.0106e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0106e-01,1.3053e-01,7.0106e-01,7.0106e-01,1.3053e-01,7.0106e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.8301e-01,2.5882e-01,6.8301e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.5328e-01,3.8268e-01,6.5328e-01,6.1237e-01,5.0000e-01,6.1237e-01,6.1237e-01,5.0000e-01,6.1237e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.6099e-01,6.0876e-01,5.6099e-01,5.0000e-01,7.0711e-01,5.0000e-01,5.0000e-01,7.0711e-01,5.0000e-01,4.3046e-01,7.9335e-01,4.3046e-01,4.3046e-01,7.9335e-01,4.3046e-01,3.5355e-01,8.6603e-01,3.5355e-01,3.5355e-01,8.6603e-01,3.5355e-01,2.7060e-01,9.2388e-01,2.7060e-01,2.7060e-01,9.2388e-01,2.7060e-01,1.8301e-01,9.6593e-01,1.8301e-01,1.8301e-01,9.6593e-01,1.8301e-01,9.2296e-02,9.9144e-01,9.2296e-02,9.2296e-02,9.9144e-01,9.2296e-02,1.1090e-08,1.0000e+00,1.1090e-08,1.1090e-08,1.0000e+00,1.1090e-08});
			return Normal_7_118_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #124, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_124_point()
		{
			MFVec3f Coordinate_7_124_point = new MFVec3f(new double[] {4.5900e+01,2.6253e+02,1.5384e+02,4.4551e+01,2.6253e+02,1.5519e+02,4.5787e+01,2.6228e+02,1.5373e+02,4.4438e+01,2.6228e+02,1.5507e+02,4.5652e+01,2.6205e+02,1.5359e+02,4.4304e+01,2.6205e+02,1.5494e+02,4.5499e+01,2.6184e+02,1.5344e+02,4.4150e+01,2.6184e+02,1.5479e+02,4.5328e+01,2.6167e+02,1.5327e+02,4.3979e+01,2.6167e+02,1.5462e+02,4.5143e+01,2.6152e+02,1.5308e+02,4.3794e+01,2.6152e+02,1.5443e+02,4.4947e+01,2.6141e+02,1.5289e+02,4.3598e+01,2.6141e+02,1.5423e+02,4.4742e+01,2.6134e+02,1.5268e+02,4.3393e+01,2.6134e+02,1.5403e+02,4.4532e+01,2.6130e+02,1.5247e+02,4.3183e+01,2.6130e+02,1.5382e+02,4.4321e+01,2.6130e+02,1.5226e+02,4.2972e+01,2.6130e+02,1.5361e+02,4.4111e+01,2.6133e+02,1.5205e+02,4.2762e+01,2.6133e+02,1.5340e+02,4.3906e+01,2.6141e+02,1.5184e+02,4.2557e+01,2.6141e+02,1.5319e+02,4.3709e+01,2.6152e+02,1.5165e+02,4.2360e+01,2.6152e+02,1.5300e+02,4.3524e+01,2.6166e+02,1.5146e+02,4.2175e+01,2.6166e+02,1.5281e+02,4.3352e+01,2.6184e+02,1.5129e+02,4.2003e+01,2.6184e+02,1.5264e+02,4.3198e+01,2.6204e+02,1.5114e+02,4.1849e+01,2.6204e+02,1.5249e+02,4.3062e+01,2.6227e+02,1.5100e+02,4.1714e+01,2.6227e+02,1.5235e+02,4.2949e+01,2.6252e+02,1.5089e+02,4.1600e+01,2.6252e+02,1.5224e+02,4.2858e+01,2.6279e+02,1.5080e+02,4.1509e+01,2.6279e+02,1.5215e+02,4.2792e+01,2.6308e+02,1.5073e+02,4.1443e+01,2.6308e+02,1.5208e+02,4.2752e+01,2.6337e+02,1.5069e+02,4.1403e+01,2.6337e+02,1.5204e+02,4.2738e+01,2.6367e+02,1.5068e+02,4.1389e+01,2.6367e+02,1.5203e+02,4.2751e+01,2.6397e+02,1.5069e+02,4.1402e+01,2.6397e+02,1.5204e+02,4.2790e+01,2.6426e+02,1.5073e+02,4.1441e+01,2.6426e+02,1.5208e+02,4.2855e+01,2.6455e+02,1.5079e+02,4.1506e+01,2.6455e+02,1.5214e+02,4.2944e+01,2.6482e+02,1.5088e+02,4.1595e+01,2.6482e+02,1.5223e+02});
			return Coordinate_7_124_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #125, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_125_vector()
		{
			MFVec3f Normal_7_125_vector = new MFVec3f(new double[] {-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-5.7316e-01,5.8564e-01,-5.7316e-01,-5.7316e-01,5.8564e-01,-5.7316e-01,-5.1674e-01,6.8261e-01,-5.1674e-01,-5.1674e-01,6.8261e-01,-5.1674e-01,-4.5217e-01,7.6882e-01,-4.5217e-01,-4.5217e-01,7.6882e-01,-4.5217e-01,-3.8047e-01,8.4290e-01,-3.8047e-01,-3.8047e-01,8.4290e-01,-3.8047e-01,-3.0277e-01,9.0369e-01,-3.0277e-01,-3.0277e-01,9.0369e-01,-3.0277e-01,-2.2029e-01,9.5023e-01,-2.2029e-01,-2.2029e-01,9.5023e-01,-2.2029e-01,-1.3434e-01,9.8179e-01,-1.3434e-01,-1.3434e-01,9.8179e-01,-1.3434e-01,-4.6273e-02,9.9786e-01,-4.6273e-02,-4.6273e-02,9.9786e-01,-4.6273e-02,4.2526e-02,9.9819e-01,4.2526e-02,4.2526e-02,9.9819e-01,4.2526e-02,1.3065e-01,9.8278e-01,1.3065e-01,1.3065e-01,9.8278e-01,1.3065e-01,2.1672e-01,9.5187e-01,2.1672e-01,2.1672e-01,9.5187e-01,2.1672e-01,2.9937e-01,9.0595e-01,2.9937e-01,2.9937e-01,9.0595e-01,2.9937e-01,3.7730e-01,8.4575e-01,3.7730e-01,3.7730e-01,8.4575e-01,3.7730e-01,4.4928e-01,7.7220e-01,4.4928e-01,4.4928e-01,7.7220e-01,4.4928e-01,5.1417e-01,6.8648e-01,5.1417e-01,5.1417e-01,6.8648e-01,5.1417e-01,5.7096e-01,5.8993e-01,5.7096e-01,5.7096e-01,5.8993e-01,5.7096e-01,6.1874e-01,4.8408e-01,6.1874e-01,6.1874e-01,4.8408e-01,6.1874e-01,6.5676e-01,3.7059e-01,6.5676e-01,6.5676e-01,3.7059e-01,6.5676e-01,6.8442e-01,2.5126e-01,6.8442e-01,6.8442e-01,2.5126e-01,6.8442e-01,7.0129e-01,1.2797e-01,7.0129e-01,7.0129e-01,1.2797e-01,7.0129e-01,7.0710e-01,2.6548e-03,7.0710e-01,7.0710e-01,2.6548e-03,7.0710e-01,7.0176e-01,-1.2270e-01,7.0176e-01,7.0176e-01,-1.2270e-01,7.0176e-01,6.8536e-01,-2.4612e-01,6.8536e-01,6.8536e-01,-2.4612e-01,6.8536e-01,6.5814e-01,-3.6565e-01,6.5814e-01,6.5814e-01,-3.6565e-01,6.5814e-01,6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01});
			return Normal_7_125_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #131, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_131_point()
		{
			MFVec3f Coordinate_7_131_point = new MFVec3f(new double[] {4.2944e+01,2.6482e+02,1.5088e+02,4.1595e+01,2.6482e+02,1.5223e+02,4.3062e+01,2.6508e+02,1.5100e+02,4.1713e+01,2.6508e+02,1.5235e+02,4.3204e+01,2.6532e+02,1.5114e+02,4.1855e+01,2.6532e+02,1.5249e+02,4.3366e+01,2.6553e+02,1.5130e+02,4.2017e+01,2.6553e+02,1.5265e+02,4.3546e+01,2.6571e+02,1.5148e+02,4.2197e+01,2.6571e+02,1.5283e+02,4.3741e+01,2.6585e+02,1.5168e+02,4.2392e+01,2.6585e+02,1.5303e+02,4.3948e+01,2.6596e+02,1.5189e+02,4.2599e+01,2.6596e+02,1.5324e+02,4.4163e+01,2.6603e+02,1.5210e+02,4.2814e+01,2.6603e+02,1.5345e+02,4.4382e+01,2.6606e+02,1.5232e+02,4.3033e+01,2.6606e+02,1.5367e+02,4.4602e+01,2.6604e+02,1.5254e+02,4.3253e+01,2.6604e+02,1.5389e+02,4.4819e+01,2.6599e+02,1.5276e+02,4.3470e+01,2.6599e+02,1.5411e+02,4.5029e+01,2.6590e+02,1.5297e+02,4.3681e+01,2.6590e+02,1.5432e+02,4.5229e+01,2.6576e+02,1.5317e+02,4.3880e+01,2.6576e+02,1.5452e+02,4.5415e+01,2.6560e+02,1.5335e+02,4.4066e+01,2.6560e+02,1.5470e+02,4.5584e+01,2.6540e+02,1.5352e+02,4.4235e+01,2.6540e+02,1.5487e+02,4.5733e+01,2.6517e+02,1.5367e+02,4.4384e+01,2.6517e+02,1.5502e+02,4.5860e+01,2.6491e+02,1.5380e+02,4.4511e+01,2.6491e+02,1.5515e+02,4.5962e+01,2.6464e+02,1.5390e+02,4.4613e+01,2.6464e+02,1.5525e+02,4.6038e+01,2.6435e+02,1.5398e+02,4.4689e+01,2.6435e+02,1.5533e+02,4.6086e+01,2.6404e+02,1.5402e+02,4.4737e+01,2.6404e+02,1.5537e+02,4.6105e+01,2.6373e+02,1.5404e+02,4.4756e+01,2.6373e+02,1.5539e+02,4.6096e+01,2.6342e+02,1.5403e+02,4.4747e+01,2.6342e+02,1.5538e+02,4.6058e+01,2.6311e+02,1.5400e+02,4.4709e+01,2.6311e+02,1.5535e+02,4.5992e+01,2.6282e+02,1.5393e+02,4.4644e+01,2.6282e+02,1.5528e+02,4.5900e+01,2.6253e+02,1.5384e+02,4.4551e+01,2.6253e+02,1.5519e+02});
			return Coordinate_7_131_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #132, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_132_vector()
		{
			MFVec3f Normal_7_132_vector = new MFVec3f(new double[] {6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01,5.7099e-01,-5.8987e-01,5.7099e-01,5.7099e-01,-5.8987e-01,5.7099e-01,5.1166e-01,-6.9022e-01,5.1166e-01,5.1166e-01,-6.9022e-01,5.1166e-01,4.4358e-01,-7.7877e-01,4.4358e-01,4.4358e-01,-7.7877e-01,4.4358e-01,3.6790e-01,-8.5399e-01,3.6790e-01,3.6790e-01,-8.5399e-01,3.6790e-01,2.8594e-01,-9.1459e-01,2.8594e-01,2.8594e-01,-9.1459e-01,2.8594e-01,1.9908e-01,-9.5955e-01,1.9908e-01,1.9908e-01,-9.5955e-01,1.9908e-01,1.0881e-01,-9.8809e-01,1.0881e-01,1.0881e-01,-9.8809e-01,1.0881e-01,1.6685e-02,-9.9972e-01,1.6685e-02,1.6685e-02,-9.9972e-01,1.6685e-02,-7.5728e-02,-9.9425e-01,-7.5728e-02,-7.5728e-02,-9.9425e-01,-7.5728e-02,-1.6684e-01,-9.7176e-01,-1.6684e-01,-1.6684e-01,-9.7176e-01,-1.6684e-01,-2.5511e-01,-9.3265e-01,-2.5511e-01,-2.5511e-01,-9.3265e-01,-2.5511e-01,-3.3901e-01,-8.7758e-01,-3.3901e-01,-3.3901e-01,-8.7758e-01,-3.3901e-01,-4.1710e-01,-8.0750e-01,-4.1710e-01,-4.1710e-01,-8.0750e-01,-4.1710e-01,-4.8806e-01,-7.2360e-01,-4.8806e-01,-4.8806e-01,-7.2360e-01,-4.8806e-01,-5.5067e-01,-6.2731e-01,-5.5067e-01,-5.5067e-01,-6.2731e-01,-5.5067e-01,-6.0386e-01,-5.2030e-01,-6.0386e-01,-6.0386e-01,-5.2030e-01,-6.0386e-01,-6.4671e-01,-4.0438e-01,-6.4671e-01,-6.4671e-01,-4.0438e-01,-6.4671e-01,-6.7850e-01,-2.8154e-01,-6.7850e-01,-6.7850e-01,-2.8154e-01,-6.7850e-01,-6.9868e-01,-1.5388e-01,-6.9868e-01,-6.9868e-01,-1.5388e-01,-6.9868e-01,-7.0691e-01,-2.3597e-02,-7.0691e-01,-7.0691e-01,-2.3597e-02,-7.0691e-01,-7.0304e-01,1.0710e-01,-7.0304e-01,-7.0304e-01,1.0710e-01,-7.0304e-01,-6.8714e-01,2.3595e-01,-6.8714e-01,-6.8714e-01,2.3595e-01,-6.8714e-01,-6.5948e-01,3.6078e-01,-6.5948e-01,-6.5948e-01,3.6078e-01,-6.5948e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01});
			return Normal_7_132_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #138, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_138_point()
		{
			MFVec3f Coordinate_7_138_point = new MFVec3f(new double[] {2.3449e+01,2.2443e+02,1.3139e+02,2.2100e+01,2.2443e+02,1.3274e+02,2.3331e+01,2.2417e+02,1.3127e+02,2.1982e+01,2.2417e+02,1.3262e+02,2.3190e+01,2.2393e+02,1.3113e+02,2.1841e+01,2.2393e+02,1.3248e+02,2.3028e+01,2.2372e+02,1.3097e+02,2.1679e+01,2.2372e+02,1.3232e+02,2.2847e+01,2.2354e+02,1.3079e+02,2.1499e+01,2.2354e+02,1.3213e+02,2.2652e+01,2.2340e+02,1.3059e+02,2.1303e+01,2.2340e+02,1.3194e+02,2.2445e+01,2.2329e+02,1.3038e+02,2.1097e+01,2.2329e+02,1.3173e+02,2.2230e+01,2.2322e+02,1.3017e+02,2.0882e+01,2.2322e+02,1.3152e+02,2.2011e+01,2.2319e+02,1.2995e+02,2.0662e+01,2.2319e+02,1.3130e+02,2.1791e+01,2.2321e+02,1.2973e+02,2.0442e+01,2.2321e+02,1.3108e+02,2.1574e+01,2.2326e+02,1.2951e+02,2.0225e+01,2.2326e+02,1.3086e+02,2.1364e+01,2.2335e+02,1.2930e+02,2.0015e+01,2.2335e+02,1.3065e+02,2.1164e+01,2.2349e+02,1.2910e+02,1.9815e+01,2.2349e+02,1.3045e+02,2.0978e+01,2.2365e+02,1.2892e+02,1.9629e+01,2.2365e+02,1.3027e+02,2.0809e+01,2.2385e+02,1.2875e+02,1.9460e+01,2.2385e+02,1.3010e+02,2.0660e+01,2.2408e+02,1.2860e+02,1.9311e+01,2.2408e+02,1.2995e+02,2.0533e+01,2.2434e+02,1.2847e+02,1.9185e+01,2.2434e+02,1.2982e+02,2.0431e+01,2.2461e+02,1.2837e+02,1.9083e+01,2.2461e+02,1.2972e+02,2.0356e+01,2.2490e+02,1.2829e+02,1.9007e+01,2.2490e+02,1.2964e+02,2.0308e+01,2.2521e+02,1.2825e+02,1.8959e+01,2.2521e+02,1.2960e+02,2.0288e+01,2.2552e+02,1.2823e+02,1.8939e+01,2.2552e+02,1.2958e+02,2.0297e+01,2.2583e+02,1.2824e+02,1.8948e+01,2.2583e+02,1.2958e+02,2.0335e+01,2.2614e+02,1.2827e+02,1.8986e+01,2.2614e+02,1.2962e+02,2.0401e+01,2.2643e+02,1.2834e+02,1.9052e+01,2.2643e+02,1.2969e+02,2.0494e+01,2.2672e+02,1.2843e+02,1.9145e+01,2.2672e+02,1.2978e+02});
			return Coordinate_7_138_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #139, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_139_vector()
		{
			MFVec3f Normal_7_139_vector = new MFVec3f(new double[] {-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-5.7099e-01,5.8987e-01,-5.7099e-01,-5.7099e-01,5.8987e-01,-5.7099e-01,-5.1166e-01,6.9022e-01,-5.1166e-01,-5.1166e-01,6.9022e-01,-5.1166e-01,-4.4358e-01,7.7877e-01,-4.4358e-01,-4.4358e-01,7.7877e-01,-4.4358e-01,-3.6790e-01,8.5399e-01,-3.6790e-01,-3.6790e-01,8.5399e-01,-3.6790e-01,-2.8594e-01,9.1459e-01,-2.8594e-01,-2.8594e-01,9.1459e-01,-2.8594e-01,-1.9908e-01,9.5955e-01,-1.9908e-01,-1.9908e-01,9.5955e-01,-1.9908e-01,-1.0881e-01,9.8809e-01,-1.0881e-01,-1.0881e-01,9.8809e-01,-1.0881e-01,-1.6685e-02,9.9972e-01,-1.6685e-02,-1.6685e-02,9.9972e-01,-1.6685e-02,7.5728e-02,9.9425e-01,7.5728e-02,7.5728e-02,9.9425e-01,7.5728e-02,1.6684e-01,9.7176e-01,1.6684e-01,1.6684e-01,9.7176e-01,1.6684e-01,2.5511e-01,9.3265e-01,2.5511e-01,2.5511e-01,9.3265e-01,2.5511e-01,3.3901e-01,8.7758e-01,3.3901e-01,3.3901e-01,8.7758e-01,3.3901e-01,4.1710e-01,8.0750e-01,4.1710e-01,4.1710e-01,8.0750e-01,4.1710e-01,4.8806e-01,7.2360e-01,4.8806e-01,4.8806e-01,7.2360e-01,4.8806e-01,5.5067e-01,6.2731e-01,5.5067e-01,5.5067e-01,6.2731e-01,5.5067e-01,6.0386e-01,5.2030e-01,6.0386e-01,6.0386e-01,5.2030e-01,6.0386e-01,6.4671e-01,4.0438e-01,6.4671e-01,6.4671e-01,4.0438e-01,6.4671e-01,6.7850e-01,2.8154e-01,6.7850e-01,6.7850e-01,2.8154e-01,6.7850e-01,6.9868e-01,1.5388e-01,6.9868e-01,6.9868e-01,1.5388e-01,6.9868e-01,7.0691e-01,2.3597e-02,7.0691e-01,7.0691e-01,2.3597e-02,7.0691e-01,7.0304e-01,-1.0710e-01,7.0304e-01,7.0304e-01,-1.0710e-01,7.0304e-01,6.8714e-01,-2.3595e-01,6.8714e-01,6.8714e-01,-2.3595e-01,6.8714e-01,6.5948e-01,-3.6078e-01,6.5948e-01,6.5948e-01,-3.6078e-01,6.5948e-01,6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01});
			return Normal_7_139_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #145, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_145_point()
		{
			MFVec3f Coordinate_7_145_point = new MFVec3f(new double[] {2.0494e+01,2.2672e+02,1.2843e+02,1.9145e+01,2.2672e+02,1.2978e+02,2.0607e+01,2.2697e+02,1.2855e+02,1.9258e+01,2.2697e+02,1.2989e+02,2.0741e+01,2.2720e+02,1.2868e+02,1.9392e+01,2.2720e+02,1.3003e+02,2.0895e+01,2.2741e+02,1.2883e+02,1.9546e+01,2.2741e+02,1.3018e+02,2.1065e+01,2.2758e+02,1.2900e+02,1.9717e+01,2.2758e+02,1.3035e+02,2.1250e+01,2.2773e+02,1.2919e+02,1.9902e+01,2.2773e+02,1.3054e+02,2.1447e+01,2.2784e+02,1.2939e+02,2.0098e+01,2.2784e+02,1.3073e+02,2.1651e+01,2.2791e+02,1.2959e+02,2.0303e+01,2.2791e+02,1.3094e+02,2.1861e+01,2.2795e+02,1.2980e+02,2.0512e+01,2.2795e+02,1.3115e+02,2.2073e+01,2.2795e+02,1.3001e+02,2.0724e+01,2.2795e+02,1.3136e+02,2.2282e+01,2.2792e+02,1.3022e+02,2.0934e+01,2.2792e+02,1.3157e+02,2.2487e+01,2.2784e+02,1.3043e+02,2.1139e+01,2.2784e+02,1.3177e+02,2.2684e+01,2.2773e+02,1.3062e+02,2.1335e+01,2.2773e+02,1.3197e+02,2.2870e+01,2.2759e+02,1.3081e+02,2.1521e+01,2.2759e+02,1.3216e+02,2.3041e+01,2.2741e+02,1.3098e+02,2.1692e+01,2.2741e+02,1.3233e+02,2.3196e+01,2.2721e+02,1.3113e+02,2.1847e+01,2.2721e+02,1.3248e+02,2.3331e+01,2.2698e+02,1.3127e+02,2.1982e+01,2.2698e+02,1.3262e+02,2.3445e+01,2.2673e+02,1.3138e+02,2.2096e+01,2.2673e+02,1.3273e+02,2.3535e+01,2.2646e+02,1.3147e+02,2.2186e+01,2.2646e+02,1.3282e+02,2.3601e+01,2.2617e+02,1.3154e+02,2.2252e+01,2.2617e+02,1.3289e+02,2.3641e+01,2.2588e+02,1.3158e+02,2.2292e+01,2.2588e+02,1.3293e+02,2.3655e+01,2.2558e+02,1.3159e+02,2.2306e+01,2.2558e+02,1.3294e+02,2.3642e+01,2.2528e+02,1.3158e+02,2.2294e+01,2.2528e+02,1.3293e+02,2.3603e+01,2.2499e+02,1.3154e+02,2.2255e+01,2.2499e+02,1.3289e+02,2.3539e+01,2.2470e+02,1.3148e+02,2.2190e+01,2.2470e+02,1.3283e+02,2.3449e+01,2.2443e+02,1.3139e+02,2.2100e+01,2.2443e+02,1.3274e+02});
			return Coordinate_7_145_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #146, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_146_vector()
		{
			MFVec3f Normal_7_146_vector = new MFVec3f(new double[] {6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01,5.7316e-01,-5.8564e-01,5.7316e-01,5.7316e-01,-5.8564e-01,5.7316e-01,5.1674e-01,-6.8261e-01,5.1674e-01,5.1674e-01,-6.8261e-01,5.1674e-01,4.5217e-01,-7.6882e-01,4.5217e-01,4.5217e-01,-7.6882e-01,4.5217e-01,3.8047e-01,-8.4290e-01,3.8047e-01,3.8047e-01,-8.4290e-01,3.8047e-01,3.0277e-01,-9.0369e-01,3.0277e-01,3.0277e-01,-9.0369e-01,3.0277e-01,2.2029e-01,-9.5023e-01,2.2029e-01,2.2029e-01,-9.5023e-01,2.2029e-01,1.3434e-01,-9.8179e-01,1.3434e-01,1.3434e-01,-9.8179e-01,1.3434e-01,4.6273e-02,-9.9786e-01,4.6273e-02,4.6273e-02,-9.9786e-01,4.6273e-02,-4.2526e-02,-9.9819e-01,-4.2526e-02,-4.2526e-02,-9.9819e-01,-4.2526e-02,-1.3065e-01,-9.8278e-01,-1.3065e-01,-1.3065e-01,-9.8278e-01,-1.3065e-01,-2.1672e-01,-9.5187e-01,-2.1672e-01,-2.1672e-01,-9.5187e-01,-2.1672e-01,-2.9937e-01,-9.0595e-01,-2.9937e-01,-2.9937e-01,-9.0595e-01,-2.9937e-01,-3.7730e-01,-8.4575e-01,-3.7730e-01,-3.7730e-01,-8.4575e-01,-3.7730e-01,-4.4928e-01,-7.7220e-01,-4.4928e-01,-4.4928e-01,-7.7220e-01,-4.4928e-01,-5.1417e-01,-6.8648e-01,-5.1417e-01,-5.1417e-01,-6.8648e-01,-5.1417e-01,-5.7096e-01,-5.8993e-01,-5.7096e-01,-5.7096e-01,-5.8993e-01,-5.7096e-01,-6.1874e-01,-4.8408e-01,-6.1874e-01,-6.1874e-01,-4.8408e-01,-6.1874e-01,-6.5676e-01,-3.7059e-01,-6.5676e-01,-6.5676e-01,-3.7059e-01,-6.5676e-01,-6.8442e-01,-2.5126e-01,-6.8442e-01,-6.8442e-01,-2.5126e-01,-6.8442e-01,-7.0129e-01,-1.2797e-01,-7.0129e-01,-7.0129e-01,-1.2797e-01,-7.0129e-01,-7.0710e-01,-2.6549e-03,-7.0710e-01,-7.0710e-01,-2.6549e-03,-7.0710e-01,-7.0176e-01,1.2270e-01,-7.0176e-01,-7.0176e-01,1.2270e-01,-7.0176e-01,-6.8536e-01,2.4612e-01,-6.8536e-01,-6.8536e-01,2.4612e-01,-6.8536e-01,-6.5814e-01,3.6565e-01,-6.5814e-01,-6.5814e-01,3.6565e-01,-6.5814e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01});
			return Normal_7_146_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #152, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_152_point()
		{
			MFVec3f Coordinate_7_152_point = new MFVec3f(new double[] {2.3449e+01,2.6253e+02,1.3139e+02,2.2100e+01,2.6253e+02,1.3274e+02,2.3331e+01,2.6227e+02,1.3127e+02,2.1982e+01,2.6227e+02,1.3262e+02,2.3190e+01,2.6203e+02,1.3113e+02,2.1841e+01,2.6203e+02,1.3248e+02,2.3028e+01,2.6182e+02,1.3097e+02,2.1679e+01,2.6182e+02,1.3232e+02,2.2847e+01,2.6164e+02,1.3079e+02,2.1499e+01,2.6164e+02,1.3213e+02,2.2652e+01,2.6150e+02,1.3059e+02,2.1303e+01,2.6150e+02,1.3194e+02,2.2445e+01,2.6139e+02,1.3038e+02,2.1097e+01,2.6139e+02,1.3173e+02,2.2230e+01,2.6132e+02,1.3017e+02,2.0882e+01,2.6132e+02,1.3152e+02,2.2011e+01,2.6129e+02,1.2995e+02,2.0662e+01,2.6129e+02,1.3130e+02,2.1791e+01,2.6131e+02,1.2973e+02,2.0442e+01,2.6131e+02,1.3108e+02,2.1574e+01,2.6136e+02,1.2951e+02,2.0225e+01,2.6136e+02,1.3086e+02,2.1364e+01,2.6145e+02,1.2930e+02,2.0015e+01,2.6145e+02,1.3065e+02,2.1164e+01,2.6159e+02,1.2910e+02,1.9815e+01,2.6159e+02,1.3045e+02,2.0978e+01,2.6175e+02,1.2892e+02,1.9629e+01,2.6175e+02,1.3027e+02,2.0809e+01,2.6195e+02,1.2875e+02,1.9460e+01,2.6195e+02,1.3010e+02,2.0660e+01,2.6218e+02,1.2860e+02,1.9311e+01,2.6218e+02,1.2995e+02,2.0533e+01,2.6244e+02,1.2847e+02,1.9185e+01,2.6244e+02,1.2982e+02,2.0431e+01,2.6271e+02,1.2837e+02,1.9083e+01,2.6271e+02,1.2972e+02,2.0356e+01,2.6300e+02,1.2829e+02,1.9007e+01,2.6300e+02,1.2964e+02,2.0308e+01,2.6331e+02,1.2825e+02,1.8959e+01,2.6331e+02,1.2960e+02,2.0288e+01,2.6362e+02,1.2823e+02,1.8939e+01,2.6362e+02,1.2958e+02,2.0297e+01,2.6393e+02,1.2824e+02,1.8948e+01,2.6393e+02,1.2958e+02,2.0335e+01,2.6424e+02,1.2827e+02,1.8986e+01,2.6424e+02,1.2962e+02,2.0401e+01,2.6453e+02,1.2834e+02,1.9052e+01,2.6453e+02,1.2969e+02,2.0494e+01,2.6482e+02,1.2843e+02,1.9145e+01,2.6482e+02,1.2978e+02});
			return Coordinate_7_152_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #153, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_153_vector()
		{
			MFVec3f Normal_7_153_vector = new MFVec3f(new double[] {-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-5.7099e-01,5.8987e-01,-5.7099e-01,-5.7099e-01,5.8987e-01,-5.7099e-01,-5.1166e-01,6.9022e-01,-5.1166e-01,-5.1166e-01,6.9022e-01,-5.1166e-01,-4.4358e-01,7.7877e-01,-4.4358e-01,-4.4358e-01,7.7877e-01,-4.4358e-01,-3.6790e-01,8.5399e-01,-3.6790e-01,-3.6790e-01,8.5399e-01,-3.6790e-01,-2.8594e-01,9.1459e-01,-2.8594e-01,-2.8594e-01,9.1459e-01,-2.8594e-01,-1.9908e-01,9.5955e-01,-1.9908e-01,-1.9908e-01,9.5955e-01,-1.9908e-01,-1.0881e-01,9.8809e-01,-1.0881e-01,-1.0881e-01,9.8809e-01,-1.0881e-01,-1.6685e-02,9.9972e-01,-1.6685e-02,-1.6685e-02,9.9972e-01,-1.6685e-02,7.5728e-02,9.9425e-01,7.5728e-02,7.5728e-02,9.9425e-01,7.5728e-02,1.6684e-01,9.7176e-01,1.6684e-01,1.6684e-01,9.7176e-01,1.6684e-01,2.5511e-01,9.3265e-01,2.5511e-01,2.5511e-01,9.3265e-01,2.5511e-01,3.3901e-01,8.7758e-01,3.3901e-01,3.3901e-01,8.7758e-01,3.3901e-01,4.1710e-01,8.0750e-01,4.1710e-01,4.1710e-01,8.0750e-01,4.1710e-01,4.8806e-01,7.2360e-01,4.8806e-01,4.8806e-01,7.2360e-01,4.8806e-01,5.5067e-01,6.2731e-01,5.5067e-01,5.5067e-01,6.2731e-01,5.5067e-01,6.0386e-01,5.2030e-01,6.0386e-01,6.0386e-01,5.2030e-01,6.0386e-01,6.4671e-01,4.0438e-01,6.4671e-01,6.4671e-01,4.0438e-01,6.4671e-01,6.7850e-01,2.8154e-01,6.7850e-01,6.7850e-01,2.8154e-01,6.7850e-01,6.9868e-01,1.5388e-01,6.9868e-01,6.9868e-01,1.5388e-01,6.9868e-01,7.0691e-01,2.3597e-02,7.0691e-01,7.0691e-01,2.3597e-02,7.0691e-01,7.0304e-01,-1.0710e-01,7.0304e-01,7.0304e-01,-1.0710e-01,7.0304e-01,6.8714e-01,-2.3595e-01,6.8714e-01,6.8714e-01,-2.3595e-01,6.8714e-01,6.5948e-01,-3.6078e-01,6.5948e-01,6.5948e-01,-3.6078e-01,6.5948e-01,6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01});
			return Normal_7_153_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #159, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_159_point()
		{
			MFVec3f Coordinate_7_159_point = new MFVec3f(new double[] {2.0494e+01,2.6482e+02,1.2843e+02,1.9145e+01,2.6482e+02,1.2978e+02,2.0607e+01,2.6507e+02,1.2855e+02,1.9258e+01,2.6507e+02,1.2989e+02,2.0741e+01,2.6530e+02,1.2868e+02,1.9392e+01,2.6530e+02,1.3003e+02,2.0895e+01,2.6551e+02,1.2883e+02,1.9546e+01,2.6551e+02,1.3018e+02,2.1065e+01,2.6568e+02,1.2900e+02,1.9717e+01,2.6568e+02,1.3035e+02,2.1250e+01,2.6583e+02,1.2919e+02,1.9902e+01,2.6583e+02,1.3054e+02,2.1447e+01,2.6594e+02,1.2939e+02,2.0098e+01,2.6594e+02,1.3073e+02,2.1651e+01,2.6601e+02,1.2959e+02,2.0303e+01,2.6601e+02,1.3094e+02,2.1861e+01,2.6605e+02,1.2980e+02,2.0512e+01,2.6605e+02,1.3115e+02,2.2073e+01,2.6605e+02,1.3001e+02,2.0724e+01,2.6605e+02,1.3136e+02,2.2282e+01,2.6602e+02,1.3022e+02,2.0934e+01,2.6602e+02,1.3157e+02,2.2487e+01,2.6594e+02,1.3043e+02,2.1139e+01,2.6594e+02,1.3177e+02,2.2684e+01,2.6583e+02,1.3062e+02,2.1335e+01,2.6583e+02,1.3197e+02,2.2870e+01,2.6569e+02,1.3081e+02,2.1521e+01,2.6569e+02,1.3216e+02,2.3041e+01,2.6551e+02,1.3098e+02,2.1692e+01,2.6551e+02,1.3233e+02,2.3196e+01,2.6531e+02,1.3113e+02,2.1847e+01,2.6531e+02,1.3248e+02,2.3331e+01,2.6508e+02,1.3127e+02,2.1982e+01,2.6508e+02,1.3262e+02,2.3445e+01,2.6483e+02,1.3138e+02,2.2096e+01,2.6483e+02,1.3273e+02,2.3535e+01,2.6456e+02,1.3147e+02,2.2186e+01,2.6456e+02,1.3282e+02,2.3601e+01,2.6427e+02,1.3154e+02,2.2252e+01,2.6427e+02,1.3289e+02,2.3641e+01,2.6398e+02,1.3158e+02,2.2292e+01,2.6398e+02,1.3293e+02,2.3655e+01,2.6368e+02,1.3159e+02,2.2306e+01,2.6368e+02,1.3294e+02,2.3642e+01,2.6338e+02,1.3158e+02,2.2294e+01,2.6338e+02,1.3293e+02,2.3603e+01,2.6309e+02,1.3154e+02,2.2255e+01,2.6309e+02,1.3289e+02,2.3539e+01,2.6280e+02,1.3148e+02,2.2190e+01,2.6280e+02,1.3283e+02,2.3449e+01,2.6253e+02,1.3139e+02,2.2100e+01,2.6253e+02,1.3274e+02});
			return Coordinate_7_159_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #160, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_160_vector()
		{
			MFVec3f Normal_7_160_vector = new MFVec3f(new double[] {6.2054e-01,-4.7943e-01,6.2054e-01,6.2054e-01,-4.7943e-01,6.2054e-01,5.7316e-01,-5.8564e-01,5.7316e-01,5.7316e-01,-5.8564e-01,5.7316e-01,5.1674e-01,-6.8261e-01,5.1674e-01,5.1674e-01,-6.8261e-01,5.1674e-01,4.5217e-01,-7.6882e-01,4.5217e-01,4.5217e-01,-7.6882e-01,4.5217e-01,3.8047e-01,-8.4290e-01,3.8047e-01,3.8047e-01,-8.4290e-01,3.8047e-01,3.0277e-01,-9.0369e-01,3.0277e-01,3.0277e-01,-9.0369e-01,3.0277e-01,2.2029e-01,-9.5023e-01,2.2029e-01,2.2029e-01,-9.5023e-01,2.2029e-01,1.3434e-01,-9.8179e-01,1.3434e-01,1.3434e-01,-9.8179e-01,1.3434e-01,4.6273e-02,-9.9786e-01,4.6273e-02,4.6273e-02,-9.9786e-01,4.6273e-02,-4.2526e-02,-9.9819e-01,-4.2526e-02,-4.2526e-02,-9.9819e-01,-4.2526e-02,-1.3065e-01,-9.8278e-01,-1.3065e-01,-1.3065e-01,-9.8278e-01,-1.3065e-01,-2.1672e-01,-9.5187e-01,-2.1672e-01,-2.1672e-01,-9.5187e-01,-2.1672e-01,-2.9937e-01,-9.0595e-01,-2.9937e-01,-2.9937e-01,-9.0595e-01,-2.9937e-01,-3.7730e-01,-8.4575e-01,-3.7730e-01,-3.7730e-01,-8.4575e-01,-3.7730e-01,-4.4928e-01,-7.7220e-01,-4.4928e-01,-4.4928e-01,-7.7220e-01,-4.4928e-01,-5.1417e-01,-6.8648e-01,-5.1417e-01,-5.1417e-01,-6.8648e-01,-5.1417e-01,-5.7096e-01,-5.8993e-01,-5.7096e-01,-5.7096e-01,-5.8993e-01,-5.7096e-01,-6.1874e-01,-4.8408e-01,-6.1874e-01,-6.1874e-01,-4.8408e-01,-6.1874e-01,-6.5676e-01,-3.7059e-01,-6.5676e-01,-6.5676e-01,-3.7059e-01,-6.5676e-01,-6.8442e-01,-2.5126e-01,-6.8442e-01,-6.8442e-01,-2.5126e-01,-6.8442e-01,-7.0129e-01,-1.2797e-01,-7.0129e-01,-7.0129e-01,-1.2797e-01,-7.0129e-01,-7.0710e-01,-2.6549e-03,-7.0710e-01,-7.0710e-01,-2.6549e-03,-7.0710e-01,-7.0176e-01,1.2270e-01,-7.0176e-01,-7.0176e-01,1.2270e-01,-7.0176e-01,-6.8536e-01,2.4612e-01,-6.8536e-01,-6.8536e-01,2.4612e-01,-6.8536e-01,-6.5814e-01,3.6565e-01,-6.5814e-01,-6.5814e-01,3.6565e-01,-6.5814e-01,-6.2054e-01,4.7943e-01,-6.2054e-01,-6.2054e-01,4.7943e-01,-6.2054e-01});
			return Normal_7_160_vector;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #261, 858 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_261_index()
		{
			MFInt32 IndexedTriangleSet_6_261_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_261_index_1()));
			return IndexedTriangleSet_6_261_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #261, 834 total numbers made up of 278 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_261_point()
		{
			MFVec3f Coordinate_7_261_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_261_point_1()))
				.append(new MFVec3f(getCoordinate_7_261_point_2()))
				.append(new MFVec3f(getCoordinate_7_261_point_3()));
			return Coordinate_7_261_point;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #273, 858 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_273_index()
		{
			MFInt32 IndexedTriangleSet_6_273_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_273_index_1()));
			return IndexedTriangleSet_6_273_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #273, 831 total numbers made up of 277 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_273_point()
		{
			MFVec3f Coordinate_7_273_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_273_point_1()))
				.append(new MFVec3f(getCoordinate_7_273_point_2()))
				.append(new MFVec3f(getCoordinate_7_273_point_3()));
			return Coordinate_7_273_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #330, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_330_point()
		{
			MFVec3f Coordinate_7_330_point = new MFVec3f(new double[] {-1.7732e+02,3.5692e+02,7.8108e+01,-1.7732e+02,3.5692e+02,7.6200e+01,-1.7710e+02,3.5361e+02,7.8108e+01,-1.7710e+02,3.5361e+02,7.6200e+01,-1.7645e+02,3.5035e+02,7.8108e+01,-1.7645e+02,3.5035e+02,7.6200e+01,-1.7538e+02,3.4720e+02,7.8108e+01,-1.7538e+02,3.4720e+02,7.6200e+01,-1.7391e+02,3.4422e+02,7.8108e+01,-1.7391e+02,3.4422e+02,7.6200e+01,-1.7207e+02,3.4146e+02,7.8108e+01,-1.7207e+02,3.4146e+02,7.6200e+01,-1.6988e+02,3.3896e+02,7.8108e+01,-1.6988e+02,3.3896e+02,7.6200e+01,-1.6738e+02,3.3677e+02,7.8108e+01,-1.6738e+02,3.3677e+02,7.6200e+01,-1.6462e+02,3.3492e+02,7.8108e+01,-1.6462e+02,3.3492e+02,7.6200e+01,-1.6164e+02,3.3345e+02,7.8108e+01,-1.6164e+02,3.3345e+02,7.6200e+01,-1.5849e+02,3.3239e+02,7.8108e+01,-1.5849e+02,3.3239e+02,7.6200e+01,-1.5523e+02,3.3174e+02,7.8108e+01,-1.5523e+02,3.3174e+02,7.6200e+01,-1.5192e+02,3.3152e+02,7.8108e+01,-1.5192e+02,3.3152e+02,7.6200e+01,-1.4860e+02,3.3174e+02,7.8108e+01,-1.4860e+02,3.3174e+02,7.6200e+01,-1.4534e+02,3.3239e+02,7.8108e+01,-1.4534e+02,3.3239e+02,7.6200e+01,-1.4220e+02,3.3345e+02,7.8108e+01,-1.4220e+02,3.3345e+02,7.6200e+01,-1.3922e+02,3.3492e+02,7.8108e+01,-1.3922e+02,3.3492e+02,7.6200e+01,-1.3645e+02,3.3677e+02,7.8108e+01,-1.3645e+02,3.3677e+02,7.6200e+01,-1.3396e+02,3.3896e+02,7.8108e+01,-1.3396e+02,3.3896e+02,7.6200e+01,-1.3177e+02,3.4146e+02,7.8108e+01,-1.3177e+02,3.4146e+02,7.6200e+01,-1.2992e+02,3.4422e+02,7.8108e+01,-1.2992e+02,3.4422e+02,7.6200e+01,-1.2845e+02,3.4720e+02,7.8108e+01,-1.2845e+02,3.4720e+02,7.6200e+01,-1.2738e+02,3.5035e+02,7.8108e+01,-1.2738e+02,3.5035e+02,7.6200e+01,-1.2673e+02,3.5361e+02,7.8108e+01,-1.2673e+02,3.5361e+02,7.6200e+01,-1.2652e+02,3.5692e+02,7.8108e+01,-1.2652e+02,3.5692e+02,7.6200e+01});
			return Coordinate_7_330_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #331, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_331_vector()
		{
			MFVec3f Normal_7_331_vector = new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00});
			return Normal_7_331_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #337, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_337_point()
		{
			MFVec3f Coordinate_7_337_point = new MFVec3f(new double[] {-1.2652e+02,3.5692e+02,7.8108e+01,-1.2652e+02,3.5692e+02,7.6200e+01,-1.2673e+02,3.6024e+02,7.8108e+01,-1.2673e+02,3.6024e+02,7.6200e+01,-1.2738e+02,3.6349e+02,7.8108e+01,-1.2738e+02,3.6349e+02,7.6200e+01,-1.2845e+02,3.6664e+02,7.8108e+01,-1.2845e+02,3.6664e+02,7.6200e+01,-1.2992e+02,3.6962e+02,7.8108e+01,-1.2992e+02,3.6962e+02,7.6200e+01,-1.3177e+02,3.7238e+02,7.8108e+01,-1.3177e+02,3.7238e+02,7.6200e+01,-1.3396e+02,3.7488e+02,7.8108e+01,-1.3396e+02,3.7488e+02,7.6200e+01,-1.3645e+02,3.7707e+02,7.8108e+01,-1.3645e+02,3.7707e+02,7.6200e+01,-1.3922e+02,3.7892e+02,7.8108e+01,-1.3922e+02,3.7892e+02,7.6200e+01,-1.4220e+02,3.8039e+02,7.8108e+01,-1.4220e+02,3.8039e+02,7.6200e+01,-1.4534e+02,3.8146e+02,7.8108e+01,-1.4534e+02,3.8146e+02,7.6200e+01,-1.4860e+02,3.8210e+02,7.8108e+01,-1.4860e+02,3.8210e+02,7.6200e+01,-1.5192e+02,3.8232e+02,7.8108e+01,-1.5192e+02,3.8232e+02,7.6200e+01,-1.5523e+02,3.8210e+02,7.8108e+01,-1.5523e+02,3.8210e+02,7.6200e+01,-1.5849e+02,3.8146e+02,7.8108e+01,-1.5849e+02,3.8146e+02,7.6200e+01,-1.6164e+02,3.8039e+02,7.8108e+01,-1.6164e+02,3.8039e+02,7.6200e+01,-1.6462e+02,3.7892e+02,7.8108e+01,-1.6462e+02,3.7892e+02,7.6200e+01,-1.6738e+02,3.7707e+02,7.8108e+01,-1.6738e+02,3.7707e+02,7.6200e+01,-1.6988e+02,3.7488e+02,7.8108e+01,-1.6988e+02,3.7488e+02,7.6200e+01,-1.7207e+02,3.7238e+02,7.8108e+01,-1.7207e+02,3.7238e+02,7.6200e+01,-1.7391e+02,3.6962e+02,7.8108e+01,-1.7391e+02,3.6962e+02,7.6200e+01,-1.7538e+02,3.6664e+02,7.8108e+01,-1.7538e+02,3.6664e+02,7.6200e+01,-1.7645e+02,3.6349e+02,7.8108e+01,-1.7645e+02,3.6349e+02,7.6200e+01,-1.7710e+02,3.6024e+02,7.8108e+01,-1.7710e+02,3.6024e+02,7.6200e+01,-1.7732e+02,3.5692e+02,7.8108e+01,-1.7732e+02,3.5692e+02,7.6200e+01});
			return Coordinate_7_337_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #338, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_338_vector()
		{
			MFVec3f Normal_7_338_vector = new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00});
			return Normal_7_338_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #350, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_350_point()
		{
			MFVec3f Coordinate_7_350_point = new MFVec3f(new double[] {-1.3604e+02,1.2207e+02,7.8108e+01,-1.3604e+02,1.2207e+02,7.6200e+01,-1.3596e+02,1.2083e+02,7.8108e+01,-1.3596e+02,1.2083e+02,7.6200e+01,-1.3572e+02,1.1961e+02,7.8108e+01,-1.3572e+02,1.1961e+02,7.6200e+01,-1.3532e+02,1.1843e+02,7.8108e+01,-1.3532e+02,1.1843e+02,7.6200e+01,-1.3477e+02,1.1731e+02,7.8108e+01,-1.3477e+02,1.1731e+02,7.6200e+01,-1.3407e+02,1.1627e+02,7.8108e+01,-1.3407e+02,1.1627e+02,7.6200e+01,-1.3325e+02,1.1534e+02,7.8108e+01,-1.3325e+02,1.1534e+02,7.6200e+01,-1.3232e+02,1.1452e+02,7.8108e+01,-1.3232e+02,1.1452e+02,7.6200e+01,-1.3128e+02,1.1382e+02,7.8108e+01,-1.3128e+02,1.1382e+02,7.6200e+01,-1.3016e+02,1.1327e+02,7.8108e+01,-1.3016e+02,1.1327e+02,7.6200e+01,-1.2898e+02,1.1287e+02,7.8108e+01,-1.2898e+02,1.1287e+02,7.6200e+01,-1.2776e+02,1.1263e+02,7.8108e+01,-1.2776e+02,1.1263e+02,7.6200e+01,-1.2652e+02,1.1255e+02,7.8108e+01,-1.2652e+02,1.1255e+02,7.6200e+01,-1.2527e+02,1.1263e+02,7.8108e+01,-1.2527e+02,1.1263e+02,7.6200e+01,-1.2405e+02,1.1287e+02,7.8108e+01,-1.2405e+02,1.1287e+02,7.6200e+01,-1.2287e+02,1.1327e+02,7.8108e+01,-1.2287e+02,1.1327e+02,7.6200e+01,-1.2175e+02,1.1382e+02,7.8108e+01,-1.2175e+02,1.1382e+02,7.6200e+01,-1.2072e+02,1.1452e+02,7.8108e+01,-1.2072e+02,1.1452e+02,7.6200e+01,-1.1978e+02,1.1534e+02,7.8108e+01,-1.1978e+02,1.1534e+02,7.6200e+01,-1.1896e+02,1.1627e+02,7.8108e+01,-1.1896e+02,1.1627e+02,7.6200e+01,-1.1827e+02,1.1731e+02,7.8108e+01,-1.1827e+02,1.1731e+02,7.6200e+01,-1.1772e+02,1.1843e+02,7.8108e+01,-1.1772e+02,1.1843e+02,7.6200e+01,-1.1732e+02,1.1961e+02,7.8108e+01,-1.1732e+02,1.1961e+02,7.6200e+01,-1.1707e+02,1.2083e+02,7.8108e+01,-1.1707e+02,1.2083e+02,7.6200e+01,-1.1699e+02,1.2207e+02,7.8108e+01,-1.1699e+02,1.2207e+02,7.6200e+01});
			return Coordinate_7_350_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #351, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_351_vector()
		{
			MFVec3f Normal_7_351_vector = new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00});
			return Normal_7_351_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #363, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_363_point()
		{
			MFVec3f Coordinate_7_363_point = new MFVec3f(new double[] {-1.1699e+02,2.1097e+02,7.8108e+01,-1.1699e+02,2.1097e+02,7.6200e+01,-1.1707e+02,2.1222e+02,7.8108e+01,-1.1707e+02,2.1222e+02,7.6200e+01,-1.1732e+02,2.1344e+02,7.8108e+01,-1.1732e+02,2.1344e+02,7.6200e+01,-1.1772e+02,2.1462e+02,7.8108e+01,-1.1772e+02,2.1462e+02,7.6200e+01,-1.1827e+02,2.1573e+02,7.8108e+01,-1.1827e+02,2.1573e+02,7.6200e+01,-1.1896e+02,2.1677e+02,7.8108e+01,-1.1896e+02,2.1677e+02,7.6200e+01,-1.1978e+02,2.1771e+02,7.8108e+01,-1.1978e+02,2.1771e+02,7.6200e+01,-1.2072e+02,2.1853e+02,7.8108e+01,-1.2072e+02,2.1853e+02,7.6200e+01,-1.2175e+02,2.1922e+02,7.8108e+01,-1.2175e+02,2.1922e+02,7.6200e+01,-1.2287e+02,2.1977e+02,7.8108e+01,-1.2287e+02,2.1977e+02,7.6200e+01,-1.2405e+02,2.2017e+02,7.8108e+01,-1.2405e+02,2.2017e+02,7.6200e+01,-1.2527e+02,2.2042e+02,7.8108e+01,-1.2527e+02,2.2042e+02,7.6200e+01,-1.2652e+02,2.2050e+02,7.8108e+01,-1.2652e+02,2.2050e+02,7.6200e+01,-1.2776e+02,2.2042e+02,7.8108e+01,-1.2776e+02,2.2042e+02,7.6200e+01,-1.2898e+02,2.2017e+02,7.8108e+01,-1.2898e+02,2.2017e+02,7.6200e+01,-1.3016e+02,2.1977e+02,7.8108e+01,-1.3016e+02,2.1977e+02,7.6200e+01,-1.3128e+02,2.1922e+02,7.8108e+01,-1.3128e+02,2.1922e+02,7.6200e+01,-1.3232e+02,2.1853e+02,7.8108e+01,-1.3232e+02,2.1853e+02,7.6200e+01,-1.3325e+02,2.1771e+02,7.8108e+01,-1.3325e+02,2.1771e+02,7.6200e+01,-1.3407e+02,2.1677e+02,7.8108e+01,-1.3407e+02,2.1677e+02,7.6200e+01,-1.3477e+02,2.1573e+02,7.8108e+01,-1.3477e+02,2.1573e+02,7.6200e+01,-1.3532e+02,2.1462e+02,7.8108e+01,-1.3532e+02,2.1462e+02,7.6200e+01,-1.3572e+02,2.1344e+02,7.8108e+01,-1.3572e+02,2.1344e+02,7.6200e+01,-1.3596e+02,2.1222e+02,7.8108e+01,-1.3596e+02,2.1222e+02,7.6200e+01,-1.3604e+02,2.1097e+02,7.8108e+01,-1.3604e+02,2.1097e+02,7.6200e+01});
			return Coordinate_7_363_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #364, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_364_vector()
		{
			MFVec3f Normal_7_364_vector = new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00});
			return Normal_7_364_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #376, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_376_point()
		{
			MFVec3f Coordinate_7_376_point = new MFVec3f(new double[] {-1.8049e+02,2.1097e+02,7.8108e+01,-1.8049e+02,2.1097e+02,7.6200e+01,-1.8057e+02,2.1222e+02,7.8108e+01,-1.8057e+02,2.1222e+02,7.6200e+01,-1.8082e+02,2.1344e+02,7.8108e+01,-1.8082e+02,2.1344e+02,7.6200e+01,-1.8122e+02,2.1462e+02,7.8108e+01,-1.8122e+02,2.1462e+02,7.6200e+01,-1.8177e+02,2.1573e+02,7.8108e+01,-1.8177e+02,2.1573e+02,7.6200e+01,-1.8246e+02,2.1677e+02,7.8108e+01,-1.8246e+02,2.1677e+02,7.6200e+01,-1.8328e+02,2.1771e+02,7.8108e+01,-1.8328e+02,2.1771e+02,7.6200e+01,-1.8422e+02,2.1853e+02,7.8108e+01,-1.8422e+02,2.1853e+02,7.6200e+01,-1.8525e+02,2.1922e+02,7.8108e+01,-1.8525e+02,2.1922e+02,7.6200e+01,-1.8637e+02,2.1977e+02,7.8108e+01,-1.8637e+02,2.1977e+02,7.6200e+01,-1.8755e+02,2.2017e+02,7.8108e+01,-1.8755e+02,2.2017e+02,7.6200e+01,-1.8877e+02,2.2042e+02,7.8108e+01,-1.8877e+02,2.2042e+02,7.6200e+01,-1.9002e+02,2.2050e+02,7.8108e+01,-1.9002e+02,2.2050e+02,7.6200e+01,-1.9126e+02,2.2042e+02,7.8108e+01,-1.9126e+02,2.2042e+02,7.6200e+01,-1.9248e+02,2.2017e+02,7.8108e+01,-1.9248e+02,2.2017e+02,7.6200e+01,-1.9366e+02,2.1977e+02,7.8108e+01,-1.9366e+02,2.1977e+02,7.6200e+01,-1.9478e+02,2.1922e+02,7.8108e+01,-1.9478e+02,2.1922e+02,7.6200e+01,-1.9582e+02,2.1853e+02,7.8108e+01,-1.9582e+02,2.1853e+02,7.6200e+01,-1.9675e+02,2.1771e+02,7.8108e+01,-1.9675e+02,2.1771e+02,7.6200e+01,-1.9757e+02,2.1677e+02,7.8108e+01,-1.9757e+02,2.1677e+02,7.6200e+01,-1.9827e+02,2.1573e+02,7.8108e+01,-1.9827e+02,2.1573e+02,7.6200e+01,-1.9882e+02,2.1462e+02,7.8108e+01,-1.9882e+02,2.1462e+02,7.6200e+01,-1.9922e+02,2.1344e+02,7.8108e+01,-1.9922e+02,2.1344e+02,7.6200e+01,-1.9946e+02,2.1222e+02,7.8108e+01,-1.9946e+02,2.1222e+02,7.6200e+01,-1.9954e+02,2.1097e+02,7.8108e+01,-1.9954e+02,2.1097e+02,7.6200e+01});
			return Coordinate_7_376_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #377, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_377_vector()
		{
			MFVec3f Normal_7_377_vector = new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00});
			return Normal_7_377_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #389, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_389_point()
		{
			MFVec3f Coordinate_7_389_point = new MFVec3f(new double[] {-1.9954e+02,1.2207e+02,7.8108e+01,-1.9954e+02,1.2207e+02,7.6200e+01,-1.9946e+02,1.2083e+02,7.8108e+01,-1.9946e+02,1.2083e+02,7.6200e+01,-1.9922e+02,1.1961e+02,7.8108e+01,-1.9922e+02,1.1961e+02,7.6200e+01,-1.9882e+02,1.1843e+02,7.8108e+01,-1.9882e+02,1.1843e+02,7.6200e+01,-1.9827e+02,1.1731e+02,7.8108e+01,-1.9827e+02,1.1731e+02,7.6200e+01,-1.9757e+02,1.1627e+02,7.8108e+01,-1.9757e+02,1.1627e+02,7.6200e+01,-1.9675e+02,1.1534e+02,7.8108e+01,-1.9675e+02,1.1534e+02,7.6200e+01,-1.9582e+02,1.1452e+02,7.8108e+01,-1.9582e+02,1.1452e+02,7.6200e+01,-1.9478e+02,1.1382e+02,7.8108e+01,-1.9478e+02,1.1382e+02,7.6200e+01,-1.9366e+02,1.1327e+02,7.8108e+01,-1.9366e+02,1.1327e+02,7.6200e+01,-1.9248e+02,1.1287e+02,7.8108e+01,-1.9248e+02,1.1287e+02,7.6200e+01,-1.9126e+02,1.1263e+02,7.8108e+01,-1.9126e+02,1.1263e+02,7.6200e+01,-1.9002e+02,1.1255e+02,7.8108e+01,-1.9002e+02,1.1255e+02,7.6200e+01,-1.8877e+02,1.1263e+02,7.8108e+01,-1.8877e+02,1.1263e+02,7.6200e+01,-1.8755e+02,1.1287e+02,7.8108e+01,-1.8755e+02,1.1287e+02,7.6200e+01,-1.8637e+02,1.1327e+02,7.8108e+01,-1.8637e+02,1.1327e+02,7.6200e+01,-1.8525e+02,1.1382e+02,7.8108e+01,-1.8525e+02,1.1382e+02,7.6200e+01,-1.8422e+02,1.1452e+02,7.8108e+01,-1.8422e+02,1.1452e+02,7.6200e+01,-1.8328e+02,1.1534e+02,7.8108e+01,-1.8328e+02,1.1534e+02,7.6200e+01,-1.8246e+02,1.1627e+02,7.8108e+01,-1.8246e+02,1.1627e+02,7.6200e+01,-1.8177e+02,1.1731e+02,7.8108e+01,-1.8177e+02,1.1731e+02,7.6200e+01,-1.8122e+02,1.1843e+02,7.8108e+01,-1.8122e+02,1.1843e+02,7.6200e+01,-1.8082e+02,1.1961e+02,7.8108e+01,-1.8082e+02,1.1961e+02,7.6200e+01,-1.8057e+02,1.2083e+02,7.8108e+01,-1.8057e+02,1.2083e+02,7.6200e+01,-1.8049e+02,1.2207e+02,7.8108e+01,-1.8049e+02,1.2207e+02,7.6200e+01});
			return Coordinate_7_389_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #390, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_390_vector()
		{
			MFVec3f Normal_7_390_vector = new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00});
			return Normal_7_390_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #396, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_396_point()
		{
			MFVec3f Coordinate_7_396_point = new MFVec3f(new double[] {-8.2067e+01,3.3152e+02,7.8108e+01,-8.2067e+01,3.3152e+02,7.6200e+01,-8.1904e+01,3.2903e+02,7.8108e+01,-8.1904e+01,3.2903e+02,7.6200e+01,-8.1418e+01,3.2659e+02,7.8108e+01,-8.1418e+01,3.2659e+02,7.6200e+01,-8.0617e+01,3.2423e+02,7.8108e+01,-8.0617e+01,3.2423e+02,7.6200e+01,-7.9515e+01,3.2200e+02,7.8108e+01,-7.9515e+01,3.2200e+02,7.6200e+01,-7.8131e+01,3.1992e+02,7.8108e+01,-7.8131e+01,3.1992e+02,7.6200e+01,-7.6488e+01,3.1805e+02,7.8108e+01,-7.6488e+01,3.1805e+02,7.6200e+01,-7.4614e+01,3.1641e+02,7.8108e+01,-7.4614e+01,3.1641e+02,7.6200e+01,-7.2542e+01,3.1502e+02,7.8108e+01,-7.2542e+01,3.1502e+02,7.6200e+01,-7.0308e+01,3.1392e+02,7.8108e+01,-7.0308e+01,3.1392e+02,7.6200e+01,-6.7948e+01,3.1312e+02,7.8108e+01,-6.7948e+01,3.1312e+02,7.6200e+01,-6.5504e+01,3.1263e+02,7.8108e+01,-6.5504e+01,3.1263e+02,7.6200e+01,-6.3017e+01,3.1247e+02,7.8108e+01,-6.3017e+01,3.1247e+02,7.6200e+01,-6.0531e+01,3.1263e+02,7.8108e+01,-6.0531e+01,3.1263e+02,7.6200e+01,-5.8087e+01,3.1312e+02,7.8108e+01,-5.8087e+01,3.1312e+02,7.6200e+01,-5.5727e+01,3.1392e+02,7.8108e+01,-5.5727e+01,3.1392e+02,7.6200e+01,-5.3492e+01,3.1502e+02,7.8108e+01,-5.3492e+01,3.1502e+02,7.6200e+01,-5.1420e+01,3.1641e+02,7.8108e+01,-5.1420e+01,3.1641e+02,7.6200e+01,-4.9547e+01,3.1805e+02,7.8108e+01,-4.9547e+01,3.1805e+02,7.6200e+01,-4.7904e+01,3.1992e+02,7.8108e+01,-4.7904e+01,3.1992e+02,7.6200e+01,-4.6520e+01,3.2200e+02,7.8108e+01,-4.6520e+01,3.2200e+02,7.6200e+01,-4.5417e+01,3.2423e+02,7.8108e+01,-4.5417e+01,3.2423e+02,7.6200e+01,-4.4617e+01,3.2659e+02,7.8108e+01,-4.4617e+01,3.2659e+02,7.6200e+01,-4.4130e+01,3.2903e+02,7.8108e+01,-4.4130e+01,3.2903e+02,7.6200e+01,-4.3967e+01,3.3152e+02,7.8108e+01,-4.3967e+01,3.3152e+02,7.6200e+01});
			return Coordinate_7_396_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #397, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_397_vector()
		{
			MFVec3f Normal_7_397_vector = new MFVec3f(new double[] {1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.9144e-01,1.3053e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.6593e-01,2.5882e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,9.2388e-01,3.8268e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,8.6603e-01,5.0000e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.9335e-01,6.0876e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,7.0711e-01,7.0711e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,6.0876e-01,7.9335e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,5.0000e-01,8.6603e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,3.8268e-01,9.2388e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,2.5882e-01,9.6593e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.3053e-01,9.9144e-01,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,1.2246e-16,1.0000e+00,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-1.3053e-01,9.9144e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-2.5882e-01,9.6593e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-3.8268e-01,9.2388e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-5.0000e-01,8.6603e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-6.0876e-01,7.9335e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.0711e-01,7.0711e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-7.9335e-01,6.0876e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-8.6603e-01,5.0000e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.2388e-01,3.8268e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.6593e-01,2.5882e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-9.9144e-01,1.3053e-01,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00,-1.0000e+00,1.8370e-16,-0.0000e+00});
			return Normal_7_397_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #403, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_403_point()
		{
			MFVec3f Coordinate_7_403_point = new MFVec3f(new double[] {-4.3967e+01,3.3152e+02,7.8108e+01,-4.3967e+01,3.3152e+02,7.6200e+01,-4.4130e+01,3.3401e+02,7.8108e+01,-4.4130e+01,3.3401e+02,7.6200e+01,-4.4617e+01,3.3645e+02,7.8108e+01,-4.4617e+01,3.3645e+02,7.6200e+01,-4.5417e+01,3.3881e+02,7.8108e+01,-4.5417e+01,3.3881e+02,7.6200e+01,-4.6520e+01,3.4105e+02,7.8108e+01,-4.6520e+01,3.4105e+02,7.6200e+01,-4.7904e+01,3.4312e+02,7.8108e+01,-4.7904e+01,3.4312e+02,7.6200e+01,-4.9547e+01,3.4499e+02,7.8108e+01,-4.9547e+01,3.4499e+02,7.6200e+01,-5.1420e+01,3.4663e+02,7.8108e+01,-5.1420e+01,3.4663e+02,7.6200e+01,-5.3492e+01,3.4802e+02,7.8108e+01,-5.3492e+01,3.4802e+02,7.6200e+01,-5.5727e+01,3.4912e+02,7.8108e+01,-5.5727e+01,3.4912e+02,7.6200e+01,-5.8087e+01,3.4992e+02,7.8108e+01,-5.8087e+01,3.4992e+02,7.6200e+01,-6.0531e+01,3.5041e+02,7.8108e+01,-6.0531e+01,3.5041e+02,7.6200e+01,-6.3017e+01,3.5057e+02,7.8108e+01,-6.3017e+01,3.5057e+02,7.6200e+01,-6.5504e+01,3.5041e+02,7.8108e+01,-6.5504e+01,3.5041e+02,7.6200e+01,-6.7948e+01,3.4992e+02,7.8108e+01,-6.7948e+01,3.4992e+02,7.6200e+01,-7.0308e+01,3.4912e+02,7.8108e+01,-7.0308e+01,3.4912e+02,7.6200e+01,-7.2542e+01,3.4802e+02,7.8108e+01,-7.2542e+01,3.4802e+02,7.6200e+01,-7.4614e+01,3.4663e+02,7.8108e+01,-7.4614e+01,3.4663e+02,7.6200e+01,-7.6488e+01,3.4499e+02,7.8108e+01,-7.6488e+01,3.4499e+02,7.6200e+01,-7.8131e+01,3.4312e+02,7.8108e+01,-7.8131e+01,3.4312e+02,7.6200e+01,-7.9515e+01,3.4105e+02,7.8108e+01,-7.9515e+01,3.4105e+02,7.6200e+01,-8.0617e+01,3.3881e+02,7.8108e+01,-8.0617e+01,3.3881e+02,7.6200e+01,-8.1418e+01,3.3645e+02,7.8108e+01,-8.1418e+01,3.3645e+02,7.6200e+01,-8.1904e+01,3.3401e+02,7.8108e+01,-8.1904e+01,3.3401e+02,7.6200e+01,-8.2067e+01,3.3152e+02,7.8108e+01,-8.2067e+01,3.3152e+02,7.6200e+01});
			return Coordinate_7_403_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #404, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_404_vector()
		{
			MFVec3f Normal_7_404_vector = new MFVec3f(new double[] {-1.0000e+00,-6.1232e-17,-0.0000e+00,-1.0000e+00,-6.1232e-17,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.9144e-01,-1.3053e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.6593e-01,-2.5882e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-9.2388e-01,-3.8268e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-8.6603e-01,-5.0000e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.9335e-01,-6.0876e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-7.0711e-01,-7.0711e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-6.0876e-01,-7.9335e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-5.0000e-01,-8.6603e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-3.8268e-01,-9.2388e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-2.5882e-01,-9.6593e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-1.3053e-01,-9.9144e-01,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,-0.0000e+00,-1.0000e+00,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,1.3053e-01,-9.9144e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,2.5882e-01,-9.6593e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,3.8268e-01,-9.2388e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,5.0000e-01,-8.6603e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,6.0876e-01,-7.9335e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.0711e-01,-7.0711e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,7.9335e-01,-6.0876e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,8.6603e-01,-5.0000e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.2388e-01,-3.8268e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.6593e-01,-2.5882e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,9.9144e-01,-1.3053e-01,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00,1.0000e+00,-6.1232e-17,-0.0000e+00});
			return Normal_7_404_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #410, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_410_point()
		{
			MFVec3f Coordinate_7_410_point = new MFVec3f(new double[] {-4.5066e+01,1.0058e+02,7.6200e+01,-4.5066e+01,1.0058e+02,7.8108e+01,-4.4534e+01,1.0142e+02,7.6200e+01,-4.4534e+01,1.0142e+02,7.8108e+01,-4.3901e+01,1.0219e+02,7.6200e+01,-4.3901e+01,1.0219e+02,7.8108e+01,-4.3176e+01,1.0288e+02,7.6200e+01,-4.3176e+01,1.0288e+02,7.8108e+01,-4.2371e+01,1.0346e+02,7.6200e+01,-4.2371e+01,1.0346e+02,7.8108e+01,-4.1499e+01,1.0395e+02,7.6200e+01,-4.1499e+01,1.0395e+02,7.8108e+01,-4.0573e+01,1.0432e+02,7.6200e+01,-4.0573e+01,1.0432e+02,7.8108e+01,-3.9608e+01,1.0457e+02,7.6200e+01,-3.9608e+01,1.0457e+02,7.8108e+01,-3.8619e+01,1.0469e+02,7.6200e+01,-3.8619e+01,1.0469e+02,7.8108e+01,-3.7623e+01,1.0470e+02,7.6200e+01,-3.7623e+01,1.0470e+02,7.8108e+01,-3.6633e+01,1.0457e+02,7.6200e+01,-3.6633e+01,1.0457e+02,7.8108e+01,-3.5667e+01,1.0433e+02,7.6200e+01,-3.5667e+01,1.0433e+02,7.8108e+01,-3.4739e+01,1.0397e+02,7.6200e+01,-3.4739e+01,1.0397e+02,7.8108e+01,-3.3865e+01,1.0349e+02,7.6200e+01,-3.3865e+01,1.0349e+02,7.8108e+01,-3.3057e+01,1.0290e+02,7.6200e+01,-3.3057e+01,1.0290e+02,7.8108e+01,-3.2328e+01,1.0222e+02,7.6200e+01,-3.2328e+01,1.0222e+02,7.8108e+01,-3.1691e+01,1.0146e+02,7.6200e+01,-3.1691e+01,1.0146e+02,7.8108e+01,-3.1154e+01,1.0062e+02,7.6200e+01,-3.1154e+01,1.0062e+02,7.8108e+01,-3.0728e+01,9.9716e+01,7.6200e+01,-3.0728e+01,9.9716e+01,7.8108e+01,-3.0417e+01,9.8768e+01,7.6200e+01,-3.0417e+01,9.8768e+01,7.8108e+01,-3.0228e+01,9.7790e+01,7.6200e+01,-3.0228e+01,9.7790e+01,7.8108e+01,-3.0163e+01,9.6795e+01,7.6200e+01,-3.0163e+01,9.6795e+01,7.8108e+01,-3.0222e+01,9.5800e+01,7.6200e+01,-3.0222e+01,9.5800e+01,7.8108e+01,-3.0407e+01,9.4820e+01,7.6200e+01,-3.0407e+01,9.4820e+01,7.8108e+01,-3.0712e+01,9.3872e+01,7.6200e+01,-3.0712e+01,9.3872e+01,7.8108e+01,-3.1134e+01,9.2969e+01,7.6200e+01,-3.1134e+01,9.2969e+01,7.8108e+01});
			return Coordinate_7_410_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #411, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_411_vector()
		{
			MFVec3f Normal_7_411_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.1057e-01,-5.8564e-01,-0.0000e+00,8.1057e-01,-5.8564e-01,-0.0000e+00,7.3078e-01,-6.8261e-01,-0.0000e+00,7.3078e-01,-6.8261e-01,-0.0000e+00,6.3947e-01,-7.6882e-01,-0.0000e+00,6.3947e-01,-7.6882e-01,-0.0000e+00,5.3807e-01,-8.4290e-01,-0.0000e+00,5.3807e-01,-8.4290e-01,-0.0000e+00,4.2818e-01,-9.0369e-01,-0.0000e+00,4.2818e-01,-9.0369e-01,-0.0000e+00,3.1154e-01,-9.5023e-01,-0.0000e+00,3.1154e-01,-9.5023e-01,-0.0000e+00,1.8999e-01,-9.8179e-01,-0.0000e+00,1.8999e-01,-9.8179e-01,-0.0000e+00,6.5440e-02,-9.9786e-01,-0.0000e+00,6.5440e-02,-9.9786e-01,-0.0000e+00,-6.0141e-02,-9.9819e-01,-0.0000e+00,-6.0141e-02,-9.9819e-01,-0.0000e+00,-1.8477e-01,-9.8278e-01,-0.0000e+00,-1.8477e-01,-9.8278e-01,-0.0000e+00,-3.0649e-01,-9.5187e-01,-0.0000e+00,-3.0649e-01,-9.5187e-01,-0.0000e+00,-4.2338e-01,-9.0595e-01,-0.0000e+00,-4.2338e-01,-9.0595e-01,-0.0000e+00,-5.3358e-01,-8.4575e-01,-0.0000e+00,-5.3358e-01,-8.4575e-01,-0.0000e+00,-6.3538e-01,-7.7220e-01,-0.0000e+00,-6.3538e-01,-7.7220e-01,-0.0000e+00,-7.2715e-01,-6.8648e-01,-0.0000e+00,-7.2715e-01,-6.8648e-01,-0.0000e+00,-8.0745e-01,-5.8993e-01,-0.0000e+00,-8.0745e-01,-5.8993e-01,-0.0000e+00,-8.7502e-01,-4.8408e-01,-0.0000e+00,-8.7502e-01,-4.8408e-01,-0.0000e+00,-9.2880e-01,-3.7059e-01,-0.0000e+00,-9.2880e-01,-3.7059e-01,-0.0000e+00,-9.6792e-01,-2.5126e-01,-0.0000e+00,-9.6792e-01,-2.5126e-01,-0.0000e+00,-9.9178e-01,-1.2797e-01,-0.0000e+00,-9.9178e-01,-1.2797e-01,-0.0000e+00,-1.0000e+00,-2.6548e-03,-0.0000e+00,-1.0000e+00,-2.6548e-03,-0.0000e+00,-9.9244e-01,1.2270e-01,-0.0000e+00,-9.9244e-01,1.2270e-01,-0.0000e+00,-9.6924e-01,2.4612e-01,-0.0000e+00,-9.6924e-01,2.4612e-01,-0.0000e+00,-9.3075e-01,3.6565e-01,-0.0000e+00,-9.3075e-01,3.6565e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_411_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #417, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_417_point()
		{
			MFVec3f Coordinate_7_417_point = new MFVec3f(new double[] {-3.1134e+01,9.2969e+01,7.6200e+01,-3.1134e+01,9.2969e+01,7.8108e+01,-3.1690e+01,9.2092e+01,7.6200e+01,-3.1690e+01,9.2092e+01,7.8108e+01,-3.2356e+01,9.1295e+01,7.6200e+01,-3.2356e+01,9.1295e+01,7.8108e+01,-3.3121e+01,9.0593e+01,7.6200e+01,-3.3121e+01,9.0593e+01,7.8108e+01,-3.3970e+01,8.9995e+01,7.6200e+01,-3.3970e+01,8.9995e+01,7.8108e+01,-3.4890e+01,8.9514e+01,7.6200e+01,-3.4890e+01,8.9514e+01,7.8108e+01,-3.5865e+01,8.9158e+01,7.6200e+01,-3.5865e+01,8.9158e+01,7.8108e+01,-3.6879e+01,8.8931e+01,7.6200e+01,-3.6879e+01,8.8931e+01,7.8108e+01,-3.7913e+01,8.8839e+01,7.6200e+01,-3.7913e+01,8.8839e+01,7.8108e+01,-3.8950e+01,8.8882e+01,7.6200e+01,-3.8950e+01,8.8882e+01,7.8108e+01,-3.9973e+01,8.9061e+01,7.6200e+01,-3.9973e+01,8.9061e+01,7.8108e+01,-4.0964e+01,8.9371e+01,7.6200e+01,-4.0964e+01,8.9371e+01,7.8108e+01,-4.1905e+01,8.9808e+01,7.6200e+01,-4.1905e+01,8.9808e+01,7.8108e+01,-4.2782e+01,9.0364e+01,7.6200e+01,-4.2782e+01,9.0364e+01,7.8108e+01,-4.3579e+01,9.1030e+01,7.6200e+01,-4.3579e+01,9.1030e+01,7.8108e+01,-4.4281e+01,9.1795e+01,7.6200e+01,-4.4281e+01,9.1795e+01,7.8108e+01,-4.4879e+01,9.2644e+01,7.6200e+01,-4.4879e+01,9.2644e+01,7.8108e+01,-4.5360e+01,9.3564e+01,7.6200e+01,-4.5360e+01,9.3564e+01,7.8108e+01,-4.5716e+01,9.4539e+01,7.6200e+01,-4.5716e+01,9.4539e+01,7.8108e+01,-4.5943e+01,9.5553e+01,7.6200e+01,-4.5943e+01,9.5553e+01,7.8108e+01,-4.6035e+01,9.6587e+01,7.6200e+01,-4.6035e+01,9.6587e+01,7.8108e+01,-4.5992e+01,9.7624e+01,7.6200e+01,-4.5992e+01,9.7624e+01,7.8108e+01,-4.5813e+01,9.8647e+01,7.6200e+01,-4.5813e+01,9.8647e+01,7.8108e+01,-4.5503e+01,9.9638e+01,7.6200e+01,-4.5503e+01,9.9638e+01,7.8108e+01,-4.5066e+01,1.0058e+02,7.6200e+01,-4.5066e+01,1.0058e+02,7.8108e+01});
			return Coordinate_7_417_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #418, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_418_vector()
		{
			MFVec3f Normal_7_418_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_418_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #424, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_424_point()
		{
			MFVec3f Coordinate_7_424_point = new MFVec3f(new double[] {-3.1134e+01,1.3742e+02,7.6200e+01,-3.1134e+01,1.3742e+02,7.8108e+01,-3.1666e+01,1.3658e+02,7.6200e+01,-3.1666e+01,1.3658e+02,7.8108e+01,-3.2299e+01,1.3581e+02,7.6200e+01,-3.2299e+01,1.3581e+02,7.8108e+01,-3.3024e+01,1.3512e+02,7.6200e+01,-3.3024e+01,1.3512e+02,7.8108e+01,-3.3829e+01,1.3453e+02,7.6200e+01,-3.3829e+01,1.3453e+02,7.8108e+01,-3.4701e+01,1.3405e+02,7.6200e+01,-3.4701e+01,1.3405e+02,7.8108e+01,-3.5627e+01,1.3368e+02,7.6200e+01,-3.5627e+01,1.3368e+02,7.8108e+01,-3.6592e+01,1.3343e+02,7.6200e+01,-3.6592e+01,1.3343e+02,7.8108e+01,-3.7581e+01,1.3330e+02,7.6200e+01,-3.7581e+01,1.3330e+02,7.8108e+01,-3.8577e+01,1.3330e+02,7.6200e+01,-3.8577e+01,1.3330e+02,7.8108e+01,-3.9567e+01,1.3342e+02,7.6200e+01,-3.9567e+01,1.3342e+02,7.8108e+01,-4.0533e+01,1.3367e+02,7.6200e+01,-4.0533e+01,1.3367e+02,7.8108e+01,-4.1461e+01,1.3403e+02,7.6200e+01,-4.1461e+01,1.3403e+02,7.8108e+01,-4.2335e+01,1.3451e+02,7.6200e+01,-4.2335e+01,1.3451e+02,7.8108e+01,-4.3143e+01,1.3509e+02,7.6200e+01,-4.3143e+01,1.3509e+02,7.8108e+01,-4.3872e+01,1.3578e+02,7.6200e+01,-4.3872e+01,1.3578e+02,7.8108e+01,-4.4509e+01,1.3654e+02,7.6200e+01,-4.4509e+01,1.3654e+02,7.8108e+01,-4.5046e+01,1.3738e+02,7.6200e+01,-4.5046e+01,1.3738e+02,7.8108e+01,-4.5472e+01,1.3828e+02,7.6200e+01,-4.5472e+01,1.3828e+02,7.8108e+01,-4.5783e+01,1.3923e+02,7.6200e+01,-4.5783e+01,1.3923e+02,7.8108e+01,-4.5972e+01,1.4021e+02,7.6200e+01,-4.5972e+01,1.4021e+02,7.8108e+01,-4.6037e+01,1.4120e+02,7.6200e+01,-4.6037e+01,1.4120e+02,7.8108e+01,-4.5978e+01,1.4220e+02,7.6200e+01,-4.5978e+01,1.4220e+02,7.8108e+01,-4.5793e+01,1.4318e+02,7.6200e+01,-4.5793e+01,1.4318e+02,7.8108e+01,-4.5488e+01,1.4413e+02,7.6200e+01,-4.5488e+01,1.4413e+02,7.8108e+01,-4.5066e+01,1.4503e+02,7.6200e+01,-4.5066e+01,1.4503e+02,7.8108e+01});
			return Coordinate_7_424_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #425, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_425_vector()
		{
			MFVec3f Normal_7_425_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.1057e-01,5.8564e-01,-0.0000e+00,-8.1057e-01,5.8564e-01,-0.0000e+00,-7.3078e-01,6.8261e-01,-0.0000e+00,-7.3078e-01,6.8261e-01,-0.0000e+00,-6.3947e-01,7.6882e-01,-0.0000e+00,-6.3947e-01,7.6882e-01,-0.0000e+00,-5.3807e-01,8.4290e-01,-0.0000e+00,-5.3807e-01,8.4290e-01,-0.0000e+00,-4.2818e-01,9.0369e-01,-0.0000e+00,-4.2818e-01,9.0369e-01,-0.0000e+00,-3.1154e-01,9.5023e-01,-0.0000e+00,-3.1154e-01,9.5023e-01,-0.0000e+00,-1.8999e-01,9.8179e-01,-0.0000e+00,-1.8999e-01,9.8179e-01,-0.0000e+00,-6.5440e-02,9.9786e-01,-0.0000e+00,-6.5440e-02,9.9786e-01,-0.0000e+00,6.0141e-02,9.9819e-01,-0.0000e+00,6.0141e-02,9.9819e-01,-0.0000e+00,1.8477e-01,9.8278e-01,-0.0000e+00,1.8477e-01,9.8278e-01,-0.0000e+00,3.0649e-01,9.5187e-01,-0.0000e+00,3.0649e-01,9.5187e-01,-0.0000e+00,4.2338e-01,9.0595e-01,-0.0000e+00,4.2338e-01,9.0595e-01,-0.0000e+00,5.3358e-01,8.4575e-01,-0.0000e+00,5.3358e-01,8.4575e-01,-0.0000e+00,6.3538e-01,7.7220e-01,-0.0000e+00,6.3538e-01,7.7220e-01,-0.0000e+00,7.2715e-01,6.8648e-01,-0.0000e+00,7.2715e-01,6.8648e-01,-0.0000e+00,8.0745e-01,5.8993e-01,-0.0000e+00,8.0745e-01,5.8993e-01,-0.0000e+00,8.7502e-01,4.8408e-01,-0.0000e+00,8.7502e-01,4.8408e-01,-0.0000e+00,9.2880e-01,3.7059e-01,-0.0000e+00,9.2880e-01,3.7059e-01,-0.0000e+00,9.6792e-01,2.5126e-01,-0.0000e+00,9.6792e-01,2.5126e-01,-0.0000e+00,9.9178e-01,1.2797e-01,-0.0000e+00,9.9178e-01,1.2797e-01,-0.0000e+00,1.0000e+00,2.6548e-03,-0.0000e+00,1.0000e+00,2.6548e-03,-0.0000e+00,9.9244e-01,-1.2270e-01,-0.0000e+00,9.9244e-01,-1.2270e-01,-0.0000e+00,9.6924e-01,-2.4612e-01,-0.0000e+00,9.6924e-01,-2.4612e-01,-0.0000e+00,9.3075e-01,-3.6565e-01,-0.0000e+00,9.3075e-01,-3.6565e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_425_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #431, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_431_point()
		{
			MFVec3f Coordinate_7_431_point = new MFVec3f(new double[] {-4.5066e+01,1.4503e+02,7.6200e+01,-4.5066e+01,1.4503e+02,7.8108e+01,-4.4510e+01,1.4591e+02,7.6200e+01,-4.4510e+01,1.4591e+02,7.8108e+01,-4.3844e+01,1.4670e+02,7.6200e+01,-4.3844e+01,1.4670e+02,7.8108e+01,-4.3079e+01,1.4741e+02,7.6200e+01,-4.3079e+01,1.4741e+02,7.8108e+01,-4.2230e+01,1.4800e+02,7.6200e+01,-4.2230e+01,1.4800e+02,7.8108e+01,-4.1310e+01,1.4848e+02,7.6200e+01,-4.1310e+01,1.4848e+02,7.8108e+01,-4.0335e+01,1.4884e+02,7.6200e+01,-4.0335e+01,1.4884e+02,7.8108e+01,-3.9321e+01,1.4907e+02,7.6200e+01,-3.9321e+01,1.4907e+02,7.8108e+01,-3.8287e+01,1.4916e+02,7.6200e+01,-3.8287e+01,1.4916e+02,7.8108e+01,-3.7250e+01,1.4912e+02,7.6200e+01,-3.7250e+01,1.4912e+02,7.8108e+01,-3.6227e+01,1.4894e+02,7.6200e+01,-3.6227e+01,1.4894e+02,7.8108e+01,-3.5236e+01,1.4863e+02,7.6200e+01,-3.5236e+01,1.4863e+02,7.8108e+01,-3.4295e+01,1.4819e+02,7.6200e+01,-3.4295e+01,1.4819e+02,7.8108e+01,-3.3418e+01,1.4763e+02,7.6200e+01,-3.3418e+01,1.4763e+02,7.8108e+01,-3.2621e+01,1.4697e+02,7.6200e+01,-3.2621e+01,1.4697e+02,7.8108e+01,-3.1919e+01,1.4620e+02,7.6200e+01,-3.1919e+01,1.4620e+02,7.8108e+01,-3.1321e+01,1.4535e+02,7.6200e+01,-3.1321e+01,1.4535e+02,7.8108e+01,-3.0840e+01,1.4443e+02,7.6200e+01,-3.0840e+01,1.4443e+02,7.8108e+01,-3.0484e+01,1.4346e+02,7.6200e+01,-3.0484e+01,1.4346e+02,7.8108e+01,-3.0257e+01,1.4245e+02,7.6200e+01,-3.0257e+01,1.4245e+02,7.8108e+01,-3.0165e+01,1.4141e+02,7.6200e+01,-3.0165e+01,1.4141e+02,7.8108e+01,-3.0208e+01,1.4037e+02,7.6200e+01,-3.0208e+01,1.4037e+02,7.8108e+01,-3.0387e+01,1.3935e+02,7.6200e+01,-3.0387e+01,1.3935e+02,7.8108e+01,-3.0697e+01,1.3836e+02,7.6200e+01,-3.0697e+01,1.3836e+02,7.8108e+01,-3.1134e+01,1.3742e+02,7.6200e+01,-3.1134e+01,1.3742e+02,7.8108e+01});
			return Coordinate_7_431_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #432, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_432_vector()
		{
			MFVec3f Normal_7_432_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_432_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #438, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_438_point()
		{
			MFVec3f Coordinate_7_438_point = new MFVec3f(new double[] {-3.1134e+01,1.8187e+02,7.6200e+01,-3.1134e+01,1.8187e+02,7.8108e+01,-3.1690e+01,1.8099e+02,7.6200e+01,-3.1690e+01,1.8099e+02,7.8108e+01,-3.2356e+01,1.8020e+02,7.6200e+01,-3.2356e+01,1.8020e+02,7.8108e+01,-3.3121e+01,1.7949e+02,7.6200e+01,-3.3121e+01,1.7949e+02,7.8108e+01,-3.3970e+01,1.7890e+02,7.6200e+01,-3.3970e+01,1.7890e+02,7.8108e+01,-3.4890e+01,1.7841e+02,7.6200e+01,-3.4890e+01,1.7841e+02,7.8108e+01,-3.5865e+01,1.7806e+02,7.6200e+01,-3.5865e+01,1.7806e+02,7.8108e+01,-3.6879e+01,1.7783e+02,7.6200e+01,-3.6879e+01,1.7783e+02,7.8108e+01,-3.7913e+01,1.7774e+02,7.6200e+01,-3.7913e+01,1.7774e+02,7.8108e+01,-3.8950e+01,1.7778e+02,7.6200e+01,-3.8950e+01,1.7778e+02,7.8108e+01,-3.9973e+01,1.7796e+02,7.6200e+01,-3.9973e+01,1.7796e+02,7.8108e+01,-4.0964e+01,1.7827e+02,7.6200e+01,-4.0964e+01,1.7827e+02,7.8108e+01,-4.1905e+01,1.7871e+02,7.6200e+01,-4.1905e+01,1.7871e+02,7.8108e+01,-4.2782e+01,1.7926e+02,7.6200e+01,-4.2782e+01,1.7926e+02,7.8108e+01,-4.3579e+01,1.7993e+02,7.6200e+01,-4.3579e+01,1.7993e+02,7.8108e+01,-4.4281e+01,1.8069e+02,7.6200e+01,-4.4281e+01,1.8069e+02,7.8108e+01,-4.4879e+01,1.8154e+02,7.6200e+01,-4.4879e+01,1.8154e+02,7.8108e+01,-4.5360e+01,1.8246e+02,7.6200e+01,-4.5360e+01,1.8246e+02,7.8108e+01,-4.5716e+01,1.8344e+02,7.6200e+01,-4.5716e+01,1.8344e+02,7.8108e+01,-4.5943e+01,1.8445e+02,7.6200e+01,-4.5943e+01,1.8445e+02,7.8108e+01,-4.6035e+01,1.8549e+02,7.6200e+01,-4.6035e+01,1.8549e+02,7.8108e+01,-4.5992e+01,1.8652e+02,7.6200e+01,-4.5992e+01,1.8652e+02,7.8108e+01,-4.5813e+01,1.8755e+02,7.6200e+01,-4.5813e+01,1.8755e+02,7.8108e+01,-4.5503e+01,1.8854e+02,7.6200e+01,-4.5503e+01,1.8854e+02,7.8108e+01,-4.5066e+01,1.8948e+02,7.6200e+01,-4.5066e+01,1.8948e+02,7.8108e+01});
			return Coordinate_7_438_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #439, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_439_vector()
		{
			MFVec3f Normal_7_439_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_439_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #445, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_445_point()
		{
			MFVec3f Coordinate_7_445_point = new MFVec3f(new double[] {-4.5066e+01,1.8948e+02,7.6200e+01,-4.5066e+01,1.8948e+02,7.8108e+01,-4.4510e+01,1.9036e+02,7.6200e+01,-4.4510e+01,1.9036e+02,7.8108e+01,-4.3844e+01,1.9115e+02,7.6200e+01,-4.3844e+01,1.9115e+02,7.8108e+01,-4.3079e+01,1.9186e+02,7.6200e+01,-4.3079e+01,1.9186e+02,7.8108e+01,-4.2230e+01,1.9245e+02,7.6200e+01,-4.2230e+01,1.9245e+02,7.8108e+01,-4.1310e+01,1.9293e+02,7.6200e+01,-4.1310e+01,1.9293e+02,7.8108e+01,-4.0335e+01,1.9329e+02,7.6200e+01,-4.0335e+01,1.9329e+02,7.8108e+01,-3.9321e+01,1.9352e+02,7.6200e+01,-3.9321e+01,1.9352e+02,7.8108e+01,-3.8287e+01,1.9361e+02,7.6200e+01,-3.8287e+01,1.9361e+02,7.8108e+01,-3.7250e+01,1.9357e+02,7.6200e+01,-3.7250e+01,1.9357e+02,7.8108e+01,-3.6227e+01,1.9339e+02,7.6200e+01,-3.6227e+01,1.9339e+02,7.8108e+01,-3.5236e+01,1.9308e+02,7.6200e+01,-3.5236e+01,1.9308e+02,7.8108e+01,-3.4295e+01,1.9264e+02,7.6200e+01,-3.4295e+01,1.9264e+02,7.8108e+01,-3.3418e+01,1.9208e+02,7.6200e+01,-3.3418e+01,1.9208e+02,7.8108e+01,-3.2621e+01,1.9142e+02,7.6200e+01,-3.2621e+01,1.9142e+02,7.8108e+01,-3.1919e+01,1.9065e+02,7.6200e+01,-3.1919e+01,1.9065e+02,7.8108e+01,-3.1321e+01,1.8980e+02,7.6200e+01,-3.1321e+01,1.8980e+02,7.8108e+01,-3.0840e+01,1.8888e+02,7.6200e+01,-3.0840e+01,1.8888e+02,7.8108e+01,-3.0484e+01,1.8791e+02,7.6200e+01,-3.0484e+01,1.8791e+02,7.8108e+01,-3.0257e+01,1.8690e+02,7.6200e+01,-3.0257e+01,1.8690e+02,7.8108e+01,-3.0165e+01,1.8586e+02,7.6200e+01,-3.0165e+01,1.8586e+02,7.8108e+01,-3.0208e+01,1.8482e+02,7.6200e+01,-3.0208e+01,1.8482e+02,7.8108e+01,-3.0387e+01,1.8380e+02,7.6200e+01,-3.0387e+01,1.8380e+02,7.8108e+01,-3.0697e+01,1.8281e+02,7.6200e+01,-3.0697e+01,1.8281e+02,7.8108e+01,-3.1134e+01,1.8187e+02,7.6200e+01,-3.1134e+01,1.8187e+02,7.8108e+01});
			return Coordinate_7_445_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #446, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_446_vector()
		{
			MFVec3f Normal_7_446_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_446_vector;
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
			MFVec3f Coordinate_7_452_point = new MFVec3f(new double[] {-3.1134e+01,2.2632e+02,7.6200e+01,-3.1134e+01,2.2632e+02,7.8108e+01,-3.1690e+01,2.2544e+02,7.6200e+01,-3.1690e+01,2.2544e+02,7.8108e+01,-3.2356e+01,2.2465e+02,7.6200e+01,-3.2356e+01,2.2465e+02,7.8108e+01,-3.3121e+01,2.2394e+02,7.6200e+01,-3.3121e+01,2.2394e+02,7.8108e+01,-3.3970e+01,2.2335e+02,7.6200e+01,-3.3970e+01,2.2335e+02,7.8108e+01,-3.4890e+01,2.2286e+02,7.6200e+01,-3.4890e+01,2.2286e+02,7.8108e+01,-3.5865e+01,2.2251e+02,7.6200e+01,-3.5865e+01,2.2251e+02,7.8108e+01,-3.6879e+01,2.2228e+02,7.6200e+01,-3.6879e+01,2.2228e+02,7.8108e+01,-3.7913e+01,2.2219e+02,7.6200e+01,-3.7913e+01,2.2219e+02,7.8108e+01,-3.8950e+01,2.2223e+02,7.6200e+01,-3.8950e+01,2.2223e+02,7.8108e+01,-3.9973e+01,2.2241e+02,7.6200e+01,-3.9973e+01,2.2241e+02,7.8108e+01,-4.0964e+01,2.2272e+02,7.6200e+01,-4.0964e+01,2.2272e+02,7.8108e+01,-4.1905e+01,2.2316e+02,7.6200e+01,-4.1905e+01,2.2316e+02,7.8108e+01,-4.2782e+01,2.2371e+02,7.6200e+01,-4.2782e+01,2.2371e+02,7.8108e+01,-4.3579e+01,2.2438e+02,7.6200e+01,-4.3579e+01,2.2438e+02,7.8108e+01,-4.4281e+01,2.2514e+02,7.6200e+01,-4.4281e+01,2.2514e+02,7.8108e+01,-4.4879e+01,2.2599e+02,7.6200e+01,-4.4879e+01,2.2599e+02,7.8108e+01,-4.5360e+01,2.2691e+02,7.6200e+01,-4.5360e+01,2.2691e+02,7.8108e+01,-4.5716e+01,2.2789e+02,7.6200e+01,-4.5716e+01,2.2789e+02,7.8108e+01,-4.5943e+01,2.2890e+02,7.6200e+01,-4.5943e+01,2.2890e+02,7.8108e+01,-4.6035e+01,2.2994e+02,7.6200e+01,-4.6035e+01,2.2994e+02,7.8108e+01,-4.5992e+01,2.3097e+02,7.6200e+01,-4.5992e+01,2.3097e+02,7.8108e+01,-4.5813e+01,2.3200e+02,7.6200e+01,-4.5813e+01,2.3200e+02,7.8108e+01,-4.5503e+01,2.3299e+02,7.6200e+01,-4.5503e+01,2.3299e+02,7.8108e+01,-4.5066e+01,2.3393e+02,7.6200e+01,-4.5066e+01,2.3393e+02,7.8108e+01});
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
			MFVec3f Normal_7_453_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_453_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #459, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_459_point()
		{
			MFVec3f Coordinate_7_459_point = new MFVec3f(new double[] {-4.5066e+01,2.3393e+02,7.6200e+01,-4.5066e+01,2.3393e+02,7.8108e+01,-4.4510e+01,2.3481e+02,7.6200e+01,-4.4510e+01,2.3481e+02,7.8108e+01,-4.3844e+01,2.3560e+02,7.6200e+01,-4.3844e+01,2.3560e+02,7.8108e+01,-4.3079e+01,2.3631e+02,7.6200e+01,-4.3079e+01,2.3631e+02,7.8108e+01,-4.2230e+01,2.3690e+02,7.6200e+01,-4.2230e+01,2.3690e+02,7.8108e+01,-4.1310e+01,2.3738e+02,7.6200e+01,-4.1310e+01,2.3738e+02,7.8108e+01,-4.0335e+01,2.3774e+02,7.6200e+01,-4.0335e+01,2.3774e+02,7.8108e+01,-3.9321e+01,2.3797e+02,7.6200e+01,-3.9321e+01,2.3797e+02,7.8108e+01,-3.8287e+01,2.3806e+02,7.6200e+01,-3.8287e+01,2.3806e+02,7.8108e+01,-3.7250e+01,2.3802e+02,7.6200e+01,-3.7250e+01,2.3802e+02,7.8108e+01,-3.6227e+01,2.3784e+02,7.6200e+01,-3.6227e+01,2.3784e+02,7.8108e+01,-3.5236e+01,2.3753e+02,7.6200e+01,-3.5236e+01,2.3753e+02,7.8108e+01,-3.4295e+01,2.3709e+02,7.6200e+01,-3.4295e+01,2.3709e+02,7.8108e+01,-3.3418e+01,2.3653e+02,7.6200e+01,-3.3418e+01,2.3653e+02,7.8108e+01,-3.2621e+01,2.3587e+02,7.6200e+01,-3.2621e+01,2.3587e+02,7.8108e+01,-3.1919e+01,2.3510e+02,7.6200e+01,-3.1919e+01,2.3510e+02,7.8108e+01,-3.1321e+01,2.3425e+02,7.6200e+01,-3.1321e+01,2.3425e+02,7.8108e+01,-3.0840e+01,2.3333e+02,7.6200e+01,-3.0840e+01,2.3333e+02,7.8108e+01,-3.0484e+01,2.3236e+02,7.6200e+01,-3.0484e+01,2.3236e+02,7.8108e+01,-3.0257e+01,2.3135e+02,7.6200e+01,-3.0257e+01,2.3135e+02,7.8108e+01,-3.0165e+01,2.3031e+02,7.6200e+01,-3.0165e+01,2.3031e+02,7.8108e+01,-3.0208e+01,2.2927e+02,7.6200e+01,-3.0208e+01,2.2927e+02,7.8108e+01,-3.0387e+01,2.2825e+02,7.6200e+01,-3.0387e+01,2.2825e+02,7.8108e+01,-3.0697e+01,2.2726e+02,7.6200e+01,-3.0697e+01,2.2726e+02,7.8108e+01,-3.1134e+01,2.2632e+02,7.6200e+01,-3.1134e+01,2.2632e+02,7.8108e+01});
			return Coordinate_7_459_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #460, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_460_vector()
		{
			MFVec3f Normal_7_460_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_460_vector;
		}
		/** Large attribute array: IndexedTriangleSet index field, scene-graph level=6, element #478, 465 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedTriangleSet_6_478_index()
		{
			MFInt32 IndexedTriangleSet_6_478_index = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedTriangleSet_6_478_index_1()));
			return IndexedTriangleSet_6_478_index;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #478, 471 total numbers made up of 157 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_478_point()
		{
			MFVec3f Coordinate_7_478_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_478_point_1()))
				.append(new MFVec3f(getCoordinate_7_478_point_2()));
			return Coordinate_7_478_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #604, 144 total numbers made up of 48 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_604_point()
		{
			MFVec3f Coordinate_7_604_point = new MFVec3f(new double[] {-2.1265e+02,4.3464e+02,2.6593e+01,-2.1265e+02,4.3401e+02,2.6593e+01,-2.1269e+02,4.3464e+02,2.6416e+01,-2.1269e+02,4.3401e+02,2.6416e+01,-2.1274e+02,4.3464e+02,2.6245e+01,-2.1274e+02,4.3401e+02,2.6245e+01,-2.1282e+02,4.3464e+02,2.6082e+01,-2.1282e+02,4.3401e+02,2.6082e+01,-2.1292e+02,4.3464e+02,2.5931e+01,-2.1292e+02,4.3401e+02,2.5931e+01,-2.1304e+02,4.3464e+02,2.5793e+01,-2.1304e+02,4.3401e+02,2.5793e+01,-2.1317e+02,4.3464e+02,2.5671e+01,-2.1317e+02,4.3401e+02,2.5671e+01,-2.1332e+02,4.3464e+02,2.5567e+01,-2.1332e+02,4.3401e+02,2.5567e+01,-2.1347e+02,4.3464e+02,2.5482e+01,-2.1347e+02,4.3401e+02,2.5482e+01,-2.1364e+02,4.3464e+02,2.5419e+01,-2.1364e+02,4.3401e+02,2.5419e+01,-2.1382e+02,4.3464e+02,2.5377e+01,-2.1382e+02,4.3401e+02,2.5377e+01,-2.1400e+02,4.3464e+02,2.5358e+01,-2.1400e+02,4.3401e+02,2.5358e+01,-2.1418e+02,4.3464e+02,2.5361e+01,-2.1418e+02,4.3401e+02,2.5361e+01,-2.1436e+02,4.3464e+02,2.5388e+01,-2.1436e+02,4.3401e+02,2.5388e+01,-2.1453e+02,4.3464e+02,2.5437e+01,-2.1453e+02,4.3401e+02,2.5437e+01,-2.1469e+02,4.3464e+02,2.5507e+01,-2.1469e+02,4.3401e+02,2.5507e+01,-2.1485e+02,4.3464e+02,2.5598e+01,-2.1485e+02,4.3401e+02,2.5598e+01,-2.1499e+02,4.3464e+02,2.5708e+01,-2.1499e+02,4.3401e+02,2.5708e+01,-2.1512e+02,4.3464e+02,2.5835e+01,-2.1512e+02,4.3401e+02,2.5835e+01,-2.1523e+02,4.3464e+02,2.5978e+01,-2.1523e+02,4.3401e+02,2.5978e+01,-2.1532e+02,4.3464e+02,2.6133e+01,-2.1532e+02,4.3401e+02,2.6133e+01,-2.1539e+02,4.3464e+02,2.6299e+01,-2.1539e+02,4.3401e+02,2.6299e+01,-2.1544e+02,4.3464e+02,2.6472e+01,-2.1544e+02,4.3401e+02,2.6472e+01,-2.1547e+02,4.3464e+02,2.6650e+01,-2.1547e+02,4.3401e+02,2.6650e+01});
			return Coordinate_7_604_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #605, 144 total numbers made up of 48 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_605_vector()
		{
			MFVec3f Normal_7_605_vector = new MFVec3f(new double[] {9.9188e-01,0.0000e+00,-1.2721e-01,9.9188e-01,0.0000e+00,-1.2721e-01,9.6771e-01,0.0000e+00,-2.5208e-01,9.6771e-01,0.0000e+00,-2.5208e-01,9.2788e-01,0.0000e+00,-3.7287e-01,9.2788e-01,0.0000e+00,-3.7287e-01,8.7305e-01,0.0000e+00,-4.8763e-01,8.7305e-01,0.0000e+00,-4.8763e-01,8.0409e-01,0.0000e+00,-5.9451e-01,8.0409e-01,0.0000e+00,-5.9451e-01,7.2213e-01,0.0000e+00,-6.9176e-01,7.2213e-01,0.0000e+00,-6.9176e-01,6.2848e-01,0.0000e+00,-7.7783e-01,6.2848e-01,0.0000e+00,-7.7783e-01,5.2467e-01,0.0000e+00,-8.5131e-01,5.2467e-01,0.0000e+00,-8.5131e-01,4.1237e-01,0.0000e+00,-9.1102e-01,4.1237e-01,0.0000e+00,-9.1102e-01,2.9339e-01,0.0000e+00,-9.5599e-01,2.9339e-01,0.0000e+00,-9.5599e-01,1.6968e-01,0.0000e+00,-9.8550e-01,1.6968e-01,0.0000e+00,-9.8550e-01,4.3213e-02,0.0000e+00,-9.9907e-01,4.3213e-02,0.0000e+00,-9.9907e-01,-8.3948e-02,0.0000e+00,-9.9647e-01,-8.3948e-02,0.0000e+00,-9.9647e-01,-2.0975e-01,0.0000e+00,-9.7775e-01,-2.0975e-01,0.0000e+00,-9.7775e-01,-3.3216e-01,0.0000e+00,-9.4322e-01,-3.3216e-01,0.0000e+00,-9.4322e-01,-4.4920e-01,0.0000e+00,-8.9343e-01,-4.4920e-01,0.0000e+00,-8.9343e-01,-5.5897e-01,0.0000e+00,-8.2919e-01,-5.5897e-01,0.0000e+00,-8.2919e-01,-6.5970e-01,0.0000e+00,-7.5153e-01,-6.5970e-01,0.0000e+00,-7.5153e-01,-7.4976e-01,0.0000e+00,-6.6171e-01,-7.4976e-01,0.0000e+00,-6.6171e-01,-8.2768e-01,0.0000e+00,-5.6120e-01,-8.2768e-01,0.0000e+00,-5.6120e-01,-8.9222e-01,0.0000e+00,-4.5160e-01,-8.9222e-01,0.0000e+00,-4.5160e-01,-9.4233e-01,0.0000e+00,-3.3469e-01,-9.4233e-01,0.0000e+00,-3.3469e-01,-9.7719e-01,0.0000e+00,-2.1238e-01,-9.7719e-01,0.0000e+00,-2.1238e-01,-9.9624e-01,0.0000e+00,-8.6624e-02,-9.9624e-01,0.0000e+00,-8.6624e-02});
			return Normal_7_605_vector;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #618, 84 total numbers made up of 28 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_618_vector()
		{
			MFVec3f Normal_7_618_vector = new MFVec3f(new double[] {-3.7848e-02,-0.0000e+00,-9.9928e-01,-3.7848e-02,-0.0000e+00,-9.9928e-01,-1.6090e-01,-0.0000e+00,-9.8697e-01,-1.6090e-01,-0.0000e+00,-9.8697e-01,-2.8149e-01,-0.0000e+00,-9.5957e-01,-2.8149e-01,-0.0000e+00,-9.5957e-01,-3.9777e-01,-0.0000e+00,-9.1749e-01,-3.9777e-01,-0.0000e+00,-9.1749e-01,-5.0797e-01,-0.0000e+00,-8.6137e-01,-5.0797e-01,-0.0000e+00,-8.6137e-01,-6.1040e-01,-0.0000e+00,-7.9209e-01,-6.1040e-01,-0.0000e+00,-7.9209e-01,-7.0350e-01,-0.0000e+00,-7.1069e-01,-7.0350e-01,-0.0000e+00,-7.1069e-01,-7.8584e-01,-0.0000e+00,-6.1843e-01,-7.8584e-01,-0.0000e+00,-6.1843e-01,-8.5616e-01,-0.0000e+00,-5.1671e-01,-8.5616e-01,-0.0000e+00,-5.1671e-01,-9.1339e-01,-0.0000e+00,-4.0708e-01,-9.1339e-01,-0.0000e+00,-4.0708e-01,-9.5665e-01,-0.0000e+00,-2.9123e-01,-9.5665e-01,-0.0000e+00,-2.9123e-01,-9.8528e-01,-0.0000e+00,-1.7093e-01,-9.8528e-01,-0.0000e+00,-1.7093e-01,-9.9885e-01,-0.0000e+00,-4.8010e-02,-9.9885e-01,-0.0000e+00,-4.8010e-02,-9.9714e-01,-0.0000e+00,7.5642e-02,-9.9714e-01,-0.0000e+00,7.5642e-02});
			return Normal_7_618_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #693, 138 total numbers made up of 46 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_693_point()
		{
			MFVec3f Coordinate_7_693_point = new MFVec3f(new double[] {-2.0955e+02,4.3464e+02,2.6133e+01,-2.0955e+02,4.3401e+02,2.6133e+01,-2.0968e+02,4.3464e+02,2.5561e+01,-2.0968e+02,4.3401e+02,2.5561e+01,-2.0988e+02,4.3464e+02,2.5010e+01,-2.0988e+02,4.3401e+02,2.5010e+01,-2.1015e+02,4.3464e+02,2.4490e+01,-2.1015e+02,4.3401e+02,2.4490e+01,-2.1049e+02,4.3464e+02,2.4008e+01,-2.1049e+02,4.3401e+02,2.4008e+01,-2.1088e+02,4.3464e+02,2.3574e+01,-2.1088e+02,4.3401e+02,2.3574e+01,-2.1133e+02,4.3464e+02,2.3193e+01,-2.1133e+02,4.3401e+02,2.3193e+01,-2.1182e+02,4.3464e+02,2.2873e+01,-2.1182e+02,4.3401e+02,2.2873e+01,-2.1234e+02,4.3464e+02,2.2618e+01,-2.1234e+02,4.3401e+02,2.2618e+01,-2.1290e+02,4.3464e+02,2.2433e+01,-2.1290e+02,4.3401e+02,2.2433e+01,-2.1348e+02,4.3464e+02,2.2320e+01,-2.1348e+02,4.3401e+02,2.2320e+01,-2.1406e+02,4.3464e+02,2.2283e+01,-2.1406e+02,4.3401e+02,2.2283e+01,-2.1465e+02,4.3464e+02,2.2320e+01,-2.1465e+02,4.3401e+02,2.2320e+01,-2.1522e+02,4.3464e+02,2.2433e+01,-2.1522e+02,4.3401e+02,2.2433e+01,-2.1578e+02,4.3464e+02,2.2618e+01,-2.1578e+02,4.3401e+02,2.2618e+01,-2.1631e+02,4.3464e+02,2.2873e+01,-2.1631e+02,4.3401e+02,2.2873e+01,-2.1680e+02,4.3464e+02,2.3193e+01,-2.1680e+02,4.3401e+02,2.3193e+01,-2.1724e+02,4.3464e+02,2.3574e+01,-2.1724e+02,4.3401e+02,2.3574e+01,-2.1764e+02,4.3464e+02,2.4008e+01,-2.1764e+02,4.3401e+02,2.4008e+01,-2.1797e+02,4.3464e+02,2.4490e+01,-2.1797e+02,4.3401e+02,2.4490e+01,-2.1824e+02,4.3464e+02,2.5010e+01,-2.1824e+02,4.3401e+02,2.5010e+01,-2.1844e+02,4.3464e+02,2.5561e+01,-2.1844e+02,4.3401e+02,2.5561e+01,-2.1857e+02,4.3464e+02,2.6133e+01,-2.1857e+02,4.3401e+02,2.6133e+01});
			return Coordinate_7_693_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #694, 138 total numbers made up of 46 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_694_vector()
		{
			MFVec3f Normal_7_694_vector = new MFVec3f(new double[] {-9.8756e-01,-0.0000e+00,1.5726e-01,-9.8756e-01,-0.0000e+00,1.5726e-01,-9.5928e-01,-0.0000e+00,2.8246e-01,-9.5928e-01,-0.0000e+00,2.8246e-01,-9.1519e-01,-0.0000e+00,4.0301e-01,-9.1519e-01,-0.0000e+00,4.0301e-01,-8.5603e-01,-0.0000e+00,5.1692e-01,-8.5603e-01,-0.0000e+00,5.1692e-01,-7.8277e-01,-0.0000e+00,6.2231e-01,-7.8277e-01,-0.0000e+00,6.2231e-01,-6.9661e-01,-0.0000e+00,7.1745e-01,-6.9661e-01,-0.0000e+00,7.1745e-01,-5.9897e-01,-0.0000e+00,8.0077e-01,-5.9897e-01,-0.0000e+00,8.0077e-01,-4.9147e-01,-0.0000e+00,8.7090e-01,-4.9147e-01,-0.0000e+00,8.7090e-01,-3.7587e-01,-0.0000e+00,9.2667e-01,-3.7587e-01,-0.0000e+00,9.2667e-01,-2.5407e-01,-0.0000e+00,9.6719e-01,-2.5407e-01,-0.0000e+00,9.6719e-01,-1.2809e-01,-0.0000e+00,9.9176e-01,-1.2809e-01,-0.0000e+00,9.9176e-01,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00,1.2809e-01,-0.0000e+00,9.9176e-01,1.2809e-01,-0.0000e+00,9.9176e-01,2.5407e-01,-0.0000e+00,9.6719e-01,2.5407e-01,-0.0000e+00,9.6719e-01,3.7587e-01,-0.0000e+00,9.2667e-01,3.7587e-01,-0.0000e+00,9.2667e-01,4.9147e-01,-0.0000e+00,8.7090e-01,4.9147e-01,-0.0000e+00,8.7090e-01,5.9897e-01,-0.0000e+00,8.0077e-01,5.9897e-01,-0.0000e+00,8.0077e-01,6.9661e-01,-0.0000e+00,7.1745e-01,6.9661e-01,-0.0000e+00,7.1745e-01,7.8277e-01,-0.0000e+00,6.2231e-01,7.8277e-01,-0.0000e+00,6.2231e-01,8.5603e-01,-0.0000e+00,5.1692e-01,8.5603e-01,-0.0000e+00,5.1692e-01,9.1519e-01,-0.0000e+00,4.0301e-01,9.1519e-01,-0.0000e+00,4.0301e-01,9.5928e-01,-0.0000e+00,2.8246e-01,9.5928e-01,-0.0000e+00,2.8246e-01,9.8756e-01,-0.0000e+00,1.5726e-01,9.8756e-01,-0.0000e+00,1.5726e-01});
			return Normal_7_694_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #725, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_725_point()
		{
			MFVec3f Coordinate_7_725_point = new MFVec3f(new double[] {-2.2393e+02,4.3464e+02,6.1655e+01,-2.2393e+02,4.3401e+02,6.1655e+01,-2.2421e+02,4.3464e+02,6.1952e+01,-2.2421e+02,4.3401e+02,6.1952e+01,-2.2445e+02,4.3464e+02,6.2283e+01,-2.2445e+02,4.3401e+02,6.2283e+01,-2.2465e+02,4.3464e+02,6.2642e+01,-2.2465e+02,4.3401e+02,6.2642e+01,-2.2481e+02,4.3464e+02,6.3023e+01,-2.2481e+02,4.3401e+02,6.3023e+01,-2.2491e+02,4.3464e+02,6.3420e+01,-2.2491e+02,4.3401e+02,6.3420e+01,-2.2497e+02,4.3464e+02,6.3827e+01,-2.2497e+02,4.3401e+02,6.3827e+01,-2.2497e+02,4.3464e+02,6.4238e+01,-2.2497e+02,4.3401e+02,6.4238e+01,-2.2492e+02,4.3464e+02,6.4646e+01,-2.2492e+02,4.3401e+02,6.4646e+01,-2.2482e+02,4.3464e+02,6.5044e+01,-2.2482e+02,4.3401e+02,6.5044e+01,-2.2467e+02,4.3464e+02,6.5427e+01,-2.2467e+02,4.3401e+02,6.5427e+01,-2.2447e+02,4.3464e+02,6.5787e+01,-2.2447e+02,4.3401e+02,6.5787e+01,-2.2423e+02,4.3464e+02,6.6121e+01,-2.2423e+02,4.3401e+02,6.6121e+01,-2.2395e+02,4.3464e+02,6.6421e+01,-2.2395e+02,4.3401e+02,6.6421e+01,-2.2363e+02,4.3464e+02,6.6683e+01,-2.2363e+02,4.3401e+02,6.6683e+01,-2.2329e+02,4.3464e+02,6.6904e+01,-2.2329e+02,4.3401e+02,6.6904e+01,-2.2292e+02,4.3464e+02,6.7080e+01,-2.2292e+02,4.3401e+02,6.7080e+01,-2.2253e+02,4.3464e+02,6.7207e+01,-2.2253e+02,4.3401e+02,6.7207e+01,-2.2212e+02,4.3464e+02,6.7284e+01,-2.2212e+02,4.3401e+02,6.7284e+01,-2.2171e+02,4.3464e+02,6.7310e+01,-2.2171e+02,4.3401e+02,6.7310e+01});
			return Coordinate_7_725_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #726, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_726_vector()
		{
			MFVec3f Normal_7_726_vector = new MFVec3f(new double[] {6.7893e-01,-0.0000e+00,7.3420e-01,6.7893e-01,-0.0000e+00,7.3420e-01,7.6586e-01,-0.0000e+00,6.4301e-01,7.6586e-01,-0.0000e+00,6.4301e-01,8.4063e-01,-0.0000e+00,5.4161e-01,8.4063e-01,-0.0000e+00,5.4161e-01,9.0206e-01,-0.0000e+00,4.3162e-01,9.0206e-01,-0.0000e+00,4.3162e-01,9.4917e-01,-0.0000e+00,3.1477e-01,9.4917e-01,-0.0000e+00,3.1477e-01,9.8121e-01,-0.0000e+00,1.9293e-01,9.8121e-01,-0.0000e+00,1.9293e-01,9.9768e-01,-0.0000e+00,6.8029e-02,9.9768e-01,-0.0000e+00,6.8029e-02,9.9832e-01,-0.0000e+00,-5.7953e-02,9.9832e-01,-0.0000e+00,-5.7953e-02,9.8311e-01,-0.0000e+00,-1.8302e-01,9.8311e-01,-0.0000e+00,-1.8302e-01,9.5230e-01,-0.0000e+00,-3.0517e-01,9.5230e-01,-0.0000e+00,-3.0517e-01,9.0637e-01,-0.0000e+00,-4.2249e-01,9.0637e-01,-0.0000e+00,-4.2249e-01,8.4605e-01,-0.0000e+00,-5.3310e-01,8.4605e-01,-0.0000e+00,-5.3310e-01,7.7231e-01,-0.0000e+00,-6.3524e-01,7.7231e-01,-0.0000e+00,-6.3524e-01,6.8631e-01,-0.0000e+00,-7.2731e-01,6.8631e-01,-0.0000e+00,-7.2731e-01,5.8942e-01,-0.0000e+00,-8.0783e-01,5.8942e-01,-0.0000e+00,-8.0783e-01,4.8317e-01,-0.0000e+00,-8.7553e-01,4.8317e-01,-0.0000e+00,-8.7553e-01,3.6925e-01,-0.0000e+00,-9.2933e-01,3.6925e-01,-0.0000e+00,-9.2933e-01,2.4947e-01,-0.0000e+00,-9.6838e-01,2.4947e-01,-0.0000e+00,-9.6838e-01,1.2573e-01,-0.0000e+00,-9.9206e-01,1.2573e-01,-0.0000e+00,-9.9206e-01,1.2246e-16,-0.0000e+00,-1.0000e+00,1.2246e-16,-0.0000e+00,-1.0000e+00});
			return Normal_7_726_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #738, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_738_point()
		{
			MFVec3f Coordinate_7_738_point = new MFVec3f(new double[] {-2.1283e+02,4.3464e+02,5.1390e+01,-2.1283e+02,4.3401e+02,5.1390e+01,-2.1279e+02,4.3464e+02,5.1351e+01,-2.1279e+02,4.3401e+02,5.1351e+01,-2.1276e+02,4.3464e+02,5.1307e+01,-2.1276e+02,4.3401e+02,5.1307e+01,-2.1273e+02,4.3464e+02,5.1260e+01,-2.1273e+02,4.3401e+02,5.1260e+01,-2.1271e+02,4.3464e+02,5.1209e+01,-2.1271e+02,4.3401e+02,5.1209e+01,-2.1270e+02,4.3464e+02,5.1157e+01,-2.1270e+02,4.3401e+02,5.1157e+01,-2.1269e+02,4.3464e+02,5.1103e+01,-2.1269e+02,4.3401e+02,5.1103e+01,-2.1269e+02,4.3464e+02,5.1049e+01,-2.1269e+02,4.3401e+02,5.1049e+01,-2.1270e+02,4.3464e+02,5.0995e+01,-2.1270e+02,4.3401e+02,5.0995e+01,-2.1272e+02,4.3464e+02,5.0943e+01,-2.1272e+02,4.3401e+02,5.0943e+01,-2.1274e+02,4.3464e+02,5.0894e+01,-2.1274e+02,4.3401e+02,5.0894e+01,-2.1277e+02,4.3464e+02,5.0848e+01,-2.1277e+02,4.3401e+02,5.0848e+01,-2.1280e+02,4.3464e+02,5.0806e+01,-2.1280e+02,4.3401e+02,5.0806e+01,-2.1284e+02,4.3464e+02,5.0768e+01,-2.1284e+02,4.3401e+02,5.0768e+01,-2.1288e+02,4.3464e+02,5.0736e+01,-2.1288e+02,4.3401e+02,5.0736e+01,-2.1293e+02,4.3464e+02,5.0710e+01,-2.1293e+02,4.3401e+02,5.0710e+01,-2.1298e+02,4.3464e+02,5.0690e+01,-2.1298e+02,4.3401e+02,5.0690e+01,-2.1303e+02,4.3464e+02,5.0677e+01,-2.1303e+02,4.3401e+02,5.0677e+01,-2.1309e+02,4.3464e+02,5.0671e+01,-2.1309e+02,4.3401e+02,5.0671e+01,-2.1314e+02,4.3464e+02,5.0672e+01,-2.1314e+02,4.3401e+02,5.0672e+01});
			return Coordinate_7_738_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #739, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_739_vector()
		{
			MFVec3f Normal_7_739_vector = new MFVec3f(new double[] {6.7893e-01,0.0000e+00,7.3420e-01,6.7893e-01,0.0000e+00,7.3420e-01,7.6869e-01,0.0000e+00,6.3963e-01,7.6869e-01,0.0000e+00,6.3963e-01,8.4537e-01,0.0000e+00,5.3418e-01,8.4537e-01,0.0000e+00,5.3418e-01,9.0769e-01,0.0000e+00,4.1965e-01,9.0769e-01,0.0000e+00,4.1965e-01,9.5457e-01,0.0000e+00,2.9799e-01,9.5457e-01,0.0000e+00,2.9799e-01,9.8523e-01,0.0000e+00,1.7126e-01,9.8523e-01,0.0000e+00,1.7126e-01,9.9913e-01,0.0000e+00,4.1620e-02,9.9913e-01,0.0000e+00,4.1620e-02,9.9606e-01,0.0000e+00,-8.8727e-02,9.9606e-01,0.0000e+00,-8.8727e-02,9.7605e-01,0.0000e+00,-2.1757e-01,9.7605e-01,0.0000e+00,-2.1757e-01,9.3944e-01,0.0000e+00,-3.4271e-01,9.3944e-01,0.0000e+00,-3.4271e-01,8.8687e-01,0.0000e+00,-4.6202e-01,8.8687e-01,0.0000e+00,-4.6202e-01,8.1922e-01,0.0000e+00,-5.7348e-01,8.1922e-01,0.0000e+00,-5.7348e-01,7.3764e-01,0.0000e+00,-6.7519e-01,7.3764e-01,0.0000e+00,-6.7519e-01,6.4353e-01,0.0000e+00,-7.6542e-01,6.4353e-01,0.0000e+00,-7.6542e-01,5.3847e-01,0.0000e+00,-8.4264e-01,5.3847e-01,0.0000e+00,-8.4264e-01,4.2426e-01,0.0000e+00,-9.0554e-01,4.2426e-01,0.0000e+00,-9.0554e-01,3.0284e-01,0.0000e+00,-9.5304e-01,3.0284e-01,0.0000e+00,-9.5304e-01,1.7627e-01,0.0000e+00,-9.8434e-01,1.7627e-01,0.0000e+00,-9.8434e-01,4.6701e-02,0.0000e+00,-9.9891e-01,4.6701e-02,0.0000e+00,-9.9891e-01,-8.3660e-02,0.0000e+00,-9.9649e-01,-8.3660e-02,0.0000e+00,-9.9649e-01});
			return Normal_7_739_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #763, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_763_point()
		{
			MFVec3f Coordinate_7_763_point = new MFVec3f(new double[] {-2.1087e+02,4.3464e+02,5.3803e+01,-2.1087e+02,4.3401e+02,5.3803e+01,-2.1053e+02,4.3464e+02,5.3496e+01,-2.1053e+02,4.3401e+02,5.3496e+01,-2.1024e+02,4.3464e+02,5.3147e+01,-2.1024e+02,4.3401e+02,5.3147e+01,-2.0999e+02,4.3464e+02,5.2763e+01,-2.0999e+02,4.3401e+02,5.2763e+01,-2.0980e+02,4.3464e+02,5.2351e+01,-2.0980e+02,4.3401e+02,5.2351e+01,-2.0966e+02,4.3464e+02,5.1916e+01,-2.0966e+02,4.3401e+02,5.1916e+01,-2.0957e+02,4.3464e+02,5.1467e+01,-2.0957e+02,4.3401e+02,5.1467e+01,-2.0955e+02,4.3464e+02,5.1012e+01,-2.0955e+02,4.3401e+02,5.1012e+01,-2.0959e+02,4.3464e+02,5.0557e+01,-2.0959e+02,4.3401e+02,5.0557e+01,-2.0968e+02,4.3464e+02,5.0110e+01,-2.0968e+02,4.3401e+02,5.0110e+01,-2.0983e+02,4.3464e+02,4.9680e+01,-2.0983e+02,4.3401e+02,4.9680e+01,-2.1004e+02,4.3464e+02,4.9272e+01,-2.1004e+02,4.3401e+02,4.9272e+01,-2.1029e+02,4.3464e+02,4.8895e+01,-2.1029e+02,4.3401e+02,4.8895e+01,-2.1060e+02,4.3464e+02,4.8554e+01,-2.1060e+02,4.3401e+02,4.8554e+01,-2.1094e+02,4.3464e+02,4.8255e+01,-2.1094e+02,4.3401e+02,4.8255e+01,-2.1132e+02,4.3464e+02,4.8004e+01,-2.1132e+02,4.3401e+02,4.8004e+01,-2.1173e+02,4.3464e+02,4.7803e+01,-2.1173e+02,4.3401e+02,4.7803e+01,-2.1216e+02,4.3464e+02,4.7658e+01,-2.1216e+02,4.3401e+02,4.7658e+01,-2.1261e+02,4.3464e+02,4.7570e+01,-2.1261e+02,4.3401e+02,4.7570e+01,-2.1307e+02,4.3464e+02,4.7540e+01,-2.1307e+02,4.3401e+02,4.7540e+01});
			return Coordinate_7_763_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #764, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_764_vector()
		{
			MFVec3f Normal_7_764_vector = new MFVec3f(new double[] {-6.2486e-01,-0.0000e+00,-7.8074e-01,-6.2486e-01,-0.0000e+00,-7.8074e-01,-7.2067e-01,-0.0000e+00,-6.9327e-01,-7.2067e-01,-0.0000e+00,-6.9327e-01,-8.0436e-01,-0.0000e+00,-5.9414e-01,-8.0436e-01,-0.0000e+00,-5.9414e-01,-8.7451e-01,-0.0000e+00,-4.8501e-01,-8.7451e-01,-0.0000e+00,-4.8501e-01,-9.2994e-01,-0.0000e+00,-3.6772e-01,-9.2994e-01,-0.0000e+00,-3.6772e-01,-9.6972e-01,-0.0000e+00,-2.4423e-01,-9.6972e-01,-0.0000e+00,-2.4423e-01,-9.9317e-01,-0.0000e+00,-1.1664e-01,-9.9317e-01,-0.0000e+00,-1.1664e-01,-9.9992e-01,-0.0000e+00,1.2917e-02,-9.9992e-01,-0.0000e+00,1.2917e-02,-9.8983e-01,-0.0000e+00,1.4226e-01,-9.8983e-01,-0.0000e+00,1.4226e-01,-9.6308e-01,-0.0000e+00,2.6920e-01,-9.6308e-01,-0.0000e+00,2.6920e-01,-9.2013e-01,-0.0000e+00,3.9162e-01,-9.2013e-01,-0.0000e+00,3.9162e-01,-8.6169e-01,-0.0000e+00,5.0744e-01,-8.6169e-01,-0.0000e+00,5.0744e-01,-7.8874e-01,-0.0000e+00,6.1472e-01,-7.8874e-01,-0.0000e+00,6.1472e-01,-7.0253e-01,-0.0000e+00,7.1166e-01,-7.0253e-01,-0.0000e+00,7.1166e-01,-6.0448e-01,-0.0000e+00,7.9662e-01,-6.0448e-01,-0.0000e+00,7.9662e-01,-4.9627e-01,-0.0000e+00,8.6817e-01,-4.9627e-01,-0.0000e+00,8.6817e-01,-3.7970e-01,-0.0000e+00,9.2511e-01,-3.7970e-01,-0.0000e+00,9.2511e-01,-2.5674e-01,-0.0000e+00,9.6648e-01,-2.5674e-01,-0.0000e+00,9.6648e-01,-1.2946e-01,-0.0000e+00,9.9158e-01,-1.2946e-01,-0.0000e+00,9.9158e-01,-0.0000e+00,-0.0000e+00,1.0000e+00,-0.0000e+00,-0.0000e+00,1.0000e+00});
			return Normal_7_764_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #776, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_776_point()
		{
			MFVec3f Coordinate_7_776_point = new MFVec3f(new double[] {-2.2116e+02,4.3464e+02,6.3270e+01,-2.2116e+02,4.3401e+02,6.3270e+01,-2.2121e+02,4.3464e+02,6.3320e+01,-2.2121e+02,4.3401e+02,6.3320e+01,-2.2125e+02,4.3464e+02,6.3374e+01,-2.2125e+02,4.3401e+02,6.3374e+01,-2.2128e+02,4.3464e+02,6.3434e+01,-2.2128e+02,4.3401e+02,6.3434e+01,-2.2131e+02,4.3464e+02,6.3497e+01,-2.2131e+02,4.3401e+02,6.3497e+01,-2.2132e+02,4.3464e+02,6.3562e+01,-2.2132e+02,4.3401e+02,6.3562e+01,-2.2133e+02,4.3464e+02,6.3630e+01,-2.2133e+02,4.3401e+02,6.3630e+01,-2.2133e+02,4.3464e+02,6.3698e+01,-2.2133e+02,4.3401e+02,6.3698e+01,-2.2132e+02,4.3464e+02,6.3766e+01,-2.2132e+02,4.3401e+02,6.3766e+01,-2.2131e+02,4.3464e+02,6.3832e+01,-2.2131e+02,4.3401e+02,6.3832e+01,-2.2128e+02,4.3464e+02,6.3895e+01,-2.2128e+02,4.3401e+02,6.3895e+01,-2.2125e+02,4.3464e+02,6.3955e+01,-2.2125e+02,4.3401e+02,6.3955e+01,-2.2121e+02,4.3464e+02,6.4010e+01,-2.2121e+02,4.3401e+02,6.4010e+01,-2.2116e+02,4.3464e+02,6.4060e+01,-2.2116e+02,4.3401e+02,6.4060e+01,-2.2111e+02,4.3464e+02,6.4104e+01,-2.2111e+02,4.3401e+02,6.4104e+01,-2.2105e+02,4.3464e+02,6.4140e+01,-2.2105e+02,4.3401e+02,6.4140e+01,-2.2099e+02,4.3464e+02,6.4169e+01,-2.2099e+02,4.3401e+02,6.4169e+01,-2.2093e+02,4.3464e+02,6.4190e+01,-2.2093e+02,4.3401e+02,6.4190e+01,-2.2086e+02,4.3464e+02,6.4203e+01,-2.2086e+02,4.3401e+02,6.4203e+01,-2.2079e+02,4.3464e+02,6.4208e+01,-2.2079e+02,4.3401e+02,6.4208e+01});
			return Coordinate_7_776_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #777, 120 total numbers made up of 40 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_777_vector()
		{
			MFVec3f Normal_7_777_vector = new MFVec3f(new double[] {-6.7708e-01,0.0000e+00,-7.3591e-01,-6.7708e-01,0.0000e+00,-7.3591e-01,-7.6432e-01,0.0000e+00,-6.4483e-01,-7.6432e-01,0.0000e+00,-6.4483e-01,-8.3941e-01,0.0000e+00,-5.4350e-01,-8.3941e-01,0.0000e+00,-5.4350e-01,-9.0114e-01,0.0000e+00,-4.3353e-01,-9.0114e-01,0.0000e+00,-4.3353e-01,-9.4854e-01,0.0000e+00,-3.1666e-01,-9.4854e-01,0.0000e+00,-3.1666e-01,-9.8085e-01,0.0000e+00,-1.9475e-01,-9.8085e-01,0.0000e+00,-1.9475e-01,-9.9756e-01,0.0000e+00,-6.9747e-02,-9.9756e-01,0.0000e+00,-6.9747e-02,-9.9841e-01,0.0000e+00,5.6367e-02,-9.9841e-01,0.0000e+00,5.6367e-02,-9.8338e-01,0.0000e+00,1.8158e-01,-9.8338e-01,0.0000e+00,1.8158e-01,-9.5270e-01,0.0000e+00,3.0391e-01,-9.5270e-01,0.0000e+00,3.0391e-01,-9.0687e-01,0.0000e+00,4.2141e-01,-9.0687e-01,0.0000e+00,4.2141e-01,-8.4662e-01,0.0000e+00,5.3220e-01,-8.4662e-01,0.0000e+00,5.3220e-01,-7.7290e-01,0.0000e+00,6.3453e-01,-7.7290e-01,0.0000e+00,6.3453e-01,-6.8689e-01,0.0000e+00,7.2676e-01,-6.8689e-01,0.0000e+00,7.2676e-01,-5.8995e-01,0.0000e+00,8.0744e-01,-5.8995e-01,0.0000e+00,8.0744e-01,-4.8363e-01,0.0000e+00,8.7527e-01,-4.8363e-01,0.0000e+00,8.7527e-01,-3.6962e-01,0.0000e+00,9.2918e-01,-3.6962e-01,0.0000e+00,9.2918e-01,-2.4973e-01,0.0000e+00,9.6832e-01,-2.4973e-01,0.0000e+00,9.6832e-01,-1.2587e-01,0.0000e+00,9.9205e-01,-1.2587e-01,0.0000e+00,9.9205e-01,-1.2246e-16,0.0000e+00,1.0000e+00,-1.2246e-16,0.0000e+00,1.0000e+00});
			return Normal_7_777_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #839, 324 total numbers made up of 108 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_839_point()
		{
			MFVec3f Coordinate_7_839_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_839_point_1()))
				.append(new MFVec3f(getCoordinate_7_839_point_2()));
			return Coordinate_7_839_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #845, 324 total numbers made up of 108 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_845_point()
		{
			MFVec3f Coordinate_7_845_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_845_point_1()))
				.append(new MFVec3f(getCoordinate_7_845_point_2()));
			return Coordinate_7_845_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #857, 273 total numbers made up of 91 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_857_point()
		{
			MFVec3f Coordinate_7_857_point = new MFVec3f(new double[] {-2.1375e+02,4.3401e+02,4.5529e+01,-2.1293e+02,4.3401e+02,4.5448e+01,-2.1214e+02,4.3401e+02,4.5210e+01,-2.1141e+02,4.3401e+02,4.4822e+01,-2.1078e+02,4.3401e+02,4.4300e+01,-2.1026e+02,4.3401e+02,4.3664e+01,-2.0987e+02,4.3401e+02,4.2939e+01,-2.0963e+02,4.3401e+02,4.2152e+01,-2.0955e+02,4.3401e+02,4.1333e+01,-2.0955e+02,4.3401e+02,2.6133e+01,-2.0979e+02,4.3401e+02,2.5243e+01,-2.1019e+02,4.3401e+02,2.4418e+01,-2.1076e+02,4.3401e+02,2.3692e+01,-2.1146e+02,4.3401e+02,2.3095e+01,-2.1227e+02,4.3401e+02,2.2650e+01,-2.1315e+02,4.3401e+02,2.2375e+01,-2.1406e+02,4.3401e+02,2.2283e+01,-2.1498e+02,4.3401e+02,2.2375e+01,-2.1586e+02,4.3401e+02,2.2650e+01,-2.1666e+02,4.3401e+02,2.3095e+01,-2.1736e+02,4.3401e+02,2.3692e+01,-2.1793e+02,4.3401e+02,2.4418e+01,-2.1834e+02,4.3401e+02,2.5243e+01,-2.1857e+02,4.3401e+02,2.6133e+01,-2.1857e+02,4.3401e+02,3.5759e+01,-2.1860e+02,4.3401e+02,3.6042e+01,-2.1869e+02,4.3401e+02,3.6312e+01,-2.1882e+02,4.3401e+02,3.6561e+01,-2.1901e+02,4.3401e+02,3.6777e+01,-2.1923e+02,4.3401e+02,3.6952e+01,-2.1948e+02,4.3401e+02,3.7078e+01,-2.1976e+02,4.3401e+02,3.7152e+01,-2.2004e+02,4.3401e+02,3.7169e+01,-2.2032e+02,4.3401e+02,3.7129e+01,-2.2059e+02,4.3401e+02,3.7033e+01,-2.2083e+02,4.3401e+02,3.6886e+01,-2.2104e+02,4.3401e+02,3.6694e+01,-2.2121e+02,4.3401e+02,3.6464e+01,-2.2132e+02,4.3401e+02,3.6205e+01,-2.2138e+02,4.3401e+02,3.5928e+01,-2.2139e+02,4.3401e+02,3.5644e+01,-2.2139e+02,4.3401e+02,1.9954e+01,-2.0955e+02,4.3401e+02,1.9954e+01,-2.0955e+02,4.3401e+02,1.6852e+01,-2.2139e+02,4.3401e+02,1.6852e+01,-2.2139e+02,4.3401e+02,1.0443e+01,-2.2455e+02,4.3401e+02,1.0443e+01,-2.2455e+02,4.3401e+02,3.6046e+01,-2.2446e+02,4.3401e+02,3.6954e+01,-2.2419e+02,4.3401e+02,3.7826e+01,-2.2375e+02,4.3401e+02,3.8625e+01,-2.2316e+02,4.3401e+02,3.9321e+01,-2.2244e+02,4.3401e+02,3.9885e+01,-2.2162e+02,4.3401e+02,4.0294e+01,-2.2074e+02,4.3401e+02,4.0532e+01,-2.1983e+02,4.3401e+02,4.0589e+01,-2.1893e+02,4.3401e+02,4.0463e+01,-2.1807e+02,4.3401e+02,4.0159e+01,-2.1728e+02,4.3401e+02,3.9690e+01,-2.1661e+02,4.3401e+02,3.9073e+01,-2.1607e+02,4.3401e+02,3.8335e+01,-2.1570e+02,4.3401e+02,3.7504e+01,-2.1549e+02,4.3401e+02,3.6614e+01,-2.1547e+02,4.3401e+02,3.5702e+01,-2.1547e+02,4.3401e+02,2.6650e+01,-2.1542e+02,4.3401e+02,2.6379e+01,-2.1532e+02,4.3401e+02,2.6122e+01,-2.1517e+02,4.3401e+02,2.5891e+01,-2.1497e+02,4.3401e+02,2.5692e+01,-2.1475e+02,4.3401e+02,2.5535e+01,-2.1449e+02,4.3401e+02,2.5425e+01,-2.1423e+02,4.3401e+02,2.5366e+01,-2.1395e+02,4.3401e+02,2.5360e+01,-2.1368e+02,4.3401e+02,2.5408e+01,-2.1342e+02,4.3401e+02,2.5508e+01,-2.1319e+02,4.3401e+02,2.5656e+01,-2.1299e+02,4.3401e+02,2.5846e+01,-2.1283e+02,4.3401e+02,2.6072e+01,-2.1271e+02,4.3401e+02,2.6324e+01,-2.1265e+02,4.3401e+02,2.6593e+01,-2.1265e+02,4.3401e+02,4.1304e+01,-2.1267e+02,4.3401e+02,4.1517e+01,-2.1274e+02,4.3401e+02,4.1722e+01,-2.1284e+02,4.3401e+02,4.1911e+01,-2.1297e+02,4.3401e+02,4.2077e+01,-2.1314e+02,4.3401e+02,4.2213e+01,-2.1333e+02,4.3401e+02,4.2314e+01,-2.1353e+02,4.3401e+02,4.2376e+01,-2.1375e+02,4.3401e+02,4.2397e+01,-2.2455e+02,4.3401e+02,4.2397e+01,-2.2455e+02,4.3401e+02,4.5529e+01});
			return Coordinate_7_857_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #863, 174 total numbers made up of 58 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_863_point()
		{
			MFVec3f Coordinate_7_863_point = new MFVec3f(new double[] {-2.0955e+02,4.3401e+02,6.4208e+01,-2.2079e+02,4.3401e+02,6.4208e+01,-2.2090e+02,4.3401e+02,6.4197e+01,-2.2100e+02,4.3401e+02,6.4165e+01,-2.2110e+02,4.3401e+02,6.4113e+01,-2.2118e+02,4.3401e+02,6.4044e+01,-2.2125e+02,4.3401e+02,6.3960e+01,-2.2130e+02,4.3401e+02,6.3864e+01,-2.2133e+02,4.3401e+02,6.3760e+01,-2.2133e+02,4.3401e+02,6.3653e+01,-2.2132e+02,4.3401e+02,6.3546e+01,-2.2128e+02,4.3401e+02,6.3444e+01,-2.2123e+02,4.3401e+02,6.3351e+01,-2.2116e+02,4.3401e+02,6.3270e+01,-2.1087e+02,4.3401e+02,5.3803e+01,-2.1039e+02,4.3401e+02,5.3339e+01,-2.1001e+02,4.3401e+02,5.2794e+01,-2.0974e+02,4.3401e+02,5.2186e+01,-2.0958e+02,4.3401e+02,5.1537e+01,-2.0955e+02,4.3401e+02,5.0871e+01,-2.0965e+02,4.3401e+02,5.0212e+01,-2.0987e+02,4.3401e+02,4.9584e+01,-2.1021e+02,4.3401e+02,4.9008e+01,-2.1065e+02,4.3401e+02,4.8505e+01,-2.1117e+02,4.3401e+02,4.8095e+01,-2.1176e+02,4.3401e+02,4.7790e+01,-2.1240e+02,4.3401e+02,4.7603e+01,-2.1307e+02,4.3401e+02,4.7540e+01,-2.2455e+02,4.3401e+02,4.7540e+01,-2.2455e+02,4.3401e+02,5.0672e+01,-2.1314e+02,4.3401e+02,5.0672e+01,-2.1306e+02,4.3401e+02,5.0673e+01,-2.1299e+02,4.3401e+02,5.0689e+01,-2.1291e+02,4.3401e+02,5.0719e+01,-2.1285e+02,4.3401e+02,5.0763e+01,-2.1279e+02,4.3401e+02,5.0818e+01,-2.1275e+02,4.3401e+02,5.0883e+01,-2.1271e+02,4.3401e+02,5.0955e+01,-2.1270e+02,4.3401e+02,5.1032e+01,-2.1269e+02,4.3401e+02,5.1111e+01,-2.1271e+02,4.3401e+02,5.1189e+01,-2.1273e+02,4.3401e+02,5.1263e+01,-2.1277e+02,4.3401e+02,5.1331e+01,-2.1283e+02,4.3401e+02,5.1390e+01,-2.2393e+02,4.3401e+02,6.1655e+01,-2.2436e+02,4.3401e+02,6.2141e+01,-2.2468e+02,4.3401e+02,6.2704e+01,-2.2489e+02,4.3401e+02,6.3319e+01,-2.2497e+02,4.3401e+02,6.3964e+01,-2.2492e+02,4.3401e+02,6.4612e+01,-2.2475e+02,4.3401e+02,6.5238e+01,-2.2445e+02,4.3401e+02,6.5816e+01,-2.2405e+02,4.3401e+02,6.6325e+01,-2.2355e+02,4.3401e+02,6.6743e+01,-2.2298e+02,4.3401e+02,6.7054e+01,-2.2236e+02,4.3401e+02,6.7245e+01,-2.2171e+02,4.3401e+02,6.7310e+01,-2.0955e+02,4.3401e+02,6.7310e+01});
			return Coordinate_7_863_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #875, 276 total numbers made up of 92 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_875_point()
		{
			MFVec3f Coordinate_7_875_point = new MFVec3f(new double[] {-2.2860e+02,1.4211e-14,1.9075e+00,-1.8415e+02,1.4211e-14,1.9075e+00,-1.8415e+02,2.5400e+01,1.9075e+00,-1.8403e+02,2.6639e+01,1.9075e+00,-1.8367e+02,2.7830e+01,1.9075e+00,-1.8308e+02,2.8928e+01,1.9075e+00,-1.8229e+02,2.9890e+01,1.9075e+00,-1.8133e+02,3.0680e+01,1.9075e+00,-1.8023e+02,3.1267e+01,1.9075e+00,-1.7904e+02,3.1628e+01,1.9075e+00,-1.7780e+02,3.1750e+01,1.9075e+00,-6.3500e+01,3.1750e+01,1.9075e+00,-6.2261e+01,3.1628e+01,1.9075e+00,-6.1070e+01,3.1267e+01,1.9075e+00,-5.9972e+01,3.0680e+01,1.9075e+00,-5.9010e+01,2.9890e+01,1.9075e+00,-5.8220e+01,2.8928e+01,1.9075e+00,-5.7633e+01,2.7830e+01,1.9075e+00,-5.7272e+01,2.6639e+01,1.9075e+00,-5.7150e+01,2.5400e+01,1.9075e+00,-5.7150e+01,1.4211e-14,1.9075e+00,-1.2700e+01,1.4211e-14,1.9075e+00,8.8818e-16,1.2700e+01,1.9075e+00,8.8818e-16,4.3480e+01,1.9075e+00,-2.4130e+02,4.3480e+01,1.9075e+00,-2.4130e+02,1.2700e+01,1.9075e+00,-2.1737e+02,1.6383e+01,1.9075e+00,-2.1798e+02,1.5482e+01,1.9075e+00,-2.1876e+02,1.4718e+01,1.9075e+00,-2.1967e+02,1.4120e+01,1.9075e+00,-2.2068e+02,1.3712e+01,1.9075e+00,-2.2176e+02,1.3509e+01,1.9075e+00,-2.2285e+02,1.3519e+01,1.9075e+00,-2.2391e+02,1.3742e+01,1.9075e+00,-2.2492e+02,1.4168e+01,1.9075e+00,-2.2582e+02,1.4782e+01,1.9075e+00,-2.2658e+02,1.5560e+01,1.9075e+00,-2.2718e+02,1.6473e+01,1.9075e+00,-2.2759e+02,1.7484e+01,1.9075e+00,-2.2779e+02,1.8555e+01,1.9075e+00,-2.2778e+02,1.9646e+01,1.9075e+00,-2.2756e+02,2.0713e+01,1.9075e+00,-2.2713e+02,2.1717e+01,1.9075e+00,-2.2652e+02,2.2618e+01,1.9075e+00,-2.2574e+02,2.3382e+01,1.9075e+00,-2.2483e+02,2.3980e+01,1.9075e+00,-2.2382e+02,2.4388e+01,1.9075e+00,-2.2274e+02,2.4591e+01,1.9075e+00,-2.2165e+02,2.4581e+01,1.9075e+00,-2.2059e+02,2.4358e+01,1.9075e+00,-2.1958e+02,2.3932e+01,1.9075e+00,-2.1868e+02,2.3318e+01,1.9075e+00,-2.1792e+02,2.2540e+01,1.9075e+00,-2.1732e+02,2.1627e+01,1.9075e+00,-2.1691e+02,2.0616e+01,1.9075e+00,-2.1671e+02,1.9545e+01,1.9075e+00,-2.1672e+02,1.8454e+01,1.9075e+00,-2.1694e+02,1.7387e+01,1.9075e+00,-2.1737e+02,1.6383e+01,1.9075e+00,-2.3932e+01,2.1717e+01,1.9075e+00,-2.3318e+01,2.2618e+01,1.9075e+00,-2.2540e+01,2.3382e+01,1.9075e+00,-2.1627e+01,2.3980e+01,1.9075e+00,-2.0616e+01,2.4388e+01,1.9075e+00,-1.9545e+01,2.4591e+01,1.9075e+00,-1.8454e+01,2.4581e+01,1.9075e+00,-1.7387e+01,2.4358e+01,1.9075e+00,-1.6383e+01,2.3932e+01,1.9075e+00,-1.5482e+01,2.3318e+01,1.9075e+00,-1.4718e+01,2.2540e+01,1.9075e+00,-1.4120e+01,2.1627e+01,1.9075e+00,-1.3712e+01,2.0616e+01,1.9075e+00,-1.3509e+01,1.9545e+01,1.9075e+00,-1.3519e+01,1.8454e+01,1.9075e+00,-1.3742e+01,1.7387e+01,1.9075e+00,-1.4168e+01,1.6383e+01,1.9075e+00,-1.4782e+01,1.5482e+01,1.9075e+00,-1.5560e+01,1.4718e+01,1.9075e+00,-1.6473e+01,1.4120e+01,1.9075e+00,-1.7484e+01,1.3712e+01,1.9075e+00,-1.8555e+01,1.3509e+01,1.9075e+00,-1.9646e+01,1.3519e+01,1.9075e+00,-2.0713e+01,1.3742e+01,1.9075e+00,-2.1717e+01,1.4168e+01,1.9075e+00,-2.2618e+01,1.4782e+01,1.9075e+00,-2.3382e+01,1.5560e+01,1.9075e+00,-2.3980e+01,1.6473e+01,1.9075e+00,-2.4388e+01,1.7484e+01,1.9075e+00,-2.4591e+01,1.8555e+01,1.9075e+00,-2.4581e+01,1.9646e+01,1.9075e+00,-2.4358e+01,2.0713e+01,1.9075e+00,-2.3932e+01,2.1717e+01,1.9075e+00});
			return Coordinate_7_875_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #881, 276 total numbers made up of 92 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_881_point()
		{
			MFVec3f Coordinate_7_881_point = new MFVec3f(new double[] {-2.4130e+02,4.3480e+01,0.0000e+00,0.0000e+00,4.3480e+01,0.0000e+00,0.0000e+00,1.2700e+01,0.0000e+00,-1.2700e+01,-7.1054e-15,0.0000e+00,-5.7150e+01,-7.1054e-15,0.0000e+00,-5.7150e+01,2.5400e+01,0.0000e+00,-5.7272e+01,2.6639e+01,0.0000e+00,-5.7633e+01,2.7830e+01,0.0000e+00,-5.8220e+01,2.8928e+01,0.0000e+00,-5.9010e+01,2.9890e+01,0.0000e+00,-5.9972e+01,3.0680e+01,0.0000e+00,-6.1070e+01,3.1267e+01,0.0000e+00,-6.2261e+01,3.1628e+01,0.0000e+00,-6.3500e+01,3.1750e+01,0.0000e+00,-1.7780e+02,3.1750e+01,0.0000e+00,-1.7904e+02,3.1628e+01,0.0000e+00,-1.8023e+02,3.1267e+01,0.0000e+00,-1.8133e+02,3.0680e+01,0.0000e+00,-1.8229e+02,2.9890e+01,0.0000e+00,-1.8308e+02,2.8928e+01,0.0000e+00,-1.8367e+02,2.7830e+01,0.0000e+00,-1.8403e+02,2.6639e+01,0.0000e+00,-1.8415e+02,2.5400e+01,0.0000e+00,-1.8415e+02,-7.1054e-15,0.0000e+00,-2.2860e+02,-7.1054e-15,0.0000e+00,-2.4130e+02,1.2700e+01,0.0000e+00,-2.2713e+02,2.1717e+01,0.0000e+00,-2.2756e+02,2.0713e+01,0.0000e+00,-2.2778e+02,1.9646e+01,0.0000e+00,-2.2779e+02,1.8555e+01,0.0000e+00,-2.2759e+02,1.7484e+01,0.0000e+00,-2.2718e+02,1.6473e+01,0.0000e+00,-2.2658e+02,1.5560e+01,0.0000e+00,-2.2582e+02,1.4782e+01,0.0000e+00,-2.2492e+02,1.4168e+01,0.0000e+00,-2.2391e+02,1.3742e+01,0.0000e+00,-2.2285e+02,1.3519e+01,0.0000e+00,-2.2176e+02,1.3509e+01,0.0000e+00,-2.2068e+02,1.3712e+01,0.0000e+00,-2.1967e+02,1.4120e+01,0.0000e+00,-2.1876e+02,1.4718e+01,0.0000e+00,-2.1798e+02,1.5482e+01,0.0000e+00,-2.1737e+02,1.6383e+01,0.0000e+00,-2.1694e+02,1.7387e+01,0.0000e+00,-2.1672e+02,1.8454e+01,0.0000e+00,-2.1671e+02,1.9545e+01,0.0000e+00,-2.1691e+02,2.0616e+01,0.0000e+00,-2.1732e+02,2.1627e+01,0.0000e+00,-2.1792e+02,2.2540e+01,0.0000e+00,-2.1868e+02,2.3318e+01,0.0000e+00,-2.1958e+02,2.3932e+01,0.0000e+00,-2.2059e+02,2.4358e+01,0.0000e+00,-2.2165e+02,2.4581e+01,0.0000e+00,-2.2274e+02,2.4591e+01,0.0000e+00,-2.2382e+02,2.4388e+01,0.0000e+00,-2.2483e+02,2.3980e+01,0.0000e+00,-2.2574e+02,2.3382e+01,0.0000e+00,-2.2652e+02,2.2618e+01,0.0000e+00,-2.2713e+02,2.1717e+01,0.0000e+00,-2.3932e+01,2.1717e+01,0.0000e+00,-2.4358e+01,2.0713e+01,0.0000e+00,-2.4581e+01,1.9646e+01,0.0000e+00,-2.4591e+01,1.8555e+01,0.0000e+00,-2.4388e+01,1.7484e+01,0.0000e+00,-2.3980e+01,1.6473e+01,0.0000e+00,-2.3382e+01,1.5560e+01,0.0000e+00,-2.2618e+01,1.4782e+01,0.0000e+00,-2.1717e+01,1.4168e+01,0.0000e+00,-2.0713e+01,1.3742e+01,0.0000e+00,-1.9646e+01,1.3519e+01,0.0000e+00,-1.8555e+01,1.3509e+01,0.0000e+00,-1.7484e+01,1.3712e+01,0.0000e+00,-1.6473e+01,1.4120e+01,0.0000e+00,-1.5560e+01,1.4718e+01,0.0000e+00,-1.4782e+01,1.5482e+01,0.0000e+00,-1.4168e+01,1.6383e+01,0.0000e+00,-1.3742e+01,1.7387e+01,0.0000e+00,-1.3519e+01,1.8454e+01,0.0000e+00,-1.3509e+01,1.9545e+01,0.0000e+00,-1.3712e+01,2.0616e+01,0.0000e+00,-1.4120e+01,2.1627e+01,0.0000e+00,-1.4718e+01,2.2540e+01,0.0000e+00,-1.5482e+01,2.3318e+01,0.0000e+00,-1.6383e+01,2.3932e+01,0.0000e+00,-1.7387e+01,2.4358e+01,0.0000e+00,-1.8454e+01,2.4581e+01,0.0000e+00,-1.9545e+01,2.4591e+01,0.0000e+00,-2.0616e+01,2.4388e+01,0.0000e+00,-2.1627e+01,2.3980e+01,0.0000e+00,-2.2540e+01,2.3382e+01,0.0000e+00,-2.3318e+01,2.2618e+01,0.0000e+00,-2.3932e+01,2.1717e+01,0.0000e+00});
			return Coordinate_7_881_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #951, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_951_point()
		{
			MFVec3f Coordinate_7_951_point = new MFVec3f(new double[] {-1.4168e+01,4.6373e+02,-2.4425e-15,-1.4168e+01,4.6373e+02,1.9075e+00,-1.4541e+01,4.6314e+02,-2.4425e-15,-1.4541e+01,4.6314e+02,1.9075e+00,-1.4985e+01,4.6260e+02,-2.4425e-15,-1.4985e+01,4.6260e+02,1.9075e+00,-1.5493e+01,4.6212e+02,-2.4425e-15,-1.5493e+01,4.6212e+02,1.9075e+00,-1.6057e+01,4.6171e+02,-2.4425e-15,-1.6057e+01,4.6171e+02,1.9075e+00,-1.6668e+01,4.6137e+02,-2.4425e-15,-1.6668e+01,4.6137e+02,1.9075e+00,-1.7317e+01,4.6111e+02,-2.4425e-15,-1.7317e+01,4.6111e+02,1.9075e+00,-1.7993e+01,4.6093e+02,-2.4425e-15,-1.7993e+01,4.6093e+02,1.9075e+00,-1.8686e+01,4.6084e+02,-2.4425e-15,-1.8686e+01,4.6084e+02,1.9075e+00,-1.9385e+01,4.6084e+02,-2.4425e-15,-1.9385e+01,4.6084e+02,1.9075e+00,-2.0078e+01,4.6093e+02,-2.4425e-15,-2.0078e+01,4.6093e+02,1.9075e+00,-2.0755e+01,4.6110e+02,-2.4425e-15,-2.0755e+01,4.6110e+02,1.9075e+00,-2.1405e+01,4.6136e+02,-2.4425e-15,-2.1405e+01,4.6136e+02,1.9075e+00,-2.2018e+01,4.6169e+02,-2.4425e-15,-2.2018e+01,4.6169e+02,1.9075e+00,-2.2584e+01,4.6210e+02,-2.4425e-15,-2.2584e+01,4.6210e+02,1.9075e+00,-2.3095e+01,4.6258e+02,-2.4425e-15,-2.3095e+01,4.6258e+02,1.9075e+00,-2.3542e+01,4.6311e+02,-2.4425e-15,-2.3542e+01,4.6311e+02,1.9075e+00,-2.3917e+01,4.6370e+02,-2.4425e-15,-2.3917e+01,4.6370e+02,1.9075e+00,-2.4217e+01,4.6433e+02,-2.4425e-15,-2.4217e+01,4.6433e+02,1.9075e+00,-2.4434e+01,4.6500e+02,-2.4425e-15,-2.4434e+01,4.6500e+02,1.9075e+00,-2.4567e+01,4.6568e+02,-2.4425e-15,-2.4567e+01,4.6568e+02,1.9075e+00,-2.4613e+01,4.6638e+02,-2.4425e-15,-2.4613e+01,4.6638e+02,1.9075e+00,-2.4571e+01,4.6708e+02,-2.4425e-15,-2.4571e+01,4.6708e+02,1.9075e+00,-2.4441e+01,4.6776e+02,-2.4425e-15,-2.4441e+01,4.6776e+02,1.9075e+00,-2.4227e+01,4.6843e+02,-2.4425e-15,-2.4227e+01,4.6843e+02,1.9075e+00,-2.3932e+01,4.6906e+02,-2.4425e-15,-2.3932e+01,4.6906e+02,1.9075e+00});
			return Coordinate_7_951_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #952, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_952_vector()
		{
			MFVec3f Normal_7_952_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.1057e-01,5.8564e-01,-0.0000e+00,-8.1057e-01,5.8564e-01,-0.0000e+00,-7.3078e-01,6.8261e-01,-0.0000e+00,-7.3078e-01,6.8261e-01,-0.0000e+00,-6.3947e-01,7.6882e-01,-0.0000e+00,-6.3947e-01,7.6882e-01,-0.0000e+00,-5.3807e-01,8.4290e-01,-0.0000e+00,-5.3807e-01,8.4290e-01,-0.0000e+00,-4.2818e-01,9.0369e-01,-0.0000e+00,-4.2818e-01,9.0369e-01,-0.0000e+00,-3.1154e-01,9.5023e-01,-0.0000e+00,-3.1154e-01,9.5023e-01,-0.0000e+00,-1.8999e-01,9.8179e-01,-0.0000e+00,-1.8999e-01,9.8179e-01,-0.0000e+00,-6.5440e-02,9.9786e-01,-0.0000e+00,-6.5440e-02,9.9786e-01,-0.0000e+00,6.0141e-02,9.9819e-01,-0.0000e+00,6.0141e-02,9.9819e-01,-0.0000e+00,1.8477e-01,9.8278e-01,-0.0000e+00,1.8477e-01,9.8278e-01,-0.0000e+00,3.0649e-01,9.5187e-01,-0.0000e+00,3.0649e-01,9.5187e-01,-0.0000e+00,4.2338e-01,9.0595e-01,-0.0000e+00,4.2338e-01,9.0595e-01,-0.0000e+00,5.3358e-01,8.4575e-01,-0.0000e+00,5.3358e-01,8.4575e-01,-0.0000e+00,6.3538e-01,7.7220e-01,-0.0000e+00,6.3538e-01,7.7220e-01,-0.0000e+00,7.2715e-01,6.8648e-01,-0.0000e+00,7.2715e-01,6.8648e-01,-0.0000e+00,8.0745e-01,5.8993e-01,-0.0000e+00,8.0745e-01,5.8993e-01,-0.0000e+00,8.7502e-01,4.8408e-01,-0.0000e+00,8.7502e-01,4.8408e-01,-0.0000e+00,9.2880e-01,3.7059e-01,-0.0000e+00,9.2880e-01,3.7059e-01,-0.0000e+00,9.6792e-01,2.5126e-01,-0.0000e+00,9.6792e-01,2.5126e-01,-0.0000e+00,9.9178e-01,1.2797e-01,-0.0000e+00,9.9178e-01,1.2797e-01,-0.0000e+00,1.0000e+00,2.6548e-03,-0.0000e+00,1.0000e+00,2.6548e-03,-0.0000e+00,9.9244e-01,-1.2270e-01,-0.0000e+00,9.9244e-01,-1.2270e-01,-0.0000e+00,9.6924e-01,-2.4612e-01,-0.0000e+00,9.6924e-01,-2.4612e-01,-0.0000e+00,9.3075e-01,-3.6565e-01,-0.0000e+00,9.3075e-01,-3.6565e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_952_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #958, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_958_point()
		{
			MFVec3f Coordinate_7_958_point = new MFVec3f(new double[] {-2.3932e+01,4.6906e+02,-2.4425e-15,-2.3932e+01,4.6906e+02,1.9075e+00,-2.3542e+01,4.6968e+02,-2.4425e-15,-2.3542e+01,4.6968e+02,1.9075e+00,-2.3075e+01,4.7023e+02,-2.4425e-15,-2.3075e+01,4.7023e+02,1.9075e+00,-2.2539e+01,4.7073e+02,-2.4425e-15,-2.2539e+01,4.7073e+02,1.9075e+00,-2.1944e+01,4.7115e+02,-2.4425e-15,-2.1944e+01,4.7115e+02,1.9075e+00,-2.1299e+01,4.7148e+02,-2.4425e-15,-2.1299e+01,4.7148e+02,1.9075e+00,-2.0616e+01,4.7173e+02,-2.4425e-15,-2.0616e+01,4.7173e+02,1.9075e+00,-1.9906e+01,4.7189e+02,-2.4425e-15,-1.9906e+01,4.7189e+02,1.9075e+00,-1.9181e+01,4.7196e+02,-2.4425e-15,-1.9181e+01,4.7196e+02,1.9075e+00,-1.8454e+01,4.7193e+02,-2.4425e-15,-1.8454e+01,4.7193e+02,1.9075e+00,-1.7737e+01,4.7180e+02,-2.4425e-15,-1.7737e+01,4.7180e+02,1.9075e+00,-1.7043e+01,4.7158e+02,-2.4425e-15,-1.7043e+01,4.7158e+02,1.9075e+00,-1.6383e+01,4.7128e+02,-2.4425e-15,-1.6383e+01,4.7128e+02,1.9075e+00,-1.5769e+01,4.7089e+02,-2.4425e-15,-1.5769e+01,4.7089e+02,1.9075e+00,-1.5211e+01,4.7042e+02,-2.4425e-15,-1.5211e+01,4.7042e+02,1.9075e+00,-1.4718e+01,4.6988e+02,-2.4425e-15,-1.4718e+01,4.6988e+02,1.9075e+00,-1.4300e+01,4.6929e+02,-2.4425e-15,-1.4300e+01,4.6929e+02,1.9075e+00,-1.3962e+01,4.6864e+02,-2.4425e-15,-1.3962e+01,4.6864e+02,1.9075e+00,-1.3712e+01,4.6796e+02,-2.4425e-15,-1.3712e+01,4.6796e+02,1.9075e+00,-1.3554e+01,4.6725e+02,-2.4425e-15,-1.3554e+01,4.6725e+02,1.9075e+00,-1.3489e+01,4.6653e+02,-2.4425e-15,-1.3489e+01,4.6653e+02,1.9075e+00,-1.3519e+01,4.6580e+02,-2.4425e-15,-1.3519e+01,4.6580e+02,1.9075e+00,-1.3644e+01,4.6508e+02,-2.4425e-15,-1.3644e+01,4.6508e+02,1.9075e+00,-1.3862e+01,4.6439e+02,-2.4425e-15,-1.3862e+01,4.6439e+02,1.9075e+00,-1.4168e+01,4.6373e+02,-2.4425e-15,-1.4168e+01,4.6373e+02,1.9075e+00});
			return Coordinate_7_958_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #959, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_959_vector()
		{
			MFVec3f Normal_7_959_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_959_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #965, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_965_point()
		{
			MFVec3f Coordinate_7_965_point = new MFVec3f(new double[] {-2.1737e+02,4.6373e+02,-2.4425e-15,-2.1737e+02,4.6373e+02,1.9075e+00,-2.1774e+02,4.6314e+02,-2.4425e-15,-2.1774e+02,4.6314e+02,1.9075e+00,-2.1818e+02,4.6260e+02,-2.4425e-15,-2.1818e+02,4.6260e+02,1.9075e+00,-2.1869e+02,4.6212e+02,-2.4425e-15,-2.1869e+02,4.6212e+02,1.9075e+00,-2.1926e+02,4.6171e+02,-2.4425e-15,-2.1926e+02,4.6171e+02,1.9075e+00,-2.1987e+02,4.6137e+02,-2.4425e-15,-2.1987e+02,4.6137e+02,1.9075e+00,-2.2052e+02,4.6111e+02,-2.4425e-15,-2.2052e+02,4.6111e+02,1.9075e+00,-2.2119e+02,4.6093e+02,-2.4425e-15,-2.2119e+02,4.6093e+02,1.9075e+00,-2.2189e+02,4.6084e+02,-2.4425e-15,-2.2189e+02,4.6084e+02,1.9075e+00,-2.2258e+02,4.6084e+02,-2.4425e-15,-2.2258e+02,4.6084e+02,1.9075e+00,-2.2328e+02,4.6093e+02,-2.4425e-15,-2.2328e+02,4.6093e+02,1.9075e+00,-2.2395e+02,4.6110e+02,-2.4425e-15,-2.2395e+02,4.6110e+02,1.9075e+00,-2.2461e+02,4.6136e+02,-2.4425e-15,-2.2461e+02,4.6136e+02,1.9075e+00,-2.2522e+02,4.6169e+02,-2.4425e-15,-2.2522e+02,4.6169e+02,1.9075e+00,-2.2578e+02,4.6210e+02,-2.4425e-15,-2.2578e+02,4.6210e+02,1.9075e+00,-2.2629e+02,4.6258e+02,-2.4425e-15,-2.2629e+02,4.6258e+02,1.9075e+00,-2.2674e+02,4.6311e+02,-2.4425e-15,-2.2674e+02,4.6311e+02,1.9075e+00,-2.2712e+02,4.6370e+02,-2.4425e-15,-2.2712e+02,4.6370e+02,1.9075e+00,-2.2742e+02,4.6433e+02,-2.4425e-15,-2.2742e+02,4.6433e+02,1.9075e+00,-2.2763e+02,4.6500e+02,-2.4425e-15,-2.2763e+02,4.6500e+02,1.9075e+00,-2.2777e+02,4.6568e+02,-2.4425e-15,-2.2777e+02,4.6568e+02,1.9075e+00,-2.2781e+02,4.6638e+02,-2.4425e-15,-2.2781e+02,4.6638e+02,1.9075e+00,-2.2777e+02,4.6708e+02,-2.4425e-15,-2.2777e+02,4.6708e+02,1.9075e+00,-2.2764e+02,4.6776e+02,-2.4425e-15,-2.2764e+02,4.6776e+02,1.9075e+00,-2.2743e+02,4.6843e+02,-2.4425e-15,-2.2743e+02,4.6843e+02,1.9075e+00,-2.2713e+02,4.6906e+02,-2.4425e-15,-2.2713e+02,4.6906e+02,1.9075e+00});
			return Coordinate_7_965_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #966, 156 total numbers made up of 52 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_966_vector()
		{
			MFVec3f Normal_7_966_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.1057e-01,5.8564e-01,-0.0000e+00,-8.1057e-01,5.8564e-01,-0.0000e+00,-7.3078e-01,6.8261e-01,-0.0000e+00,-7.3078e-01,6.8261e-01,-0.0000e+00,-6.3947e-01,7.6882e-01,-0.0000e+00,-6.3947e-01,7.6882e-01,-0.0000e+00,-5.3807e-01,8.4290e-01,-0.0000e+00,-5.3807e-01,8.4290e-01,-0.0000e+00,-4.2818e-01,9.0369e-01,-0.0000e+00,-4.2818e-01,9.0369e-01,-0.0000e+00,-3.1154e-01,9.5023e-01,-0.0000e+00,-3.1154e-01,9.5023e-01,-0.0000e+00,-1.8999e-01,9.8179e-01,-0.0000e+00,-1.8999e-01,9.8179e-01,-0.0000e+00,-6.5440e-02,9.9786e-01,-0.0000e+00,-6.5440e-02,9.9786e-01,-0.0000e+00,6.0141e-02,9.9819e-01,-0.0000e+00,6.0141e-02,9.9819e-01,-0.0000e+00,1.8477e-01,9.8278e-01,-0.0000e+00,1.8477e-01,9.8278e-01,-0.0000e+00,3.0649e-01,9.5187e-01,-0.0000e+00,3.0649e-01,9.5187e-01,-0.0000e+00,4.2338e-01,9.0595e-01,-0.0000e+00,4.2338e-01,9.0595e-01,-0.0000e+00,5.3358e-01,8.4575e-01,-0.0000e+00,5.3358e-01,8.4575e-01,-0.0000e+00,6.3538e-01,7.7220e-01,-0.0000e+00,6.3538e-01,7.7220e-01,-0.0000e+00,7.2715e-01,6.8648e-01,-0.0000e+00,7.2715e-01,6.8648e-01,-0.0000e+00,8.0745e-01,5.8993e-01,-0.0000e+00,8.0745e-01,5.8993e-01,-0.0000e+00,8.7502e-01,4.8408e-01,-0.0000e+00,8.7502e-01,4.8408e-01,-0.0000e+00,9.2880e-01,3.7059e-01,-0.0000e+00,9.2880e-01,3.7059e-01,-0.0000e+00,9.6792e-01,2.5126e-01,-0.0000e+00,9.6792e-01,2.5126e-01,-0.0000e+00,9.9178e-01,1.2797e-01,-0.0000e+00,9.9178e-01,1.2797e-01,-0.0000e+00,1.0000e+00,2.6548e-03,-0.0000e+00,1.0000e+00,2.6548e-03,-0.0000e+00,9.9244e-01,-1.2270e-01,-0.0000e+00,9.9244e-01,-1.2270e-01,-0.0000e+00,9.6924e-01,-2.4612e-01,-0.0000e+00,9.6924e-01,-2.4612e-01,-0.0000e+00,9.3075e-01,-3.6565e-01,-0.0000e+00,9.3075e-01,-3.6565e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_966_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #972, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_972_point()
		{
			MFVec3f Coordinate_7_972_point = new MFVec3f(new double[] {-2.2713e+02,4.6906e+02,-2.4425e-15,-2.2713e+02,4.6906e+02,1.9075e+00,-2.2674e+02,4.6968e+02,-2.4425e-15,-2.2674e+02,4.6968e+02,1.9075e+00,-2.2628e+02,4.7023e+02,-2.4425e-15,-2.2628e+02,4.7023e+02,1.9075e+00,-2.2574e+02,4.7073e+02,-2.4425e-15,-2.2574e+02,4.7073e+02,1.9075e+00,-2.2514e+02,4.7115e+02,-2.4425e-15,-2.2514e+02,4.7115e+02,1.9075e+00,-2.2450e+02,4.7148e+02,-2.4425e-15,-2.2450e+02,4.7148e+02,1.9075e+00,-2.2382e+02,4.7173e+02,-2.4425e-15,-2.2382e+02,4.7173e+02,1.9075e+00,-2.2311e+02,4.7189e+02,-2.4425e-15,-2.2311e+02,4.7189e+02,1.9075e+00,-2.2238e+02,4.7196e+02,-2.4425e-15,-2.2238e+02,4.7196e+02,1.9075e+00,-2.2165e+02,4.7193e+02,-2.4425e-15,-2.2165e+02,4.7193e+02,1.9075e+00,-2.2094e+02,4.7180e+02,-2.4425e-15,-2.2094e+02,4.7180e+02,1.9075e+00,-2.2024e+02,4.7158e+02,-2.4425e-15,-2.2024e+02,4.7158e+02,1.9075e+00,-2.1958e+02,4.7128e+02,-2.4425e-15,-2.1958e+02,4.7128e+02,1.9075e+00,-2.1897e+02,4.7089e+02,-2.4425e-15,-2.1897e+02,4.7089e+02,1.9075e+00,-2.1841e+02,4.7042e+02,-2.4425e-15,-2.1841e+02,4.7042e+02,1.9075e+00,-2.1792e+02,4.6988e+02,-2.4425e-15,-2.1792e+02,4.6988e+02,1.9075e+00,-2.1750e+02,4.6929e+02,-2.4425e-15,-2.1750e+02,4.6929e+02,1.9075e+00,-2.1716e+02,4.6864e+02,-2.4425e-15,-2.1716e+02,4.6864e+02,1.9075e+00,-2.1691e+02,4.6796e+02,-2.4425e-15,-2.1691e+02,4.6796e+02,1.9075e+00,-2.1675e+02,4.6725e+02,-2.4425e-15,-2.1675e+02,4.6725e+02,1.9075e+00,-2.1669e+02,4.6653e+02,-2.4425e-15,-2.1669e+02,4.6653e+02,1.9075e+00,-2.1672e+02,4.6580e+02,-2.4425e-15,-2.1672e+02,4.6580e+02,1.9075e+00,-2.1684e+02,4.6508e+02,-2.4425e-15,-2.1684e+02,4.6508e+02,1.9075e+00,-2.1706e+02,4.6439e+02,-2.4425e-15,-2.1706e+02,4.6439e+02,1.9075e+00,-2.1737e+02,4.6373e+02,-2.4425e-15,-2.1737e+02,4.6373e+02,1.9075e+00});
			return Coordinate_7_972_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #973, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_973_vector()
		{
			MFVec3f Normal_7_973_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_973_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #1023, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_1023_point()
		{
			MFVec3f Coordinate_7_1023_point = new MFVec3f(new double[] {-2.1737e+02,1.6383e+01,-4.4409e-16,-2.1737e+02,1.6383e+01,1.9075e+00,-2.1776e+02,1.5769e+01,-4.4409e-16,-2.1776e+02,1.5769e+01,1.9075e+00,-2.1822e+02,1.5211e+01,-4.4409e-16,-2.1822e+02,1.5211e+01,1.9075e+00,-2.1876e+02,1.4718e+01,-4.4409e-16,-2.1876e+02,1.4718e+01,1.9075e+00,-2.1936e+02,1.4300e+01,-4.4409e-16,-2.1936e+02,1.4300e+01,1.9075e+00,-2.2000e+02,1.3962e+01,-4.4409e-16,-2.2000e+02,1.3962e+01,1.9075e+00,-2.2068e+02,1.3712e+01,-4.4409e-16,-2.2068e+02,1.3712e+01,1.9075e+00,-2.2139e+02,1.3554e+01,-4.4409e-16,-2.2139e+02,1.3554e+01,1.9075e+00,-2.2212e+02,1.3489e+01,-4.4409e-16,-2.2212e+02,1.3489e+01,1.9075e+00,-2.2285e+02,1.3519e+01,-4.4409e-16,-2.2285e+02,1.3519e+01,1.9075e+00,-2.2356e+02,1.3644e+01,-4.4409e-16,-2.2356e+02,1.3644e+01,1.9075e+00,-2.2426e+02,1.3862e+01,-4.4409e-16,-2.2426e+02,1.3862e+01,1.9075e+00,-2.2492e+02,1.4168e+01,-4.4409e-16,-2.2492e+02,1.4168e+01,1.9075e+00,-2.2553e+02,1.4558e+01,-4.4409e-16,-2.2553e+02,1.4558e+01,1.9075e+00,-2.2609e+02,1.5025e+01,-4.4409e-16,-2.2609e+02,1.5025e+01,1.9075e+00,-2.2658e+02,1.5561e+01,-4.4409e-16,-2.2658e+02,1.5561e+01,1.9075e+00,-2.2700e+02,1.6156e+01,-4.4409e-16,-2.2700e+02,1.6156e+01,1.9075e+00,-2.2734e+02,1.6801e+01,-4.4409e-16,-2.2734e+02,1.6801e+01,1.9075e+00,-2.2759e+02,1.7484e+01,-4.4409e-16,-2.2759e+02,1.7484e+01,1.9075e+00,-2.2775e+02,1.8194e+01,-4.4409e-16,-2.2775e+02,1.8194e+01,1.9075e+00,-2.2781e+02,1.8919e+01,-4.4409e-16,-2.2781e+02,1.8919e+01,1.9075e+00,-2.2778e+02,1.9646e+01,-4.4409e-16,-2.2778e+02,1.9646e+01,1.9075e+00,-2.2766e+02,2.0363e+01,-4.4409e-16,-2.2766e+02,2.0363e+01,1.9075e+00,-2.2744e+02,2.1057e+01,-4.4409e-16,-2.2744e+02,2.1057e+01,1.9075e+00,-2.2713e+02,2.1717e+01,-4.4409e-16,-2.2713e+02,2.1717e+01,1.9075e+00});
			return Coordinate_7_1023_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #1024, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_1024_vector()
		{
			MFVec3f Normal_7_1024_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_1024_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #1030, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_1030_point()
		{
			MFVec3f Coordinate_7_1030_point = new MFVec3f(new double[] {-2.2713e+02,2.1717e+01,-4.4409e-16,-2.2713e+02,2.1717e+01,1.9075e+00,-2.2674e+02,2.2331e+01,-4.4409e-16,-2.2674e+02,2.2331e+01,1.9075e+00,-2.2628e+02,2.2889e+01,-4.4409e-16,-2.2628e+02,2.2889e+01,1.9075e+00,-2.2574e+02,2.3382e+01,-4.4409e-16,-2.2574e+02,2.3382e+01,1.9075e+00,-2.2514e+02,2.3800e+01,-4.4409e-16,-2.2514e+02,2.3800e+01,1.9075e+00,-2.2450e+02,2.4138e+01,-4.4409e-16,-2.2450e+02,2.4138e+01,1.9075e+00,-2.2382e+02,2.4388e+01,-4.4409e-16,-2.2382e+02,2.4388e+01,1.9075e+00,-2.2311e+02,2.4546e+01,-4.4409e-16,-2.2311e+02,2.4546e+01,1.9075e+00,-2.2238e+02,2.4611e+01,-4.4409e-16,-2.2238e+02,2.4611e+01,1.9075e+00,-2.2165e+02,2.4581e+01,-4.4409e-16,-2.2165e+02,2.4581e+01,1.9075e+00,-2.2094e+02,2.4456e+01,-4.4409e-16,-2.2094e+02,2.4456e+01,1.9075e+00,-2.2024e+02,2.4238e+01,-4.4409e-16,-2.2024e+02,2.4238e+01,1.9075e+00,-2.1958e+02,2.3932e+01,-4.4409e-16,-2.1958e+02,2.3932e+01,1.9075e+00,-2.1897e+02,2.3542e+01,-4.4409e-16,-2.1897e+02,2.3542e+01,1.9075e+00,-2.1841e+02,2.3075e+01,-4.4409e-16,-2.1841e+02,2.3075e+01,1.9075e+00,-2.1792e+02,2.2539e+01,-4.4409e-16,-2.1792e+02,2.2539e+01,1.9075e+00,-2.1750e+02,2.1944e+01,-4.4409e-16,-2.1750e+02,2.1944e+01,1.9075e+00,-2.1716e+02,2.1299e+01,-4.4409e-16,-2.1716e+02,2.1299e+01,1.9075e+00,-2.1691e+02,2.0616e+01,-4.4409e-16,-2.1691e+02,2.0616e+01,1.9075e+00,-2.1675e+02,1.9906e+01,-4.4409e-16,-2.1675e+02,1.9906e+01,1.9075e+00,-2.1669e+02,1.9181e+01,-4.4409e-16,-2.1669e+02,1.9181e+01,1.9075e+00,-2.1672e+02,1.8454e+01,-4.4409e-16,-2.1672e+02,1.8454e+01,1.9075e+00,-2.1684e+02,1.7737e+01,-4.4409e-16,-2.1684e+02,1.7737e+01,1.9075e+00,-2.1706e+02,1.7043e+01,-4.4409e-16,-2.1706e+02,1.7043e+01,1.9075e+00,-2.1737e+02,1.6383e+01,-4.4409e-16,-2.1737e+02,1.6383e+01,1.9075e+00});
			return Coordinate_7_1030_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #1031, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_1031_vector()
		{
			MFVec3f Normal_7_1031_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_1031_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #1037, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_1037_point()
		{
			MFVec3f Coordinate_7_1037_point = new MFVec3f(new double[] {-2.3932e+01,2.1717e+01,0.0000e+00,-2.3932e+01,2.1717e+01,1.9075e+00,-2.3542e+01,2.2331e+01,0.0000e+00,-2.3542e+01,2.2331e+01,1.9075e+00,-2.3075e+01,2.2889e+01,0.0000e+00,-2.3075e+01,2.2889e+01,1.9075e+00,-2.2539e+01,2.3382e+01,0.0000e+00,-2.2539e+01,2.3382e+01,1.9075e+00,-2.1944e+01,2.3800e+01,0.0000e+00,-2.1944e+01,2.3800e+01,1.9075e+00,-2.1299e+01,2.4138e+01,0.0000e+00,-2.1299e+01,2.4138e+01,1.9075e+00,-2.0616e+01,2.4388e+01,0.0000e+00,-2.0616e+01,2.4388e+01,1.9075e+00,-1.9906e+01,2.4546e+01,0.0000e+00,-1.9906e+01,2.4546e+01,1.9075e+00,-1.9181e+01,2.4611e+01,0.0000e+00,-1.9181e+01,2.4611e+01,1.9075e+00,-1.8454e+01,2.4581e+01,0.0000e+00,-1.8454e+01,2.4581e+01,1.9075e+00,-1.7737e+01,2.4456e+01,0.0000e+00,-1.7737e+01,2.4456e+01,1.9075e+00,-1.7043e+01,2.4238e+01,0.0000e+00,-1.7043e+01,2.4238e+01,1.9075e+00,-1.6383e+01,2.3932e+01,0.0000e+00,-1.6383e+01,2.3932e+01,1.9075e+00,-1.5769e+01,2.3542e+01,0.0000e+00,-1.5769e+01,2.3542e+01,1.9075e+00,-1.5211e+01,2.3075e+01,0.0000e+00,-1.5211e+01,2.3075e+01,1.9075e+00,-1.4718e+01,2.2539e+01,0.0000e+00,-1.4718e+01,2.2539e+01,1.9075e+00,-1.4300e+01,2.1944e+01,0.0000e+00,-1.4300e+01,2.1944e+01,1.9075e+00,-1.3962e+01,2.1299e+01,0.0000e+00,-1.3962e+01,2.1299e+01,1.9075e+00,-1.3712e+01,2.0616e+01,0.0000e+00,-1.3712e+01,2.0616e+01,1.9075e+00,-1.3554e+01,1.9906e+01,0.0000e+00,-1.3554e+01,1.9906e+01,1.9075e+00,-1.3489e+01,1.9181e+01,0.0000e+00,-1.3489e+01,1.9181e+01,1.9075e+00,-1.3519e+01,1.8454e+01,0.0000e+00,-1.3519e+01,1.8454e+01,1.9075e+00,-1.3644e+01,1.7737e+01,0.0000e+00,-1.3644e+01,1.7737e+01,1.9075e+00,-1.3862e+01,1.7043e+01,0.0000e+00,-1.3862e+01,1.7043e+01,1.9075e+00,-1.4168e+01,1.6383e+01,0.0000e+00,-1.4168e+01,1.6383e+01,1.9075e+00});
			return Coordinate_7_1037_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #1038, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_1038_vector()
		{
			MFVec3f Normal_7_1038_vector = new MFVec3f(new double[] {8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,8.0750e-01,-5.8987e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,7.2360e-01,-6.9022e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,6.2731e-01,-7.7877e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,5.2030e-01,-8.5399e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,4.0438e-01,-9.1459e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,2.8154e-01,-9.5955e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,1.5388e-01,-9.8809e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,2.3597e-02,-9.9972e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-1.0710e-01,-9.9425e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-2.3595e-01,-9.7176e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-3.6078e-01,-9.3265e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-4.7943e-01,-8.7758e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-5.8987e-01,-8.0750e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-6.9022e-01,-7.2360e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-7.7877e-01,-6.2731e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-8.5399e-01,-5.2030e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.1459e-01,-4.0438e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.5955e-01,-2.8154e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.8809e-01,-1.5388e-01,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9972e-01,-2.3597e-02,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.9425e-01,1.0710e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.7176e-01,2.3595e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-9.3265e-01,3.6078e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00});
			return Normal_7_1038_vector;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #1044, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_1044_point()
		{
			MFVec3f Coordinate_7_1044_point = new MFVec3f(new double[] {-1.4168e+01,1.6383e+01,0.0000e+00,-1.4168e+01,1.6383e+01,1.9075e+00,-1.4558e+01,1.5769e+01,0.0000e+00,-1.4558e+01,1.5769e+01,1.9075e+00,-1.5025e+01,1.5211e+01,0.0000e+00,-1.5025e+01,1.5211e+01,1.9075e+00,-1.5561e+01,1.4718e+01,0.0000e+00,-1.5561e+01,1.4718e+01,1.9075e+00,-1.6156e+01,1.4300e+01,0.0000e+00,-1.6156e+01,1.4300e+01,1.9075e+00,-1.6801e+01,1.3962e+01,0.0000e+00,-1.6801e+01,1.3962e+01,1.9075e+00,-1.7484e+01,1.3712e+01,0.0000e+00,-1.7484e+01,1.3712e+01,1.9075e+00,-1.8194e+01,1.3554e+01,0.0000e+00,-1.8194e+01,1.3554e+01,1.9075e+00,-1.8919e+01,1.3489e+01,0.0000e+00,-1.8919e+01,1.3489e+01,1.9075e+00,-1.9646e+01,1.3519e+01,0.0000e+00,-1.9646e+01,1.3519e+01,1.9075e+00,-2.0363e+01,1.3644e+01,0.0000e+00,-2.0363e+01,1.3644e+01,1.9075e+00,-2.1057e+01,1.3862e+01,0.0000e+00,-2.1057e+01,1.3862e+01,1.9075e+00,-2.1717e+01,1.4168e+01,0.0000e+00,-2.1717e+01,1.4168e+01,1.9075e+00,-2.2331e+01,1.4558e+01,0.0000e+00,-2.2331e+01,1.4558e+01,1.9075e+00,-2.2889e+01,1.5025e+01,0.0000e+00,-2.2889e+01,1.5025e+01,1.9075e+00,-2.3382e+01,1.5561e+01,0.0000e+00,-2.3382e+01,1.5561e+01,1.9075e+00,-2.3800e+01,1.6156e+01,0.0000e+00,-2.3800e+01,1.6156e+01,1.9075e+00,-2.4138e+01,1.6801e+01,0.0000e+00,-2.4138e+01,1.6801e+01,1.9075e+00,-2.4388e+01,1.7484e+01,0.0000e+00,-2.4388e+01,1.7484e+01,1.9075e+00,-2.4546e+01,1.8194e+01,0.0000e+00,-2.4546e+01,1.8194e+01,1.9075e+00,-2.4611e+01,1.8919e+01,0.0000e+00,-2.4611e+01,1.8919e+01,1.9075e+00,-2.4581e+01,1.9646e+01,0.0000e+00,-2.4581e+01,1.9646e+01,1.9075e+00,-2.4456e+01,2.0363e+01,0.0000e+00,-2.4456e+01,2.0363e+01,1.9075e+00,-2.4238e+01,2.1057e+01,0.0000e+00,-2.4238e+01,2.1057e+01,1.9075e+00,-2.3932e+01,2.1717e+01,0.0000e+00,-2.3932e+01,2.1717e+01,1.9075e+00});
			return Coordinate_7_1044_point;
		}
		/** Large attribute array: Normal vector field, scene-graph level=7, element #1045, 150 total numbers made up of 50 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getNormal_7_1045_vector()
		{
			MFVec3f Normal_7_1045_vector = new MFVec3f(new double[] {-8.7758e-01,4.7943e-01,-0.0000e+00,-8.7758e-01,4.7943e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-8.0750e-01,5.8987e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-7.2360e-01,6.9022e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-6.2731e-01,7.7877e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-5.2030e-01,8.5399e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-4.0438e-01,9.1459e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-2.8154e-01,9.5955e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-1.5388e-01,9.8809e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,-2.3597e-02,9.9972e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,1.0710e-01,9.9425e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,2.3595e-01,9.7176e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,3.6078e-01,9.3265e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,4.7943e-01,8.7758e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,5.8987e-01,8.0750e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,6.9022e-01,7.2360e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,7.7877e-01,6.2731e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,8.5399e-01,5.2030e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.1459e-01,4.0438e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.5955e-01,2.8154e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.8809e-01,1.5388e-01,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9972e-01,2.3597e-02,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.9425e-01,-1.0710e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.7176e-01,-2.3595e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,9.3265e-01,-3.6078e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00,8.7758e-01,-4.7943e-01,-0.0000e+00});
			return Normal_7_1045_vector;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NistCtc03Asme1Ap242Spri model
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
        X3D thisExampleX3dModel = new NistCtc03Asme1Ap242Spri().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.NistCtc03Asme1Ap242Spri\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.NistCtc03Asme1Ap242Spri\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
