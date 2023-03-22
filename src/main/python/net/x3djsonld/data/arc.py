####################################################################################################
#
# Now available: developmental python x3d.py package on PyPI for import.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='title',content='arc'),
    meta(name='creator',content='Lost, Doug Sanden I think'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d'),
    meta(name='description',content='a generic proto to connect two objects')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,5),description='Only Viewpoint'),
    Background(skyColor=[(0.4,0.4,0.4)]),
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
            field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])],

          sourceCode="""
ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(keyValue);
		}
"""),
          TimeSensor(DEF='CL1',cycleInterval=3,loop=True),
          ROUTE(fromNode='CL1',fromField='cycleTime',toNode='MB1',toField='set_location'),
          ROUTE(fromNode='CL1',fromField='fraction_changed',toNode='PI1',toField='set_fraction'),
          ROUTE(fromNode='MB1',fromField='keyValue',toNode='PI1',toField='keyValue'),
          ROUTE(fromNode='PI1',fromField='value_changed',toNode='node',toField='set_translation')])])),
    ProtoDeclare(name='x3dconnector',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='startnode',type='SFNode'),
        field(accessType='initializeOnly',name='endnode',type='SFNode'),
        field(accessType='inputOnly',name='set_startpoint',type='SFVec3f'),
        field(accessType='inputOnly',name='set_endpoint',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='trans',
            children=[
            Transform(DEF='rotscale',
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.7,0.7),transparency=.5)),
                geometry=Cylinder(radius=.05))])]),
          Script(DEF='S1',
            field=[
            field(accessType='initializeOnly',name='startnode',type='SFNode'),
            field(accessType='initializeOnly',name='endnode',type='SFNode'),
            field(accessType='inputOutput',name='position',type='SFNode',
              children=[
              Transform(USE='trans')]),
            field(accessType='inputOutput',name='rotscale',type='SFNode',
              children=[
              Transform(USE='rotscale')]),
            field(accessType='inputOnly',name='set_startpoint',type='SFVec3f'),
            field(accessType='inputOnly',name='set_endpoint',type='SFVec3f')],
            IS=IS(
              connect=[
              connect(nodeField='startnode',protoField='startnode'),
              connect(nodeField='endnode',protoField='endnode'),
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
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      position.translation = trafo.translation;
		      rotscale.rotation = trafo.rotation;
		      rotscale.scale = trafo.scale;
	      }
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }
""")])])),
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
      fieldValue(name='set_startpoint'),
      fieldValue(name='set_endpoint')]),
    ProtoInstance(name='x3dconnector',DEF='connector2',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G3')]),
      fieldValue(name='set_startpoint'),
      fieldValue(name='set_endpoint')]),
    ProtoInstance(name='x3dconnector',DEF='connector3',
      fieldValue=[
      fieldValue(name='startnode',
        children=[
        ProtoInstance(USE='G1')]),
      fieldValue(name='endnode',
        children=[
        ProtoInstance(USE='G4')]),
      fieldValue(name='set_startpoint'),
      fieldValue(name='set_endpoint')]),
    ROUTE(fromNode='G1',fromField='translation',toNode='connector1',toField='set_startpoint'),
    ROUTE(fromNode='G2',fromField='translation',toNode='connector1',toField='set_endpoint'),
    ROUTE(fromNode='G1',fromField='translation',toNode='connector2',toField='set_startpoint'),
    ROUTE(fromNode='G3',fromField='translation',toNode='connector2',toField='set_endpoint'),
    ROUTE(fromNode='G1',fromField='translation',toNode='connector3',toField='set_startpoint'),
    ROUTE(fromNode='G4',fromField='translation',toNode='connector3',toField='set_endpoint')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for .py:')
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

print("python .py load and self-test diagnostics complete.")
