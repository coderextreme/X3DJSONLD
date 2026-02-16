####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python bumpyx_itesliders.py
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
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.1',
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
    Comment(' <component name=\'DIS\' level=\'2\'></component> '),
    meta(content='bumpyx_itesliders.x3d',name='title'),
    meta(content='*Bumpy flower with prototype sliders*',name='description'),
    meta(content='Doug Sanden, Christoph Valentin, John Carlson',name='creator'),
    meta(content='https://github.com/coderextreme/JSONverse/public/x3d/bumpyx_itesliders.x3d',name='identifier'),
    meta(content='PSPad, http://www.pspad.com/',name='generator'),
    meta(content='license.html',name='license')]),
  # "The Flower Review (TPREV)", a simple MU scene using DIS Sensor Event Distribution,
  # It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)
  # open for their "discussion about the teapot"
  Scene=Scene(
    children=[
    Comment(' LayerSet with two layers, navigation happens in layer 1 '),
    LayerSet(activeLayer=1,order=[1,2,3],
      # the first Layer contains the main scenery - "The Review of the Flower (DIS Multiuser)"
      Layer(pickable=True,objectType=["ALL"],
        # basic nodes, which might be present in any scene
        NavigationInfo(type=["EXAMINE"],avatarSize=[0.25,1.75,0.75]),
        DirectionalLight(ambientIntensity=.2,direction=(0,-1,-0)),
        DirectionalLight(ambientIntensity=.2,direction=(-1,-.1,-1)),
        Viewpoint(description='My Overview',fieldOfView=1.570796,position=(0,1.75,60)),
        # this group contains the red/green/blue 3D crosshair
        Group(
          children=[
          Comment(' Arrow X '),
          Transform(translation=(25,0,0),rotation=(0,0,-1,1.57),
            children=[
            Shape(
              geometry=Cylinder(DEF='Shaft',radius=.35,height=50),
              appearance=Appearance(
                material=Material(DEF='RED',diffuseColor=(1,0,0),emissiveColor=(1,0,0))))]),
          Transform(translation=(50,0,0),rotation=(0,0,-1,1.57),
            children=[
            Shape(
              geometry=Cone(DEF='Tip',bottomRadius=.8,height=3),
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
          Comment(' <Inline DEF="Flower" url=\'"bumpyx_ite.x3d"\' /> '),
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
                  backTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]),
                  bottomTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]),
                  frontTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]),
                  leftTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]),
                  rightTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]),
                  topTexture=ImageTexture(url=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"])),
                shaders=[
                ComposedShader(DEF='x_iteShader',language='GLSL',
                  field=[
                  field(name='chromaticDispertion',accessType='inputOnly',type='SFVec3f',value=(0.98,1.0,1.033)),
                  field(name='cube',type='SFNode',accessType='inputOnly',
                    children=[
                    ComposedCubeMapTexture(USE='texture')]),
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
                  ShaderPart(url=["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]),
                  ShaderPart(url=["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"],type='FRAGMENT'),
                  # TO CONVERT TO A SPHERE
                  # <ShaderPart url='"../shaders/x_ite.vs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"' type="VERTEX" containerField='parts'></ShaderPart>
                  # <ShaderPart url='"../shaders/x_itebubbles.fs" "https://coderextreme.net/X3DJSONLD/src/main/shaders/xite_bubbles.fs"' containerField='parts' type='FRAGMENT'></ShaderPart>
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
     var resolution = 300;
     var theta = 0.0;
     var phi = 0.0;
     var delta = (2 * 3.141592653) / (resolution-1);
     var crds = new MFVec3f();
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
		crds.push(new SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		));
		theta += delta;
	}
	phi += delta;
     }
     coordinates = crds;


     var cis = new MFInt32();
     for ( i = 0; i < resolution-1; i++) {
     	for ( j = 0; j < resolution-1; j++) {
	     cis.push(i*resolution+j);
	     cis.push(i*resolution+j+1);
	     cis.push((i+1)*resolution+j+1);
	     cis.push((i+1)*resolution+j);
	     cis.push(-1);
	}
    }
    coordIndexes = cis;
}
"""),
        ROUTE(fromField='coordIndexes',fromNode='OrbitScript',toField='set_coordIndex',toNode='Orbit'),
        ROUTE(fromField='coordinates',fromNode='OrbitScript',toField='set_point',toNode='OrbitCoordinates')]),
      LayoutLayer(pickable=True,objectType=["ALL"],
        layout=Layout(align=["LEFT","BOTTOM"],offset=[-0.2,0.19],size=[0.4,0.6]),
        viewport=Viewport(clipBoundary=[0,1,0,1]),
        children=[
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
            field(accessType='inputOutput',name='petNames',type='MFString'),
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
                  PlaneSensor(DEF='protoSensor',description='Grab with mouse to adjust slider',maxPosition=(1,0)),
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
              Script(url=["../javascripts/X3DUser.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DUser.js"],DEF='protoValueTransformerScript',directOutput=True,mustEvaluate=True,
                field=[
                field(accessType='inputOutput',name='protoScale',type='SFFloat'),
                field(accessType='inputOutput',name='petNames',type='MFString'),
                field(accessType='inputOutput',name='protoParameterName',type='SFString'),
                field(accessType='inputOutput',name='shader',type='SFNode'),
                field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
                field(accessType='outputOnly',name='protoValue_changed',type='SFFloat',value=1.0),
                field(accessType='outputOnly',name='protoText_changed',type='MFString',value=["1.0"])],
                IS=IS(
                  connect=[
                  connect(nodeField='protoScale',protoField='parameterScale'),
                  connect(nodeField='petNames',protoField='petNames'),
                  connect(nodeField='protoParameterName',protoField='parameterName'),
                  connect(nodeField='shader',protoField='shaderNode')]),

              sourceCode="""
ecmascript:

"""),
              ROUTE(fromField='translation_changed',fromNode='protoSensor',toField='set_translation',toNode='protoTransform'),
              ROUTE(fromField='translation_changed',fromNode='protoSensor',toField='newTranslation',toNode='protoValueTransformerScript'),
              ROUTE(fromField='protoText_changed',fromNode='protoValueTransformerScript',toField='string',toNode='protoText')])])),
        ProtoInstance(DEF='aPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.7,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0)),
          fieldValue(name='textString',value=["a="]),
          fieldValue(name='parameterScale',value=30),
          fieldValue(name='parameterName',value='a'),
          fieldValue(name='petNames',value=["yottzumm","group1-petname"]),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='x_iteShader')])]),
        ProtoInstance(DEF='bPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.4,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0)),
          fieldValue(name='textString',value=["b="]),
          fieldValue(name='parameterScale',value=30),
          fieldValue(name='parameterName',value='b'),
          fieldValue(name='petNames',value=["yottzumm","group1-petname"]),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='x_iteShader')])]),
        ProtoInstance(DEF='cPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.1,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0)),
          fieldValue(name='textString',value=["c="]),
          fieldValue(name='parameterScale',value=20),
          fieldValue(name='parameterName',value='c'),
          fieldValue(name='petNames',value=["yottzumm","yottzumm2","group1-petname"]),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='x_iteShader')])]),
        ProtoInstance(DEF='dPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.2,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0)),
          fieldValue(name='textString',value=["d="]),
          fieldValue(name='parameterScale',value=20),
          fieldValue(name='parameterName',value='d'),
          fieldValue(name='petNames',value=["yottzumm","yottzumm2","group1-petname"]),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='x_iteShader')])]),
        ProtoInstance(DEF='tdeltaPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.5,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0)),
          fieldValue(name='textString',value=["tdelta="]),
          fieldValue(name='parameterScale',value=6.28),
          fieldValue(name='parameterName',value='tdelta'),
          fieldValue(name='petNames',value=["yottzumm2","group1-petname"]),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='x_iteShader')])]),
        ProtoInstance(DEF='pdeltaPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.8,0)),
          fieldValue(name='transformTranslation',value=(0,0,0.1)),
          fieldValue(name='sensorTranslation',value=(0,0,0)),
          fieldValue(name='textString',value=["pdelta="]),
          fieldValue(name='parameterScale',value=6.28),
          fieldValue(name='parameterName',value='pdelta'),
          fieldValue(name='petNames',value=["yottzumm2","group1-petname"]),
          fieldValue(name='shaderNode',
            children=[
            ComposedShader(USE='x_iteShader')])])]),
      Layer(pickable=True,objectType=["ALL"],
        children=[
        Viewpoint(description='My Humanoids',fieldOfView=1.570796,position=(0,1.75,80)),
        Script(url=["../javascripts/X3DAvatar.js","https://raw.githubusercontent.com/coderextreme/JSONverse/refs/heads/main/public/javascripts/X3DAvatar.js"],DEF='HumanoidScript',directOutput=True,mustEvaluate=True),
        Group(DEF='humanoidGroup',
          children=[
          Group(),])])])])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for bumpyx_itesliders.py:')
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

print("python bumpyx_itesliders.py load and self-test diagnostics complete.")
