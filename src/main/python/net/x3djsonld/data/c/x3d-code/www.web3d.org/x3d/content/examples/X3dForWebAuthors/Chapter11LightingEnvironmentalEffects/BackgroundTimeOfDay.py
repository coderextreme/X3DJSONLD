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
    meta(content='BackgroundTimeOfDay.x3d',name='title'),
    meta(content='Interpolate between Background color arrays to show a gradually changing time-of-day effect.',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='22 April 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironment/BackgroundSelector.x3d',name='reference'),
    meta(content='X3D Background example',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironmentalEffects/BackgroundTimeOfDay.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BackgroundTimeOfDay.x3d'),
    Transform(translation=(0,3,0),
      children=[
      Shape(
        geometry=Text(string=["Background Time Of Day"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(),))]),
    TimeSensor(DEF='TimeOfDayClock',cycleInterval=6,loop=True),
    Script(DEF='BackgroundColorInterpolator',
      field=[
      field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
      field(accessType='initializeOnly',name='groundColorSunrise',type='MFColor',value=[(0.133,0.419,0),(0.36,0.1,0),(1,0.74,0.4),(1,0.74,0.4),(0,0.2,0.75),(0,0.1,0.5)]),
      field(accessType='initializeOnly',name='groundColorNoon',type='MFColor',value=[(0.133,0.419,0),(0.36,0.1,0),(1,0.74,0.4),(1,0.74,0.4),(0,0,0.5),(0,0,0.2)]),
      field(accessType='initializeOnly',name='groundColorSunset',type='MFColor',value=[(0.133,0.419,0),(0.36,0.1,0),(1,0.74,0.4),(1,0.74,0.4),(0,0,0.5),(0,0,0.2)]),
      field(accessType='initializeOnly',name='groundColorNight',type='MFColor',value=[(0.133,0.419,0),(0.36,0.1,0),(1,0.74,0.4),(1,0.74,0.4),(0,0,0.5),(0,0,0.2)]),
      field(accessType='initializeOnly',name='skyColorSunrise',type='MFColor',value=[(1,1,0.2),(1,1,0),(0.36,0.63,1),(0,0.4,1),(0,0.4,1)]),
      field(accessType='initializeOnly',name='skyColorNoon',type='MFColor',value=[(0,0.035,0.34),(0,0.015,0.44),(0,0.05,0.5),(0,0.1,0.6),(0.44,0.8,1),(1,1,0.7)]),
      field(accessType='initializeOnly',name='skyColorSunset',type='MFColor',value=[(0,0,0.38),(0,0,0.68),(0.5,0.2,1),(0.5,0.2,1),(1,0.3,0),(1,0.2,0.8)]),
      field(accessType='initializeOnly',name='skyColorNight',type='MFColor',value=[(1,1,1),(0.8,0.8,0.8),(0.1,0.1,0.1),(0,0,0),(0,0,0)]),
      field(accessType='outputOnly',name='groundColor_changed',type='MFColor'),
      field(accessType='outputOnly',name='skyColor_changed',type='MFColor')]),
    ROUTE(fromField='fraction_changed',fromNode='TimeOfDayClock',toField='set_fraction',toNode='BackgroundColorInterpolator'),
    Background(DEF='AnimatedBackground',groundAngle=[0.03,1.26,1.5,1.57],groundColor=[(0.133333,0.419608,0),(0.36,0.1,0),(1,0.74,0.4),(0,0,0.5),(0,0,0.2)],skyAngle=[0.03,0.05,1.5,1.57],skyColor=[(1,1,1),(0.8,0.8,0.8),(0.1,0.1,0.1),(0,0,0),(0,0,0)]),
    ROUTE(fromField='groundColor_changed',fromNode='BackgroundColorInterpolator',toField='groundColor',toNode='AnimatedBackground'),
    ROUTE(fromField='skyColor_changed',fromNode='BackgroundColorInterpolator',toField='skyColor',toNode='AnimatedBackground')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BackgroundTimeOfDay.py")
