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
    meta(content='CompleteScene.x3d',name='title'),
    meta(content='A C130 aircraft in a combat zone',name='description'),
    meta(content='Maj. Mounir Sidhom, Tunisian Air Force',name='creator'),
    meta(content='13 August 2004',name='translated'),
    meta(content='22 October 2018',name='modified'),
    meta(content='not verified to scale',name='warning'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/CompleteScene.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='main view',orientation=(0.0,1.0,0.0,1.57),position=(35.0,3.5,-2.0)),
    Transform(translation=(0.0,0.0,-15.0),
      children=[
      Inline(url=["CombatZone.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/CombatZone.x3d","CombatZone.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/CombatZone.wrl"])]),
    Transform(DEF='AC1',
      children=[
      Inline(url=["C130Hercules.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/C130Hercules.x3d","C130Hercules.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/C130HerculesTunisia/C130Hercules.wrl"])]),
    TimeSensor(DEF='AC_CLOCK',cycleInterval=6,loop=True),
    PositionInterpolator(DEF='AC_PATH',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(-50,25,0),(-10,10,0),(30,10,0),(70,25,0),(110,30,0)]),
    OrientationInterpolator(DEF='AC_ROTATION',key=[0.0,0.30,0.5,0.80,1.0],keyValue=[(0.0,0.0,-1.0,0.2),(0.0,0.0,-1.0,0.2),(0.0,0.0,1.0,0.10),(0.0,0.0,1.0,0.4),(0.0,0.0,0.0,0.0)]),
    ROUTE(fromField='fraction_changed',fromNode='AC_CLOCK',toField='set_fraction',toNode='AC_PATH'),
    ROUTE(fromField='value_changed',fromNode='AC_PATH',toField='set_translation',toNode='AC1'),
    ROUTE(fromField='fraction_changed',fromNode='AC_CLOCK',toField='set_fraction',toNode='AC_ROTATION'),
    ROUTE(fromField='value_changed',fromNode='AC_ROTATION',toField='set_rotation',toNode='AC1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CompleteScene.py")
