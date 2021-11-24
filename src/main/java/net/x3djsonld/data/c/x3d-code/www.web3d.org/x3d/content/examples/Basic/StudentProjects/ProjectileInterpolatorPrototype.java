package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A proto which simulates x-y plane projectile motion. </p>
 <p> Related links: <a href="../../../StudentProjects/ProjectileInterpolatorPrototype.java">ProjectileInterpolatorPrototype.java</a> source, <a href="../../../StudentProjects/ProjectileInterpolatorPrototypeIndex.html" target="_top">ProjectileInterpolatorPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/ProjectileInterpolatorPrototype.x3d">ProjectileInterpolatorPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A proto which simulates x-y plane projectile motion. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Ozan APAYDIN </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 10 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Ozan APAYDIN
 */

public class ProjectileInterpolatorPrototype
{
	/** Default constructor to create this object. */
	public ProjectileInterpolatorPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ProjectileInterpolatorPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A proto which simulates x-y plane projectile motion."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Ozan APAYDIN"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("10 December 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ProjectileInterpolatorPrototype.x3d"))
    .addChild(new ProtoDeclare("ProjectileInterpolator").setName("ProjectileInterpolator").setAppinfo("This prototype is a Projectile Motion Interpolator. It takes Inputs : Initial Velocity and Angle then calculates trajectory of the projectile on x-y plane according to given dt time and B_m. It outputs value_changed values(SFVec3f).")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("Vi").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Initial Velocity value of the object."))
        .addField(new field().setName("theta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Launch Angle. The angle between horizantal and launch direction"))
        .addField(new field().setName("B_m").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.00004).setAppinfo("Proportional to drag force = B2/m"))
        .addField(new field().setName("dt").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.1).setAppinfo("Time step."))
        .addField(new field().setName("fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("SFFloat Values ranging [0..1]."))
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("The set_fraction eventIn receives an SFFloat event and causes the interpolator function to evaluate resulting in a value_changed eventOut with the same timestamp as the set_fraction event."))
        .addField(new field().setName("set_theta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Sets theta to the value of eventIn."))
        .addField(new field().setName("set_Vi").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Sets Vi to the value of eventIn."))
        .addField(new field().setName("value_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("The interpolator function eventOut results as Vector3Float.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("ProjectileMotionTrackerScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"var x;" + "\n" + 
"var y;" + "\n" + 
"var Vx;" + "\n" + 
"var Vy;" + "\n" + 
"var B_m;" + "\n" + 
"var dt;" + "\n" + 
"var blocksize;" + "\n" + 
"var Vi;" + "\n" + 
"var theta;" + "\n" + 
"\n" + 
"var key;" + "\n" + 
"var keyValue;" + "\n" + 
"var previousFraction;" + "\n" + 
"var previousFractionIndex;" + "\n" + 
"var blockSize;" + "\n" + 
"var outputArray;" + "\n" + 
"\n" + 
"function tracePrint (outputString)" + "\n" + 
"{" + "\n" + 
"	var traceEnabled = true;" + "\n" + 
"	if (traceEnabled) Browser.print ('[WaypointInterpolator]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[WaypointInterpolator]' + outputString);" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"   key = new Array();" + "\n" + 
"   keyValue = new MFVec3f();" + "\n" + 
"   x = new Array();" + "\n" + 
"   y = new Array();" + "\n" + 
"   calculateTrajectory();" + "\n" + 
"\n" + 
"   previousFractionIndex = -1;" + "\n" + 
"	previousFraction = 0;" + "\n" + 
"	// check key array ranges [0..1] and is monotonically increasing" + "\n" + 
"	// check that size of keyValue array is integer multiple of size of key array" + "\n" + 
"	tracePrint ('key            =' + key);" + "\n" + 
"	tracePrint ('key.length= ' + key.length);" + "\n" + 
"	tracePrint ('keyValue=   ' + keyValue);" + "\n" + 
"	tracePrint ('keyValue.length=' + keyValue.length);" + "\n" + 
"	blockSize =  3; //keyValue.length/key.length;" + "\n" + 
"	tracePrint ('blockSize=' + blockSize);" + "\n" + 
"	if (blockSize != Math.round(blockSize))" + "\n" + 
"	{" + "\n" + 
"	  alwaysPrint ('*** warning:  blockSize not an integer multiple. check sizes of key and keyValue');" + "\n" + 
"	}" + "\n" + 
"	if (key[0] != 0)" + "\n" + 
"	{" + "\n" + 
"	  alwaysPrint ('*** warning:  key[0] != 0');" + "\n" + 
"	}" + "\n" + 
"	if (key[key.length-1] != 1)" + "\n" + 
"	{" + "\n" + 
"	  alwaysPrint ('*** warning:  key[' + (key.length - 1) + '] != 1, reset from' + key[key.length-1] + ' to 1');" + "\n" + 
"	  key[key.length-1] = 1;" + "\n" + 
"	}" + "\n" + 
"	for (index = 0; index < blockSize; index++)" + "\n" + 
"	{" + "\n" + 
"		if ((key[index] < 0) || (key[index] > 1))" + "\n" + 
"		{" + "\n" + 
"		   alwaysPrint ('*** warning:  key[' + index + '] =' + key[index] + ', out of range [0..1]');" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"	// instantiate default array, later computations just update it" + "\n" + 
"	outputArray = new SFVec3f();" + "\n" + 
"	outputArray = keyValue[0];" + "\n" + 
"	tracePrint ('initial outputArray=' + outputArray);" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction (inputFloat, timestamp) {" + "\n" + 
"	fraction = inputFloat;" + "\n" + 
"	tracePrint ('previousFractionIndex=' + previousFractionIndex" + "\n" + 
"		 + ', fraction=' + fraction + ', previousFraction=' + previousFraction);" + "\n" + 
"\n" + 
"	if (fraction < 0)" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('*** illegal fraction' + fraction + ' set to 0');" + "\n" + 
"		fraction = 0;" + "\n" + 
"		previousFractionIndex = 0; // first" + "\n" + 
"	}" + "\n" + 
"	else if (fraction > 1)" + "\n" + 
"	{" + "\n" + 
"		alwaysPrint ('*** illegal fraction' + fraction + ' set to 1');" + "\n" + 
"		fraction = 1;" + "\n" + 
"		previousFractionIndex = blockSize - 1; // last" + "\n" + 
"	}" + "\n" + 
"	else if (previousFractionIndex == -1)" + "\n" + 
"	{" + "\n" + 
"		previousFractionIndex = 0; // first" + "\n" + 
"		tracePrint ('previousFractionIndex initialized for first event');" + "\n" + 
"	}" + "\n" + 
"	else if ((fraction >= previousFraction) && (fraction >= key[previousFractionIndex+1]))" + "\n" + 
"	{" + "\n" + 
"		previousFractionIndex++;" + "\n" + 
"	}" + "\n" + 
"	else if (fraction < previousFraction) // regress, or loop repeat without reaching one" + "\n" + 
"	{" + "\n" + 
"\n" + 
"		previousFractionIndex = 0;" + "\n" + 
"		while ((fraction >= key[previousFractionIndex+1]) && (previousFractionIndex < blockSize))" + "\n" + 
"		{" + "\n" + 
"			previousFractionIndex++;" + "\n" + 
"		}" + "\n" + 
"		tracePrint ('reset/reincrement previousFractionIndex to' + previousFractionIndex);" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	if (fraction == 1) // use final block" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('(fraction == 1)');" + "\n" + 
"\n" + 
"\n" + 
"        	outputArray = keyValue[(keyValue.length -1)];" + "\n" + 
"\n" + 
"		previousFractionIndex = -1; // setup for restart" + "\n" + 
"		tracePrint ('finished final fraction==1 block');" + "\n" + 
"	}" + "\n" + 
"	// when fraction matches index, calculate value_changed from corresponding keyValue array" + "\n" + 
"	else if (fraction == key[previousFractionIndex])" + "\n" + 
"	{" + "\n" + 
"		tracePrint ('(fraction == key[previousFractionIndex])');" + "\n" + 
"\n" + 
"\n" + 
"		// update outputArray - need to interpolate next" + "\n" + 
"		outputArray = keyValue[previousFractionIndex];" + "\n" + 
"\n" + 
"	}" + "\n" + 
"        else {" + "\n" + 
"\n" + 
"              delta = key[previousFractionIndex + 1] -  key[previousFractionIndex];" + "\n" + 
"              differ = fraction - key[previousFractionIndex];" + "\n" + 
"              percentDiffer = differ / delta;" + "\n" + 
"\n" + 
"              valueDelta = new SFVec3f();" + "\n" + 
"              for(index = 0; index < blockSize; index++) {" + "\n" + 
"                 valueDelta[index] =  keyValue[(previousFractionIndex + 1)][index] - keyValue[previousFractionIndex][index];" + "\n" + 
"                 outputArray[index]  = keyValue[previousFractionIndex][index] + valueDelta[index] * percentDiffer;" + "\n" + 
"		 Browser.print ('valueDelta' + valueDelta[index]);" + "\n" + 
"                 Browser.print ('perDiffer' + percentDiffer);" + "\n" + 
"              }" + "\n" + 
"\n" + 
"        }" + "\n" + 
"\n" + 
"	value_changed = outputArray;" + "\n" + 
"	previousFraction = fraction;" + "\n" + 
"	tracePrint ('value_changed=' + value_changed);" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function set_Vi(initialVelocity, timeStamp) {" + "\n" + 
"   Vi = initialVelocity;" + "\n" + 
"   initialize(timeStamp);" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function set_theta(angle, timeStamp) {" + "\n" + 
"   theta = angle;" + "\n" + 
"   initialize(timeStamp);" + "\n" + 
"}" + "\n" + 
"\n" + 
"\n" + 
"function calculateTrajectory() {" + "\n" + 
"\n" + 
"   x[0] = 0;" + "\n" + 
"   y[0] = 0;" + "\n" + 
"\n" + 
"   var timeKeys = new Array();" + "\n" + 
"   timeKeys[0] = 0.0;" + "\n" + 
"\n" + 
"   //convert degree to radian" + "\n" + 
"   angle = Math.PI * theta / 180;" + "\n" + 
"\n" + 
"   Vx = Vi * Math.cos(angle);" + "\n" + 
"   Vy = Vi * Math.sin(angle);" + "\n" + 
"\n" + 
"   var i = 0;" + "\n" + 
"\n" + 
"   do {" + "\n" + 
"      i = i + 1;" + "\n" + 
"      timeKeys[i] = timeKeys[i - 1] + dt;" + "\n" + 
"      Browser.print ('timeKeys' + timeKeys[i]);" + "\n" + 
"      x[i] = x[i - 1] + Vx * dt;" + "\n" + 
"      y[i] = y[i - 1] + Vy * dt;" + "\n" + 
"\n" + 
"\n" + 
"      f = B_m * Math.sqrt(Vx * Vx + Vy * Vy) * Math.exp(-y[i] / 0.0001);" + "\n" + 
"\n" + 
"      Vy = Vy - 9.8 * dt - f * Vy * dt;" + "\n" + 
"      Vx = Vx - f * Vx * dt;" + "\n" + 
"      Browser.print ('Vy' + Vy);" + "\n" + 
"   }while(y[i] > 0);" + "\n" + 
"   Browser.print ('Im here' + x.length);" + "\n" + 
"\n" + 
"   //interpolate to find landing point" + "\n" + 
"   var a = -y[i] / y[i-1];" + "\n" + 
"   x[i] = (x[i] + a * x[i-1]) / (1+a);" + "\n" + 
"   y[i] = 0;" + "\n" + 
"\n" + 
"   //copy x, y values to keyValues" + "\n" + 
"   copyToKeyValues();" + "\n" + 
"   //finding keys" + "\n" + 
"   for(j = 0; j < timeKeys.length; j++) {" + "\n" + 
"      key[j] = timeKeys[j] / timeKeys[timeKeys.length - 1];" + "\n" + 
"      Browser.print (' ' + key[j]);" + "\n" + 
"\n" + 
"   }" + "\n" + 
"\n" + 
"}" + "\n" + 
"\n" + 
"function copyToKeyValues() {" + "\n" + 
"   for(i = 0; i < x.length; i++) {" + "\n" + 
"     Browser.print ('x' + x[i]);" + "\n" + 
"      keyValue[i][0] = x[i];" + "\n" + 
"      keyValue[i][1] = y[i];" + "\n" + 
"      keyValue[i][2] = 0;" + "\n" + 
"   Browser.print ('keyValue' + i + ' ' + keyValue[i][0]);" + "\n" + 
"   }" + "\n" + 
"\n" + 
"}" + "\n")
          .addField(new field().setName("Vi").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("theta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("B_m").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("dt").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("In range [01]"))
          .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("set_theta").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("set_Vi").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("value_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("Vi").setProtoField("Vi"))
            .addConnect(new connect().setNodeField("theta").setProtoField("theta"))
            .addConnect(new connect().setNodeField("B_m").setProtoField("B_m"))
            .addConnect(new connect().setNodeField("dt").setProtoField("dt"))
            .addConnect(new connect().setNodeField("fraction").setProtoField("fraction"))
            .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
            .addConnect(new connect().setNodeField("set_theta").setProtoField("set_theta"))
            .addConnect(new connect().setNodeField("set_Vi").setProtoField("set_Vi"))
            .addConnect(new connect().setNodeField("value_changed").setProtoField("value_changed"))))))
    .addComments(" ==================== ")
    .addChild(new Anchor().setDescription("ProjectileInterpolatorArena").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"ProjectileInterpolatorArena.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.wrl","ProjectileInterpolatorArena.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ProjectileInterpolatorArena.x3d"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"ProjectileInterpolatorPrototype","defines a prototype","","Click on this text to see","ProjectileInterpolatorArena"," scene"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.7)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2)))))
    .addChild(new PositionInterpolator()));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ProjectileInterpolatorPrototype model
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
        X3D thisExampleX3dModel = new ProjectileInterpolatorPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ProjectileInterpolatorPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ProjectileInterpolatorPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
