####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python bumpyfreewrljsonverse.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    component(level=1,name='Scripting'),
    component(name='EnvironmentalEffects',level=3),
    component(name='Shaders',level=1),
    component(name='CubeMapTexturing',level=1),
    component(name='Texturing',level=1),
    component(name='Rendering',level=1),
    Comment(' <component name=\'Shape\' level=\'4\'></component> '),
    component(name='Grouping',level=3),
    component(name='Core',level=1),
    component(name='DIS',level=2),
    meta(content='bumpyfreewrljsonverse.x3d',name='title'),
    meta(content='*enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='Doug Sanden, Christoph Valentin, John Carlson',name='creator'),
    meta(content='*if manually translating VRML-to-X3D, enter name of person translating here*',name='translator'),
    meta(content='*enter date of initial version here*',name='created'),
    meta(content='*enter date of translation here*',name='translated'),
    meta(content='*enter date of latest revision here*',name='modified'),
    meta(content='*enter version here, if any*',name='version'),
    meta(content='*enter reference citation or relative/online url here*',name='reference'),
    meta(content='*enter additional url/bibliographic reference information here*',name='reference'),
    meta(content='*enter reference resource here if required to support function, delivery, or coherence of content*',name='requires'),
    meta(content='*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024',name='rights'),
    meta(content='*enter drawing filename/url here*',name='drawing'),
    meta(content='*enter movie filename/url here*',name='MovingImage'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='*enter subject keywords here*',name='subject'),
    meta(content='*enter permission statements or url here*',name='accessRights'),
    meta(content='*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*',name='identifier'),
    meta(content='PSPad, http://www.pspad.com/',name='generator'),
    meta(content='license.html',name='license'),
    Comment(' Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces https://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L '),]),
  # "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution,

  # It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)

  # open for their "discussion about the teapot"

  Scene=Scene(
    children=[
    Comment(' basic nodes, which might be present in any scene '),
    NavigationInfo(type=["EXAMINE"],avatarSize=[0.25,1.75,0.75]),
    DirectionalLight(ambientIntensity=.2,direction=(0,-1,-0)),
    DirectionalLight(ambientIntensity=.2,direction=(-1,-.1,-1)),
    Viewpoint(description='My Overview',fieldOfView=1.570796,position=(0,1.75,60)),
    Comment(' LayerSet with two layers, navigation happens in layer 1 '),
    LayerSet(activeLayer=1,order=[1,2],
      # the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)"

      Layer(pickable=True,objectType=["ALL"],
        # this group contains the red/green/blue 3D crosshair

        Group(
          children=[
          Comment(' Arrow X '),
          Transform(translation=(25,0,0),rotation=(0,0,-1,1.57),
            children=[
            Shape(
              geometry=Cylinder(DEF='Shaft',radius=.35,height=50.0),
              appearance=Appearance(
                material=Material(DEF='RED',diffuseColor=(1,0,0),emissiveColor=(1,0,0))))]),
          Transform(translation=(50,0,0),rotation=(0,0,-1,1.57),
            children=[
            Shape(
              geometry=Cone(DEF='Tip',bottomRadius=.8,height=3.0),
              appearance=Appearance(
                material=Material(USE='RED')))]),
          Comment(' Arrow Y '),
          Transform(translation=(0,25,0),
            children=[
            Shape(
              geometry=Cylinder(USE='Shaft'),
              appearance=Appearance(
                material=Material(DEF='GREEN',diffuseColor=(0,1,0),emissiveColor=(0,1,0))))]),
          Transform(translation=(0,50,0),
            children=[
            Shape(
              geometry=Cone(USE='Tip'),
              appearance=Appearance(
                material=Material(USE='GREEN')))]),
          Comment(' Arrow Z '),
          Transform(translation=(0,0,25),rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Cylinder(USE='Shaft'),
              appearance=Appearance(
                material=Material(DEF='BLUE',diffuseColor=(0,0,1),emissiveColor=(0,0,1))))]),
          Transform(translation=(0,0,50),rotation=(1,0,0,1.57),
            children=[
            Shape(
              geometry=Cone(USE='Tip'),
              appearance=Appearance(
                material=Material(USE='BLUE')))])]),
        # the model that is being reviewed by the users of this scene

        Transform(DEF='FlowerTransform',
          children=[
          Comment(' <Inline DEF="Flower" url=\'"bumpyfreewrl.x3d"\' /> '),
          Comment(' Images courtesy of Paul Debevec\'s Light Probe Image Gallery '),
          Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]),
          Transform(
            children=[
            Shape(
              # <Sphere radius='40'></Sphere>

              geometry=IndexedFaceSet(convex=False,DEF='Orbit',
                coord=Coordinate(DEF='OrbitCoordinates')),
              appearance=Appearance(
                material=Material(diffuseColor=(.7,.7,.7),specularColor=(.5,.5,.5)),
                texture=ComposedCubeMapTexture(DEF='texture',
                  backTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
                  bottomTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
                  frontTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
                  leftTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
                  rightTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
                  topTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])),
                shaders=[
                ComposedShader(DEF='freewrlShader',language='GLSL',
                  field=[
                  field(name='chromaticDispertion',accessType='inputOnly',type='SFVec3f',value=(0.98,1.0,1.033)),
                  field(name='fw_textureCoordGenType',accessType='inputOnly',type='SFInt32',value=0),
                  field(name='bias',type='SFFloat',accessType='inputOnly',value=0.5),
                  field(name='scale',type='SFFloat',accessType='inputOnly',value=0.5),
                  field(name='power',type='SFFloat',accessType='inputOnly',value=2),
                  field(name='a',type='SFFloat',accessType='inputOutput',value=15),
                  field(name='b',type='SFFloat',accessType='inputOutput',value=5),
                  field(name='c',type='SFFloat',accessType='inputOutput',value=5),
                  field(name='d',type='SFFloat',accessType='inputOutput',value=5),
                  field(name='tdelta',type='SFFloat',accessType='inputOutput',value=0),
                  field(name='pdelta',type='SFFloat',accessType='inputOutput',value=0),
                  parts=[
                  ShaderPart(url=["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]),
                  ShaderPart(url=["../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"],type='FRAGMENT'),
                  # TO CONVERT TO A SPHERE

                  # <ShaderPart url='"../shaders/freewrl.vs"'></ShaderPart>

                  # <ShaderPart url='"../shaders/freewrl_bubbles.fs"' type='FRAGMENT'></ShaderPart>
)]))])]),
        Script(DEF='OrbitScript',
          field=[
          field(accessType='inputOutput',name='coordinates',type='MFVec3f'),
          field(accessType='outputOnly',name='coordIndexes',type='MFInt32'),
          field(name='a',type='SFFloat',accessType='inputOutput',value=10),
          field(name='b',type='SFFloat',accessType='inputOutput',value=10),
          field(name='c',type='SFFloat',accessType='inputOutput',value=2),
          field(name='d',type='SFFloat',accessType='inputOutput',value=2),
          field(name='pdelta',type='SFFloat',accessType='inputOutput',value=0),
          field(name='tdelta',type='SFFloat',accessType='inputOutput',value=0)],

        sourceCode="""
ecmascript:
function initialize() {
     var resolution = 100;
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = new MFVec3f();
     var vecCount = 0;
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
		crds[vecCount] = new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
		vecCount++;
		theta += delta;
	}
	phi += delta;
     }
     coordinates = crds;
     // coordinates = new MFVec3f(...crds);


     var cis = new MFInt32();
     var intCount = 0;
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis[intCount++] = i*resolution+j;
	     cis[intCount++] = i*resolution+j+1;
	     cis[intCount++] = (i+1)*resolution+j+1;
	     cis[intCount++] = (i+1)*resolution+j;
	     cis[intCount++] = -1;
	}
    }
    coordIndexes = cis;
    // coordIndexes = new MFInt32(...cis);
}
"""),
        ROUTE(fromField='coordIndexes',fromNode='OrbitScript',toField='set_coordIndex',toNode='Orbit'),
        ROUTE(fromField='coordinates',fromNode='OrbitScript',toField='set_point',toNode='OrbitCoordinates'),
        # DIS multiuser facilities

        DISEntityManager(DEF='EntityManager',
          children=[
          DISEntityTypeMapping(category=77,specific=1,url=["../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"]),
          DISEntityTypeMapping(category=77,specific=2,url=["../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"]),
          DISEntityTypeMapping(category=77,specific=3,url=["../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"]),
          DISEntityTypeMapping(category=77,specific=4,url=["../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"])]),
        Collision(enabled=False,
          children=[
          Group(DEF='AvatarHolder')]),
        ROUTE(fromField='addedEntities',fromNode='EntityManager',toField='addChildren',toNode='AvatarHolder'),
        ROUTE(fromField='removedEntities',fromNode='EntityManager',toField='removeChildren',toNode='AvatarHolder')]),
      # the second layer contains the sliders that are moved with the user's display

      # like a HUD (heads up display)

      LayoutLayer(pickable=True,objectType=["ALL"],
        # positioning the LayoutLayer

        layout=Layout(align=["LEFT","BOTTOM"],offset=[-0.2,0.19],offsetUnits=["WORLD","WORLD"],scaleMode=["NONE","NONE"],size=[0.4,0.6],sizeUnits=["WORLD","WORLD"]),
        # clipping the LayoutLayer

        viewport=Viewport(clipBoundary=[0,1,0,1]),
        # the content (children) of the LayoutLayer

        # first, the slider for scaling the model

        Transform(translation=(0,0,-3),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0),transparency=0.7)),
            geometry=Box(size=(100,100,0.02)))]),
        Transform(DEF='equationTransform',
          children=[
          Transform(translation=(0,0,-20),
            children=[
            Shape(
              geometry=Text(DEF='equation',string=["r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"],
                fontStyle=FontStyle(size=0.09)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0))))])]),
        ProtoDeclare(name='SliderProto',
          ProtoInterface=ProtoInterface(
            field=[
            field(accessType='inputOutput',name='sliderTranslation',type='SFVec3f',value=(0,0.7,0)),
            field(accessType='inputOutput',name='transformTranslation',type='SFVec3f',value=(0,0,0.1)),
            field(accessType='inputOutput',name='sensorTranslation',type='SFVec3f',value=(0,0,0.0)),
            field(accessType='inputOutput',name='textString',type='MFString',value=["a="]),
            field(accessType='inputOutput',name='parameterScale',type='SFFloat',value=30),
            field(accessType='inputOutput',name='parameterName',type='SFString',value='a'),
            field(accessType='inputOutput',name='shaderNode',type='SFNode')]),
          ProtoBody=ProtoBody(
            children=[
            Group(
              children=[
              Transform(DEF='protoSlider',translation=(0,0.7,0),
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='sliderTranslation')]),
                children=[
                Transform(DEF='protoTransform',translation=(0,0,0.1),
                  IS=IS(
                    connect=[
                    connect(nodeField='translation',protoField='transformTranslation')]),
                  children=[
                  PlaneSensor(DEF='protoSensor',maxPosition=(1,0)),
                  IS=IS(
                    connect=[
                    connect(nodeField='translation',protoField='sensorTranslation')]),
                  Transform(translation=(0,0.0,0),
                    children=[
                    TouchSensor(DEF='protoTS')]),
                  Transform(
                    children=[
                    Shape(
                      geometry=Text(DEF='protoText',string=["a="],
                        IS=IS(
                          connect=[
                          connect(nodeField='string',protoField='textString')]),
                        fontStyle=FontStyle(size=0.23)),
                      appearance=Appearance(
                        material=Material(),))])])]),
              Script(DEF='protoValueTransformerScript',directOutput=True,mustEvaluate=True,
                field=[
                field(accessType='inputOutput',name='protoScale',type='SFFloat',value=30),
                field(accessType='inputOutput',name='protoParameterName',type='SFString',value='a'),
                field(accessType='inputOutput',name='shader',type='SFNode'),
                field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
                field(accessType='outputOnly',name='protoValue_changed',type='SFFloat',value=1.0),
                field(accessType='outputOnly',name='protoText_changed',type='MFString',value=["1.0"])],
                IS=IS(
                  connect=[
                  connect(nodeField='protoScale',protoField='parameterScale'),
                  connect(nodeField='protoParameterName',protoField='parameterName'),
                  connect(nodeField='shader',protoField='shaderNode')]),

              sourceCode="""
ecmascript:
const newTranslation = function(Value) {
	'use strict';
	protoValue_changed = Value.x * protoScale;
	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));

        var orientation = Value.x;

        var ps = Browser.currentScene.getNamedNode("protoSensor");
        var t = Browser.currentScene.getNamedNode("protoTransform");
        var txt = Browser.currentScene.getNamedNode("protoText");
        if (shader) {
            shader.getField(protoParameterName).setValue(orientation * protoScale);
        }
        if (txt) {
            var stringField = txt.getField("string");
            var label = protoParameterName;
            stringField.setValue(new MFString(label+"="+(orientation * protoScale).toFixed(2)));
        }
        if (ps) {
            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);
        }
        if (t) {
            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);
        }
}
"""),
              ROUTE(fromField='translation_changed',fromNode='protoSensor',toField='set_translation',toNode='protoTransform'),
              ROUTE(fromField='translation_changed',fromNode='protoSensor',toField='newTranslation',toNode='protoValueTransformerScript'),
              ROUTE(fromField='protoText_changed',fromNode='protoValueTransformerScript',toField='string',toNode='protoText')])])),
        ProtoInstance(DEF='aPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.7,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0.0)),
          fieldValue(name='textString',value=["a="]),
          fieldValue(name='parameterScale',value=30),
          fieldValue(name='parameterName',value='a'),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='freewrlShader')])]),
        ProtoInstance(DEF='bPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.4,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0.0)),
          fieldValue(name='textString',value=["b="]),
          fieldValue(name='parameterScale',value=30),
          fieldValue(name='parameterName',value='b'),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='freewrlShader')])]),
        ProtoInstance(DEF='cPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.1,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0.0)),
          fieldValue(name='textString',value=["c="]),
          fieldValue(name='parameterScale',value=20),
          fieldValue(name='parameterName',value='c'),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='freewrlShader')])]),
        ProtoInstance(DEF='dPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.2,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0.0)),
          fieldValue(name='textString',value=["d="]),
          fieldValue(name='parameterScale',value=20),
          fieldValue(name='parameterName',value='d'),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='freewrlShader')])]),
        ProtoInstance(DEF='tdeltaPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.5,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0.0)),
          fieldValue(name='textString',value=["tdelta="]),
          fieldValue(name='parameterScale',value=6.28),
          fieldValue(name='parameterName',value='tdelta'),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='freewrlShader')])]),
        ProtoInstance(DEF='pdeltaPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.8,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0.0)),
          fieldValue(name='textString',value=["pdelta="]),
          fieldValue(name='parameterScale',value=6.28),
          fieldValue(name='parameterName',value='pdelta'),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='freewrlShader')])])])])])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for bumpyfreewrljsonverse.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python bumpyfreewrljsonverse.py load and self-test diagnostics complete.")
