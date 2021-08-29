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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='AboveTextureUnderwayDDG.x3d',name='title'),
    meta(content='Ryan Ernst, Naval Postgraduate School',name='creator'),
    meta(content='Jeff Weekly, Naval Postgraduate School',name='contributor'),
    meta(content='13 September 2004',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='CS3204 class final project: SH-60B Scene',name='description'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60bSeahawkUnitedStates/AboveTextureUnderwayDDG.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  SH60B scene. 
    children=[
    Viewpoint(DEF='default',description='default',orientation=(1,0,0,-1.57),position=(0,250,0)),
    Viewpoint(DEF='frontfly',description='frontfly',orientation=(0,1,0,3.14),position=(20,4,-50)),
    Transform(DEF='SpinMover',
      children=[
      Viewpoint(DEF='spin',description='spin'),
      PositionInterpolator(DEF='SpinPos',key=[0,.25,.5,.75,1],keyValue=[(0,4,35),(5,2,25),(0,4,15),(-5,2,25),(0,4,35)]),
      OrientationInterpolator(DEF='SpinRot',key=[0,.25,.5,.75,1],keyValue=[(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,-1.57),(0,1,0,0)])]),
    Viewpoint(DEF='side',description='side',orientation=(0,1,0,1.57),position=(20,2,23)),
    TimeSensor(DEF='ViewTimer',cycleInterval=15,loop=True),
    Transform(rotation=(0,1,0,2.0),translation=(0.0,3.35,23.0),
      children=[
      Shape(),
      Inline(DEF='SH60B',url=["SH60B.wrl","SH60B.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60bSeahawkUnitedStates/SH60B.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60bSeahawkUnitedStates/SH60B.x3d"])]),
    Transform(
      children=[
      Inline(url=["UnderwayDDG.wrl","UnderwayDDG.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60bSeahawkUnitedStates/UnderwayDDG.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60bSeahawkUnitedStates/UnderwayDDG.x3d"])]),
    PointLight(location=(0,50,0)),
    ROUTE(fromField='fraction_changed',fromNode='ViewTimer',toField='set_fraction',toNode='SpinPos'),
    ROUTE(fromField='value_changed',fromNode='SpinPos',toField='set_translation',toNode='SpinMover'),
    ROUTE(fromField='fraction_changed',fromNode='ViewTimer',toField='set_fraction',toNode='SpinRot'),
    ROUTE(fromField='value_changed',fromNode='SpinRot',toField='set_rotation',toNode='SpinMover')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AboveTextureUnderwayDDG.py")
