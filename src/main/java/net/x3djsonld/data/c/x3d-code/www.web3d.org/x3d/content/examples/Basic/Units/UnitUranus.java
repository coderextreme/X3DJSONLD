package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Units component example for planet Uranus. </p>
 <p> Related links: <a href="../../../Units/UnitUranus.java">UnitUranus.java</a> source, <a href="../../../Units/UnitUranusIndex.html" target="_top">UnitUranus catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Units/UnitUranus.x3d">UnitUranus.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Units component example for planet Uranus </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Myeong Won Lee </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 August 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Units/UnitExamples.pdf">UnitExamples.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.kr/mwlee/x3d-3.1-ext.xsd" target="_blank">http://www.web3d.kr/mwlee/x3d-3.1-ext.xsd</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#UNITStatement" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#UNITStatement</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D UNIT statement </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Units/UnitUranus.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Units/UnitUranus.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Units/../../license.html">../../license.html</a> </td>
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

	* @author Myeong Won Lee
 */

public class UnitUranus
{
	/** Default constructor to create this object. */
	public UnitUranus ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addUnit(new unit().setName("hecto").setCategory("length").setConversionFactor(100.0))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("UnitUranus.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Units component example for planet Uranus"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Myeong Won Lee"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 August 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("UnitExamples.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.web3d.kr/mwlee/x3d-3.1-ext.xsd"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/core.html#UNITStatement"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D UNIT statement"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Units/UnitUranus.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("UnitUranus.x3d"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.05,0.1,0.3})).setSkyColor(new MFColor(new double[] {0.05,0.1,0.3})))
    .addChild(new Transform().setScale(1.261,1.261,1.261).setTranslation(300.0,0.0,-1.939)
      .addChild(new Viewpoint().setDescription("Planet Uranus").setPosition(0.0,0.0,1.0))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.6039,0.7255,0.898)))
        .setGeometry(new IndexedFaceSet().setCoordIndex(getIndexedFaceSet_5_20_coordIndex())
          .setCoord(new Coordinate().setPoint(getCoordinate_6_20_point()))))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_5_20_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,13,-1,0,13,14,-1,0,14,15,-1,0,15,16,-1,0,16,17,-1,0,17,18,-1,0,18,19,-1,0,19,20,-1,0,20,21,-1,0,21,22,-1,0,22,23,-1,0,23,24,-1,0,24,1,-1,1,25,26,-1,1,26,2,-1,2,26,27,-1,2,27,3,-1,3,27,28,-1,3,28,4,-1,4,28,29,-1,4,29,5,-1,5,29,30,-1,5,30,6,-1,6,30,31,-1,6,31,7,-1,7,31,32,-1,7,32,8,-1,8,32,33,-1,8,33,9,-1,9,33,34,-1,9,34,10,-1,10,34,35,-1,10,35,11,-1,11,35,36,-1,11,36,12,-1,12,36,37,-1,12,37,13,-1,13,37,38,-1,13,38,14,-1,14,38,39,-1,14,39,15,-1,15,39,40,-1,15,40,16,-1,16,40,41,-1,16,41,17,-1,17,41,42,-1,17,42,18,-1,18,42,43,-1,18,43,19,-1,19,43,44,-1,19,44,20,-1,20,44,45,-1,20,45,21,-1,21,45,46,-1,21,46,22,-1,22,46,47,-1,22,47,23,-1,23,47,48,-1,23,48,24,-1,24,48,25,-1,24,25,1,-1,25,49,50,-1,25,50,26,-1,26,50,51,-1,26,51,27,-1,27,51,52,-1,27,52,28,-1,28,52,53,-1,28,53,29,-1,29,53,54,-1,29,54,30,-1,30,54,55,-1,30,55,31,-1,31,55,56,-1,31,56,32,-1,32,56,57,-1,32,57,33,-1,33,57,58,-1,33,58,34,-1,34,58,59,-1,34,59,35,-1,35,59,60,-1,35,60,36,-1,36,60,61,-1,36,61,37,-1,37,61,62,-1,37,62,38,-1,38,62,63,-1,38,63,39,-1,39,63,64,-1,39,64,40,-1,40,64,65,-1,40,65,41,-1,41,65,66,-1,41,66,42,-1,42,66,67,-1,42,67,43,-1,43,67,68,-1,43,68,44,-1,44,68,69,-1,44,69,45,-1,45,69,70,-1,45,70,46,-1,46,70,71,-1,46,71,47,-1,47,71,72,-1,47,72,48,-1,48,72,49,-1,48,49,25,-1,49,73,74,-1,49,74,50,-1,50,74,75,-1,50,75,51,-1,51,75,76,-1,51,76,52,-1,52,76,77,-1,52,77,53,-1,53,77,78,-1,53,78,54,-1,54,78,79,-1,54,79,55,-1,55,79,80,-1,55,80,56,-1,56,80,81,-1,56,81,57,-1,57,81,82,-1,57,82,58,-1,58,82,83,-1,58,83,59,-1,59,83,84,-1,59,84,60,-1,60,84,85,-1,60,85,61,-1,61,85,86,-1,61,86,62,-1,62,86,87,-1,62,87,63,-1,63,87,88,-1,63,88,64,-1,64,88,89,-1,64,89,65,-1,65,89,90,-1,65,90,66,-1,66,90,91,-1,66,91,67,-1,67,91,92,-1,67,92,68,-1,68,92,93,-1,68,93,69,-1,69,93,94,-1,69,94,70,-1,70,94,95,-1,70,95,71,-1,71,95,96,-1,71,96,72,-1,72,96,73,-1,72,73,49,-1,73,97,98,-1,73,98,74,-1,74,98,99,-1,74,99,75,-1,75,99,100,-1,75,100,76,-1,76,100,101,-1,76,101,77,-1,77,101,102,-1,77,102,78,-1,78,102,103,-1,78,103,79,-1,79,103,104,-1,79,104,80,-1,80,104,105,-1,80,105,81,-1,81,105,106,-1,81,106,82,-1,82,106,107,-1,82,107,83,-1,83,107,108,-1,83,108,84,-1,84,108,109,-1,84,109,85,-1,85,109,110,-1,85,110,86,-1,86,110,111,-1,86,111,87,-1,87,111,112,-1,87,112,88,-1,88,112,113,-1,88,113,89,-1,89,113,114,-1,89,114,90,-1,90,114,115,-1,90,115,91,-1,91,115,116,-1,91,116,92,-1,92,116,117,-1,92,117,93,-1,93,117,118,-1,93,118,94,-1,94,118,119,-1,94,119,95,-1,95,119,120,-1,95,120,96,-1,96,120,97,-1,96,97,73,-1,97,121,122,-1,97,122,98,-1,98,122,123,-1,98,123,99,-1,99,123,124,-1,99,124,100,-1,100,124,125,-1,100,125,101,-1,101,125,126,-1,101,126,102,-1,102,126,127,-1,102,127,103,-1,103,127,128,-1,103,128,104,-1,104,128,129,-1,104,129,105,-1,105,129,130,-1,105,130,106,-1,106,130,131,-1,106,131,107,-1,107,131,132,-1,107,132,108,-1,108,132,133,-1,108,133,109,-1,109,133,134,-1,109,134,110,-1,110,134,135,-1,110,135,111,-1,111,135,136,-1,111,136,112,-1,112,136,137,-1,112,137,113,-1,113,137,138,-1,113,138,114,-1};
			return value;
		}
		private int[] getIndexedFaceSet_5_20_coordIndex_2()
		{
			int[] value = {114,138,139,-1,114,139,115,-1,115,139,140,-1,115,140,116,-1,116,140,141,-1,116,141,117,-1,117,141,142,-1,117,142,118,-1,118,142,143,-1,118,143,119,-1,119,143,144,-1,119,144,120,-1,120,144,121,-1,120,121,97,-1,121,145,146,-1,121,146,122,-1,122,146,147,-1,122,147,123,-1,123,147,148,-1,123,148,124,-1,124,148,149,-1,124,149,125,-1,125,149,150,-1,125,150,126,-1,126,150,151,-1,126,151,127,-1,127,151,152,-1,127,152,128,-1,128,152,153,-1,128,153,129,-1,129,153,154,-1,129,154,130,-1,130,154,155,-1,130,155,131,-1,131,155,156,-1,131,156,132,-1,132,156,157,-1,132,157,133,-1,133,157,158,-1,133,158,134,-1,134,158,159,-1,134,159,135,-1,135,159,160,-1,135,160,136,-1,136,160,161,-1,136,161,137,-1,137,161,162,-1,137,162,138,-1,138,162,163,-1,138,163,139,-1,139,163,164,-1,139,164,140,-1,140,164,165,-1,140,165,141,-1,141,165,166,-1,141,166,142,-1,142,166,167,-1,142,167,143,-1,143,167,168,-1,143,168,144,-1,144,168,145,-1,144,145,121,-1,145,169,170,-1,145,170,146,-1,146,170,171,-1,146,171,147,-1,147,171,172,-1,147,172,148,-1,148,172,173,-1,148,173,149,-1,149,173,174,-1,149,174,150,-1,150,174,175,-1,150,175,151,-1,151,175,176,-1,151,176,152,-1,152,176,177,-1,152,177,153,-1,153,177,178,-1,153,178,154,-1,154,178,179,-1,154,179,155,-1,155,179,180,-1,155,180,156,-1,156,180,181,-1,156,181,157,-1,157,181,182,-1,157,182,158,-1,158,182,183,-1,158,183,159,-1,159,183,184,-1,159,184,160,-1,160,184,185,-1,160,185,161,-1,161,185,186,-1,161,186,162,-1,162,186,187,-1,162,187,163,-1,163,187,188,-1,163,188,164,-1,164,188,189,-1,164,189,165,-1,165,189,190,-1,165,190,166,-1,166,190,191,-1,166,191,167,-1,167,191,192,-1,167,192,168,-1,168,192,169,-1,168,169,145,-1,169,193,194,-1,169,194,170,-1,170,194,195,-1,170,195,171,-1,171,195,196,-1,171,196,172,-1,172,196,197,-1,172,197,173,-1,173,197,198,-1,173,198,174,-1,174,198,199,-1,174,199,175,-1,175,199,200,-1,175,200,176,-1,176,200,201,-1,176,201,177,-1,177,201,202,-1,177,202,178,-1,178,202,203,-1,178,203,179,-1,179,203,204,-1,179,204,180,-1,180,204,205,-1,180,205,181,-1,181,205,206,-1,181,206,182,-1,182,206,207,-1,182,207,183,-1,183,207,208,-1,183,208,184,-1,184,208,209,-1,184,209,185,-1,185,209,210,-1,185,210,186,-1,186,210,211,-1,186,211,187,-1,187,211,212,-1,187,212,188,-1,188,212,213,-1,188,213,189,-1,189,213,214,-1,189,214,190,-1,190,214,215,-1,190,215,191,-1,191,215,216,-1,191,216,192,-1,192,216,193,-1,192,193,169,-1,193,217,218,-1,193,218,194,-1,194,218,219,-1,194,219,195,-1,195,219,220,-1,195,220,196,-1,196,220,221,-1,196,221,197,-1,197,221,222,-1,197,222,198,-1,198,222,223,-1,198,223,199,-1,199,223,224,-1,199,224,200,-1,200,224,225,-1,200,225,201,-1,201,225,226,-1,201,226,202,-1,202,226,227,-1,202,227,203,-1,203,227,228,-1,203,228,204,-1,204,228,229,-1,204,229,205,-1,205,229,230,-1,205,230,206,-1,206,230,231,-1,206,231,207,-1,207,231,232,-1,207,232,208,-1,208,232,233,-1,208,233,209,-1,209,233,234,-1,209,234,210,-1,210,234,235,-1,210,235,211,-1,211,235,236,-1,211,236,212,-1,212,236,237,-1,212,237,213,-1,213,237,238,-1,213,238,214,-1,214,238,239,-1,214,239,215,-1,215,239,240,-1,215,240,216,-1,216,240,217,-1,216,217,193,-1,217,241,242,-1,217,242,218,-1,218,242,243,-1,218,243,219,-1,219,243,244,-1,219,244,220,-1,220,244,245,-1,220,245,221,-1,221,245,246,-1,221,246,222,-1,222,246,247,-1,222,247,223,-1,223,247,248,-1,223,248,224,-1,224,248,249,-1,224,249,225,-1,225,249,250,-1,225,250,226,-1,226,250,251,-1,226,251,227,-1,227,251,252,-1,227,252,228,-1,228,252,253,-1,228,253,229,-1,229,253,254,-1,229,254,230,-1,230,254,255,-1,230,255,231,-1,231,255,256,-1,231,256,232,-1,232,256,257,-1,232,257,233,-1,233,257,258,-1,233,258,234,-1,234,258,259,-1,234,259,235,-1,235,259,260,-1,235,260,236,-1,236,260,261,-1,236,261,237,-1,237,261,262,-1,237,262,238,-1,238,262,263,-1,238,263,239,-1};
			return value;
		}
		private int[] getIndexedFaceSet_5_20_coordIndex_3()
		{
			int[] value = {239,263,264,-1,239,264,240,-1,240,264,241,-1,240,241,217,-1,265,242,241,-1,265,243,242,-1,265,244,243,-1,265,245,244,-1,265,246,245,-1,265,247,246,-1,265,248,247,-1,265,249,248,-1,265,250,249,-1,265,251,250,-1,265,252,251,-1,265,253,252,-1,265,254,253,-1,265,255,254,-1,265,256,255,-1,265,257,256,-1,265,258,257,-1,265,259,258,-1,265,260,259,-1,265,261,260,-1,265,262,261,-1,265,263,262,-1,265,264,263,-1,265,241,264,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_6_20_point_1()
		{
			double[] value = {0,175.6,0,0,169.6,-45.46,-11.76,169.6,-43.91,-22.73,169.6,-39.37,-32.14,169.6,-32.14,-39.37,169.6,-22.73,-43.91,169.6,-11.76,-45.46,169.6,0,-43.91,169.6,11.76,-39.37,169.6,22.73,-32.14,169.6,32.14,-22.73,169.6,39.37,-11.76,169.6,43.91,0,169.6,45.46,11.76,169.6,43.91,22.73,169.6,39.37,32.14,169.6,32.14,39.37,169.6,22.73,43.91,169.6,11.76,45.46,169.6,0,43.91,169.6,-11.76,39.37,169.6,-22.73,32.14,169.6,-32.14,22.73,169.6,-39.37,11.76,169.6,-43.91,0,152.1,-87.81,-22.73,152.1,-84.82,-43.91,152.1,-76.05,-62.09,152.1,-62.09,-76.05,152.1,-43.91,-84.82,152.1,-22.73,-87.81,152.1,1.118e-005,-84.82,152.1,22.73,-76.05,152.1,43.91,-62.09,152.1,62.09,-43.91,152.1,76.05,-22.73,152.1,84.82,1.152e-005,152.1,87.81,22.73,152.1,84.82,43.91,152.1,76.05,62.09,152.1,62.09,76.05,152.1,43.91,84.82,152.1,22.73,87.81,152.1,-1.185e-005,84.82,152.1,-22.73,76.05,152.1,-43.91,62.09,152.1,-62.09,43.91,152.1,-76.05,22.73,152.1,-84.82,0,124.2,-124.2,-32.14,124.2,-120,-62.09,124.2,-107.6,-87.81,124.2,-87.81,-107.6,124.2,-62.09,-120,124.2,-32.14,-124.2,124.2,1.436e-005,-120,124.2,32.14,-107.6,124.2,62.09,-87.81,124.2,87.81,-62.09,124.2,107.6,-32.14,124.2,120,1.629e-005,124.2,124.2,32.14,124.2,120,62.09,124.2,107.6,87.81,124.2,87.81,107.6,124.2,62.09,120,124.2,32.14,124.2,124.2,-1.821e-005,120,124.2,-32.14,107.6,124.2,-62.09,87.81,124.2,-87.81,62.09,124.2,-107.6,32.14,124.2,-120,0,87.81,-152.1,-39.37,87.81,-146.9,-76.05,87.81,-131.7,-107.6,87.81,-107.6,-131.7,87.81,-76.05,-146.9,87.81,-39.37,-152.1,87.81,1.68e-005,-146.9,87.81,39.37,-131.7,87.81,76.05,-107.6,87.81,107.6,-76.05,87.81,131.7,-39.37,87.81,146.9,1.995e-005,87.81,152.1,39.37,87.81,146.9,76.05,87.81,131.7,107.6,87.81,107.6,131.7,87.81,76.05,146.9,87.81,39.37,152.1,87.81,-2.309e-005,146.9,87.81,-39.37,131.7,87.81,-76.05,107.6,87.81,-107.6,76.05,87.81,-131.7,39.37,87.81,-146.9,0.0,45.46,-169.6,-43.91,45.46,-163.9,-84.82,45.46,-146.9};
			return value;
		}
		private double[] getCoordinate_6_20_point_2()
		{
			double[] value = {-120,45.46,-120,-146.9,45.46,-84.82,-163.9,45.46,-43.91,-169.6,45.46,1.833e-005,-163.9,45.46,43.91,-146.9,45.46,84.82,-120,45.46,120,-84.82,45.46,146.9,-43.91,45.46,163.9,2.225e-005,45.46,169.6,43.91,45.46,163.9,84.82,45.46,146.9,120,45.46,120,146.9,45.46,84.82,163.9,45.46,43.91,169.6,45.46,-2.616e-005,163.9,45.46,-43.91,146.9,45.46,-84.82,120,45.46,-120,84.82,45.46,-146.9,43.91,45.46,-163.9,0,5.591e-005,-175.6,-45.46,5.591e-005,-169.6,-87.81,5.591e-005,-152.1,-124.2,5.591e-005,-124.2,-152.1,5.591e-005,-87.81,-169.6,5.591e-005,-45.46,-175.6,5.591e-005,1.885e-005,-169.6,5.591e-005,45.46,-152.1,5.591e-005,87.81,-124.2,5.591e-005,124.2,-87.81,5.591e-005,152.1,-45.46,5.591e-005,169.6,2.303e-005,5.591e-005,175.6,45.46,5.591e-005,169.6,87.81,5.591e-005,152.1,124.2,5.591e-005,124.2,152.1,5.591e-005,87.81,169.6,5.591e-005,45.46,175.6,5.591e-005,-2.721e-005,169.6,5.591e-005,-45.46,152.1,5.591e-005,-87.81,124.2,5.591e-005,-124.2,87.81,5.591e-005,-152.1,45.46,5.591e-005,-169.6,0,-45.46,-169.6,-43.91,-45.46,-163.9,-84.82,-45.46,-146.9,-120,-45.46,-120,-146.9,-45.46,-84.82,-163.9,-45.46,-43.91,-169.6,-45.46,1.833e-005,-163.9,-45.46,43.91,-146.9,-45.46,84.82,-120,-45.46,120,-84.82,-45.46,146.9,-43.91,-45.46,163.9,2.225e-005,-45.46,169.6,43.91,-45.46,163.9,84.82,-45.46,146.9,120,-45.46,120,146.9,-45.46,84.82,163.9,-45.46,43.91,169.6,-45.46,-2.616e-005,163.9,-45.46,-43.91,146.9,-45.46,-84.82,120,-45.46,-120,84.82,-45.46,-146.9,43.91,-45.46,-163.9,0,-87.81,-152.1,-39.37,-87.81,-146.9,-76.05,-87.81,-131.7,-107.6,-87.81,-107.6,-131.7,-87.81,-76.05,-146.9,-87.81,-39.37,-152.1,-87.81,1.68e-005,-146.9,-87.81,39.37,-131.7,-87.81,76.05,-107.6,-87.81,107.6,-76.05,-87.81,131.7,-39.37,-87.81,146.9,1.995e-005,-87.81,152.1,39.37,-87.81,146.9,76.05,-87.81,131.7,107.6,-87.81,107.6,131.7,-87.81,76.05,146.9,-87.81,39.37,152.1,-87.81,-2.309e-005,146.9,-87.81,-39.37,131.7,-87.81,-76.05,107.6,-87.81,-107.6,76.05,-87.81,-131.7,39.37,-87.81,-146.9,0.0,-124.2,-124.2,-32.14,-124.2,-120.0,-62.09,-124.2,-107.6,-87.81,-124.2,-87.81,-107.6,-124.2,-62.09,-120.0,-124.2,-32.14,-124.2,-124.2,1.436e-005};
			return value;
		}
		private double[] getCoordinate_6_20_point_3()
		{
			double[] value = {-120,-124.2,32.14,-107.6,-124.2,62.09,-87.81,-124.2,87.81,-62.09,-124.2,107.6,-32.14,-124.2,120,1.629e-005,-124.2,124.2,32.14,-124.2,120,62.09,-124.2,107.6,87.81,-124.2,87.81,107.6,-124.2,62.09,120,-124.2,32.14,124.2,-124.2,-1.821e-005,120,-124.2,-32.14,107.6,-124.2,-62.09,87.81,-124.2,-87.81,62.09,-124.2,-107.6,32.14,-124.2,-120,0,-152.1,-87.81,-22.73,-152.1,-84.82,-43.91,-152.1,-76.05,-62.09,-152.1,-62.09,-76.05,-152.1,-43.91,-84.82,-152.1,-22.73,-87.81,-152.1,1.118e-005,-84.82,-152.1,22.73,-76.05,-152.1,43.91,-62.09,-152.1,62.09,-43.91,-152.1,76.05,-22.73,-152.1,84.82,1.152e-005,-152.1,87.81,22.73,-152.1,84.82,43.91,-152.1,76.05,62.09,-152.1,62.09,76.05,-152.1,43.91,84.82,-152.1,22.73,87.81,-152.1,-1.185e-005,84.82,-152.1,-22.73,76.05,-152.1,-43.91,62.09,-152.1,-62.09,43.91,-152.1,-76.05,22.73,-152.1,-84.82,0.0,-169.6,-45.46,-11.76,-169.6,-43.91,-22.73,-169.6,-39.37,-32.14,-169.6,-32.14,-39.37,-169.6,-22.73,-43.91,-169.6,-11.76,-45.46,-169.6,0.0,-43.91,-169.6,11.76,-39.37,-169.6,22.73,-32.14,-169.6,32.14,-22.73,-169.6,39.37,-11.76,-169.6,43.91,0.0,-169.6,45.46,11.76,-169.6,43.91,22.73,-169.6,39.37,32.14,-169.6,32.14,39.37,-169.6,22.73,43.91,-169.6,11.76,45.46,-169.6,0.0,43.91,-169.6,-11.76,39.37,-169.6,-22.73,32.14,-169.6,-32.14,22.73,-169.6,-39.37,11.76,-169.6,-43.91,0.0,-175.6,0.0};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=5, element #20, 2112 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_5_20_coordIndex()
		{
			MFInt32 IndexedFaceSet_5_20_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_5_20_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_5_20_coordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_5_20_coordIndex_3()));
			return IndexedFaceSet_5_20_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=6, element #20, 798 total numbers made up of 266 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_6_20_point()
		{
			MFVec3f Coordinate_6_20_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_6_20_point_1()))
				.append(new MFVec3f(getCoordinate_6_20_point_2()))
				.append(new MFVec3f(getCoordinate_6_20_point_3()));
			return Coordinate_6_20_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return UnitUranus model
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
        X3D thisExampleX3dModel = new UnitUranus().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.UnitUranus\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.UnitUranus\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
