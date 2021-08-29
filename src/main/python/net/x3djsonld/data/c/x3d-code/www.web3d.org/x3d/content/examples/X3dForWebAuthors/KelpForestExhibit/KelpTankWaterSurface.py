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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='KelpTankWaterSurface.x3d',name='title'),
    meta(content='Moving water surface for KelpTank - initial view is perpendicular, rotate viewpoint up to see motion. Cycle time is 5.5 seconds to match pump, with slight time lag to indicate inertia of quasi-steady-state equilibrium..',name='description'),
    meta(content='Todd Gagnon',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='9 June 1998',name='created'),
    meta(content='20 December 2002',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='KelpTank.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTankWaterSurface.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["DTG of last update: 091030Jun98 Added: Updated: comment out PointLight Modeled by: Todd Gagnon"],title='surface1.4.wrl'),
    Group(
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=1.0,diffuseColor=(0.03,0.12,0.24),emissiveColor=(0.0,0.16,0.36),shininess=0.35,specularColor=(0.2,0.5,0.8),transparency=0.15)),
          geometry=IndexedFaceSet(coordIndex=[0,1,6,7,-1,1,2,5,6,-1,2,3,4,5,-1,11,12,9,10,-1,12,13,8,9,-1,13,0,7,8,-1],solid=False,
            coord=Coordinate(DEF='SURFACE',point=[(0.0,0.0,0.0),(2.5,0.0,1.0),(4.5,0.0,3.0),(7.625,0.0,3.0),(10.25,0.0,0.375),(10.25,0.0,-4.375),(6.375,0.0,-8.0),(0.0,0.0,-8.0),(-5.5,0.0,-8.0),(-10.5,0.0,-2.875),(-10.5,0.0,0.25),(-7.625,0.0,3.0),(-4.5,0.0,3.0),(-2.5,0.0,1.0)])))])]),
    TimeSensor(DEF='SURFACEClock',cycleInterval=5.5,loop=True),
    CoordinateInterpolator(DEF='SURFACEHeight',key=[0.0,0.2,0.45,0.7,0.95],keyValue=[(0.0,0.0,0.0),(2.5,0.05,1.0),(4.5,0.1,3.0),(7.625,0.15,3.0),(10.25,0.15,0.375),(10.25,0.15,-4.375),(6.375,0.1,-8.0),(0.0,0.0,-8.0),(-5.5,-0.1,-8.0),(-10.5,-0.15,-2.875),(-10.5,-0.15,0.25),(-7.625,-0.15,3.0),(-4.5,-0.1,3.0),(-2.5,-0.05,1.0),(0.0,0.0,0.0),(2.5,0.0,1.0),(4.5,0.0,3.0),(7.625,0.0,3.0),(10.25,0.0,0.375),(10.25,0.0,-4.375),(6.375,0.0,-8.0),(0.0,0.0,-8.0),(-5.5,0.0,-8.0),(-10.5,0.0,-2.875),(-10.5,0.0,0.25),(-7.625,0.0,3.0),(-4.5,0.0,3.0),(-2.5,0.0,1.0),(0.0,-0.0,0.0),(2.5,-0.05,1.0),(4.5,-0.1,3.0),(7.625,-0.15,3.0),(10.25,-0.15,0.375),(10.25,-0.15,-4.375),(6.375,-0.1,-8.0),(0.0,-0.0,-8.0),(-5.5,0.1,-8.0),(-10.5,0.15,-2.875),(-10.5,0.15,0.25),(-7.625,0.15,3.0),(-4.5,0.1,3.0),(-2.5,0.05,1.0),(0.0,0.0,0.0),(2.5,0.0,1.0),(4.5,0.0,3.0),(7.625,0.0,3.0),(10.25,0.0,0.375),(10.25,0.0,-4.375),(6.375,0.0,-8.0),(0.0,0.0,-8.0),(-5.5,0.0,-8.0),(-10.5,0.0,-2.875),(-10.5,0.0,0.25),(-7.625,0.0,3.0),(-4.5,0.0,3.0),(-2.5,0.0,1.0),(0.0,0.0,0.0),(2.5,0.05,1.0),(4.5,0.1,3.0),(7.625,0.15,3.0),(10.25,0.15,0.375),(10.25,0.15,-4.375),(6.375,0.1,-8.0),(0.0,0.0,-8.0),(-5.5,-0.1,-8.0),(-10.5,-0.15,-2.875),(-10.5,-0.15,0.25),(-7.625,-0.15,3.0),(-4.5,-0.1,3.0),(-2.5,-0.05,1.0)]),
    ROUTE(fromField='fraction_changed',fromNode='SURFACEClock',toField='set_fraction',toNode='SURFACEHeight'),
    ROUTE(fromField='value_changed',fromNode='SURFACEHeight',toField='set_point',toNode='SURFACE')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KelpTankWaterSurface.py")
