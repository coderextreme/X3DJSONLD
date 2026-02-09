####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python arc2.py
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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(name='title',content='arc2.x3d'),
    meta(name='creator',content='Lost, Doug Sanden I think'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d'),
    meta(name='description',content='a generic proto to connect two objects')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,5),description='Only Viewpoint'),
    Background(skyColor=[(0.4,0.4,0.4)]),
    Transform(DEF='G1',
      children=[
      Transform(DEF='DECLpoint_INSTANCE_node',
        children=[
        Shape(
          geometry=Sphere(radius=0.1),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        PositionInterpolator(DEF='DECLpoint_INSTANCE_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
        Script(DEF='DECLpoint_INSTANCE_MB1',
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='set_location',accessType='inputOnly',type='SFTime'),
          field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])],

        sourceCode="""
ecmascript:
               function set_location(value) {
                    old = translation;
                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
               }
"""),
        TimeSensor(DEF='DECLpoint_INSTANCE_CL1',cycleInterval=3,loop=True),
        ROUTE(fromNode='DECLpoint_INSTANCE_CL1',fromField='cycleTime',toNode='DECLpoint_INSTANCE_MB1',toField='set_location'),
        ROUTE(fromNode='DECLpoint_INSTANCE_CL1',fromField='fraction_changed',toNode='DECLpoint_INSTANCE_PI1',toField='set_fraction'),
        ROUTE(fromNode='DECLpoint_INSTANCE_MB1',fromField='keyValue',toNode='DECLpoint_INSTANCE_PI1',toField='keyValue'),
        ROUTE(fromNode='DECLpoint_INSTANCE_PI1',fromField='value_changed',toNode='DECLpoint_INSTANCE_node',toField='set_translation'),
        ROUTE(fromNode='DECLpoint_INSTANCE_MB1',fromField='translation_changed',toNode='DECLpoint_INSTANCE_node',toField='set_translation')])]),
    Transform(DEF='G2',
      children=[
      Transform(DEF='DECLpoint_INSTANCE1000_node',
        children=[
        Shape(
          geometry=Sphere(radius=0.1),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        PositionInterpolator(DEF='DECLpoint_INSTANCE1000_PI1',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
        Script(DEF='DECLpoint_INSTANCE1000_MB1',
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='set_location',accessType='inputOnly',type='SFTime'),
          field(name='keyValue',accessType='inputOutput',type='MFVec3f',value=[(0,0,0),(0,5,0)])],

        sourceCode="""
ecmascript:
               function set_location(value) {
                    old = translation;
                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
               }
"""),
        TimeSensor(DEF='DECLpoint_INSTANCE1000_CL1',cycleInterval=3,loop=True),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_CL1',fromField='cycleTime',toNode='DECLpoint_INSTANCE1000_MB1',toField='set_location'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_CL1',fromField='fraction_changed',toNode='DECLpoint_INSTANCE1000_PI1',toField='set_fraction'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_MB1',fromField='keyValue',toNode='DECLpoint_INSTANCE1000_PI1',toField='keyValue'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_PI1',fromField='value_changed',toNode='DECLpoint_INSTANCE1000_node',toField='set_translation'),
        ROUTE(fromNode='DECLpoint_INSTANCE1000_MB1',fromField='translation_changed',toNode='DECLpoint_INSTANCE1000_node',toField='set_translation')])]),
    Transform(DEF='transC1',
      children=[
      Transform(DEF='rotscaleC1',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.7,0.7),transparency=0.5)),
          geometry=Cylinder(radius=0.05))])]),
    Script(DEF='DECLx3dconnector_connector1_S1',
      field=[
      field(name='startnode',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='G1')]),
      field(name='endnode',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='G2')]),
      field(name='transC1',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='transC1')]),
      field(name='rotscaleC1',accessType='initializeOnly',type='SFNode',
        children=[
        Transform(USE='rotscaleC1')]),
      field(name='set_startpoint',accessType='inputOnly',type='SFVec3f'),
      field(name='set_endpoint',accessType='inputOnly',type='SFVec3f')],

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
	      transC1.translation = trafo.translation;
	      rotscaleC1.rotation = trafo.rotation;
	      rotscaleC1.scale = trafo.scale;
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
"""),
    ROUTE(fromNode='G1',fromField='translation_changed',toNode='DECLx3dconnector_connector1_S1',toField='set_startpoint'),
    ROUTE(fromNode='G2',fromField='translation_changed',toNode='DECLx3dconnector_connector1_S1',toField='set_endpoint')])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for arc2.py:')
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

print("python arc2.py load and self-test diagnostics complete.")
