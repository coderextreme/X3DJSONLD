####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python arcold.py
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
    meta(name='title',content='arcold.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d'),
    meta(name='description',content='an attempt to implement an arc in a graph')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,5),description='a moving graph'),
    Background(skyColor=[(0.4,0.4,0.4)]),
    Transform(DEF='trans1',
      children=[
      Transform(DEF='rotscale1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7))),
          geometry=Cylinder(radius=0.1))])]),
    Transform(DEF='trans2',
      children=[
      Transform(DEF='rotscale2',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7))),
          geometry=Cylinder(radius=0.1))])]),
    Transform(DEF='trans3',
      children=[
      Transform(DEF='rotscale3',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7))),
          geometry=Cylinder(radius=0.1))])]),
    ProtoDeclare(name='point',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='node',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation')]),
          children=[
          Shape(
            geometry=Sphere(radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0)))),
          PositionInterpolator(DEF='PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
          Script(DEF='MB1',
            field=[
            field(name='translation',accessType='inputOutput',type='SFVec3f',value=(50,50,0)),
            field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
            field(name='set_location',accessType='inputOnly',type='SFTime'),
            field(name='keyValue',accessType='outputOnly',type='MFVec3f')],

          sourceCode="""
ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(translation);
		}
"""),
          TimeSensor(DEF='CL1',cycleInterval=3,loop=True),
          ROUTE(fromNode='CL1',fromField='cycleTime',toNode='MB1',toField='set_location'),
          ROUTE(fromNode='CL1',fromField='fraction_changed',toNode='PI1',toField='set_fraction'),
          ROUTE(fromNode='MB1',fromField='keyValue',toNode='PI1',toField='keyValue'),
          ROUTE(fromNode='PI1',fromField='value_changed',toNode='node',toField='set_translation')])])),
    #  from doug sanden 
    ProtoDeclare(name='x3dconnector',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='startnode',type='SFNode'),
        field(accessType='inputOutput',name='endnode',type='SFNode'),
        field(accessType='inputOutput',name='transnode',type='SFNode'),
        field(accessType='inputOutput',name='rotscalenode',type='SFNode'),
        field(accessType='inputOnly',name='set_startpoint',type='SFVec3f'),
        field(accessType='inputOnly',name='set_endpoint',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='S1',
          field=[
          field(accessType='inputOutput',name='startnode',type='SFNode'),
          field(accessType='inputOutput',name='endnode',type='SFNode'),
          field(accessType='inputOutput',name='transnode',type='SFNode'),
          field(accessType='inputOutput',name='rotscalenode',type='SFNode'),
          field(accessType='inputOnly',name='set_startpoint',type='SFVec3f'),
          field(accessType='inputOnly',name='set_endpoint',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='startnode',protoField='startnode'),
            connect(nodeField='endnode',protoField='endnode'),
            connect(nodeField='transnode',protoField='transnode'),
            connect(nodeField='rotscalenode',protoField='rotscalenode'),
            connect(nodeField='set_startpoint',protoField='set_startpoint'),
            connect(nodeField='set_endpoint',protoField='set_endpoint')]),

        sourceCode="""
ecmascript:
        function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		return;
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
		var trafo = recompute(startpoint, endpoint);
		if (typeof trafo !== 'undefined') {
			transnode.translation = trafo.translation;
			rotscalenode.rotation = trafo.rotation;
			rotscalenode.scale = trafo.scale;
		} else {
			Browser.print("recompute returned undefined");
		}
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val || startnode.translation,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val || endnode.translation);
        }
""")])),
    ProtoInstance(DEF='G1',name='point'),
    ProtoInstance(DEF='G2',name='point'),
    ProtoInstance(DEF='G3',name='point'),
    ProtoInstance(DEF='G4',name='point'),
    ProtoInstance(name='x3dconnector',DEF='connector1',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G2')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='trans1')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscale1')])]),
    ProtoInstance(name='x3dconnector',DEF='connector2',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G3')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='trans2')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscale2')])]),
    ProtoInstance(name='x3dconnector',DEF='connector3',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G4')]),
      fieldValue(name='transnode',
        children=[
        Transform(USE='trans3')]),
      fieldValue(name='rotscalenode',
        children=[
        Transform(USE='rotscale3')])]),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='connector1',toField='set_startpoint'),
    ROUTE(fromNode='G2',fromField='translation_changed',toNode='connector1',toField='set_endpoint'),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='connector2',toField='set_startpoint'),
    ROUTE(fromNode='G3',fromField='translation_changed',toNode='connector2',toField='set_endpoint'),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='connector3',toField='set_startpoint'),
    ROUTE(fromNode='G4',fromField='translation_changed',toNode='connector3',toField='set_endpoint')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for arcold.py:')
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

print("python arcold.py load and self-test diagnostics complete.")
