####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python force.py
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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(name='Scripting',level=1),
    meta(name='creator',content='John W Carlson'),
    meta(name='created',content='December 13 2015'),
    meta(name='title',content='force.x3d'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d'),
    meta(name='description',content='beginnings of a force directed graph in 3D'),
    meta(name='generator',content='Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit'),
    meta(name='generator',content='x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy'),
    meta(name='modified',content='Sat, 9 Nov 2024 19:29:39 GMT')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='node',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',type='SFVec3f',name='position')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='transform',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='position')]),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=Sphere(),),
            Transform(translation=(1,0,0),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,1))),
                geometry=Text(string=["Node"],
                  fontStyle=FontStyle(size=5,justify=["MIDDLE","MIDDLE"])))])]),
          PositionInterpolator(DEF='NodePosition',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
          Script(DEF='MoveBall',
            field=[
            field(accessType='inputOutput',type='SFVec3f',name='translation',value=(50,50,0)),
            field(accessType='inputOutput',type='SFVec3f',name='old'),
            field(accessType='inputOnly',type='SFTime',name='set_cycle'),
            field(accessType='outputOnly',type='MFVec3f',name='keyValue')],

          sourceCode="""
ecmascript:
					function set_cycle(value) {
                                                old = translation;
						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);
		    				/*
                                                var tmpkeyValue = new MFVec3f();
			    			tmpkeyValue[0] = old;
			    			tmpkeyValue[1] = translation;
                                                keyValue = tmpkeyValue;
		    				*/
                                                keyValue = new MFVec3f([old, translation]);
			    		
						// Browser.println(translation);
					}
"""),
          TimeSensor(DEF='nodeClock',cycleInterval=3,loop=True)]),
        ROUTE(fromNode='nodeClock',fromField='cycleTime',toNode='MoveBall',toField='set_cycle'),
        ROUTE(fromNode='nodeClock',fromField='fraction_changed',toNode='NodePosition',toField='set_fraction'),
        ROUTE(fromNode='MoveBall',fromField='keyValue',toNode='NodePosition',toField='set_keyValue'),
        ROUTE(fromNode='NodePosition',fromField='value_changed',toNode='transform',toField='set_translation')])),
    ProtoDeclare(name='cyl',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',type='SFVec3f',name='set_positionA'),
        field(accessType='inputOnly',type='SFVec3f',name='set_positionB')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0))),
            geometry=Extrusion(DEF='extrusion',creaseAngle=0.785,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,-0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(0,-50,0),(0,50,0)])),
          Script(DEF='MoveCylinder',
            field=[
            field(accessType='inputOutput',type='MFVec3f',name='spine',value=[(0,-50,0),(0,50,0)]),
            field(accessType='inputOnly',type='SFVec3f',name='set_endA'),
            field(accessType='inputOnly',type='SFVec3f',name='set_endB')],
            IS=IS(
              connect=[
              connect(nodeField='set_endA',protoField='set_positionA'),
              connect(nodeField='set_endB',protoField='set_positionB')]),

          sourceCode="""
ecmascript:

                function set_endA(value) {
		    if (typeof spine === 'undefined') {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		    	*/
		        spine = new MFVec3f([value, value]);
		    } else {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = spine[1];
			spine = tmpspine;
		        */
		        spine = new MFVec3f([value, spine[1]]);
		    }
                }
                
                function set_endB(value) {
		    if (typeof spine === 'undefined') {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = value;
			tmpspine[1] = value;
			spine = tmpspine;
		        */
		        spine = new MFVec3f([value, value]);
		    } else {
		    	/*
		        var tmpspine = new MFVec3f();
			tmpspine[0] = spine[0];
			tmpspine[1] = value;
			spine = tmpspine;
		    	*/
		        spine = new MFVec3f([spine[0], value]);
		    }
                }
                
                function set_spine(value) {
                    spine = value;
                }
""")]),
        ROUTE(fromNode='MoveCylinder',fromField='spine_changed',toNode='extrusion',toField='set_spine')])),
    Transform(DEF='HoldsContent',scale=(0.1,0.1,0.1),
      children=[
      PlaneSensor(DEF='clickGenerator',description='click on background to add nodes, click on nodes to add links',minPosition=(-50,-50),maxPosition=(50,50)),
      ProtoInstance(name='node',DEF='nodeA',
        fieldValue=[
        fieldValue(name='position',value=(0,1.388333,0))]),
      ProtoInstance(name='node',DEF='nodeB',
        fieldValue=[
        fieldValue(name='position',value=(0,1.388333,0))]),
      ProtoInstance(name='node',DEF='nodeC',
        fieldValue=[
        fieldValue(name='position',value=(0,1.388333,0))]),
      ProtoInstance(name='node',DEF='nodeD',
        fieldValue=[
        fieldValue(name='position',value=(0,1.388333,0))]),
      ProtoInstance(name='cyl',DEF='linkA'),
      ProtoInstance(name='cyl',DEF='linkB'),
      ProtoInstance(name='cyl',DEF='linkC')]),
    Script(DEF='clickHandler',
      field=[
      field(accessType='inputOutput',type='SFInt32',name='counter'),
      field(accessType='outputOnly',type='SFNode',name='node_changed'),
      field(accessType='inputOnly',type='SFBool',name='add_node')],

    sourceCode="""
ecmascript:
	function add_node(value) {
                // Browser.print('hey ', counter);
                counter = counter++;
		Browser.appendTo(Browser.getDocument().querySelector("field [name=ModifiableNode]"),
			{ "ProtoInstance":
				{ "@name":"node",
				  "@DEF":"node'+counter+'",
				  "fieldValue": [
					{
						 "@name":"position",
						 "@value":[0.0,0.0,0.0]
					}
				  ]
				}
			});
                
        }
"""),
    ROUTE(fromNode='clickGenerator',fromField='isActive',toNode='clickHandler',toField='add_node'),
    ROUTE(fromNode='nodeA',fromField='position_changed',toNode='linkA',toField='set_positionA'),
    ROUTE(fromNode='nodeB',fromField='position_changed',toNode='linkA',toField='set_positionB'),
    ROUTE(fromNode='nodeA',fromField='position_changed',toNode='linkB',toField='set_positionA'),
    ROUTE(fromNode='nodeC',fromField='position_changed',toNode='linkB',toField='set_positionB'),
    ROUTE(fromNode='nodeA',fromField='position_changed',toNode='linkC',toField='set_positionA'),
    ROUTE(fromNode='nodeD',fromField='position_changed',toNode='linkC',toField='set_positionB')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for force.py:')
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

print("python force.py load and self-test diagnostics complete.")
