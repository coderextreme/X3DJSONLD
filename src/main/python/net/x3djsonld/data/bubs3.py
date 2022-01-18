###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='title',content='bubs3.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='Tour around a prismatic sphere'),
    meta(name='generator',content='X3D-Edit, https://savage.nps.edu/X3D-Edit'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/bubs.x3d')]),
  Scene=Scene(
    children=[
    NavigationInfo(type='"EXAMINE"'),
    Viewpoint(position=(0,0,4),orientation=(1,0,0,0),description='Bubbles in action'),
    Background(backUrl=["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"],bottomUrl=["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"],frontUrl=["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"],leftUrl=["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"],rightUrl=["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"],topUrl=["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"]),
    Transform(DEF='DECLBubble_bubbleA',
      children=[
      Shape(
        geometry=Sphere(radius=0.25),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),transparency=0.2))),
      Script(DEF='DECLBubble_bubbleA_bounce',
        field=[
        field(name='scale',accessType='inputOutput',type='SFVec3f',value=(1,1,1)),
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='scalvel',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_fraction',accessType='inputOnly',type='SFFloat')],

        sourceCode="""
ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(translation.x) > 256) {
	translation.x = 0;
	initialize();
    }
    if ( Math.abs(translation.y) > 256) {
	translation.y = 0;
	initialize();
    }
    if ( Math.abs(translation.z) > 256) {
	translation.z = 0;
	initialize();
    }
    if (Math.abs(scale.x) > 20) {
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}
"""),
      TimeSensor(DEF='DECLBubble_bubbleA_bubbleClock',cycleInterval=10,loop=True),
      ROUTE(fromNode='DECLBubble_bubbleA_bounce',fromField='translation_changed',toNode='DECLBubble_transform',toField='set_translation'),
      ROUTE(fromNode='DECLBubble_bubbleA_bounce',fromField='scale_changed',toNode='DECLBubble_transform',toField='set_scale'),
      ROUTE(fromNode='DECLBubble_bubbleA_bubbleClock',fromField='fraction_changed',toNode='DECLBubble_bubbleA_bounce',toField='set_fraction')]),
    Transform(DEF='DECLBubble_bubbleB',
      children=[
      Shape(
        geometry=Sphere(radius=0.25),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),transparency=0.2))),
      Script(DEF='DECLBubble_bubbleB_bounce',
        field=[
        field(name='scale',accessType='inputOutput',type='SFVec3f',value=(1,1,1)),
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='scalvel',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_fraction',accessType='inputOnly',type='SFFloat')],

        sourceCode="""
ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(translation.x) > 256) {
	translation.x = 0;
	initialize();
    }
    if ( Math.abs(translation.y) > 256) {
	translation.y = 0;
	initialize();
    }
    if ( Math.abs(translation.z) > 256) {
	translation.z = 0;
	initialize();
    }
    if (Math.abs(scale.x) > 20) {
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}
"""),
      TimeSensor(DEF='DECLBubble_bubbleB_bubbleClock',cycleInterval=10,loop=True),
      ROUTE(fromNode='DECLBubble_bubbleB_bounce',fromField='translation_changed',toNode='DECLBubble_transform',toField='set_translation'),
      ROUTE(fromNode='DECLBubble_bubbleB_bounce',fromField='scale_changed',toNode='DECLBubble_transform',toField='set_scale'),
      ROUTE(fromNode='DECLBubble_bubbleB_bubbleClock',fromField='fraction_changed',toNode='DECLBubble_bubbleB_bounce',toField='set_fraction')]),
    Transform(DEF='DECLBubble_bubbleC',
      children=[
      Shape(
        geometry=Sphere(radius=0.25),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),transparency=0.2))),
      Script(DEF='DECLBubble_bubbleC_bounce',
        field=[
        field(name='scale',accessType='inputOutput',type='SFVec3f',value=(1,1,1)),
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='scalvel',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_fraction',accessType='inputOnly',type='SFFloat')],

        sourceCode="""
ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(translation.x) > 256) {
	translation.x = 0;
	initialize();
    }
    if ( Math.abs(translation.y) > 256) {
	translation.y = 0;
	initialize();
    }
    if ( Math.abs(translation.z) > 256) {
	translation.z = 0;
	initialize();
    }
    if (Math.abs(scale.x) > 20) {
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}
"""),
      TimeSensor(DEF='DECLBubble_bubbleC_bubbleClock',cycleInterval=10,loop=True),
      ROUTE(fromNode='DECLBubble_bubbleC_bounce',fromField='translation_changed',toNode='DECLBubble_transform',toField='set_translation'),
      ROUTE(fromNode='DECLBubble_bubbleC_bounce',fromField='scale_changed',toNode='DECLBubble_transform',toField='set_scale'),
      ROUTE(fromNode='DECLBubble_bubbleC_bubbleClock',fromField='fraction_changed',toNode='DECLBubble_bubbleC_bounce',toField='set_fraction')]),
    Transform(DEF='DECLBubble_bubbleD',
      children=[
      Shape(
        geometry=Sphere(radius=0.25),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),transparency=0.2))),
      Script(DEF='DECLBubble_bubbleD_bounce',
        field=[
        field(name='scale',accessType='inputOutput',type='SFVec3f',value=(1,1,1)),
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='velocity',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='scalvel',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_fraction',accessType='inputOnly',type='SFFloat')],

        sourceCode="""
ecmascript:
function initialize() {
    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);

    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);
}

function set_fraction(value) {
    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);
    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);
    // if you get to far away or too big, explode
    if ( Math.abs(translation.x) > 256) {
	translation.x = 0;
	initialize();
    }
    if ( Math.abs(translation.y) > 256) {
	translation.y = 0;
	initialize();
    }
    if ( Math.abs(translation.z) > 256) {
	translation.z = 0;
	initialize();
    }
    if (Math.abs(scale.x) > 20) {
	scale.x = scale.x/20;
	translation.x = 0;
	initialize();
    }
    if (Math.abs(scale.y) > 20) {
	scale.y = scale.y/20;
	translation.y = 0;
	initialize();
    }
    if (Math.abs(scale.z) > 20) {
	scale.z = scale.z/20;
	translation.z = 0;
	initialize();
    }
}
"""),
      TimeSensor(DEF='DECLBubble_bubbleD_bubbleClock',cycleInterval=10,loop=True),
      ROUTE(fromNode='DECLBubble_bubbleD_bounce',fromField='translation_changed',toNode='DECLBubble_transform',toField='set_translation'),
      ROUTE(fromNode='DECLBubble_bubbleD_bounce',fromField='scale_changed',toNode='DECLBubble_transform',toField='set_scale'),
      ROUTE(fromNode='DECLBubble_bubbleD_bubbleClock',fromField='fraction_changed',toNode='DECLBubble_bubbleD_bounce',toField='set_fraction')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for bubs3.py")
