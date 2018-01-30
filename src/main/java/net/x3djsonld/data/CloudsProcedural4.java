package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes. </p>
 <p> Related links: <a href="../../../../Environment/Atmosphere/CloudsProcedural4.java">CloudsProcedural4.java</a> source, <a href="../../../../Environment/Atmosphere/CloudsProcedural4Index.html" target="_top">CloudsProcedural4 catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Environment/Atmosphere/CloudsProcedural4.x3d">CloudsProcedural4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Capt Darren W. Murphy </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 November 2007 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d" target="_blank">https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="http://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">http://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Environment/Atmosphere/../../license.html">../../license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> fix links </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Capt Darren W. Murphy
 */

public class CloudsProcedural4
{
	/** Default constructor to create this object. */
	public CloudsProcedural4 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.2")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("CloudsProcedural4.x3d"))
    .addMeta(new metaObject().setName("description").setContent("X3D utilizing ecmascript to develop quasi volumetric 3D clouds from png image textured billboard nodes."))
    .addMeta(new metaObject().setName("creator").setContent("Capt Darren W. Murphy"))
    .addMeta(new metaObject().setName("created").setContent("1 November 2007"))
    .addMeta(new metaObject().setName("modified").setContent("14 January 2014"))
    .addMeta(new metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Environment/Atmosphere/CloudsProcedural4.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, http://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new metaObject().setName("license").setContent("../../license.html"))
    .addMeta(new metaObject().setName("TODO").setContent("fix links")))
  .setScene(new SceneObject()
    .addComments(" A png image file for the cloud texture must be designated in the ecmascript node. ")
    .addChild(new ViewpointObject().setDescription("Main").setOrientation(0.0f,1.0f,0.0f,1.57f).setPosition(50000.0f,1000.0f,42000.0f).setJump(false))
    .addChild(new ViewpointObject().setDescription("Light House Tower").setOrientation(0.0f,1.0f,0.0f,1.3f).setPosition(45000.0f,1290.0f,44000.0f).setJump(false))
    .addChild(new ViewpointObject().setDescription("centerWest").setOrientation(0.0f,1.0f,0.0f,2.5f).setPosition(48000.0f,1000.0f,20000.0f).setJump(false))
    .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new float[] {0.0f,0.0f,1.0f})).setSkyColor(new MFColorObject(new float[] {0.0f,0.0f,1.0f})))
    .addChild(new DirectionalLightObject().setDirection(-1.0f,0.0f,0.0f).setAmbientIntensity(1f).setGlobal(true))
    .addChild(new GroupObject("Terrain")
      .addChild(new TransformObject().setTranslation(25000.0f,0.0f,25000.0f).setScale(50.0f,50.0f,50.0f)
        .addChild(new InlineObject().setUrl(new MFStringObject("\"MontereyBayLargeMesh.x3d\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.x3d\" \"MontereyBayLargeMesh.wrl\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/MontereyBayLargeMesh.wrl\""))))
      .addChild(new TransformObject().setRotation(1.0f,0.0f,0.0f,1.57f).setTranslation(25000.0f,0.0f,25000.0f)
        .addChild(new ShapeObject()
          .setGeometry(new Rectangle2DObject().setSize(77000.0f,55000.0f))
          .setAppearance(new AppearanceObject()
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"ocean.png\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/ocean.png\"")))))))
    .addChild(new GroupObject("Placemarks")
      .addChild(new TransformObject().setTranslation(45000.0f,30.0f,44000.0f).setScale(50.0f,50.0f,50.0f)
        .addChild(new InlineObject().setUrl(new MFStringObject("\"Lighthouse.x3d\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.x3d\" \"Lighthouse.wrl\" \"https://savage.nps.edu/Savage/Environment/Atmosphere/Lighthouse.wrl\"")))))
    .addChild(new GroupObject("Clouds")
      .addChild(new TransformObject("Cumulus"))
      .addChild(new TransformObject("Cirrus"))
      .addChild(new TransformObject("Fog"))
      .addChild(new ScriptObject("PixelScript").setDirectOutput(true).setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"\n" + 
"function cumulustranslation() // These values designate the boundary location of the cloud" + "\n" + 
"{" + "\n" + 
"	X = 50000*Math.random();          //  X horizontal range" + "\n" + 
"	Y = 1000 + 300*Math.random();	 //  Y vertical base + range" + "\n" + 
"	Z = 50000*Math.random();         // z horizontal range" + "\n" + 
"\n" + 
"	randomt = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"	return randomt;" + "\n" + 
"	" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"function cumulusscale() // these values scale a cloud within a designated size" + "\n" + 
"{" + "\n" + 
"\n" + 
"	maxscale = 1;" + "\n" + 
"\n" + 
"	scale = Math.round(9+maxscale*Math.random());" + "\n" + 
"	X = 1.5*scale;" + "\n" + 
"	Y = scale;" + "\n" + 
"	Z = scale;" + "\n" + 
"\n" + 
"	randomscale = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"	return randomscale;" + "\n" + 
"	" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function cirrustranslation() // These values designate the boundary location of the cloud" + "\n" + 
"{" + "\n" + 
"	X = 50000*Math.random();          //  X horizontal range" + "\n" + 
"	Y = 8000 + 1000*Math.random();	 //  Y vertical base + range" + "\n" + 
"	Z = 50000*Math.random();         // z horizontal range" + "\n" + 
"\n" + 
"	randomt = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"	return randomt;" + "\n" + 
"	" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"function cirrusscale() // these values scale a cloud within a designated size" + "\n" + 
"{" + "\n" + 
"\n" + 
"	maxscale = 1;" + "\n" + 
"\n" + 
"	scale = Math.round(9+maxscale*Math.random());" + "\n" + 
"	X = 1.5*scale;" + "\n" + 
"	Y = 2*Math.random();" + "\n" + 
"	Z = 1.5*scale;" + "\n" + 
"\n" + 
"	randomscale = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"	return randomscale;" + "\n" + 
"	" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function cumulussectiontranslation() // These random values place another portion of cumulus type cloud" + "\n" + 
"{" + "\n" + 
"\n" + 
"	randomtheta = 6.28319*Math.random();" + "\n" + 
"	randomphi = .7854*Math.random();" + "\n" + 
"	randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius" + "\n" + 
"\n" + 
"	X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);" + "\n" + 
"	Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);" + "\n" + 
"	Y = randomradius*Math.cos(randomphi);" + "\n" + 
"	" + "\n" + 
"\n" + 
"	randomt = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"	return randomt;" + "\n" + 
"	" + "\n" + 
"}" + "\n" + 
"\n" + 
"function cirrussectiontranslation() // These random values place another portion of cirrus type cloud" + "\n" + 
"{" + "\n" + 
"\n" + 
"	randomtheta = 6.28319*Math.random();" + "\n" + 
"	randomphi = .7854*Math.random();" + "\n" + 
"	randomradius = 90 + 5*Math.random();//the first whole number should be close to the sectionradius" + "\n" + 
"\n" + 
"	X = randomradius*Math.cos(randomtheta)*Math.sin(randomphi);" + "\n" + 
"	Z = randomradius*Math.sin(randomtheta)*Math.sin(randomphi);" + "\n" + 
"	Y = randomradius*Math.cos(randomphi);" + "\n" + 
"	" + "\n" + 
"\n" + 
"	randomt = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"	return randomt;" + "\n" + 
"	" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function rotation() // This random value is for the billboard rotation not used in this script" + "\n" + 
"{" + "\n" + 
"\n" + 
"\n" + 
"	radians = 6.28*Math.random();" + "\n" + 
"\n" + 
"	randomr = new String('0 0 1 ' + radians );" + "\n" + 
"	" + "\n" + 
"	" + "\n" + 
"	return randomr;" + "\n" + 
"	" + "\n" + 
"}" + "\n" + 
"\n" + 
"function cumulus()" + "\n" + 
"{" + "\n" + 
"\n" + 
"maxi = 20;  // number of clouds" + "\n" + 
"\n" + 
"maxj = 5; // denotes how many portions affecting the size of the cloud" + "\n" + 
"\n" + 
"maxk = 8;  // number of billboards indicating cloud density" + "\n" + 
"\n" + 
"sectionradius = 100;  //radius of individual cloud sections" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"\n" + 
"\n" + 
"for (var i=0; i < maxi; i++) " + "\n" + 
"{" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"CloudStringA = '	Transform {		\\n' +" + "\n" + 
"'    scale '+ cumulusscale() + '               	\\n' +" + "\n" + 
"'    translation '+ cumulustranslation() + '    \\n' +    // cloud placement" + "\n" + 
"'    children [	                                \\n';" + "\n" + 
"\n" + 
"\n" + 
"CloudStringB = new Array();" + "\n" + 
"CloudStringF = new Array();" + "\n" + 
"\n" + 
"   	for (var j=0; j < maxj; j++)" + "\n" + 
"   	{" + "\n" + 
"\n" + 
"	radius = 0;" + "\n" + 
"\n" + 
"	CloudStringB[j]= '  Transform {		    	       \\n' +" + "\n" + 
"	'    translation '+ cumulussectiontranslation() + '    \\n' +     // section placement" + "\n" + 
"	'    children [	                                       \\n';" + "\n" + 
"\n" + 
"	" + "\n" + 
"	CloudStringC = new Array();" + "\n" + 
"	image = new String();" + "\n" + 
"\n" + 
"      		for (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud " + "\n" + 
"      		{" + "\n" + 
"\n" + 
"\n" + 
"		randomtheta = 6.28319*Math.random();" + "\n" + 
"		randomphi = 1.57079*Math.random();" + "\n" + 
"		radius = radius+(sectionradius/maxk); // radius incremental steps based on billow radius and max billboards" + "\n" + 
"\n" + 
"		X = radius*Math.cos(randomtheta)*Math.sin(randomphi);" + "\n" + 
"		Z = radius*Math.sin(randomtheta)*Math.sin(randomphi);" + "\n" + 
"		Y = radius*Math.cos(randomphi);" + "\n" + 
"\n" + 
"\n" + 
"		if (Y <= 30) //cloud shading and lighting control" + "\n" + 
"  	{	" + "\n" + 
"	image = ' \\\"CloudTexture1_5.png\\\" \\\"https://savage.nps.edu/Savage/Environment/Spheretexture.png\\\" \\n';" + "\n" + 
"  	}" + "\n" + 
"\n" + 
"  		else" + "\n" + 
"  	{	" + "\n" + 
"	image = ' \\\"CloudTexture1_4.png\\\" \\\"https://savage.nps.edu/Savage/Environment/Spheretexture.png\\\" \\n';" + "\n" + 
"  	}" + "\n" + 
"\n" + 
"	" + "\n" + 
"		" + "\n" + 
"		Billboardtranslation = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"		CloudStringC[k] = '	Transform {		                \\n' +" + "\n" + 
"		'            translation '+ Billboardtranslation   + '          \\n' +     // random billboard placement within radius designated above" + "\n" + 
"		'	  children [	                                        \\n' +" + "\n" + 
"		'	      Billboard {	                                \\n' +" + "\n" + 
"		'	        axisOfRotation 0 0 0	                        \\n' +     // 0 0 0 designates rotation on all axis" + "\n" + 
"		'	        children [	                                \\n' +" + "\n" + 
"		'	            Transform {	                		\\n' +" + "\n" + 
"		'	              rotation  0 0 0 0 		        \\n' +     // a rotation of the individual billboards can be defined" + "\n" + 
"		'	              children [	                        \\n' +" + "\n" + 
"		'	                  Shape {	                        \\n' +" + "\n" + 
"		'	                    appearance Appearance {	        \\n' +" + "\n" + 
"		'				material Material {		\\n' +" + "\n" + 
"		'				                }  		\\n' +" + "\n" + 
"		'	                      texture ImageTexture {	        \\n' +" + "\n" + 
"		'	                        url [ ' + image + ' ]           \\n' + " + "\n" + 
"		'	                      }	                                \\n' +" + "\n" + 
"		'	                    }	                                \\n' +" + "\n" + 
"		'	                    geometry IndexedFaceSet {	        \\n' +     // define type of geometry to texture" + "\n" + 
"		'	                      coordIndex [ 0, 1, 2, 3 ]	        \\n' +" + "\n" + 
"		'			      solid FALSE		        \\n' +" + "\n" + 
"		'	                      coord Coordinate {	        \\n' +" + "\n" + 
"		'	                        point [ 50 50 0,	        \\n' +     // define size of the geometry. Here 100 meter 2D square." + "\n" + 
"		'	                                50 -50 0,	        \\n' +" + "\n" + 
"		'	                               -50 -50 0,	        \\n' +" + "\n" + 
"		'	                               -50 50 0 ]	        \\n' +" + "\n" + 
"		'	                      }	                                \\n' +" + "\n" + 
"		'	                    }	                                \\n' +" + "\n" + 
"		'	                  }	                                \\n' +" + "\n" + 
"		'	              ]	                                        \\n' +" + "\n" + 
"		'	            }	                                        \\n' +" + "\n" + 
"		'	       ]	                                        \\n' +" + "\n" + 
"		'	   }	                                                \\n' +" + "\n" + 
"		'      ]	                                                \\n' +" + "\n" + 
"		'     }	                                                        \\n';      " + "\n" + 
"		" + "\n" + 
"\n" + 
"		}" + "\n" + 
"\n" + 
"	CloudStringD = CloudStringC.join(' ');" + "\n" + 
"\n" + 
"	" + "\n" + 
"	CloudStringE = '   ]	                 \\n' +" + "\n" + 
"	'	}	                         \\n';" + "\n" + 
"\n" + 
"	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;" + "\n" + 
"\n" + 
"\n" + 
"	}" + "\n" + 
"\n" + 
"CloudStringG = CloudStringF.join(' ');" + "\n" + 
"\n" + 
"CloudStringH = '      ]	                                        \\n' +" + "\n" + 
"'     }	                                                        \\n' +" + "\n" + 
"'#########################################################      \\n';" + "\n" + 
"\n" + 
"CloudString = CloudStringA + CloudStringG + CloudStringH;" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"newNode = Browser.createVrmlFromString(CloudString);" + "\n" + 
"Cumulus.children[i] = newNode[0];" + "\n" + 
"\n" + 
"\n" + 
"   }" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function cirrus()" + "\n" + 
"\n" + 
"{" + "\n" + 
"\n" + 
"maxi = 2;  // number of clouds" + "\n" + 
"\n" + 
"maxj = 5; // denotes how many portions affecting the size of the cloud" + "\n" + 
"\n" + 
"maxk = 8;  // number of billboards indicating cloud density" + "\n" + 
"\n" + 
"sectionradius = 1000;  //radius of individual cloud sections" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"\n" + 
"\n" + 
"for (var i=0; i < maxi; i++) " + "\n" + 
"{" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"CloudStringA = '	Transform {		 \\n' +" + "\n" + 
"'    scale '+ cirrusscale() + '               	 \\n' +" + "\n" + 
"'    translation '+ cirrustranslation() + '      \\n' +    // cloud placement" + "\n" + 
"'    children [	                                 \\n';" + "\n" + 
"\n" + 
"\n" + 
"CloudStringB = new Array();" + "\n" + 
"CloudStringF = new Array();" + "\n" + 
"\n" + 
"   	for (var j=0; j < maxj; j++)" + "\n" + 
"   	{" + "\n" + 
"\n" + 
"	radius = 0;" + "\n" + 
"\n" + 
"	CloudStringB[j]= '  Transform {		    	      \\n' +" + "\n" + 
"	'    translation '+ cirrussectiontranslation() + '    \\n' +     // section placement" + "\n" + 
"	'    children [	                                      \\n';" + "\n" + 
"\n" + 
"	" + "\n" + 
"	CloudStringC = new Array();" + "\n" + 
"\n" + 
"      		for (var k=1; k < maxk; k++)  // maxk value denotes how many textured billboards make up the cloud " + "\n" + 
"      		{" + "\n" + 
"\n" + 
"\n" + 
"		randomtheta = 6.28319*Math.random();" + "\n" + 
"		randomphi = 1.57079*Math.random();" + "\n" + 
"		radius = radius+(sectionradius/maxk); // radius incremental steps based on section radius and max billboards" + "\n" + 
"\n" + 
"		X = radius*Math.cos(randomtheta)*Math.sin(randomphi);" + "\n" + 
"		Z = radius*Math.sin(randomtheta)*Math.sin(randomphi);" + "\n" + 
"		Y = radius*Math.cos(randomphi);" + "\n" + 
"		" + "\n" + 
"		Billboardtranslation = new String(X+' '+Y+' '+Z);" + "\n" + 
"\n" + 
"		CloudStringC[k] = '	Transform {		                \\n' +" + "\n" + 
"		'            translation '+ Billboardtranslation   + '          \\n' +     // random billboard placement within radius designated above" + "\n" + 
"		'	  children [	                                        \\n' +" + "\n" + 
"		'	      Billboard {	                                \\n' +" + "\n" + 
"		'	        axisOfRotation 0 0 0	                        \\n' +     // 0 0 0 designates rotation on all axis" + "\n" + 
"		'	        children [	                                \\n' +" + "\n" + 
"		'	            Transform {	                		\\n' +" + "\n" + 
"		'	              rotation '  + rotation() + '	        \\n' +" + "\n" + 
"		'	              children [	                        \\n' +" + "\n" + 
"		'	                  Shape {	                        \\n' +" + "\n" + 
"		'	                    appearance Appearance {	        \\n' +" + "\n" + 
"		'			    material Material {			\\n' +" + "\n" + 
"		'			    }					\\n' +" + "\n" + 
" 		'	                      texture ImageTexture {	        \\n' +" + "\n" + 
"		'	                        url [\\\"cloudtexture3.png\\\" \\\"https://savage.nps.edu/Savage/Environment/cloudtexture1_4.png\\\" ] \\n' +" + "\n" + 
"		'	                      }	                                \\n' +" + "\n" + 
"		'	                    }	                                \\n' +" + "\n" + 
"		'	                    geometry IndexedFaceSet {	        \\n' +     // define type of geometry to texture" + "\n" + 
"		'	                      coordIndex [ 0, 1, 2, 3 ]	        \\n' +" + "\n" + 
"		'			      solid FALSE		        \\n' +" + "\n" + 
"		'	                      coord Coordinate {	        \\n' +" + "\n" + 
"		'	                        point [ 500 500 0,	        \\n' +     // define size of the geometry. Here 100 meter 2D square." + "\n" + 
"		'	                                500 -500 0,	        \\n' +" + "\n" + 
"		'	                               -500 -500 0,	        \\n' +" + "\n" + 
"		'	                               -500 500 0 ]	        \\n' +" + "\n" + 
"		'	                      }	                                \\n' +" + "\n" + 
"		'	                    }	                                \\n' +" + "\n" + 
"		'	                  }	                                \\n' +" + "\n" + 
"		'	              ]	                                        \\n' +" + "\n" + 
"		'	            }	                                        \\n' +" + "\n" + 
"		'	       ]	                                        \\n' +" + "\n" + 
"		'	   }	                                                \\n' +" + "\n" + 
"		'      ]	                                                \\n' +" + "\n" + 
"		'     }	                                                        \\n';      " + "\n" + 
"		" + "\n" + 
"\n" + 
"		}" + "\n" + 
"\n" + 
"	CloudStringD = CloudStringC.join(' ');" + "\n" + 
"\n" + 
"	CloudStringE = '   ]	                 \\n' +" + "\n" + 
"	'	}	                         \\n';" + "\n" + 
"\n" + 
"	CloudStringF[j] = CloudStringB[j] + CloudStringD +CloudStringE;" + "\n" + 
"\n" + 
"\n" + 
"	}" + "\n" + 
"\n" + 
"CloudStringG = CloudStringF.join(' ');" + "\n" + 
"\n" + 
"CloudStringH = '      ]	                                        \\n' +" + "\n" + 
"'     }	                                                        \\n' +" + "\n" + 
"'#########################################################      \\n';" + "\n" + 
"\n" + 
"CloudString = CloudStringA + CloudStringG + CloudStringH;" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"newNode = Browser.createVrmlFromString(CloudString);" + "\n" + 
"Cirrus.children[i] = newNode[0];" + "\n" + 
"\n" + 
"  }" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function initialize()" + "\n" + 
"\n" + 
"{" + "\n" + 
"\n" + 
"cumulus();" + "\n" + 
"\n" + 
"cirrus();" + "\n" + 
"}" + "\n")
        .addField(new fieldObject().setAccessType("initializeOnly").setName("Cumulus").setType("SFNode")
          .addChild(new TransformObject().setUSE("Cumulus")))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("Cirrus").setType("SFNode")
          .addChild(new TransformObject().setUSE("Cirrus")))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("Fog").setType("SFNode")))
      .addChild(new DirectionalLightObject().setDirection(-1.0f,-1.0f,0.0f).setAmbientIntensity(1f).setColor(1.0f,0.0f,0.0f).setGlobal(true))));
  }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return CloudsProcedural4 model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject exampleObject = new CloudsProcedural4().getX3dModel();

        exampleObject.handleArguments(args);
		boolean validate = (args.length == 0);
		for (String arg : args)
		{
			if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
			{
				validate = true;
				break;
			}
		}
		if (validate)
		{
			System.out.print("CloudsProcedural4 self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
