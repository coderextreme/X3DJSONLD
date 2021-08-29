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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='IndexedLineSetExample.x3d',name='title'),
    meta(content='The way points and path of the animated shark Lucy traversing the tank, using IndexedLineSet node.',name='description'),
    meta(content='Tim McLean',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='1 June 1998',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='LineSetExample.x3d',name='reference'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLucyLocale.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/IndexedLineSetExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IndexedLineSet.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Book View',orientation=(0.939,0.335,0.075,-0.57),position=(-0.89,1.91,9.26)),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,1))),
        #  Note that index=0 for the first and last points are the same (coincident) in order to close the loop. 
        #  Compare to no indexing scheme in LineSet.x3d example, which creates the exact same path. 
        geometry=IndexedLineSet(DEF='ILS',coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0,-1],
          coord=Coordinate(DEF='TurnPoints',point=[(0.0,-7.0,-1.0),(-1.75,-7.0,-0.5),(-4.0,-7.0,0.5),(-5.0,-6.5,1.5),(-5.5,-6.25,0.75),(-5.25,-5.5,-2.25),(-4.25,-5.0,-3.25),(-2.75,-4.5,-3.75),(-1.5,-4.5,-4.0),(-0.5,-4.25,-4.5),(1.5,-3.75,-4.75),(3.0,-3.75,-4.5),(5.75,-4.5,-4.5),(8.75,-4.5,-4.0),(9.25,-4.5,-2.25),(7.5,-5.5,0.0),(4.0,-6.5,-0.25),(2.25,-7.0,-0.25)])))]),
    Transform(DEF='_0',translation=(0.0,-8.0,-1.0),
      children=[
      Inline(url=["../KelpForestExhibit/SharkLucy.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLucy.x3d","../KelpForestExhibit/SharkLucy.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLucy.wrl"]),
      Group(
        children=[
        TimeSensor(DEF='SHARK1_CLOCK',cycleInterval=220.0,loop=True),
        PositionInterpolator(DEF='SHARK1_POSITION',key=[0.0,0.048,0.112,0.155,0.184,0.263,0.3,0.342,0.375,0.404,0.457,0.497,0.57,0.65,0.702,0.796,0.888,0.938,1.0],keyValue=[(0.0,-7.0,-1.0),(-1.75,-7.0,-0.5),(-4.0,-7.0,0.5),(-5.0,-6.5,1.5),(-5.5,-6.25,0.75),(-5.25,-5.5,-2.25),(-4.25,-5.0,-3.25),(-2.75,-4.5,-3.75),(-1.5,-4.5,-4.0),(-0.5,-4.25,-4.5),(1.5,-3.75,-4.75),(3.0,-3.75,-4.5),(5.75,-4.5,-4.5),(8.75,-4.5,-4.0),(9.25,-4.5,-2.25),(7.5,-5.5,0.0),(4.0,-6.5,-0.25),(2.25,-7.0,-0.25),(0.0,-7.0,-1.0)]),
        OrientationInterpolator(DEF='SHARK1_ORIENTATION',key=[0.0,0.048,0.112,0.155,0.184,0.263,0.3,0.342,0.375,0.404,0.457,0.497,0.57,0.65,0.702,0.796,0.888,0.938,1.0],keyValue=[(0.0,1.0,0.0,3.4208),(0.0,1.0,0.0,3.5605),(0.1504,0.986,0.0717,4.0208),(0.1095,0.9918,-0.0658,2.0667),(-0.1207,0.9836,0.134,1.4825),(-0.1565,0.9125,0.3779,0.8522),(-0.1099,0.7118,0.6937,0.4379),(0.0,1.0,0.0,0.192),(-0.0956,0.8656,0.4916,0.4418),(-0.0606,0.4959,0.8663,0.2802),(0.0,1.0,0.0,6.161),(0.0,0.0,-1.0,0.2618),(0.0,1.0,0.0,6.0388),(0.0,1.0,0.0,5.236),(-0.1388,0.9878,-0.0707,4.0742),(-0.1392,0.9903,0.0,3.1416),(-0.1305,0.9911,0.0265,3.0),(0.0,1.0,0.0,2.827),(0.0,1.0,0.0,3.4208)])])]),
    TimeSensor(DEF='_4',loop=True),
    Script(DEF='sharkSwimmingInTankTrigger_5',
      field=[
      field(accessType='inputOnly',name='triggerIn',type='SFTime'),
      field(accessType='outputOnly',name='startTime',type='SFTime'),
      field(accessType='outputOnly',name='firstTime',type='SFBool')]),
    ROUTE(fromField='startTime',fromNode='sharkSwimmingInTankTrigger_5',toField='set_startTime',toNode='SHARK1_CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='SHARK1_CLOCK',toField='set_fraction',toNode='SHARK1_POSITION'),
    ROUTE(fromField='fraction_changed',fromNode='SHARK1_CLOCK',toField='set_fraction',toNode='SHARK1_ORIENTATION'),
    ROUTE(fromField='value_changed',fromNode='SHARK1_POSITION',toField='set_translation',toNode='_0'),
    ROUTE(fromField='value_changed',fromNode='SHARK1_ORIENTATION',toField='set_rotation',toNode='_0'),
    ROUTE(fromField='firstTime',fromNode='sharkSwimmingInTankTrigger_5',toField='set_enabled',toNode='_4'),
    ROUTE(fromField='time',fromNode='_4',toField='triggerIn',toNode='sharkSwimmingInTankTrigger_5')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IndexedLineSetExample.py")
