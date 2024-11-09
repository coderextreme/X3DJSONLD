####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python fors.py
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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='creator',content='John W Carlson'),
    meta(name='created',content='December 13 2015'),
    meta(name='title',content='fors.x3d'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d'),
    meta(name='description',content='beginnings of a force directed graph in 3D'),
    meta(name='generator',content='Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='node',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='position',accessType='inputOutput',type='SFVec3f',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='transform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='position')]),
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0)))),
          Transform(translation=(1,0,0),
            children=[
            Shape(
              geometry=Text(string=["Node"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=5)),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))))])]),
        PositionInterpolator(DEF='NodePosition',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
        Script(DEF='MoveBall',
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(50,50,0)),
          field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='set_cycle',accessType='inputOnly',type='SFTime'),
          field(name='keyValue',accessType='outputOnly',type='MFVec3f')],

        sourceCode="""
ecmascript:
					function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
                                                keyValue = new MFVec3f([old, translation]);
						// Browser.println(translation);
					}
"""),
        TimeSensor(DEF='nodeClock',cycleInterval=3,loop=True),
        ROUTE(fromNode='nodeClock',fromField='cycleTime',toNode='MoveBall',toField='set_cycle'),
        ROUTE(fromNode='nodeClock',fromField='fraction_changed',toNode='NodePosition',toField='set_fraction'),
        ROUTE(fromNode='MoveBall',fromField='keyValue',toNode='NodePosition',toField='keyValue'),
        ROUTE(fromNode='NodePosition',fromField='value_changed',toNode='transform',toField='set_translation')])),
    ProtoDeclare(name='cyl',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='set_positionA',accessType='inputOnly',type='SFVec3f'),
        field(name='set_positionB',accessType='inputOnly',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Shape(
          geometry=Extrusion(DEF='extrusion',creaseAngle=0.785,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],spine=[(0,-50,0),(0,50,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0)))),
        Script(DEF='MoveCylinder',
          field=[
          field(name='spine',accessType='inputOutput',type='MFVec3f',value=[(0,-50,0),(0,50,0)]),
          field(name='set_endA',accessType='inputOnly',type='SFVec3f'),
          field(name='set_endB',accessType='inputOnly',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='set_endA',protoField='set_positionA'),
            connect(nodeField='set_endB',protoField='set_positionB')]),

        sourceCode="""
ecmascript:

                function set_endA(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }
                
                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		        spine = new MFVec3f([value, value]);
		    } else {
		        spine = new MFVec3f([spine[0], value]);
		    }
                }
                
                function set_spine(value) {
                    spine = value;
                }
"""),
        ROUTE(fromNode='MoveCylinder',fromField='spine',toNode='extrusion',toField='set_spine')])),
    Transform(DEF='HoldsContent',scale=(0.1,0.1,0.1),
      children=[
      PlaneSensor(DEF='clickGenerator',minPosition=(-50,-50),maxPosition=(50,50),description='click on background to add nodes, click on nodes to add links'),
      ProtoInstance(DEF='nodeA',name='node',
        fieldValue=[
        fieldValue(name='position',value=(0.0,0.0,0.0))]),
      ProtoInstance(DEF='nodeB',name='node',
        fieldValue=[
        fieldValue(name='position',value=(50.0,50.0,50.0))]),
      ProtoInstance(DEF='linkA',name='cyl',
        fieldValue=[
        fieldValue(name='set_positionA',value=(0,0,0)),
        fieldValue(name='set_positionB',value=(50,50,50))])]),
    ROUTE(fromNode='nodeA',fromField='position',toNode='linkA',toField='set_positionA'),
    ROUTE(fromNode='nodeB',fromField='position',toNode='linkA',toField='set_positionB')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for fors.py:')
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

print("python fors.py load and self-test diagnostics complete.")
