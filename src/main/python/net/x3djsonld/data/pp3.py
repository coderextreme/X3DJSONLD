####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
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
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='title',content='pp3.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='translator',content='John Carlson'),
    meta(name='created',content='5 May 2015'),
    meta(content='05 May 2017',name='modified'),
    meta(name='description',content='A process pipeline between three spheres (try typing on spheres and blue'),
    meta(name='identifier',content='https://coderextreme.net/x3d/pp3.x3d'),
    meta(name='generator',content='manual')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='Process',
      ProtoBody=ProtoBody(
        children=[
        Group(
          # left
          children=[
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.7,1,0),transparency=0.5)),
              geometry=Extrusion(creaseAngle=0.785,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(-2.5,0,0),(-1.5,0,0)]))]
            # <Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'/> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"/> <TouchSensor DEF="LeftTouch" enabled="true"/>
            ),
          # right
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,0.7,1),transparency=0.5)),
              geometry=Extrusion(creaseAngle=0.785,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(1.5,0,0),(2.5,0,0)])),
            Transform(translation=(2,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(DEF='MaterialLightBlue',diffuseColor=(1,1,1))),
                geometry=Text(DEF='RightString',string=["r"]))]),
            StringSensor(DEF='RightSensor',enabled=False),
            TouchSensor(description='touch to activate',DEF='RightTouch')]),
          # up
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0,0.7,1),transparency=0.5)),
              geometry=Extrusion(creaseAngle=0.785,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(0,1.5,0),(0,2.5,0)])),
            Transform(translation=(-0.5,2,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='MaterialLightBlue')),
                geometry=Text(DEF='UpString',string=["u"]))]),
            StringSensor(DEF='UpSensor',enabled=False),
            TouchSensor(description='touch to activate',DEF='UpTouch')]),
          # down
          Transform(scale=(0.5,0.5,0.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.7,1,0),transparency=0.5)),
              geometry=Extrusion(creaseAngle=0.785,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(0,-2.5,0),(0,-1.5,0)]))]
            # <Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'/> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"/> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"/>
            ),
          # center
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0.7))),
              geometry=Sphere(),),
            Transform(scale=(0.5,0.5,0.5),translation=(-0.5,0,1),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='MaterialLightBlue')),
                geometry=Text(DEF='CenterString'))]),
            StringSensor(DEF='CenterSensor',enabled=False),
            TouchSensor(description='touch to activate',DEF='CenterTouch')])]),
        Script(DEF='RightSingleToMultiString',
          field=[
          field(name='set_rightstring',accessType='inputOnly',type='SFString'),
          field(name='rightlines',accessType='outputOnly',type='MFString')],

          sourceCode="""
ecmascript:

function initialize() {
	rightlines = new MFString("");
}

function set_rightstring(rightstr) {
	rightlines = new MFString(rightstr);
}
"""),
        Script(DEF='UpSingleToMultiString',
          field=[
          field(name='set_upstring',accessType='inputOnly',type='SFString'),
          field(name='uplines',accessType='outputOnly',type='MFString')],

          sourceCode="""
ecmascript:

function initialize() {
	uplines = new MFString("");
}

function set_upstring(upstr) {
	uplines = new MFString(upstr);
}
"""),
        Script(DEF='CenterSingleToMultiString',
          field=[
          field(name='set_centerstring',accessType='inputOnly',type='SFString'),
          field(name='centerlines',accessType='outputOnly',type='MFString')],

          sourceCode="""
ecmascript:

function initialize() {
	centerlines = new MFString("");
}

function set_centerstring(centerstr) {
	centerlines = new MFString(centerstr);
}
"""),
        ROUTE(fromField='enteredText',fromNode='CenterSensor',toField='set_centerstring',toNode='CenterSingleToMultiString'),
        ROUTE(fromField='centerlines',fromNode='CenterSingleToMultiString',toField='set_string',toNode='CenterString'),
        ROUTE(fromField='isOver',fromNode='CenterTouch',toField='set_enabled',toNode='CenterSensor'),
        ROUTE(fromField='enteredText',fromNode='RightSensor',toField='set_rightstring',toNode='RightSingleToMultiString'),
        ROUTE(fromField='rightlines',fromNode='RightSingleToMultiString',toField='set_string',toNode='RightString'),
        ROUTE(fromField='isOver',fromNode='RightTouch',toField='set_enabled',toNode='RightSensor'),
        ROUTE(fromField='enteredText',fromNode='UpSensor',toField='set_upstring',toNode='UpSingleToMultiString'),
        ROUTE(fromField='uplines',fromNode='UpSingleToMultiString',toField='set_string',toNode='UpString'),
        ROUTE(fromField='isOver',fromNode='UpTouch',toField='set_enabled',toNode='UpSensor')])),
    NavigationInfo(),
    Viewpoint(description='Process pipes',orientation=(1,0,0,-0.4),position=(0,5,12)),
    Transform(translation=(0,-2.5,0),
      children=[
      ProtoInstance(name='Process')]),
    Transform(
      children=[
      ProtoInstance(name='Process')]),
    Transform(translation=(0,2.5,0),
      children=[
      ProtoInstance(name='Process')])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
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

print("python x3d.py load and self-test complete for pp3.py")
