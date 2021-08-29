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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='AnimatedViewpointRecorderExample.x3d',name='title'),
    meta(content='Example authoring use of AnimatedViewpointRecorder prototype. Each tour recording output goes to the console, where it must be cut/pasted for further use. See AnimatedViewpointRecorderSample for sample output.',name='description'),
    meta(content='Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias',name='creator'),
    meta(content='9 November 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='AnimatedViewpointRecorderPrototype.x3d',name='reference'),
    meta(content='AnimatedViewpointRecorderSample.x3d',name='reference'),
    meta(content='recording animated viewpoint tour',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/AnimatedViewpointRecorderExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='AnimatedViewpointRecorder captures view position and orientation tour to create a guided tour animation. The recording output goes to the browser console where the .x3d (or .x3dv) output can be cut/pasted for further use.',name='AnimatedViewpointRecorder',url=["AnimatedViewpointRecorderPrototype.x3d#AnimatedViewpointRecorder","https://savage.nps.edu/Savage/Tools/Authoring/AnimatedViewpointRecorderPrototype.x3d#AnimatedViewpointRecorder","AnimatedViewpointRecorderPrototype.wrl#AnimatedViewpointRecorder","https://savage.nps.edu/Savage/Tools/Authoring/AnimatedViewpointRecorderPrototype.wrl#AnimatedViewpointRecorder"],
      field=[
      field(accessType='inputOnly',appinfo='Set start=true to commence recording viewpoint position/orientation.',name='start',type='SFBool'),
      field(accessType='inputOnly',appinfo='Set stop=true to finish recording viewpoint position/orientation. Resulting VRML is added to scene resulting X3D and VRML is output to console.',name='stop',type='SFBool'),
      field(accessType='initializeOnly',appinfo='default 0.1 seconds',name='samplingInterval',type='SFTime'),
      field(accessType='initializeOnly',appinfo='whether to output .x3d syntax on browser console',name='outputX3D',type='SFBool'),
      field(accessType='initializeOnly',appinfo='whether to output .x3d syntax on browser console',name='outputClassicVRML',type='SFBool'),
      field(accessType='initializeOnly',appinfo='TODO not yet implemented',name='filterDeadTime',type='SFBool')]),
    Viewpoint(description='Entry view: start/stop recording'),
    Inline(DEF='HelloWorld',url=["../../../HelloWorld.x3d","http://www.web3d.org/x3d/content/examples/Basic/HelloWorld.x3d","../../../HelloWorld.wrl","http://www.web3d.org/x3d/content/examples/Basic/HelloWorld.wrl"]),
    ProtoInstance(DEF='AnimatedViewpointRecorderTest',name='AnimatedViewpointRecorder'),
    Group(DEF='RecordingControls',
      children=[
      Transform(translation=(-3,0,0),
        children=[
        Shape(
          geometry=Text(string=["Touch text to start","recording new","view animation"],
            fontStyle=FontStyle(DEF='CenterJustify',justify=["MIDDLE","MIDDLE"],size=0.5)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.8,0.2),transparency=0.5))),
        Shape(DEF='TransparentBox',
          geometry=Box(size=(3,1.75,0.01)),
          appearance=Appearance(
            material=Material(transparency=1))),
        TouchSensor(DEF='StartTouch',description='touch to start recording'),
        ROUTE(fromField='isActive',fromNode='StartTouch',toField='start',toNode='AnimatedViewpointRecorderTest')]),
      Transform(translation=(3,0,0),
        children=[
        Shape(
          geometry=Text(string=["Touch to stop","recording new","view animation"],
            fontStyle=FontStyle(USE='CenterJustify')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.2,0.2),transparency=0.5))),
        Shape(USE='TransparentBox'),
        TouchSensor(DEF='StopTouch',description='touch to stop recording'),
        ROUTE(fromField='isActive',fromNode='StopTouch',toField='stop',toNode='AnimatedViewpointRecorderTest')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AnimatedViewpointRecorderExample.py")
