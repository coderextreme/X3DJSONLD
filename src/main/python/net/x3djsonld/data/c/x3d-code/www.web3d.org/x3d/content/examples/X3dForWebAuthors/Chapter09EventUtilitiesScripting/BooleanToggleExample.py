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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='BooleanToggleExample.x3d',name='title'),
    meta(content='A BooleanToggle button determines whether an animated Cone is jittery or not.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='9 October 2006',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='BS Contact BitManagement Bug Report submitted 28 November 2014 http://www.bitmanagement.de/en/contact',name='TODO'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/BooleanToggleExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BooleanToggle.x3d'),
    Viewpoint(description='Select red button to toggle cone jitter'),
    Transform(rotation=(1,0,0,1.57),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Cylinder(height=.5,radius=.5)),
      TouchSensor(DEF='TouchButton',description='touch to activate')]),
    Transform(translation=(2,0,0),
      children=[
      Transform(DEF='ShakingCone',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,.8,0))),
          geometry=Cone(),)])]),
    BooleanToggle(DEF='Toggler'),
    ROUTE(fromField='isActive',fromNode='TouchButton',toField='set_boolean',toNode='Toggler'),
    BooleanFilter(DEF='Tee'),
    ROUTE(fromField='toggle_changed',fromNode='Toggler',toField='set_boolean',toNode='Tee'),
    TimeTrigger(DEF='PauseOn'),
    ROUTE(fromField='inputTrue',fromNode='Tee',toField='set_boolean',toNode='PauseOn'),
    TimeTrigger(DEF='PauseOff'),
    ROUTE(fromField='inputFalse',fromNode='Tee',toField='set_boolean',toNode='PauseOff'),
    TimeSensor(DEF='Timer',cycleInterval=.15,loop=True,startTime=1),
    ROUTE(fromField='triggerTime',fromNode='PauseOn',toField='pauseTime',toNode='Timer'),
    ROUTE(fromField='triggerTime',fromNode='PauseOff',toField='resumeTime',toNode='Timer'),
    PositionInterpolator(DEF='Shaker',key=[0,.25,.50,.75,1],keyValue=[(0,0,0),(.4,.2,-.3),(-.2,.3,.1),(-.1,-.2,.3),(0,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Shaker'),
    ROUTE(fromField='value_changed',fromNode='Shaker',toField='translation',toNode='ShakingCone')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BooleanToggleExample.py")
