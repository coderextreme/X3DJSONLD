package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> ASCII-coded IndexedFaceSet example. </p>
 <p> Related links: <a href="../../../ExperimentalBinaryCompression/EightCoded.java">EightCoded.java</a> source, <a href="../../../ExperimentalBinaryCompression/EightCodedIndex.html" target="_top">EightCoded catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/EightCoded.x3d">EightCoded.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> ASCII-coded IndexedFaceSet example. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Isenburg </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 4 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 5 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/Eight.png">Eight.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D VRML binary compression </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/EightCoded.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/EightCoded.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/../license.html">../license.html</a> </td>
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

	* @author Martin Isenburg
 */

public class EightCoded
{
	/** Default constructor to create this object. */
	public EightCoded ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("EightCoded.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("ASCII-coded IndexedFaceSet example."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Isenburg"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 May 2003"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("5 May 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Eight.png"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D VRML binary compression"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/EightCoded.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("EightCoded.x3d"))
    .addChild(new ExternProtoDeclare("CodedIndexedFaceSet").setName("CodedIndexedFaceSet").setAppinfo("An ASCII-coded IndexedFaceSet").setUrl(new String[] {"CodedCompressedPrototypes.x3d#CodedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d#CodedIndexedFaceSet","CodedCompressedPrototypes.wrl#CodedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.wrl#CodedIndexedFaceSet"})
      .addField(new field().setName("code").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("ASCII-coded coordIndex and texCoordIndex values"))
      .addField(new field().setName("pos").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("dequantization multiplier for Coordinate values"))
      .addField(new field().setName("tex").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("dequantization multiplier for TextureCoordinate values"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Coordinate node"))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("TextureCoordinate node")))
    .addChild(new Viewpoint().setDescription("1M view from above").setOrientation(1.0,0.0,0.0,-1.5707999).setPosition(0.0,1.0,0.0))
    .addChild(new Viewpoint().setDescription("1M view from side").setPosition(0.0,0.0,1.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.05,0.1,0.3})).setSkyColor(new MFColor(new double[] {0.05,0.1,0.3})))
    .addChild(new Transform().setScale(0.25,0.25,0.25)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,0.5,0.5)))
        .setGeometry(new ProtoInstance("CodedIndexedFaceSet").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("code").setValue(getfieldValue_code_6_27_value()))
          .addFieldValue(new fieldValue().setName("pos").setValue(0.0025043988))
          .addFieldValue(new fieldValue().setName("coord")
            .addChild(new Coordinate().setPoint(getCoordinate_7_29_point())))))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getfieldValue_code_6_27_value_1()
		{
			int[] value = {6144,3,0,5,0,0,5,5,0,5,0,0,5,5,0,5,5,0,5,0,0,0,3,1,1,1,2,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,0,0,4,0,8,11,0,5,0,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,0,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,3,2,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,1,1,1,1,2,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,5,0,5,5,0,5,5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,5,0,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,5,0,5,5,0,5};
			return value;
		}
		private int[] getfieldValue_code_6_27_value_2()
		{
			int[] value = {5,0,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,0,0,5,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,0,0,0,0,0,4,0,20,15,0,5,0,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,0,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,0,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,3,2,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,1,2,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0};
			return value;
		}
		private int[] getfieldValue_code_6_27_value_3()
		{
			int[] value = {5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,5,0,5,5,0,5,5,5,0,5,5,5,0,5,5,5,0,5,5,5,0,5,5,5,5,0,5,5,5,5,5,5,2};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_29_point_1()
		{
			double[] value = {-24.0,17.0,39.0,22.0,-17.0,-4.0,16.0,-26.0,-5.0,3.0,1.0,-32.0,11.0,0.0,-29.0,18.0,-1.0,-25.0,-35.0,26.0,23.0,-34.0,17.0,31.0,-27.0,6.0,42.0,-25.0,-6.0,0.0,-21.0,-18.0,-2.0,-13.0,-26.0,-4.0,41.0,-102.0,31.0,24.0,-6.0,-8.0,-45.0,23.0,17.0,-14.0,26.0,9.0,-4.0,30.0,8.0,6.0,30.0,4.0,16.0,25.0,1.0,21.0,18.0,-3.0,25.0,6.0,-6.0,24.0,-6.0,-8.0,21.0,-17.0,-9.0,14.0,-26.0,-9.0,4.0,-30.0,-8.0,-7.0,-30.0,-5.0,-15.0,-25.0,-1.0,-22.0,-18.0,4.0,10.0,0.0,38.0,22.0,0.0,35.0,-44.0,-6.0,-22.0,-21.0,6.0,13.0,-18.0,17.0,14.0,-11.0,26.0,12.0,-1.0,30.0,9.0,8.0,30.0,3.0,15.0,26.0,-3.0,21.0,17.0,-9.0,22.0,6.0,-12.0,22.0,-6.0,-13.0,17.0,-17.0,-14.0,11.0,-26.0,-12.0,1.0,-30.0,-9.0,-8.0,-30.0,-3.0,-15.0,-26.0,3.0,18.0,0.0,30.0,27.0,0.0,24.0,-14.0,-17.0,18.0,-49.0,-7.0,-11.0,-17.0,7.0,18.0,-14.0,17.0,18.0,-7.0,26.0,15.0,1.0,30.0,8.0,9.0,30.0,2.0,14.0,26.0,-7.0,18.0,17.0,-14.0,19.0,6.0,-17.0,17.0,-6.0,-19.0,14.0,-17.0,-18.0,6.0,-26.0,-14.0,-1.0,-30.0,-9.0,-8.0,-30.0,-1.0,24.0,0.0,21.0,28.0,0.0,14.0,-9.0,-26.0,13.0,-9.0,-17.0,20.0,-50.0,-7.0,2.0,-12.0,7.0,23.0,-8.0,17.0,20.0,-3.0,26.0,16.0,3.0,30.0,9.0,9.0,30.0,-1.0,12.0,26.0,-11.0,14.0,17.0,-18.0,14.0,6.0,-21.0,11.0,-6.0,-23.0,9.0,-17.0,-20.0,3.0,-26.0,-16.0,-3.0,-30.0,-9.0,28.0,0.0,12.0,30.0,0.0,4.0,-7.0,-30.0,6.0,-6.0,-26.0,15.0,-3.0,-17.0,22.0,-48.0,-7.0,15.0,-6.0,7.0,24.0,-2.0,17.0,23.0,1.0,26.0,16.0,5.0,30.0,7.0,8.0,30.0,-4.0,10.0,26.0,-13.0,8.0,17.0,-21.0,8.0,6.0,-24.0,6.0,-6.0,-25.0,2.0,-17.0,-22.0,-1.0,-26.0,-16.0,32.0,0.0,3.0,31.0,0.0,-6.0,-8.0,-30.0,-4.0,-6.0,-30.0,7.0};
			return value;
		}
		private double[] getCoordinate_7_29_point_2()
		{
			double[] value = {-1.0,-26.0,16.0,3.0,-17.0,22.0,-43.0,-7.0,27.0,1.0,7.0,26.0,3.0,17.0,22.0,6.0,26.0,15.0,7.0,30.0,5.0,7.0,30.0,-5.0,5.0,26.0,-15.0,3.0,17.0,-22.0,1.0,6.0,-26.0,-1.0,-6.0,-25.0,-3.0,-17.0,-22.0,35.0,0.0,-8.0,32.0,0.0,-17.0,-12.0,-26.0,-10.0,-9.0,-30.0,-2.0,-3.0,-30.0,9.0,3.0,-26.0,15.0,8.0,-17.0,21.0,-34.0,-7.0,37.0,7.0,7.0,24.0,9.0,17.0,21.0,9.0,26.0,13.0,8.0,30.0,4.0,6.0,30.0,-7.0,1.0,26.0,-16.0,-3.0,17.0,-23.0,-5.0,6.0,-24.0,-8.0,-6.0,-25.0,37.0,0.0,-19.0,30.0,0.0,-29.0,-18.0,-17.0,-13.0,-14.0,-26.0,-7.0,-9.0,-30.0,1.0,-1.0,-30.0,9.0,7.0,-26.0,14.0,13.0,-17.0,18.0,-23.0,-7.0,45.0,13.0,7.0,21.0,14.0,17.0,18.0,12.0,26.0,11.0,9.0,30.0,1.0,3.0,30.0,-9.0,-3.0,26.0,-16.0,-8.0,17.0,-20.0,-12.0,6.0,-23.0,35.0,0.0,-33.0,25.0,0.0,-40.0,-22.0,-6.0,-12.0,-20.0,-18.0,-8.0,-16.0,-25.0,-3.0,-8.0,-30.0,3.0,2.0,-30.0,9.0,10.0,-26.0,12.0,16.0,0.0,-32.0,1.0,-17.0,46.0,-11.0,-7.0,49.0,19.0,7.0,17.0,18.0,17.0,13.0,15.0,26.0,8.0,8.0,30.0,-2.0,1.0,30.0,-8.0,-7.0,26.0,-15.0,-13.0,17.0,-18.0,29.0,0.0,-45.0,14.0,0.0,-50.0,-23.0,5.0,-8.0,-25.0,-6.0,-6.0,-21.0,-17.0,-3.0,-15.0,-26.0,0.0,-7.0,-30.0,5.0,4.0,-30.0,8.0,6.0,0.0,-31.0,-2.0,0.0,-31.0,18.0,-25.0,36.0,12.0,-17.0,44.0,2.0,-7.0,50.0,23.0,7.0,12.0,20.0,17.0,9.0,16.0,26.0,3.0,8.0,30.0,-3.0,-2.0,30.0,-9.0,-11.0,26.0,-12.0,18.0,-1.0,-55.0,2.0,0.0,-56.0,-22.0,17.0,-4.0,-25.0,6.0,-2.0,-24.0,-7.0,0.0,-20.0,-17.0,1.0,-14.0,-25.0,5.0,-5.0,-30.0,6.0,-4.0,-1.0,-30.0,-12.0,0.0,-27.0,-18.0,0.0,-23.0,-27.0,30.0,-25.0,55.0,-59.0,51.0,26.0,-25.0,31.0,24.0,-17.0,38.0,15.0,-6.0,48.0};
			return value;
		}
		private double[] getCoordinate_7_29_point_3()
		{
			double[] value = {24.0,6.0,6.0,22.0,17.0,3.0,16.0,26.0,0.0,6.0,30.0,-5.0,-5.0,30.0,-8.0,4.0,0.0,-60.0,-12.0,0.0,-60.0,-17.0,25.0,-1.0,-22.0,17.0,2.0,-23.0,6.0,4.0,-23.0,-7.0,5.0,-19.0,-17.0,7.0,-12.0,-26.0,7.0,-14.0,0.0,-28.0,-20.0,0.0,-23.0,-55.0,0.0,-27.0,-31.0,1.0,-3.0,-30.0,0.0,5.0,-28.0,1.0,13.0,-40.0,25.0,13.0,-40.0,17.0,22.0,-37.0,7.0,34.0,-23.0,-7.0,-6.0,-19.0,-17.0,-7.0,-11.0,-26.0,-7.0,-13.0,-30.0,56.0,7.0,-29.0,-6.0,16.0,-26.0,-6.0,22.0,-16.0,-3.0,25.0,-6.0,-3.0,24.0,6.0,-1.0,21.0,17.0,2.0,14.0,26.0,5.0,5.0,30.0,6.0,4.0,0.0,-30.0,12.0,0.0,-27.0,19.0,0.0,-23.0,24.0,0.0,-17.0,28.0,0.0,-11.0,29.0,-1.0,-3.0,29.0,-1.0,4.0,27.0,0.0,11.0,33.0,-30.0,18.0,34.0,-25.0,23.0,33.0,-17.0,31.0,27.0,-6.0,42.0,25.0,6.0,0.0,21.0,18.0,-2.0,14.0,26.0,-4.0,3.0,29.0,-6.0,-10.0,1.0,-61.0,-22.0,0.0,-61.0,-9.0,29.0,-5.0,-16.0,25.0,5.0,-22.0,18.0,10.0,-23.0,6.0,9.0,-21.0,-7.0,10.0,-16.0,-18.0,12.0,-24.0,1.0,-26.0,-28.0,0.0,-18.0,-34.0,0.0,-10.0,-35.0,0.0,-3.0,-35.0,0.0,7.0,-31.0,0.0,15.0,-44.0,17.0,11.0,-44.0,6.0,24.0,-20.0,-6.0,-12.0,-18.0,-18.0,-11.0,-10.0,-25.0,-11.0,-23.0,-30.0,53.0,8.0,-29.0,-5.0,17.0,-25.0,-2.0,22.0,-17.0,2.0,24.0,-6.0,4.0,23.0,6.0,5.0,19.0,18.0,7.0,12.0,25.0,8.0,14.0,1.0,-28.0,21.0,0.0,-23.0,26.0,0.0,-16.0,29.0,-1.0,-10.0,32.0,0.0,-3.0,30.0,0.0,6.0,28.0,-1.0,13.0,38.0,-25.0,14.0,40.0,-17.0,21.0,36.0,-7.0,34.0,24.0,7.0,-5.0,18.0,17.0,-7.0,12.0,26.0,-7.0,-21.0,0.0,-59.0,-26.0,0.0,-59.0,-21.0,-3.0,-61.0,24.0,32.0,47.0,-9.0,32.0,1.0,-18.0,28.0,15.0,-22.0,18.0,16.0,-24.0,5.0,13.0,-21.0,-8.0,16.0,-33.0,2.0,-22.0};
			return value;
		}
		private double[] getCoordinate_7_29_point_4()
		{
			double[] value = {-37.0,1.0,-11.0,-41.0,-1.0,-3.0,-41.0,-3.0,7.0,-37.0,-1.0,19.0,-49.0,6.0,12.0,-19.0,-7.0,-19.0,-19.0,-18.0,-17.0,-11.0,-25.0,-16.0,-27.0,-30.0,50.0,9.0,-29.0,-4.0,17.0,-26.0,5.0,21.0,-18.0,9.0,23.0,-5.0,11.0,21.0,7.0,11.0,18.0,18.0,11.0,22.0,-1.0,-25.0,28.0,0.0,-18.0,33.0,-1.0,-11.0,36.0,0.0,-2.0,36.0,1.0,6.0,32.0,0.0,17.0,42.0,-18.0,10.0,44.0,-6.0,25.0,20.0,6.0,-12.0,17.0,18.0,-11.0,-27.0,0.0,-54.0,-22.0,-2.0,-54.0,-13.0,-5.0,-55.0,-2.0,-8.0,-55.0,22.0,27.0,25.0,15.0,43.0,33.0,-8.0,31.0,-30.0,-7.0,12.0,62.0,-22.0,27.0,23.0,-27.0,16.0,17.0,-32.0,4.0,13.0,-44.0,4.0,-10.0,-44.0,-1.0,-3.0,-45.0,-4.0,6.0,-50.0,-7.0,20.0,-31.0,-7.0,-25.0,-21.0,-19.0,-23.0,-14.0,-25.0,-24.0,-23.0,-32.0,47.0,9.0,-31.0,1.0,18.0,-28.0,16.0,22.0,-18.0,17.0,22.0,-4.0,17.0,21.0,8.0,16.0,29.0,-2.0,-22.0,35.0,-2.0,-12.0,40.0,0.0,-4.0,44.0,2.0,5.0,41.0,2.0,19.0,48.0,-6.0,12.0,18.0,6.0,-18.0,-25.0,-3.0,-50.0,-13.0,-3.0,-51.0,-4.0,-4.0,-50.0,2.0,-1.0,-49.0,5.0,3.0,-48.0,23.0,4.0,16.0,21.0,18.0,17.0,18.0,28.0,16.0,9.0,31.0,1.0,-3.0,30.0,-14.0,-11.0,25.0,-17.0,-23.0,2.0,55.0,-13.0,6.0,54.0,-29.0,22.0,21.0,-34.0,12.0,14.0,-38.0,6.0,4.0,-42.0,1.0,-2.0,-44.0,-4.0,3.0,-44.0,-9.0,12.0,-29.0,-11.0,-28.0,-23.0,-17.0,-28.0,-20.0,-19.0,-32.0,-22.0,-11.0,-46.0,8.0,-32.0,78.0,15.0,-43.0,32.0,22.0,-27.0,25.0,24.0,-15.0,23.0,23.0,-2.0,21.0,34.0,-4.0,-17.0,40.0,-3.0,-7.0,48.0,1.0,1.0,61.0,6.0,14.0,-6.0,-7.0,-54.0,-3.0,-1.0,-47.0,2.0,2.0,-45.0,7.0,6.0,-44.0,9.0,13.0,-42.0,7.0,20.0,-41.0,17.0,-18.0,11.0,22.0,-7.0,11.0,22.0,5.0,10.0,21.0,18.0,10.0,17.0,26.0,5.0,9.0,29.0,-4.0};
			return value;
		}
		private double[] getCoordinate_7_29_point_5()
		{
			double[] value = {-1.0,30.0,-10.0,-11.0,25.0,-11.0,-17.0,18.0,-11.0,-20.0,6.0,-12.0,-22.0,-6.0,-12.0,-20.0,-16.0,-7.0,-17.0,-25.0,-3.0,-10.0,-30.0,4.0,0.0,-29.0,8.0,14.0,-1.0,-28.0,7.0,0.0,-31.0,5.0,-25.0,39.0,19.0,-18.0,6.0,23.0,-6.0,5.0,24.0,6.0,4.0,22.0,17.0,2.0,17.0,25.0,-1.0,9.0,29.0,-5.0,-2.0,30.0,-7.0,-12.0,26.0,-7.0,-19.0,17.0,-7.0,-23.0,7.0,-6.0,-24.0,-6.0,-4.0,-22.0,-17.0,-2.0,-17.0,-25.0,1.0,-9.0,-30.0,5.0,5.0,0.0,-29.0,-3.0,-1.0,-30.0,-11.0,0.0,-28.0,17.0,-30.0,33.0,15.0,-25.0,35.0,21.0,-17.0,2.0,25.0,-6.0,0.0,24.0,6.0,-3.0,22.0,16.0,-4.0,17.0,26.0,-5.0,7.0,29.0,-6.0,-4.0,30.0,-5.0,-14.0,26.0,-4.0,-21.0,18.0,-2.0,-25.0,6.0,0.0,-25.0,-6.0,1.0,-23.0,-17.0,3.0,-16.0,-26.0,6.0,-5.0,0.0,-31.0,-13.0,0.0,-29.0,-21.0,0.0,-24.0,-26.0,0.0,-18.0,27.0,-30.0,27.0,26.0,-30.0,27.0,25.0,-25.0,30.0,21.0,-18.0,-3.0,24.0,-6.0,-7.0,24.0,6.0,-8.0,21.0,17.0,-9.0,14.0,26.0,-8.0,5.0,30.0,-8.0,-7.0,30.0,-4.0,-15.0,25.0,-1.0,-22.0,18.0,3.0,-24.0,6.0,6.0,-25.0,-6.0,8.0,-21.0,-17.0,9.0,-16.0,0.0,-32.0,-24.0,0.0,-27.0,-30.0,0.0,-19.0,-35.0,0.0,-11.0,-36.0,0.0,-1.0,37.0,-26.0,18.0,34.0,-30.0,18.0,33.0,-30.0,20.0,33.0,-26.0,23.0,20.0,-17.0,-9.0,22.0,-6.0,-12.0,22.0,6.0,-14.0,17.0,17.0,-13.0,11.0,26.0,-12.0,2.0,30.0,-9.0,-8.0,30.0,-3.0,-16.0,26.0,3.0,-20.0,17.0,8.0,-23.0,6.0,12.0,-21.0,-6.0,14.0,-29.0,0.0,-31.0,-35.0,0.0,-22.0,-40.0,0.0,-12.0,-42.0,0.0,-1.0,-41.0,0.0,9.0,-36.0,0.0,20.0,45.0,-17.0,1.0,41.0,-26.0,7.0,37.0,-30.0,10.0,37.0,-30.0,10.0,38.0,-26.0,14.0,18.0,-17.0,-14.0,19.0,-7.0,-17.0,17.0,7.0,-19.0,13.0,17.0,-18.0,7.0,26.0,-14.0,-1.0,30.0,-9.0};
			return value;
		}
		private double[] getCoordinate_7_29_point_6()
		{
			double[] value = {-8.0,30.0,-1.0,-15.0,26.0,7.0,-18.0,17.0,13.0,-18.0,6.0,18.0,-41.0,0.0,-26.0,-46.0,0.0,-14.0,-49.0,0.0,-2.0,-47.0,0.0,10.0,-43.0,0.0,22.0,-35.0,0.0,33.0,-25.0,0.0,40.0,44.0,-6.0,-22.0,44.0,-17.0,-11.0,40.0,-26.0,-4.0,39.0,-30.0,0.0,38.0,-30.0,0.0,41.0,-26.0,4.0,14.0,-17.0,-18.0,13.0,-7.0,-22.0,12.0,7.0,-22.0,8.0,17.0,-21.0,3.0,26.0,-16.0,-3.0,30.0,-8.0,-9.0,30.0,1.0,-12.0,26.0,11.0,-14.0,17.0,17.0,-52.0,0.0,-17.0,-55.0,0.0,-3.0,-54.0,0.0,11.0,-49.0,0.0,25.0,-40.0,0.0,37.0,-29.0,0.0,45.0,-15.0,0.0,49.0,0.0,-1.0,52.0,-10.0,-17.0,52.0,34.0,23.0,-96.0,34.0,-5.0,-32.0,39.0,-17.0,-21.0,39.0,-26.0,-14.0,37.0,-30.0,-10.0,37.0,-30.0,-10.0,40.0,-26.0,-7.0,9.0,-17.0,-21.0,8.0,-7.0,-24.0,5.0,7.0,-25.0,3.0,17.0,-22.0,-1.0,26.0,-16.0,-6.0,30.0,-7.0,-8.0,30.0,3.0,-9.0,26.0,13.0,-61.0,0.0,-4.0,-59.0,0.0,11.0,-55.0,0.0,26.0,-46.0,0.0,40.0,-33.0,0.0,49.0,-18.0,-1.0,54.0,-1.0,0.0,57.0,17.0,-25.0,115.0,16.0,-30.0,60.0,23.0,-32.0,47.0,27.0,-30.0,33.0,29.0,-22.0,28.0,28.0,-9.0,27.0,37.0,-7.0,-13.0,43.0,-3.0,-4.0,48.0,2.0,2.0,1.0,-3.0,-43.0,4.0,4.0,-41.0,9.0,9.0,-40.0,14.0,15.0,-38.0,13.0,21.0,-37.0,-8.0,27.0,-14.0,2.0,29.0,-8.0,10.0,29.0,0.0,16.0,25.0,6.0,18.0,17.0,14.0,17.0,7.0,18.0,19.0,-7.0,18.0,-25.0,3.0,48.0,-15.0,4.0,49.0,-37.0,16.0,17.0,-40.0,8.0,9.0,-41.0,3.0,1.0,-42.0,-3.0,1.0,-39.0,-8.0,8.0,-31.0,-11.0,-32.0,-28.0,-14.0,-34.0,-26.0,-10.0,-39.0,-25.0,-5.0,-48.0,0.0,17.0,-56.0,12.0,6.0,-48.0,24.0,-6.0,-39.0,31.0,-17.0,-30.0,33.0,-25.0,-23.0,33.0,-30.0,-20.0,33.0,-30.0,-18.0,37.0,-26.0,-18.0,3.0,-17.0,-22.0,1.0,-7.0,-25.0,-1.0,7.0,-26.0};
			return value;
		}
		private double[] getCoordinate_7_29_point_7()
		{
			double[] value = {-3.0,17.0,-22.0,-5.0,26.0,-15.0,-7.0,30.0,-6.0,-7.0,30.0,6.0,-64.0,0.0,10.0,-59.0,0.0,26.0,-50.0,0.0,41.0,-37.0,0.0,52.0,-21.0,0.0,57.0,-3.0,0.0,60.0,12.0,0.0,61.0,13.0,-29.0,56.0,26.0,-30.0,50.0,36.0,-28.0,39.0,36.0,-23.0,33.0,36.0,-15.0,32.0,37.0,-9.0,-10.0,45.0,-3.0,-1.0,4.0,4.0,-40.0,13.0,9.0,-35.0,19.0,16.0,-33.0,20.0,23.0,-32.0,-5.0,27.0,-15.0,3.0,29.0,-7.0,10.0,29.0,1.0,14.0,25.0,11.0,13.0,18.0,20.0,12.0,9.0,30.0,-14.0,8.0,45.0,-44.0,9.0,12.0,-43.0,4.0,4.0,-43.0,-1.0,-2.0,-38.0,-6.0,4.0,-34.0,-10.0,-37.0,-30.0,-8.0,-37.0,-27.0,-5.0,-42.0,3.0,5.0,-51.0,12.0,-7.0,-44.0,21.0,-16.0,-36.0,25.0,-25.0,-30.0,27.0,-30.0,-27.0,27.0,-30.0,-27.0,31.0,-26.0,-27.0,-2.0,-17.0,-22.0,-6.0,-7.0,-24.0,-8.0,7.0,-25.0,-8.0,17.0,-21.0,-10.0,26.0,-13.0,-8.0,30.0,-3.0,-61.0,0.0,25.0,-52.0,0.0,40.0,-39.0,0.0,52.0,-24.0,0.0,59.0,-7.0,0.0,61.0,11.0,1.0,61.0,23.0,-30.0,52.0,38.0,-26.0,45.0,46.0,-22.0,36.0,45.0,-17.0,36.0,43.0,-7.0,-5.0,12.0,8.0,-36.0,26.0,15.0,-27.0,28.0,22.0,-26.0,-2.0,27.0,-15.0,6.0,30.0,-7.0,9.0,28.0,4.0,10.0,26.0,14.0,7.0,19.0,22.0,-1.0,15.0,32.0,-45.0,4.0,5.0,-43.0,1.0,-3.0,-44.0,-4.0,-10.0,-39.0,-7.0,-37.0,-28.0,-4.0,-38.0,2.0,-8.0,-46.0,11.0,-17.0,-41.0,15.0,-25.0,-35.0,18.0,-29.0,-32.0,19.0,-30.0,-33.0,24.0,-26.0,-34.0,-8.0,-17.0,-21.0,-12.0,-7.0,-22.0,-14.0,7.0,-22.0,-14.0,17.0,-17.0,-12.0,26.0,-11.0,-52.0,0.0,38.0,-41.0,0.0,50.0,-25.0,0.0,57.0,-9.0,1.0,61.0,8.0,0.0,59.0,33.0,-26.0,49.0,48.0,-19.0,40.0,64.0,-13.0,33.0,43.0,11.0,-19.0,36.0,20.0,-18.0,3.0,27.0,-16.0,8.0,29.0,-5.0,8.0,29.0,5.0,6.0,26.0,15.0,0.0,22.0,23.0};
			return value;
		}
		private double[] getCoordinate_7_29_point_8()
		{
			double[] value = {-40.0,1.0,-2.0,-38.0,-1.0,-11.0,-33.0,-2.0,-22.0,-26.0,-3.0,-33.0,-1.0,-18.0,-43.0,6.0,-25.0,-38.0,8.0,-30.0,-36.0,10.0,-29.0,-36.0,14.0,-26.0,-39.0,-14.0,-17.0,-18.0,-17.0,-7.0,-18.0,-19.0,7.0,-18.0,-18.0,17.0,-13.0,-39.0,0.0,46.0,-26.0,0.0,53.0,-10.0,1.0,58.0,6.0,0.0,57.0,39.0,-18.0,45.0,49.0,-7.0,33.0,47.0,6.0,12.0,42.0,19.0,-6.0,7.0,26.0,-14.0,10.0,28.0,-4.0,6.0,29.0,7.0,1.0,27.0,15.0,-33.0,0.0,-10.0,-29.0,0.0,-18.0,-23.0,-1.0,-26.0,-5.0,-26.0,-40.0,-1.0,-29.0,-36.0,-1.0,-30.0,-38.0,4.0,-25.0,-40.0,-18.0,-17.0,-14.0,-22.0,-7.0,-14.0,-22.0,7.0,-12.0,-25.0,0.0,49.0,-11.0,0.0,52.0,4.0,1.0,52.0,39.0,-7.0,40.0,44.0,6.0,24.0,43.0,18.0,11.0,12.0,25.0,-12.0,10.0,29.0,-1.0,4.0,29.0,7.0,-26.0,0.0,-17.0,-20.0,0.0,-23.0,-11.0,-30.0,-35.0,-10.0,-29.0,-36.0,-8.0,-25.0,-40.0,-21.0,-17.0,-8.0,-24.0,-6.0,-8.0,-11.0,0.0,46.0,2.0,0.0,46.0,37.0,7.0,34.0,39.0,17.0,22.0,15.0,24.0,-7.0,10.0,29.0,1.0,-18.0,0.0,-23.0,-19.0,-29.0,-31.0,-18.0,-25.0,-37.0,-23.0,-17.0,-3.0,1.0,0.0,40.0,33.0,17.0,31.0,17.0,25.0,-3.0,-27.0,-25.0,-30.0,0.3399,0.1398,0.5931};
			return value;
		}

		/** Large attribute array: fieldValue value field, scene-graph level=6, element #27, 2313 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getfieldValue_code_6_27_value()
		{
			MFInt32 fieldValue_code_6_27_value = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getfieldValue_code_6_27_value_1()))
				.append(new MFInt32(getfieldValue_code_6_27_value_2()))
				.append(new MFInt32(getfieldValue_code_6_27_value_3()));
			return fieldValue_code_6_27_value;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #29, 2298 total numbers made up of 766 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_29_point()
		{
			MFVec3f Coordinate_7_29_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_29_point_1()))
				.append(new MFVec3f(getCoordinate_7_29_point_2()))
				.append(new MFVec3f(getCoordinate_7_29_point_3()))
				.append(new MFVec3f(getCoordinate_7_29_point_4()))
				.append(new MFVec3f(getCoordinate_7_29_point_5()))
				.append(new MFVec3f(getCoordinate_7_29_point_6()))
				.append(new MFVec3f(getCoordinate_7_29_point_7()))
				.append(new MFVec3f(getCoordinate_7_29_point_8()));
			return Coordinate_7_29_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return EightCoded model
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
        X3D thisExampleX3dModel = new EightCoded().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.EightCoded\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.EightCoded\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
