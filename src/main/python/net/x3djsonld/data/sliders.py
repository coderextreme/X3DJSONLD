####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python sliders.py
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

newModel=X3D(profile='Full',version='4.1',
  head=head(
    children=[
    component(level=1,name='Scripting'),
    component(name='EnvironmentalEffects',level=3),
    component(name='Texturing',level=1),
    component(name='Rendering',level=1),
    Comment('<component name=\'Shape\' level=\'4\'></component>'),
    component(name='Grouping',level=3),
    component(name='Core',level=1),
    meta(content='sliders.x3d',name='title'),
    meta(content='8 August 2025',name='created'),
    meta(content='*Bumpy flower with prototype sliders*',name='description'),
    meta(content='Doug Sanden, Christoph Valentin, John Carlson',name='creator'),
    meta(content='https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d',name='identifier'),
    meta(content='license.html',name='license'),
    meta(name='generator',content='Vim, VI Improved')]),
  Scene=Scene(
    children=[
    LayerSet(activeLayer=1,order=[1,2,3],
      layers=[
      Layer(pickable=True,objectType=["ALL"],
        children=[
        NavigationInfo(type=["EXAMINE"],avatarSize=[0.25,1.75,0.75]),
        DirectionalLight(ambientIntensity=.2,direction=(0,-1,-0)),
        DirectionalLight(ambientIntensity=.2,direction=(-1,-.1,-1)),
        Viewpoint(description='My Overview',fieldOfView=1.570796,position=(0,1.75,60)),
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
          Transform(
            children=[
            Shape(
              geometry=IndexedFaceSet(convex=False,DEF='Orbit',
                coord=Coordinate(DEF='OrbitCoordinates')),
              appearance=Appearance(
                material=Material(diffuseColor=(.7,.7,.7),specularColor=(.5,.5,.5))))])]),
        Script(DEF='OrbitScript',
          field=[
          field(name='coordinates',type='MFVec3f',accessType='inputOutput'),
          field(name='coordIndexes',type='MFInt32',accessType='inputOutput'),
          field(name='a',type='SFFloat',accessType='inputOutput',value=5),
          field(name='b',type='SFFloat',accessType='inputOutput',value=5),
          field(name='c',type='SFFloat',accessType='inputOutput',value=5),
          field(name='d',type='SFFloat',accessType='inputOutput',value=5),
          field(name='pdelta',type='SFFloat',accessType='inputOutput',value=0),
          field(name='tdelta',type='SFFloat',accessType='inputOutput',value=0),
          field(name='resolution',type='SFInt32',accessType='inputOutput',value=50)],

        sourceCode="""
ecmascript:
			function initialize() {
			     generateCoordinates();
			     var arrIndex = 0;
			     for (var i = 0; i < resolution-1; i++) {
				for (var j = 0; j < resolution-1; j++) {
				     coordIndexes[arrIndex++] = i*resolution+j;
				     coordIndexes[arrIndex++] = i*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;
				     coordIndexes[arrIndex++] = (i+1)*resolution+j;
				     coordIndexes[arrIndex++] = -1;
				}
			    }
			}
			function set_a(value) {
				a = value;
				generateCoordinates();
			}

			function set_b(value) {
				b = value;
				generateCoordinates();
			}

			function set_c(value) {
				c = value;
				generateCoordinates();
			}

			function set_d(value) {
				d = value;
				generateCoordinates();
			}

			function set_pdelta(value) {
				pdelta = value;
				generateCoordinates();
			}

			function set_tdelta(value) {
				tdelta = value;
				generateCoordinates();
			}

			function resolution(value) {
				resolution = value;
				initialize();
			}

			function generateCoordinates() {
			     var theta = 0.0;
			     var phi = 0.0;
			     var delta = (2 * 3.141592653) / (resolution-1);
			     var arrIndex = 0;
			     for (var i = 0; i < resolution; i++) {
				for (var j = 0; j < resolution; j++) {
					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);
					coordinates[arrIndex++] = new SFVec3f(
						rho * Math.cos(phi) * Math.cos(theta),
						rho * Math.cos(phi) * Math.sin(theta),
						rho * Math.sin(phi)
					);
					theta += delta;
				}
				phi += delta;
			     }
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
        # The slider parameters

        ProtoDeclare(name='SliderProto',
          ProtoInterface=ProtoInterface(
            field=[
            field(accessType='inputOutput',name='sliderTranslation',type='SFVec3f',value=(0,0,0)),
            field(accessType='inputOutput',name='textString',type='MFString',value=["x="]),
            field(accessType='inputOutput',name='parameterScale',type='SFFloat',value=15),
            field(accessType='inputOutput',name='parameterName',type='SFString',value='x'),
            field(accessType='inputOutput',name='orbScript',type='SFNode')]),
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
                  children=[
                  PlaneSensor(DEF='protoSensor',description='Grab with mouse to adjust slider',maxPosition=(1,0)),
                  Transform(translation=(0,0.0,0),
                    children=[
                    TouchSensor(description='Maybe start dragging this?',DEF='protoTS')]),
                  Transform(
                    children=[
                    Shape(
                      geometry=Text(DEF='protoText',string=["a="],
                        IS=IS(
                          connect=[
                          connect(nodeField='string',protoField='textString')]),
                        fontStyle=FontStyle(style_='BOLD',size=0.23)),
                      appearance=Appearance(
                        material=Material(),))])])]),
              Script(DEF='protoValueTransformerScript',
                field=[
                field(accessType='inputOutput',name='protoScale',type='SFFloat'),
                field(accessType='inputOutput',name='protoParameterName',type='SFString'),
                field(accessType='inputOnly',name='newTranslation',type='SFVec3f',value=(1.0,1.0,1.0)),
                field(accessType='inputOutput',name='protoScript',type='SFNode'),
                field(accessType='inputOutput',name='protoValue',type='SFFloat',value=1.0),
                field(accessType='inputOutput',name='protoText',type='MFString',value=["1.0"])],
                IS=IS(
                  connect=[
                  connect(nodeField='protoScale',protoField='parameterScale'),
                  connect(nodeField='protoParameterName',protoField='parameterName'),
                  connect(nodeField='protoScript',protoField='orbScript')]),

              sourceCode="""
ecmascript:
function set_protoScale(value) {
	protoScale = value;
}

function set_protoParameterName(value) {
	protoParameterName = value;
}

function set_protoScript(value) {
	protoScript = value;
}

function set_protoValue(value) {
	protoValue = value;
}

function set_protoText(value) {
	protoText = value;
}

function newTranslation(value) {
       	set_protoValue(value.x * protoScale);
       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));
	protoScript[protoParameterName] = protoValue;
};
"""),
              ROUTE(fromField='translation_changed',fromNode='protoSensor',toField='set_translation',toNode='protoTransform'),
              ROUTE(fromField='translation_changed',fromNode='protoSensor',toField='newTranslation',toNode='protoValueTransformerScript'),
              ROUTE(fromField='protoText',fromNode='protoValueTransformerScript',toField='string',toNode='protoText')])])),
        ProtoInstance(DEF='aPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.7,0)),
          fieldValue(name='textString',value=["a="]),
          fieldValue(name='parameterScale',value=30),
          fieldValue(name='parameterName',value='a'),
          fieldValue(name='orbScript',
            children=[
            Script(USE='OrbitScript')])]),
        ProtoInstance(DEF='bPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.4,0)),
          fieldValue(name='textString',value=["b="]),
          fieldValue(name='parameterScale',value=30),
          fieldValue(name='parameterName',value='b'),
          fieldValue(name='orbScript',
            children=[
            Script(USE='OrbitScript')])]),
        ProtoInstance(DEF='cPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,0.1,0)),
          fieldValue(name='textString',value=["c="]),
          fieldValue(name='parameterScale',value=20),
          fieldValue(name='parameterName',value='c'),
          fieldValue(name='orbScript',
            children=[
            Script(USE='OrbitScript')])]),
        ProtoInstance(DEF='dPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.2,0)),
          fieldValue(name='textString',value=["d="]),
          fieldValue(name='parameterScale',value=20),
          fieldValue(name='parameterName',value='d'),
          fieldValue(name='orbScript',
            children=[
            Script(USE='OrbitScript')])]),
        ProtoInstance(DEF='tdeltaPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.5,0)),
          fieldValue(name='textString',value=["tdelta="]),
          fieldValue(name='parameterScale',value=6.28),
          fieldValue(name='parameterName',value='tdelta'),
          fieldValue(name='orbScript',
            children=[
            Script(USE='OrbitScript')])]),
        ProtoInstance(DEF='pdeltaPI',name='SliderProto',
          fieldValue=[
          fieldValue(name='sliderTranslation',value=(0,-0.8,0)),
          fieldValue(name='textString',value=["pdelta="]),
          fieldValue(name='parameterScale',value=6.28),
          fieldValue(name='parameterName',value='pdelta'),
          fieldValue(name='orbScript',
            children=[
            Script(USE='OrbitScript')])])]),
      Layer(pickable=True,objectType=["ALL"],
        children=[
        Viewpoint(description='My Humanoids',fieldOfView=1.570796,position=(0,1.75,80))])])])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for sliders.py:')
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

print("python sliders.py load and self-test diagnostics complete.")
