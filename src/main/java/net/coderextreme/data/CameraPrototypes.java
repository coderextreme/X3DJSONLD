package net.coderextreme.data;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
public class CameraPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new CameraPrototypes().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/CameraPrototypes.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("CameraPrototypes.x3d"))
        .addMeta(new meta().setName("description").setContent("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman and Jeff Weekley"))
        .addMeta(new meta().setName("created").setContent("16 March 2009"))
        .addMeta(new meta().setName("modified").setContent("Sat, 30 Dec 2023 07:35:06 GMT"))
        .addMeta(new meta().setName("TODO").setContent("Schematron rules, backed up by initialize() checks"))
        .addMeta(new meta().setName("reference").setContent("BeyondViewpointCameraNodesWeb3D2009.pdf"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"))
        .addMeta(new meta().setName("reference").setContent("CameraExamples.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"))
        .addMeta(new meta().setName("subject").setContent("Camera nodes for Viewpoint navigation control"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Camera")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("position").setValue("0 0 10"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("orientation"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("fieldOfView").setValue("0.7854"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_bind"))
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("bindTime"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isBound"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("nearClipPlane").setValue("0.25"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("farClipPlane"))
            .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("shots"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("headlight").setValue("true"))
            .addField(new field().setType("SFColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("headlightColor").setValue("1 1 1"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("headlightIntensity").setValue("1"))
            .addField(new field().setType("SFColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("filterColor").setValue("1 1 1"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("filterTransparency").setValue("1"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("upVector").setValue("0 1 0"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("fStop").setValue("5.6"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("focusDistance").setValue("10"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isActive"))
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("totalDuration"))
            .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("offlineRender"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled")))
          .setProtoBody(new ProtoBody()
            .addChild(new Viewpoint().setDEF("CameraViewpoint")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("position").setProtoField("position"))
                .addConnect(new connect().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new connect().setNodeField("isBound").setProtoField("isBound"))
                .addConnect(new connect().setNodeField("bindTime").setProtoField("bindTime"))))
            .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\"").setDEF("CameraNavInfo")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connect().setNodeField("headlight").setProtoField("headlight"))
                .addConnect(new connect().setNodeField("visibilityLimit").setProtoField("farClipPlane"))))
            .addChild(new DirectionalLight().setDEF("CameraDirectionalLight").setGlobal(true)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("on").setProtoField("headlight"))
                .addConnect(new connect().setNodeField("color").setProtoField("headlightColor"))
                .addConnect(new connect().setNodeField("intensity").setProtoField("headlightIntensity"))))
            .addChild(new PositionInterpolator().setDEF("CameraPositionInterpolator").setKey(new MFFloat0().getArray()).setKeyValue(new MFVec3f1().getArray())
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new OrientationInterpolator().setDEF("CameraOrientationInterpolator").setKey(new MFFloat2().getArray()).setKeyValue(new MFRotation3().getArray())
              .setIS(new IS()
                .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))))
            .addChild(new Script().setDEF("CameraScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("position"))
              .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("orientation"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_bind"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("fieldOfView"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("nearClipPlane"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("farClipPlane"))
              .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("shots"))
              .addField(new field().setType("SFColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("filterColor"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("filterTransparency"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("upVector"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("fStop"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("focusDistance"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isActive"))
              .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("totalDuration"))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("offlineRender"))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("ViewpointNode")
                .addChild(new Viewpoint().setUSE("CameraViewpoint")))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("NavInfoNode")
                .addChild(new NavigationInfo().setUSE("CameraNavInfo")))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("CameraPI")
                .addChild(new PositionInterpolator().setUSE("CameraPositionInterpolator")))
              .addField(new field().setType("SFNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("CameraOI")
                .addChild(new OrientationInterpolator().setUSE("CameraOrientationInterpolator")))
              .addField(new field().setType("MFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("key"))
              .addField(new field().setType("MFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("keyValuePosition"))
              .addField(new field().setType("MFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("keyValueOrientation"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("animated"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("initialized"))
              .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("shotCount"))
              .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("movesCount"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("frameCount"))
              .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("startTime"))
              .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("priorTraceTime"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled"))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize () // CameraScript\n"+
"\n"+
"{\n"+
"\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"\n"+
"    NavInfoNode.avatarSize[0]   = nearClipPlane;\n"+
"\n"+
"\n"+
"    // remaining setups deferred to invocation of checkShots() method\n"+
"\n"+
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n"+
"\n"+
"    alwaysPrint ('initialize complete');\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function checkShots (eventValue)\n"+
"\n"+
"{\n"+
"\n"+
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\n"+
"\n"+
"\n"+
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n"+
"\n"+
"    totalDuration= 0;\n"+
"\n"+
"    shotCount  = shots.length;\n"+
"\n"+
"    movesCount = 0;\n"+
"\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"\n"+
"    {\n"+
"\n"+
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"       movesCount   += shots[i].moves.length;\n"+
"\n"+
"       totalDuration = totalDuration + shots[i].shotDuration;\n"+
"\n"+
"       if (shots[i].moves.length == 0)\n"+
"\n"+
"       {\n"+
"\n"+
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\n"+
"\n"+
"       }\n"+
"\n"+
"    }\n"+
"\n"+
"    // size checks before proceeding\n"+
"\n"+
"    if (shotCount == 0)\n"+
"\n"+
"    {\n"+
"\n"+
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\n"+
"\n"+
"       return;\n"+
"\n"+
"    }\n"+
"\n"+
"    else if (movesCount == 0)\n"+
"\n"+
"    {\n"+
"\n"+
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\n"+
"\n"+
"       return;\n"+
"\n"+
"    }\n"+
"\n"+
"    else if (totalDuration == 0)\n"+
"\n"+
"    {\n"+
"\n"+
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\n"+
"\n"+
"       return;\n"+
"\n"+
"    }\n"+
"\n"+
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);\n"+
"\n"+
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);\n"+
"\n"+
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\n"+
"\n"+
"\n"+
"    // compute interpolators\n"+
"\n"+
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"\n"+
"    {\n"+
"\n"+
"        if (i==0) // initial entries\n"+
"\n"+
"        {\n"+
"\n"+
"           key[0]                   = 0.0; // no previous move\n"+
"\n"+
"           keyValuePosition[0]      = shots[i].initialPosition;\n"+
"\n"+
"           keyValueOrientation[0]   = shots[i].initialOrientation;\n"+
"\n"+
"        }\n"+
"\n"+
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n"+
"\n"+
"        {\n"+
"\n"+
"           key[k+1]                 = key[k]; // start from end from previous move\n"+
"\n"+
"           keyValuePosition[k+1]    = shots[i].initialPosition;\n"+
"\n"+
"           keyValueOrientation[k+1] = shots[i].initialOrientation;\n"+
"\n"+
"           k++;\n"+
"\n"+
"        }\n"+
"\n"+
"        tracePrint (shots[i].description);\n"+
"\n"+
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"\n"+
"        for (j = 0; j < shots[i].moves.length; j++) // moves index\n"+
"\n"+
"        {\n"+
"\n"+
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n"+
"\n"+
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n"+
"\n"+
"            //  tracePrint ('durationFloat=' + durationFloat);\n"+
"\n"+
"            key[k+1]               = key[k] + (durationFloat / totalDuration);\n"+
"\n"+
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n"+
"\n"+
"            if (!animated)\n"+
"\n"+
"            {\n"+
"\n"+
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"\n"+
"            }\n"+
"\n"+
"            else\n"+
"\n"+
"            {\n"+
"\n"+
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n"+
"\n"+
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n"+
"\n"+
"\n"+
"                // test if difference vector is zero, if so maintain previous rotation\n"+
"\n"+
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n"+
"\n"+
"                if (shotVector.length() >= 0)\n"+
"\n"+
"                {\n"+
"\n"+
"                    // default view direction is along -Z axis\n"+
"\n"+
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n"+
"\n"+
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"\n"+
"                }\n"+
"\n"+
"                else // note (k > 0)\n"+
"\n"+
"                {\n"+
"\n"+
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n"+
"\n"+
"                }\n"+
"\n"+
"\n"+
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\n"+
"\n"+
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\n"+
"\n"+
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n"+
"\n"+
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n"+
"\n"+
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\n"+
"\n"+
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\n"+
"\n"+
"            }\n"+
"\n"+
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"\n"+
"            // check animated parameter:  set true if any of moves are tracking moves\n"+
"\n"+
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n"+
"\n"+
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\n"+
"\n"+
"\n"+
"            // intermediate trace\n"+
"\n"+
"            tracePrint ('                key=' + key);\n"+
"\n"+
"            tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"\n"+
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"\n"+
"            tracePrint ('- ' + shots[i].moves[j].description);\n"+
"\n"+
"        }\n"+
"\n"+
"    }\n"+
"\n"+
"    tracePrint ('                key=' + key);\n"+
"\n"+
"    tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"\n"+
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"\n"+
"    if (key.length != keyValuePosition.length)\n"+
"\n"+
"    {\n"+
"\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"\n"+
"                  'keyValuePosition.length=' + keyValuePosition.length);\n"+
"\n"+
"    }\n"+
"\n"+
"    if (key.length != keyValueOrientation.length)\n"+
"\n"+
"    {\n"+
"\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"\n"+
"                  'keyValueOrientation.length=' + keyValueOrientation.length);\n"+
"\n"+
"    }\n"+
"\n"+
"    if (key.length != (shotCount + movesCount))\n"+
"\n"+
"    {\n"+
"\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"\n"+
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));\n"+
"\n"+
"    }\n"+
"\n"+
"    tracePrint ('           animated=' + animated);\n"+
"\n"+
"    // set node values\n"+
"\n"+
"    CameraPI.key      = key;\n"+
"\n"+
"    CameraOI.key      = key;\n"+
"\n"+
"    CameraPI.keyValue = keyValuePosition;\n"+
"\n"+
"    CameraOI.keyValue = keyValueOrientation;\n"+
"\n"+
"\n"+
"    if (!animated) // output results\n"+
"\n"+
"    {\n"+
"\n"+
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"\n"+
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"\n"+
"    }\n"+
"\n"+
"    tracePrint ('checkShots() complete');\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function stripBrackets (fieldArray)\n"+
"\n"+
"{\n"+
"\n"+
"    // some browsers add brackets to array output strings, this function strips them\n"+
"\n"+
"    outputString = '';\n"+
"\n"+
"    for (i = 0; i < fieldArray.length; i++)\n"+
"\n"+
"    {\n"+
"\n"+
"       outputString += fieldArray[i].toString();\n"+
"\n"+
"       if (i < fieldArray.length - 1) outputString += ' ';\n"+
"\n"+
"    }\n"+
"\n"+
"    return outputString;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field\n"+
"\n"+
"{\n"+
"\n"+
"   // traceEnabled = false;  // for testing purposes\n"+
"\n"+
"\n"+
"   // if Camera is being animated, immediately recompute interpolator settings\n"+
"\n"+
"   if (animated) checkShots (true);\n"+
"\n"+
"\n"+
"   // trace progress on console with reduced output frequency\n"+
"\n"+
"   if (frameCount == 0)\n"+
"\n"+
"   {\n"+
"\n"+
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\n"+
"\n"+
"      startTime      = timestamp;\n"+
"\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"\n"+
"      if (animated) // output results\n"+
"\n"+
"      {\n"+
"\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"\n"+
"      }\n"+
"\n"+
"   }\n"+
"\n"+
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n"+
"\n"+
"   {\n"+
"\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"\n"+
"      if (animated) // output results\n"+
"\n"+
"      {\n"+
"\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"\n"+
"      }\n"+
"\n"+
"   }\n"+
"\n"+
"   if (eventValue == 0)\n"+
"\n"+
"   {\n"+
"\n"+
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n"+
"\n"+
"      frameCount++;\n"+
"\n"+
"   }\n"+
"\n"+
"   else if (eventValue == 1)\n"+
"\n"+
"   {\n"+
"\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      if (animated) // output results\n"+
"\n"+
"      {\n"+
"\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"\n"+
"      }\n"+
"\n"+
"      alwaysPrint ('Animation loop complete.');\n"+
"\n"+
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n"+
"\n"+
"   }\n"+
"\n"+
"   else\n"+
"\n"+
"   {\n"+
"\n"+
"      frameCount++;\n"+
"\n"+
"   }\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_bind (eventValue) // input event received for inputOnly field\n"+
"\n"+
"{\n"+
"\n"+
"   // need to ensure CameraShot nodes are properly initialized\n"+
"\n"+
"   if (initialized == false)\n"+
"\n"+
"   {\n"+
"\n"+
"      checkShots (true);\n"+
"\n"+
"      initialized = true;\n"+
"\n"+
"   }\n"+
"\n"+
"   if (eventValue)\n"+
"\n"+
"   {\n"+
"\n"+
"       tracePrint ('Camera has been bound');\n"+
"\n"+
"   }\n"+
"\n"+
"   else\n"+
"\n"+
"   {\n"+
"\n"+
"       tracePrint ('Camera has been unbound');\n"+
"\n"+
"   }\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    description = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_position (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    position = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_orientation (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    orientation = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_fieldOfView (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    fieldOfView = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_nearClipPlane (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    nearClipPlane = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_farClipPlane (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    farClipPlane = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_shots (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    shots = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_filterColor (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    filterColor = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_filterTransparency (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    filterTransparency = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_upVector (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    upVector = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_fStop (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    fStop = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_focusDistance (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    focusDistance = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_offlineRender (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    offlineRender = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    key = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    keyValuePosition = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    keyValueOrientation = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_animated (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    animated = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n"+
"\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"\n"+
"    if  (description.length > 0)\n"+
"\n"+
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\n"+
"\n"+
"    else\n"+
"\n"+
"         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"\n"+
"}")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("position").setProtoField("position"))
                .addConnect(new connect().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
                .addConnect(new connect().setNodeField("set_bind").setProtoField("set_bind"))
                .addConnect(new connect().setNodeField("fieldOfView").setProtoField("fieldOfView"))
                .addConnect(new connect().setNodeField("nearClipPlane").setProtoField("nearClipPlane"))
                .addConnect(new connect().setNodeField("farClipPlane").setProtoField("farClipPlane"))
                .addConnect(new connect().setNodeField("shots").setProtoField("shots"))
                .addConnect(new connect().setNodeField("filterColor").setProtoField("filterColor"))
                .addConnect(new connect().setNodeField("filterTransparency").setProtoField("filterTransparency"))
                .addConnect(new connect().setNodeField("upVector").setProtoField("upVector"))
                .addConnect(new connect().setNodeField("fStop").setProtoField("fStop"))
                .addConnect(new connect().setNodeField("focusDistance").setProtoField("focusDistance"))
                .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connect().setNodeField("totalDuration").setProtoField("totalDuration"))
                .addConnect(new connect().setNodeField("offlineRender").setProtoField("offlineRender"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
            .addChild(new ROUTE().setFromNode("CameraPositionInterpolator").setFromField("value_changed").setToNode("CameraViewpoint").setToField("position"))
            .addChild(new ROUTE().setFromNode("CameraOrientationInterpolator").setFromField("value_changed").setToNode("CameraViewpoint").setToField("orientation"))
            .addChild(new ROUTE().setFromNode("CameraScript").setFromField("position").setToNode("CameraViewpoint").setToField("position"))
            .addChild(new ROUTE().setFromNode("CameraScript").setFromField("orientation").setToNode("CameraViewpoint").setToField("orientation"))
            .addChild(new ROUTE().setFromNode("CameraScript").setFromField("isActive").setToNode("CameraViewpoint").setToField("set_bind"))
            .addChild(new ROUTE().setFromNode("CameraScript").setFromField("isActive").setToNode("CameraNavInfo").setToField("set_bind"))
            .addChild(new ROUTE().setFromNode("CameraScript").setFromField("isActive").setToNode("CameraDirectionalLight").setToField("on"))))
        .addChild(new ProtoDeclare().setName("CameraShot")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setValue("true"))
            .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("moves"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialPosition").setValue("0 0 10"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialOrientation"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialAimPoint"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialFieldOfView").setValue("0.7854"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialFStop").setValue("5.6"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialFocusDistance").setValue("10"))
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("shotDuration"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isActive"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled")))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("CameraShotScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled"))
              .addField(new field().setType("MFNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("moves"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialPosition"))
              .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialOrientation"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialAimPoint"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialFieldOfView"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialFStop"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("initialFocusDistance"))
              .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("shotDuration"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isActive"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled"))
              .addField(new field().setType("MFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("key"))
              .addField(new field().setType("MFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("keyValuePosition"))
              .addField(new field().setType("MFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("keyValueOrientation"))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize () // CameraShotScript\n"+
"\n"+
"{\n"+
"\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"\n"+
"    // compute shotDuration by summing durations from contained CameraMovement nodes\n"+
"\n"+
"    shotDuration = 0;\n"+
"\n"+
"    for (i = 0; i < moves.length; i++)\n"+
"\n"+
"    {\n"+
"\n"+
"        shotDuration = shotDuration + moves[i].duration;\n"+
"\n"+
"    }\n"+
"\n"+
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\n"+
"\n"+
"\n"+
"//  tracePrint ('... initialize() complete');\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    description = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    enabled = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_moves (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    moves = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_initialPosition (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    initialPosition = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_initialOrientation (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    initialOrientation = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_initialAimPoint (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    initialAimPoint = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    initialFieldOfView = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_initialFStop (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    initialFStop = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    initialFocusDistance = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    key = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    keyValuePosition = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    keyValueOrientation = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"\n"+
"    if  (description.length > 0)\n"+
"\n"+
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\n"+
"\n"+
"    else\n"+
"\n"+
"         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"\n"+
"}")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("moves").setProtoField("moves"))
                .addConnect(new connect().setNodeField("initialPosition").setProtoField("initialPosition"))
                .addConnect(new connect().setNodeField("initialOrientation").setProtoField("initialOrientation"))
                .addConnect(new connect().setNodeField("initialAimPoint").setProtoField("initialAimPoint"))
                .addConnect(new connect().setNodeField("initialFieldOfView").setProtoField("initialFieldOfView"))
                .addConnect(new connect().setNodeField("initialFStop").setProtoField("initialFStop"))
                .addConnect(new connect().setNodeField("initialFocusDistance").setProtoField("initialFocusDistance"))
                .addConnect(new connect().setNodeField("shotDuration").setProtoField("shotDuration"))
                .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))))
        .addChild(new ProtoDeclare().setName("CameraMovement")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setValue("true"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("duration"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalPosition").setValue("0 0 10"))
            .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalOrientation"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tracking"))
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalAimPoint"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalFieldOfView").setValue("0.7854"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalFStop").setValue("5.6"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalFocusDistance").setValue("10"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isActive"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled")))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("CameraMovementScript").setDirectOutput(true).setMustEvaluate(true)
              .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("duration"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalPosition"))
              .addField(new field().setType("SFRotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalOrientation"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tracking"))
              .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalAimPoint"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalFieldOfView"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalFStop"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("goalFocusDistance"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("isActive"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled"))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize () // CameraMovementScript\n"+
"\n"+
"{\n"+
"\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\n"+
"\n"+
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\n"+
"\n"+
"                           );\n"+
"\n"+
"    if (duration < 0)\n"+
"\n"+
"    {\n"+
"\n"+
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\n"+
"\n"+
"       duration = 0;\n"+
"\n"+
"    }\n"+
"\n"+
"    else if (duration == 0)\n"+
"\n"+
"    {\n"+
"\n"+
"       alwaysPrint ('warning: duration=0, nothing to do!');\n"+
"\n"+
"    }\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_goalAimPoint (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    goalAimPoint_changed = eventValue;\n"+
"\n"+
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\n"+
"\n"+
"\n"+
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    description = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    enabled = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_duration (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    duration = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_goalPosition (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    goalPosition = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_goalOrientation (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    goalOrientation = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_tracking (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    tracking = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    goalFieldOfView = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_goalFStop (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    goalFStop = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    goalFocusDistance = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"\n"+
"    if  (description.length > 0)\n"+
"\n"+
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\n"+
"\n"+
"    else\n"+
"\n"+
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"\n"+
"}")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("duration").setProtoField("duration"))
                .addConnect(new connect().setNodeField("goalPosition").setProtoField("goalPosition"))
                .addConnect(new connect().setNodeField("goalOrientation").setProtoField("goalOrientation"))
                .addConnect(new connect().setNodeField("tracking").setProtoField("tracking"))
                .addConnect(new connect().setNodeField("goalAimPoint").setProtoField("goalAimPoint"))
                .addConnect(new connect().setNodeField("goalFieldOfView").setProtoField("goalFieldOfView"))
                .addConnect(new connect().setNodeField("goalFStop").setProtoField("goalFStop"))
                .addConnect(new connect().setNodeField("goalFocusDistance").setProtoField("goalFocusDistance"))
                .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))))
        .addChild(new ProtoDeclare().setName("OfflineRender")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled").setValue("true"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("frameRate").setValue("30"))
            .addField(new field().setType("SFVec2f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("frameSize").setValue("640 480"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pixelAspectRatio").setValue("1.33"))
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_startTime"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("progress"))
            .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("renderCompleteTime"))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("movieFormat").setValue("\"mpeg\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("imageFormat").setValue("\"png\""))
            .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled")))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF("OfflineRenderScript").setMustEvaluate(true)
              .addField(new field().setType("SFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("description"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("enabled"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("frameRate"))
              .addField(new field().setType("SFVec2f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("frameSize"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pixelAspectRatio"))
              .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_startTime"))
              .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("progress"))
              .addField(new field().setType("SFTime").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("renderCompleteTime"))
              .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("movieFormat"))
              .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("imageFormat"))
              .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("traceEnabled"))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize () // OfflineRenderScript\n"+
"\n"+
"{\n"+
"\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    description = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    enabled = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_frameRate (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    frameRate = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_frameSize (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    frameSize = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n"+
"\n"+
"{\n"+
"\n"+
"    pixelAspectRatio = eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_startTime (eventValue) // input event received for inputOnly field\n"+
"\n"+
"{\n"+
"\n"+
"   // do something with input eventValue;\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"\n"+
"{\n"+
"\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"\n"+
"    if  (description.length > 0)\n"+
"\n"+
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\n"+
"\n"+
"    else\n"+
"\n"+
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"\n"+
"}")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("frameRate").setProtoField("frameRate"))
                .addConnect(new connect().setNodeField("frameSize").setProtoField("frameSize"))
                .addConnect(new connect().setNodeField("pixelAspectRatio").setProtoField("pixelAspectRatio"))
                .addConnect(new connect().setNodeField("set_startTime").setProtoField("set_startTime"))
                .addConnect(new connect().setNodeField("progress").setProtoField("progress"))
                .addConnect(new connect().setNodeField("renderCompleteTime").setProtoField("renderCompleteTime"))
                .addConnect(new connect().setNodeField("movieFormat").setProtoField("movieFormat"))
                .addConnect(new connect().setNodeField("imageFormat").setProtoField("imageFormat"))
                .addConnect(new connect().setNodeField("traceEnabled").setProtoField("traceEnabled"))))))
        .addChild(new Background().setSkyColor(new MFColor4().getArray()))
        .addChild(new Anchor().setDescription("launch CameraExample scene").setUrl(new MFString5().getArray())
          .addChild(new Transform()
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,0.2f})))
              .setGeometry(new Text().setString(new MFString6().getArray())
                .setFontStyle(new FontStyle().setJustify(new MFString7().getArray())))))))      ;
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,0f,0f});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
private class MFRotation3 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,0f,0f,1f,0f,0f});
  }
}
private class MFColor4 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.282353f,0.380392f,0.470588f});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}
