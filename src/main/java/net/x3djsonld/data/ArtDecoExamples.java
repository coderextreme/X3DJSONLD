package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </p>
 <p> Related links: <a href="../../../UniversalMediaMaterials/ArtDecoExamples.java">ArtDecoExamples.java</a> source, <a href="../../../UniversalMediaMaterials/ArtDecoExamplesIndex.html" target="_top">ArtDecoExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/ArtDecoExamples.x3d">ArtDecoExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </td>
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
			<td> 7 April 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author David Roussel
 */

import net.coderextreme.X3DRoots;
import java.util.List;
import java.util.ArrayList;
public class ArtDecoExamples implements X3DRoots
{
	/** Default constructor to create this object. */
	public ArtDecoExamples ()
	{
	  initialize();
	}
        public List<X3D> getRootNodeList() {
                List<X3D> list = new ArrayList<X3D>(1);
                list.add(x3dModel);
                return list;
        }

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ArtDecoExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("David Roussel"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("7 April 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Universal Media Material Library"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ArtDecoExamples.x3d"))
    .addChild(new ExternProtoDeclare("ArtDeco00").setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"}))
    .addChild(new ExternProtoDeclare("ArtDeco01").setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"}))
    .addChild(new ExternProtoDeclare("ArtDeco02").setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"}))
    .addChild(new ExternProtoDeclare("ArtDeco03").setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"}))
    .addChild(new ExternProtoDeclare("ArtDeco04").setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"}))
    .addChild(new ExternProtoDeclare("ArtDeco05").setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"}))
    .addChild(new ExternProtoDeclare("ArtDeco06").setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"}))
    .addChild(new ExternProtoDeclare("ArtDeco07").setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"}))
    .addChild(new ExternProtoDeclare("ArtDeco08").setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"}))
    .addChild(new ExternProtoDeclare("ArtDeco09").setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"}))
    .addChild(new ExternProtoDeclare("ArtDeco10").setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"}))
    .addChild(new ExternProtoDeclare("ArtDeco11").setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"}))
    .addChild(new ExternProtoDeclare("ArtDeco12").setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"}))
    .addChild(new ExternProtoDeclare("ArtDeco13").setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"}))
    .addChild(new ExternProtoDeclare("ArtDeco14").setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"}))
    .addChild(new ExternProtoDeclare("ArtDeco15").setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"}))
    .addChild(new ExternProtoDeclare("ArtDeco16").setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"}))
    .addChild(new ExternProtoDeclare("ArtDeco17").setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"}))
    .addChild(new ExternProtoDeclare("ArtDeco18").setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"}))
    .addChild(new ExternProtoDeclare("ArtDeco19").setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"}))
    .addChild(new ExternProtoDeclare("ArtDeco20").setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"}))
    .addChild(new ExternProtoDeclare("ArtDeco21").setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"}))
    .addChild(new ExternProtoDeclare("ArtDeco22").setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"}))
    .addChild(new ExternProtoDeclare("ArtDeco23").setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"}))
    .addChild(new ExternProtoDeclare("ArtDeco24").setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"}))
    .addChild(new ExternProtoDeclare("ArtDeco25").setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"}))
    .addChild(new ExternProtoDeclare("ArtDeco26").setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"}))
    .addChild(new ExternProtoDeclare("ArtDeco27").setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"}))
    .addChild(new ExternProtoDeclare("ArtDeco28").setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"}))
    .addChild(new ExternProtoDeclare("ArtDeco29").setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"}))
    .addChild(new ExternProtoDeclare("ArtDeco30").setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"}))
    .addChild(new ExternProtoDeclare("ArtDeco31").setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"}))
    .addChild(new ExternProtoDeclare("ArtDeco32").setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"}))
    .addChild(new ExternProtoDeclare("ArtDeco33").setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"}))
    .addChild(new ExternProtoDeclare("ArtDeco34").setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new String[] {"ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"}))
    .addChild(new Group()
      .addChild(new NavigationInfo().setHeadlight(false))
      .addChild(new Viewpoint("Front").setDescription("Front view").setPosition(0.0,0.0,12.0))
      .addChild(new Viewpoint("PersRight").setDescription("Low Right").setOrientation(0.74291,0.30772,0.59447,1.2171).setPosition(6.9282,-6.9282,6.9282))
      .addChild(new Viewpoint("PersLeft").setDescription("Low Left").setOrientation(0.74291,-0.30772,-0.59447,1.2171).setPosition(-6.9282,-6.9282,6.9282))
      .addChild(new Viewpoint("Back").setDescription("Back view").setOrientation(0.0,1.0,0.0,3.1416).setPosition(0.0,0.0,-12.0))
      .addChild(new Transform("Close_travel")
        .addChild(new PositionInterpolator("Close_Mover").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,2.5,0.0,0.0,0.0,0.0,0.0,-2.5,0.0,0.0,0.0,0.0,0.0,2.5,0.0})))
        .addChild(new TimeSensor("Close_Time").setCycleInterval(12.0).setLoop(true))
        .addChild(new Viewpoint("Close").setDescription("Close Front").setPosition(0.0,0.0,6.0)))
      .addChild(new DirectionalLight().setDirection(1.0,-1.0,-1.0))
      .addChild(new DirectionalLight().setDirection(0.0,1.0,-0.5).setIntensity(0.5))
      .addChild(new Anchor().setDescription("Back to front view").setUrl(new String[] {"#Front"})
        .addChild(new Transform().setTranslation(0.0,0.0,-0.5)
          .addChild(new Inline().setUrl(new String[] {"../data/gridBack.json","../data/gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"}))))
      .addChild(new Viewpoint("View00").setDescription("ArtDeco00").setPosition(-3.75,3.75,3.0))
      .addChild(new Transform().setTranslation(-3.75,3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco00 view").setUrl(new String[] {"#View00"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco00").setContainerField("material")))
            .setGeometry(new Sphere("Ball").setRadius(0.5))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco00").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material("TextMat").setDiffuseColor(1.0,1.0,1.0)))
              .setGeometry(new Text().setString(new String[] {"ArtDeco00"})
                .setFontStyle(new FontStyle("Style").setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.3).setCssStyle("BOLD")))))))
      .addChild(new Viewpoint("View01").setDescription("ArtDeco01").setPosition(-2.25,3.75,3.0))
      .addChild(new Transform().setTranslation(-2.25,3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco01 view").setUrl(new String[] {"#View01"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco01").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco01").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco01"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View02").setDescription("ArtDeco02").setPosition(-0.75,3.75,3.0))
      .addChild(new Transform().setTranslation(-0.75,3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco02 view").setUrl(new String[] {"#View02"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco02").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco02").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco02"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View03").setDescription("ArtDeco03").setPosition(0.75,3.75,3.0))
      .addChild(new Transform().setTranslation(0.75,3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco03 view").setUrl(new String[] {"#View03"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco03").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco03").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco03"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View04").setDescription("ArtDeco04").setPosition(2.25,3.75,3.0))
      .addChild(new Transform().setTranslation(2.25,3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco04 view").setUrl(new String[] {"#View04"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco04").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco04").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco04"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View05").setDescription("ArtDeco05").setPosition(3.75,3.75,3.0))
      .addChild(new Transform().setTranslation(3.75,3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco05 view").setUrl(new String[] {"#View05"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco05").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco05").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco05"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View06").setDescription("ArtDeco06").setPosition(-3.75,2.25,3.0))
      .addChild(new Transform().setTranslation(-3.75,2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco06 view").setUrl(new String[] {"#View06"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco06").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco06").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco06"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View07").setDescription("ArtDeco07").setPosition(-2.25,2.25,3.0))
      .addChild(new Transform().setTranslation(-2.25,2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco07 view").setUrl(new String[] {"#View07"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco07").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco07").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco07"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View08").setDescription("ArtDeco08").setPosition(-0.75,2.25,3.0))
      .addChild(new Transform().setTranslation(-0.75,2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco08 view").setUrl(new String[] {"#View08"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco08").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco08").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco08"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View09").setDescription("ArtDeco09").setPosition(0.75,2.25,3.0))
      .addChild(new Transform().setTranslation(0.75,2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco09 view").setUrl(new String[] {"#View09"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco09").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco09").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco09"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View10").setDescription("ArtDeco10").setPosition(2.25,2.25,3.0))
      .addChild(new Transform().setTranslation(2.25,2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco10 view").setUrl(new String[] {"#View10"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco10").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco10").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco10"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View11").setDescription("ArtDeco11").setPosition(3.75,2.25,3.0))
      .addChild(new Transform().setTranslation(3.75,2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco11 view").setUrl(new String[] {"#View11"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco11").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco11").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco11"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View12").setDescription("ArtDeco12").setPosition(-3.75,0.75,3.0))
      .addChild(new Transform().setTranslation(-3.75,0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco12 view").setUrl(new String[] {"#View12"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco12").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco12").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco12"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View13").setDescription("ArtDeco13").setPosition(-2.25,0.75,3.0))
      .addChild(new Transform().setTranslation(-2.25,0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco13 view").setUrl(new String[] {"#View13"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco13").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco13").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco13"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View14").setDescription("ArtDeco14").setPosition(-0.75,0.75,3.0))
      .addChild(new Transform().setTranslation(-0.75,0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco14 view").setUrl(new String[] {"#View14"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco14").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco14").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco14"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View15").setDescription("ArtDeco15").setPosition(0.75,0.75,3.0))
      .addChild(new Transform().setTranslation(0.75,0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco15 view").setUrl(new String[] {"#View15"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco15").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco15").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco15"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View16").setDescription("ArtDeco16").setPosition(2.25,0.75,3.0))
      .addChild(new Transform().setTranslation(2.25,0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco16 view").setUrl(new String[] {"#View16"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco16").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco16").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco16"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View17").setDescription("ArtDeco17").setPosition(3.75,0.75,3.0))
      .addChild(new Transform().setTranslation(3.75,0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco17 view").setUrl(new String[] {"#View17"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco17").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco17").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco17"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View18").setDescription("ArtDeco18").setPosition(-3.75,-0.75,3.0))
      .addChild(new Transform().setTranslation(-3.75,-0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco18 view").setUrl(new String[] {"#View18"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco18").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco18").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco18"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View19").setDescription("ArtDeco19").setPosition(-2.25,-0.75,3.0))
      .addChild(new Transform().setTranslation(-2.25,-0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco19 view").setUrl(new String[] {"#View19"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco19").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco19").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco19"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View20").setDescription("ArtDeco20").setPosition(-0.75,-0.75,3.0))
      .addChild(new Transform().setTranslation(-0.75,-0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco20 view").setUrl(new String[] {"#View20"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco20").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco20").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco20"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View21").setDescription("ArtDeco21").setPosition(0.75,-0.75,3.0))
      .addChild(new Transform().setTranslation(0.75,-0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco21 view").setUrl(new String[] {"#View21"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco21").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco21").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco21"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View22").setDescription("ArtDeco22").setPosition(2.25,-0.75,3.0))
      .addChild(new Transform().setTranslation(2.25,-0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco22 view").setUrl(new String[] {"#View22"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco22").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco22").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco22"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View23").setDescription("ArtDeco23").setPosition(3.75,-0.75,3.0))
      .addChild(new Transform().setTranslation(3.75,-0.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco23 view").setUrl(new String[] {"#View23"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco23").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco23").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco23"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View24").setDescription("ArtDeco24").setPosition(-3.75,-2.25,3.0))
      .addChild(new Transform().setTranslation(-3.75,-2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco24 view").setUrl(new String[] {"#View24"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco24").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco24").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco24"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View25").setDescription("ArtDeco25").setPosition(-2.25,-2.25,3.0))
      .addChild(new Transform().setTranslation(-2.25,-2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco25 view").setUrl(new String[] {"#View25"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco25").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco25").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco25"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View26").setDescription("ArtDeco26").setPosition(-0.75,-2.25,3.0))
      .addChild(new Transform().setTranslation(-0.75,-2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco26 view").setUrl(new String[] {"#View26"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco26").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco26").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco26"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View27").setDescription("ArtDeco27").setPosition(0.75,-2.25,3.0))
      .addChild(new Transform().setTranslation(0.75,-2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco27 view").setUrl(new String[] {"#View27"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco27").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco27").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco27"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View28").setDescription("ArtDeco28").setPosition(2.25,-2.25,3.0))
      .addChild(new Transform().setTranslation(2.25,-2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco28 view").setUrl(new String[] {"#View28"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco28").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco28").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco28"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View29").setDescription("ArtDeco29").setPosition(3.75,-2.25,3.0))
      .addChild(new Transform().setTranslation(3.75,-2.25,0.0)
        .addChild(new Anchor().setDescription("ArtDeco29 view").setUrl(new String[] {"#View29"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco29").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco29").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco29"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View30").setDescription("ArtDeco30").setPosition(-3.75,-3.75,3.0))
      .addChild(new Transform().setTranslation(-3.75,-3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco30 view").setUrl(new String[] {"#View30"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco30").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco30").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco30"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View31").setDescription("ArtDeco31").setPosition(-2.25,-3.75,3.0))
      .addChild(new Transform().setTranslation(-2.25,-3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco31 view").setUrl(new String[] {"#View31"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco31").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco31").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco31"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View32").setDescription("ArtDeco32").setPosition(-0.75,-3.75,3.0))
      .addChild(new Transform().setTranslation(-0.75,-3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco32 view").setUrl(new String[] {"#View32"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco32").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco32").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco32"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View33").setDescription("ArtDeco33").setPosition(0.75,-3.75,3.0))
      .addChild(new Transform().setTranslation(0.75,-3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco33 view").setUrl(new String[] {"#View33"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco33").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco33").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco33"})
                .setFontStyle(new FontStyle().setUSE("Style")))))))
      .addChild(new Viewpoint("View34").setDescription("ArtDeco34").setPosition(2.25,-3.75,3.0))
      .addChild(new Transform().setTranslation(2.25,-3.75,0.0)
        .addChild(new Anchor().setDescription("ArtDeco34 view").setUrl(new String[] {"#View34"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new ProtoInstance("ArtDeco34").setContainerField("material")))
            .setGeometry(new Sphere().setUSE("Ball"))))
        .addChild(new Transform().setTranslation(0.0,0.3,0.5)
          .addChild(new Anchor().setDescription("ArtDeco34").setParameter(new String[] {"target=_source"}).setUrl(new String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("TextMat")))
              .setGeometry(new Text().setString(new String[] {"ArtDeco34"})
                .setFontStyle(new FontStyle().setUSE("Style"))))))))
    .addChild(new ROUTE().setFromNode("Close_Time").setFromField("fraction_changed").setToNode("Close_Mover").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Close_Mover").setFromField("value_changed").setToNode("Close_travel").setToField("set_translation")));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ArtDecoExamples model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new ArtDecoExamples().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.ArtDecoExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.ArtDecoExamples self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
