####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python arc3.py
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
    meta(content='arc3.x3d',name='title'),
    meta(content='Lost, Doug Sanden I think',name='creator'),
    meta(content='manual',name='generator'),
    meta(content='https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d',name='identifier'),
    meta(content='a generic proto to connect two objects',name='description')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Only Viewpoint',position=(0,0,5)),
    Background(skyColor=[(0.4,0.4,0.4)]),
    Transform(DEF='DECLpoint_G1_node',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Sphere(radius=0.1)),
      PositionInterpolator(DEF='DECLpoint_G1_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
      Script(DEF='DECLpoint_G1_MB1',
        field=[
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_location',accessType='inputOnly',type='SFTime'),
        field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])],

      sourceCode="""
ecmascript:
"+
"		function set_location(value) {
"+
"                    old = translation;
"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
"+
"                    keyValue = new MFVec3f([old, translation]);
"+
"		    // Browser.println(keyValue);
"+
"		}
"""),
      TimeSensor(DEF='DECLpoint_G1_CL1',cycleInterval=3.0,loop=True),
      ROUTE(fromField='cycleTime',fromNode='DECLpoint_G1_CL1',toField='set_location',toNode='DECLpoint_G1_MB1'),
      ROUTE(fromField='fraction_changed',fromNode='DECLpoint_G1_CL1',toField='set_fraction',toNode='DECLpoint_G1_PI1'),
      ROUTE(fromField='keyValue',fromNode='DECLpoint_G1_MB1',toField='keyValue',toNode='DECLpoint_G1_PI1'),
      ROUTE(fromField='value_changed',fromNode='DECLpoint_G1_PI1',toField='set_translation',toNode='DECLpoint_G1_node')]),
    Transform(DEF='DECLpoint_G2_node',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Sphere(radius=0.1)),
      PositionInterpolator(DEF='DECLpoint_G2_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
      Script(DEF='DECLpoint_G2_MB1',
        field=[
        field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
        field(name='set_location',accessType='inputOnly',type='SFTime'),
        field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])],

      sourceCode="""
ecmascript:
"+
"		function set_location(value) {
"+
"                    old = translation;
"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
"+
"                    keyValue = new MFVec3f([old, translation]);
"+
"		    // Browser.println(keyValue);
"+
"		}
"""),
      TimeSensor(DEF='DECLpoint_G2_CL1',cycleInterval=3.0,loop=True),
      ROUTE(fromField='cycleTime',fromNode='DECLpoint_G2_CL1',toField='set_location',toNode='DECLpoint_G2_MB1'),
      ROUTE(fromField='fraction_changed',fromNode='DECLpoint_G2_CL1',toField='set_fraction',toNode='DECLpoint_G2_PI1'),
      ROUTE(fromField='keyValue',fromNode='DECLpoint_G2_MB1',toField='keyValue',toNode='DECLpoint_G2_PI1'),
      ROUTE(fromField='value_changed',fromNode='DECLpoint_G2_PI1',toField='set_translation',toNode='DECLpoint_G2_node')]),
    Group(
      children=[
      Transform(DEF='DECLx3dconnector_connector1_trans',
        children=[
        Transform(DEF='DECLx3dconnector_connector1_rotscale',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.7,0.7),transparency=0.5)),
            geometry=Cylinder(radius=0.05))])]),
      Script(DEF='DECLx3dconnector_connector1_S1',
        field=[
        field(name='startnode',accessType='initializeOnly',type='SFNode',
          children=[
          Group(USE='DECLpoint_G1_node')]),
        field(name='endnode',accessType='initializeOnly',type='SFNode',
          children=[
          Group(USE='DECLpoint_G2_node')]),
        field(name='position',accessType='inputOutput',type='SFNode',
          children=[
          Transform(USE='DECLx3dconnector_connector1_trans')]),
        field(name='rotscale',accessType='inputOutput',type='SFNode',
          children=[
          Transform(USE='DECLx3dconnector_connector1_rotscale')]),
        field(name='set_startpoint',accessType='inputOnly',type='SFVec3f'),
        field(name='set_endpoint',accessType='inputOnly',type='SFVec3f')],

      sourceCode="""
ecmascript:
"+
"        function recompute(startpoint,endpoint){
"+
"	    if (typeof endpoint === 'undefined') {
"+
"		return;
"+
"	    }
"+
"            var dif = endpoint.subtract(startpoint);
"+
"            var dist = dif.length()*0.5;
"+
"            var dif2 = dif.multiply(0.5);
"+
"            var norm = dif.normalize();
"+
"            var transl = startpoint.add(dif2);
"+
"	    if (typeof Quaternion !== 'undefined') {
"+
"		    return {
"+
"			    scale : new SFVec3f(1.0,dist,1.0),
"+
"			    translation : transl,
"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
"+
"		    };
"+
"	    } else if (typeof SFRotation !== 'undefined') {
"+
"		    return {
"+
"			    scale : new SFVec3f(1.0,dist,1.0),
"+
"			    translation : transl,
"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
"+
"		    };
"+
"	    } else {
"+
"		    return {
"+
"			    scale : new SFVec3f(1.0,dist,1.0),
"+
"			    translation : transl
"+
"		    };
"+
"	    }
"+
"	}
"+
"	function recompute_and_route(startpoint, endpoint) {
"+
"	      var trafo = recompute(startpoint, endpoint);
"+
"	      if (trafo) {
"+
"		      position.translation = trafo.translation;
"+
"		      rotscale.rotation = trafo.rotation;
"+
"		      rotscale.scale = trafo.scale;
"+
"	      }
"+
"	}
"+
"        function initialize(){
"+
"            recompute_and_route(startnode.translation,endnode.translation);
"+
"        }
"+
"        function set_startpoint(val,t){
"+
"            recompute_and_route(val,endnode.translation);
"+
"        }
"+
"        function set_endpoint(val,t){
"+
"            recompute_and_route(startnode.translation,val);
"+
"        }
""")]),
    ROUTE(fromField='translation',fromNode='DECLpoint_G1_node',toField='set_startpoint',toNode='DECLx3dconnector_connector1_S1'),
    ROUTE(fromField='translation',fromNode='DECLpoint_G2_node',toField='set_endpoint',toNode='DECLx3dconnector_connector1_S1')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for arc3.py:')
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

print("python arc3.py load and self-test diagnostics complete.")
